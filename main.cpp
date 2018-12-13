#include<conio.h>
#include<iostream>
#include<process.h>
#include<stdlib.h>

using namespace std;
struct node
{
   int NoPunggung;
   string Nama;
   string Posisi;
   struct node *next;
};

class queue
{
   struct node *frnt,*rear;
   public:
      queue()
      {
	 frnt=rear=NULL;
      }
      void insert();
      void del();
      void show();
};
void queue::insert()
{
   int value;
   string value1;
   string value2;
   struct node *ptr;
   cout<<"\nData Masuk\n";
   cout<<"No Punggung:";
   cin>>value;
   cout<<"Nama       :";
   cin>>value1;
   cout<<"Posisi     :";
   cin>>value2;
   ptr=new node;
   ptr->NoPunggung=value;
   ptr->Nama=value1;
   ptr->Posisi=value2;
   ptr->next=NULL;
   if(frnt==NULL)
      frnt=ptr;
   else
      rear->next=ptr;
   rear=ptr;
   cout<<"\Data Berhasil Dimasukan";
   cout<<endl;
   getch();
}

void queue::del()
{
   if(frnt==NULL)
   {
      cout<<"\nAntrian Masih Kosong";
      getch();
      return;
   }
   struct node *temp;
   temp=frnt;
   frnt=frnt->next;
   cout<<"\nOperasi Pengeluaran \nNilai Yang Dikeluarkan Adalah "<<temp->NoPunggung<<temp->Nama<<temp->Posisi;
   delete temp;
   getch();
}

void queue::show()
{
   struct node *ptr1=frnt;
   if(frnt==NULL)
   {
      cout<<"Antrian Kossong";
      getch();
      return;
   }
   cout<<"\nData Antrian Tersebut\n";
   while(ptr1!=NULL)
   {
      cout<<ptr1->NoPunggung<<" -->>";
      cout<<ptr1->Nama<<" -->>";
      cout<<ptr1->Posisi<<" ->>";
      ptr1=ptr1->next;
      cout<<endl;
   }
   cout<<"Selesai";
   getch();
}

int main()
{
   system("cls");
   queue q;
   int choice;
   while(1)
   {
      cout<<"\n-----------------------------------------------------------";
      cout<<"\n\t\tQUEUE USING LINKED LIST\n\n";
      cout<<"\n1.INSERTION";
      cout<<"\n2.DELETION";
      cout<<"\n3.DISPLAY QUEUE";
      cout<<"\n4.EXIT";
      cout<<"\nPILIHAN(1-4): ";
      cin>>choice;
      switch(choice)
      {
       case 1:
	  q.insert();
	  break;
       case 2:
	  q.del();
	  break;
       case 3:
	  q.show();
	  break;
       case 4:
	  exit(0);
	  break;
       default:
	  cout<<"Please enter correct choice(1-4)!!";
	  getch();
	  break;
       }
   }
   return 0;
}
