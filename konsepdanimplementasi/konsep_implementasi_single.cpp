#include <iostream>
using namespace std;
 struct Buku
    {
        string judul, pengarang;
        int tahunTerbit;
        Buku *next;
    };
Buku *head, *tail, *cur, *newNode, *del;

void addFirst(string judul, string pengarang, int tB){
    newNode = new Buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunTerbit= tB;
    newNode->next = head;
    head = newNode;

}
void addFirst(string judul, string pengarang, int tB){
    newNode = new Buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunTerbit= tB;
    newNode->next = NULL;
    tail = newNode;
}
void changeFirst(string judul, string pengarang, int tB){
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunTerbit = tB;
}
void changeLast(string judul, string pengarang, int tB){
    tail->judul = judul;
    tail->pengarang = pengarang;
    tail->tahunTerbit = tB;
}

void removeFirst(){
    del = head;
    head = head->next;
    delete del;

}

void removeLast(){
    del = tail;
    cur = head;
    while ( cur->next != tail)
    {
        cur = cur->next;
    }
    tail = cur;
    tail->next = NULL;
    delete del;
    
}

void createSingleLinkedList(string judul, string pengarang, int tB){
    head = new Buku();
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunTerbit= tB;
    head->next= NULL;
    tail = head;
}
void printSingleLinkedList(){
    cur = head;
    while (cur != NULL)
    {
        cout<<"Judul Buku: "<< cur->judul<<endl;
        cout<<"Pengarang Buku: "<< cur->pengarang<<endl;
        cout<<"Tahun Terbit: "<< cur->tahunTerbit<<endl;
        cur=cur->next;
    }
    
}

int main(){
    createSingleLinkedList("Kata", "Geez & Aan", 2011);

    printSingleLinkedList();   

    cout<<"\n\n"<<endl;

    addFirst("Dia Adalah Kakakku", "Tere Liye", 2000);
    
    printSingleLinkedList();

    cout << "\n\n" << endl;

    addLast("Aroma karsa", "dee lestar", 2020);

    printSingleLinkedList();

    cout << "\n\n" << endl;

    removeFirst();
    
    printSingleLinkedList();

    cout << "\n\n" << endl;

    addLast("11.11", "fiesta", "2000");

    printSingleLinkedList();

    cout << "\n\n" << endl;

    removeLast();

    printSingleLinkedList();

    cout << "\n\n" << endl;

    changeFirst("bdwbqdwhdwu", "sta", "2009");

    printSingleLinkedList();

    cout << "\n\n" << endl;
}