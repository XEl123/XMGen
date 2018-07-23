//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TEdit *Edit1;
        TLabel *Label1;
        TLabel *Label2;
        TEdit *Edit2;
        TButton *Button1;
        TLabel *Label3;
        TComboBox *ComboBox1;
        TButton *Button2;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TEdit *Edit3;
        TEdit *Edit4;
        TLabel *Label7;
        TEdit *Edit5;
        TButton *Button3;
        TButton *Button4;
        TButton *Button5;
        TButton *Button6;
        TButton *Button7;
        TLabel *Label9;
        TEdit *Edit6;
        TLabel *Label10;
        TEdit *Edit7;
        TButton *Button8;
        TLabel *Label8;
        TEdit *Edit8;
        TLabel *Label11;
        TEdit *Edit9;
        TButton *Button9;
        TMemo *Memo1;
        TEdit *Edit10;
        TLabel *Label12;
        TEdit *Edit11;
        TButton *Button10;
        TLabel *Label13;
        TEdit *Edit12;
        TButton *Button11;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
        void __fastcall Button10Click(TObject *Sender);
        void __fastcall Button11Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
