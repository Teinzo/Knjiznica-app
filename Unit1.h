//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------


class Korisnik{
private:
String ime;
String prezime;
String email;
String lozinka;
String uloga;

public:

       Korisnik(String ime, String prezime, String email, String lozinka, String uloga);

       //Getteri
       String getIme(){ return ime; }
       String getPrezime(){ return prezime; }
       String getEmail(){ return email; }
       String getUloga(){ return uloga; }

       //metode
       bool prijava(String uneseniEmail, String unesenaLozinka);
       void odjava();
};

class TLoginForm : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
    TLabel *TLabel;
    TEdit *Edit1;
    TEdit *Edit2;
    void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLoginForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLoginForm *LoginForm;
//---------------------------------------------------------------------------
#endif



