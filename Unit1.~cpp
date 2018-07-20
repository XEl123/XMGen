//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int rnd = 0;
int cl = 0;
int n = 0;
int uo = 1;
int gui = 0;
int rnd2 = 0;
int rnd3 = 0;
int cpy = 0;
int yx = 0;
int kol228;
char bgo[100] = {'E','Y','U','I','O','A'};
char bpr[100] = {'Q','W','R','T','P','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};
char go[100] = {'e','y','u','i','o','a'};
char pr[100] = {'q','w','r','t','p','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
char tg[100] = {'~','`','!','@','#','$','%','^','&','*','(',')','-','_','+','=','{','}','[',']','|',':','<','>','?','*','q','Q','w','W','e','E','r','R','t','T','y','Y','u','U','i','I','o','O','p','P','a','A','s','S','d','D','f','F','g','G','h','H','j','J','k','K','l','L','z','Z','x','X','c','C','v','V','b','B','n','N','m','M','0','1','2','3','4','5','6','7','8','9'};
char num[10] = {'0','1','2','3','4','5','6','7','8','9'};
char ch[100] = {'~','`','!','@','#','$','%','^','&','*','(',')','-','_','+','=','{','}','[',']','|',':','<','>','?','*','q','Q','w','W','e','E','r','R','t','T','y','Y','u','U','i','I','o','O','p','P','a','A','s','S','d','D','f','F','g','G','h','H','j','J','k','K','l','L','z','Z','x','X','c','C','v','V','b','B','n','N','m','M'};
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
ComboBox1->Items->Add("Only numbers");
ComboBox1->Items->Add("Only characters");
ComboBox1->Items->Add("Together");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
Edit1->Clear();
Edit2->Clear();
ComboBox1->Text = "";
Edit3->Clear();
Edit4->Clear();
Edit5->Clear();
Edit6->Clear();
Edit7->Clear();
Edit8->Clear();
Edit9->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Edit2->Text = "";
srand(time(0));
 if (ComboBox1->Text == "Only numbers"){
     cl = StrToInt(Edit1->Text);
     while ( cl != 0){
        rnd = rand()%10;
        Edit2->Text = Edit2->Text + num[rnd];
        cl--;
     }
 }
 else if (ComboBox1->Text == "Only characters"){
     cl = StrToInt(Edit1->Text);
     while ( cl != 0){
        rnd = rand()%76;
        Edit2->Text = Edit2->Text + ch[rnd];
        cl--;
     }
 }
 else if (ComboBox1->Text == "Together"){
     cl = StrToInt(Edit1->Text);
     while ( cl != 0){
        rnd = rand()%86;
        Edit2->Text = Edit2->Text + tg[rnd];
        cl--;
     }
 }
 cl = 0;
 rnd = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
 Label1->Visible = false;
 Label2->Visible = false;
 Edit1->Visible = false;
 Edit2->Visible = false;
 ComboBox1->Visible = false;
 Label3->Visible = false;
 Button1->Visible = false;
 Label6->Visible = true;
 Label5->Visible = true;
 Label7->Visible = true;
 Button5->Visible = true;
 Edit3->Visible = true;
 Edit4->Visible = true;
 Edit5->Visible = true;
 Label9->Visible = false;
 Button7->Visible = false;
 Edit6->Visible = false;
 Edit7->Visible = false;
 Label10->Visible = false;
   Button9->Visible = false;
 Edit8->Visible = false;
 Edit9->Visible = false;
 Label11->Visible = false;
 Label8->Visible = false;
   Edit11->Visible = false;
 Label12->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
  Label1->Visible = true;
 Label2->Visible = true;
 Edit1->Visible = true;
 Edit2->Visible = true;
 ComboBox1->Visible = true;
 Label3->Visible = true;
 Button1->Visible = true;
 Label6->Visible = false;
 Label5->Visible = false;
 Button5->Visible = false;
 Edit3->Visible = false;
 Edit4->Visible = false;
 Edit5->Visible = false;
 Label7->Visible = false;
 Label9->Visible = false;
 Button7->Visible = false;
 Edit6->Visible = false;
 Edit7->Visible = false;
 Label10->Visible = false;
   Button9->Visible = false;
 Edit8->Visible = false;
 Edit9->Visible = false;
 Label11->Visible = false;
 Label8->Visible = false;
   Edit11->Visible = false;
 Label12->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
srand(time(0));
  Edit5->Clear();
  int y = StrToInt(Edit4->Text) - StrToInt(Edit3->Text);
  Edit5->Text = StrToInt(Edit3->Text) + rand()%y;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
   Label1->Visible = false;
 Label2->Visible = false;
 Edit1->Visible = false;
 Edit2->Visible = false;
 ComboBox1->Visible = false;
 Label3->Visible = false;
 Button1->Visible = false;
 Label6->Visible = false;
 Label5->Visible = false;
 Button5->Visible = false;
 Edit3->Visible = false;
 Edit4->Visible = false;
 Edit5->Visible = false;
 Label7->Visible = false;
 Label9->Visible = true;
 Button7->Visible = true;
 Edit6->Visible = true;
 Edit7->Visible = true;
 Label10->Visible = true;
  Button9->Visible = false;
 Edit8->Visible = false;
 Edit9->Visible = false;
 Label11->Visible = false;
 Label8->Visible = false;
  Edit11->Visible = false;
 Label12->Visible = false;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button7Click(TObject *Sender)
{
Edit7->Clear();
srand(time(0));
rnd2 = rand()%1;
if (rnd2 == 0 ){
  Edit7->Text = Edit7->Text + bgo[rand() % 5];
    while (uo != StrToInt(Edit6->Text)){
    if (gui == 0 ){
     gui = 1;
    }
    else{
     gui = 0;
    }
    if ( gui == 1 ){
        Edit7->Text = Edit7->Text + pr[rand() % 19];
    }
    else{
      Edit7->Text = Edit7->Text + go[rand() % 5];
    }
        uo++;
    }
}
else{
  Edit7->Text = Edit7->Text + bpr[rand() % 19];
    while (uo != StrToInt(Edit6->Text)){
    if (gui == 0 ){
     gui = 1;
    }
    else{
     gui = 0;
    }
    if ( gui == 1 ){
        Edit7->Text = Edit7->Text + go[rand() % 5];
    }
    else{
      Edit7->Text = Edit7->Text + pr[rand() % 19];
    }
        uo++;
    }
}
uo = 1;
gui = 0;
rnd2 = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
 Label1->Visible = false;
 Label2->Visible = false;
 Edit1->Visible = false;
 Edit2->Visible = false;
 ComboBox1->Visible = true;
 Label3->Visible = true;
 Button1->Visible = false;
 Label6->Visible = false;
 Label5->Visible = false;
 Button5->Visible = false;
 Edit3->Visible = false;
 Edit4->Visible = false;
 Edit5->Visible = false;
 Label7->Visible = false;
 Label9->Visible = false;
 Button7->Visible = false;
 Edit6->Visible = false;
 Edit7->Visible = false;
 Label10->Visible = false;
 Button9->Visible = true;
 Edit8->Visible = true;
 Edit9->Visible = true;
 Label11->Visible = true;
 Label8->Visible = true;
 Edit11->Visible = true;
 Label12->Visible = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button9Click(TObject *Sender)
{
srand(time(0));
rnd3 = StrToInt(Edit11->Text);
cpy = rnd3;
yx = StrToInt(Edit8->Text);
while ( yx != 1){
rnd3 = cpy;
Edit10->Text = "";
 if (ComboBox1->Text == "Only numbers"){
     while ( rnd3 != 0){
        rnd = rand()%10;
        Edit10->Text = Edit10->Text + num[rnd];
        rnd3--;
     }
 }
 else if (ComboBox1->Text == "Only characters"){
     while ( rnd3 != 0){
        rnd = rand()%76;
        Edit10->Text = Edit10->Text + ch[rnd];
        rnd3--;
     }
 }
 else if (ComboBox1->Text == "Together"){
     while ( rnd3 != 0){
        rnd = rand()%86;
        Edit10->Text = Edit10->Text + tg[rnd];
        rnd3--;
     }
 }
 Memo1->Text = Memo1->Text + Edit10->Text+"\r\n";
  yx--;
 }
 AnsiString asc = Edit9->Text + ".txt";
 Memo1->Lines->SaveToFile(asc.c_str());
 MessageBox(NULL,"End of operation","Result",MB_OK);
 cl = 0;
 rnd = 0;
 cpy = 0;
 rnd3 = 0;
 yx = 0;
}
//---------------------------------------------------------------------------

