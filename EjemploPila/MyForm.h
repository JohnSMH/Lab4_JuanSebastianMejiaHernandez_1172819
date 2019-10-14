#pragma once
#include "Nodo.h"
#include "Carta.h"
#include "Pila.h"

namespace EjemploPila {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Button^  apilarBtn;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ richTextBoxsiete;
	private: System::Windows::Forms::RichTextBox^ richTextBoxseis;
	private: System::Windows::Forms::RichTextBox^ richTextBoxuno;
	private: System::Windows::Forms::RichTextBox^ richTextBoxdos;
	private: System::Windows::Forms::RichTextBox^ richTextBoxtres;
	private: System::Windows::Forms::RichTextBox^ richTextBoxcuatro;
	private: System::Windows::Forms::RichTextBox^ richTextBoxcinco;
	private: System::Windows::Forms::RichTextBox^ richTextBoxmazo;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::Label^ label7;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->apilarBtn = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBoxsiete = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBoxseis = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBoxuno = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBoxdos = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBoxtres = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBoxcuatro = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBoxcinco = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBoxmazo = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Numero del 1-26";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Color 0=negro 1=rojo";
			// 
			// apilarBtn
			// 
			this->apilarBtn->Location = System::Drawing::Point(12, 47);
			this->apilarBtn->Name = L"apilarBtn";
			this->apilarBtn->Size = System::Drawing::Size(75, 23);
			this->apilarBtn->TabIndex = 4;
			this->apilarBtn->Text = L"Apilar";
			this->apilarBtn->UseVisualStyleBackColor = true;
			this->apilarBtn->Click += gcnew System::EventHandler(this, &MyForm::apilarBtn_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 105);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(73, 189);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 76);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Jugar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(222, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(349, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"7                6                5                4                3            "
				L"    2                1    ";
			// 
			// richTextBoxsiete
			// 
			this->richTextBoxsiete->Location = System::Drawing::Point(204, 36);
			this->richTextBoxsiete->Name = L"richTextBoxsiete";
			this->richTextBoxsiete->Size = System::Drawing::Size(47, 179);
			this->richTextBoxsiete->TabIndex = 8;
			this->richTextBoxsiete->Text = L"";
			// 
			// richTextBoxseis
			// 
			this->richTextBoxseis->Location = System::Drawing::Point(257, 36);
			this->richTextBoxseis->Name = L"richTextBoxseis";
			this->richTextBoxseis->Size = System::Drawing::Size(47, 179);
			this->richTextBoxseis->TabIndex = 9;
			this->richTextBoxseis->Text = L"";
			// 
			// richTextBoxuno
			// 
			this->richTextBoxuno->Location = System::Drawing::Point(522, 36);
			this->richTextBoxuno->Name = L"richTextBoxuno";
			this->richTextBoxuno->Size = System::Drawing::Size(47, 179);
			this->richTextBoxuno->TabIndex = 10;
			this->richTextBoxuno->Text = L"";
			// 
			// richTextBoxdos
			// 
			this->richTextBoxdos->Location = System::Drawing::Point(469, 36);
			this->richTextBoxdos->Name = L"richTextBoxdos";
			this->richTextBoxdos->Size = System::Drawing::Size(47, 179);
			this->richTextBoxdos->TabIndex = 11;
			this->richTextBoxdos->Text = L"";
			// 
			// richTextBoxtres
			// 
			this->richTextBoxtres->Location = System::Drawing::Point(416, 36);
			this->richTextBoxtres->Name = L"richTextBoxtres";
			this->richTextBoxtres->Size = System::Drawing::Size(47, 179);
			this->richTextBoxtres->TabIndex = 12;
			this->richTextBoxtres->Text = L"";
			// 
			// richTextBoxcuatro
			// 
			this->richTextBoxcuatro->Location = System::Drawing::Point(363, 36);
			this->richTextBoxcuatro->Name = L"richTextBoxcuatro";
			this->richTextBoxcuatro->Size = System::Drawing::Size(47, 179);
			this->richTextBoxcuatro->TabIndex = 13;
			this->richTextBoxcuatro->Text = L"";
			// 
			// richTextBoxcinco
			// 
			this->richTextBoxcinco->Location = System::Drawing::Point(310, 36);
			this->richTextBoxcinco->Name = L"richTextBoxcinco";
			this->richTextBoxcinco->Size = System::Drawing::Size(47, 179);
			this->richTextBoxcinco->TabIndex = 14;
			this->richTextBoxcinco->Text = L"";
			// 
			// richTextBoxmazo
			// 
			this->richTextBoxmazo->Location = System::Drawing::Point(587, 36);
			this->richTextBoxmazo->Name = L"richTextBoxmazo";
			this->richTextBoxmazo->Size = System::Drawing::Size(100, 20);
			this->richTextBoxmazo->TabIndex = 15;
			this->richTextBoxmazo->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(614, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Mazo [8]";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(204, 271);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Mover";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(587, 62);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 23);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Mazo: Siguiente";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(201, 230);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"origen";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(269, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"destino";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(204, 246);
			this->maskedTextBox1->Mask = L"00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(47, 20);
			this->maskedTextBox1->TabIndex = 21;
			this->maskedTextBox1->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(272, 246);
			this->maskedTextBox2->Mask = L"00";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(47, 20);
			this->maskedTextBox2->TabIndex = 22;
			this->maskedTextBox2->ValidatingType = System::Int32::typeid;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(601, 114);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"label7";
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(710, 328);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->richTextBoxmazo);
			this->Controls->Add(this->richTextBoxcinco);
			this->Controls->Add(this->richTextBoxcuatro);
			this->Controls->Add(this->richTextBoxtres);
			this->Controls->Add(this->richTextBoxdos);
			this->Controls->Add(this->richTextBoxuno);
			this->Controls->Add(this->richTextBoxseis);
			this->Controls->Add(this->richTextBoxsiete);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->apilarBtn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Pila * pila = new Pila();
		Pila* pilaaux = new Pila();
		Pila* pila1 = new Pila();
		Pila* pila2 = new Pila();
		Pila* pila3 = new Pila();
		Pila* pila4 = new Pila();
		Pila* pila5 = new Pila();
		Pila* pila6 = new Pila();
		Pila* pila7 = new Pila();
		Pila* mazo = new Pila();
	private: System::Void apilarBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		Carta * nuevaCarta = new Carta();

		for (int i = 1; i < 27; i++) {
			nuevaCarta->Color = 0;
			nuevaCarta->Numero = i;
			pila->Apilar(*nuevaCarta);
			pilaaux->Apilar(*nuevaCarta);

			nuevaCarta->Color = 1;
			nuevaCarta->Numero = 26-i+1;
			pila->Apilar(*nuevaCarta);
			pilaaux->Apilar(*nuevaCarta);
		}

		
		for (int i = 0; i < 52; i++)
		{
			richTextBox1->Text += (""+pilaaux->ObtenerCima().Numero);
			richTextBox1->Text += (" " + pilaaux->ObtenerCima().Color);
			richTextBox1->Text += ("\n");
			pilaaux->Desapilar();
		}

		pilaaux = pila;

		//nuevaCarta->Color = System::Convert::ToInt16(ColorTbx->Text);
		//nuevaCarta->Numero = System::Convert::ToInt16(NumeroTbx->Text);
		//pila->Apilar(*nuevaCarta);
		//System::Windows::Forms::MessageBox::Show("El valor del head es: Carta de numero"+pila->ObtenerCima().Numero+" y color"+ pila->ObtenerCima().Color);
	}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Random^r = gcnew Random();
	int rannum;
	int carrep=0;
	r->Next(1,8);

	do
	{
		rannum=r->Next(1, 9);
		switch (rannum)
		{
		case 7:
			if (pila7->Numerodeelementos()<7)
			{
				pila7->Apilar(pilaaux->Desapilar());
				carrep++;
				richTextBoxsiete->Text += "" + pila7->ObtenerCima().Color + " " + pila7->ObtenerCima().Numero;
				richTextBoxsiete->Text += ("\n");
			} 
			break;
		case 6:
			if (pila6->Numerodeelementos() < 6)
			{
				pila6->Apilar(pilaaux->Desapilar());
				carrep++;
				richTextBoxseis->Text += "" + pila6->ObtenerCima().Color + " " + pila6->ObtenerCima().Numero;
				richTextBoxseis->Text += ("\n");
			}
			break;
		case 5:
			if (pila5->Numerodeelementos() < 5)
			{
				pila5->Apilar(pilaaux->Desapilar());
				carrep++;
				richTextBoxcinco->Text += "" + pila5->ObtenerCima().Color + " " + pila5->ObtenerCima().Numero;
				richTextBoxcinco->Text += ("\n");
			}
			break;
		case 4:
			if (pila4->Numerodeelementos() < 4)
			{
				pila4->Apilar(pilaaux->Desapilar());
				carrep++;
				richTextBoxcuatro->Text += "" + pila4->ObtenerCima().Color + " " + pila4->ObtenerCima().Numero;
				richTextBoxcuatro->Text += ("\n");
			}
			break;
		case 3:
			if (pila3->Numerodeelementos() < 3)
			{
				pila3->Apilar(pilaaux->Desapilar());
				carrep++;
				richTextBoxtres->Text += "" + pila3->ObtenerCima().Color + " " + pila3->ObtenerCima().Numero;
				richTextBoxtres->Text += ("\n");
			}
			break;
		case 2:
			if (pila2->Numerodeelementos() < 2)
			{
				pila2->Apilar(pilaaux->Desapilar());
				carrep++;
				richTextBoxdos->Text += "" + pila2->ObtenerCima().Color + " " + pila2->ObtenerCima().Numero;
				richTextBoxdos->Text += ("\n");
			}
			break;
		case 1:
			if (pila1->Numerodeelementos() < 1)
			{
				pila1->Apilar(pilaaux->Desapilar());
				carrep++;
				richTextBoxuno->Text += "" + pila1->ObtenerCima().Color + " " + pila1->ObtenerCima().Numero;
				richTextBoxuno->Text += ("\n");
			}
			break;
		case 8:
			if (mazo->Numerodeelementos() < 24)
			{
				mazo->Apilar(pilaaux->Desapilar());
				carrep++;
			}
			break;
		default:
			break;
		}
	} while (carrep != 52);

	//richTextBoxsiete->Text = "" + pila7->ObtenerCima().Color + " " + pila7->ObtenerCima().Numero;
	//richTextBoxseis->Text = "" + pila6->ObtenerCima().Color + " " + pila6->ObtenerCima().Numero;
	//richTextBoxcinco->Text = "" + pila5->ObtenerCima().Color + " " + pila5->ObtenerCima().Numero;
	//richTextBoxcuatro->Text = "" + pila4->ObtenerCima().Color + " " + pila4->ObtenerCima().Numero;
	//richTextBoxtres->Text = "" + pila3->ObtenerCima().Color + " " + pila3->ObtenerCima().Numero;
	//richTextBoxdos->Text = "" + pila2->ObtenerCima().Color + " " + pila2->ObtenerCima().Numero;
	//richTextBoxuno->Text = "" + pila1->ObtenerCima().Color + " " + pila1->ObtenerCima().Numero;

	richTextBoxmazo->Text = "" + mazo->ObtenerCima().Color + " " + mazo->ObtenerCima().Numero;
	pilaaux = new Pila();
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {

	int origen=System::Convert::ToInt32(maskedTextBox1->Text);
	int destino= System::Convert::ToInt32(maskedTextBox2->Text);

	switch (origen)
	{
	case 1:
		switch (destino)
		{
		
		case 2:
			if (pila1->ObtenerCima().Color!=pila2->ObtenerCima().Color && pila1->ObtenerCima().Numero<pila2->ObtenerCima().Numero)
			{
				pila2->Apilar(pila1->Desapilar());
			}
			break;
		case 3:
			if (pila1->ObtenerCima().Color != pila3->ObtenerCima().Color && pila1->ObtenerCima().Numero < pila3->ObtenerCima().Numero)
			{
				pila3->Apilar(pila1->Desapilar());
			}
			break;
		case 4:
			if (pila1->ObtenerCima().Color != pila4->ObtenerCima().Color && pila1->ObtenerCima().Numero < pila4->ObtenerCima().Numero)
			{
				pila4->Apilar(pila1->Desapilar());
			}
			break;
		case 5:
			if (pila1->ObtenerCima().Color != pila5->ObtenerCima().Color && pila1->ObtenerCima().Numero < pila5->ObtenerCima().Numero)
			{
				pila5->Apilar(pila1->Desapilar());
			}
			break;
		case 6:
			if (pila1->ObtenerCima().Color != pila6->ObtenerCima().Color && pila1->ObtenerCima().Numero < pila6->ObtenerCima().Numero)
			{
				pila6->Apilar(pila1->Desapilar());
			}
			break;
		case 7:
			if (pila1->ObtenerCima().Color != pila7->ObtenerCima().Color && pila1->ObtenerCima().Numero < pila7->ObtenerCima().Numero)
			{
				pila7->Apilar(pila1->Desapilar());
			}
			break;
		default:
			break;
		}
		break;
	case 2:
		switch (destino)
		{

		case 1:
			if (pila1->ObtenerCima().Color != pila2->ObtenerCima().Color && pila2->ObtenerCima().Numero < pila1->ObtenerCima().Numero)
			{
				pila1->Apilar(pila2->Desapilar());
			}
			break;
		case 3:
			if (pila3->ObtenerCima().Color != pila2->ObtenerCima().Color && pila3->ObtenerCima().Numero < pila2->ObtenerCima().Numero)
			{
				pila3->Apilar(pila2->Desapilar());
			}
			break;
		case 4:
			if (pila2->ObtenerCima().Color != pila4->ObtenerCima().Color && pila2->ObtenerCima().Numero < pila4->ObtenerCima().Numero)
			{
				pila4->Apilar(pila2->Desapilar());
			}
			break;
		case 5:
			if (pila2->ObtenerCima().Color != pila5->ObtenerCima().Color && pila2->ObtenerCima().Numero < pila5->ObtenerCima().Numero)
			{
				pila5->Apilar(pila2->Desapilar());
			}
			break;
		case 6:
			if (pila2->ObtenerCima().Color != pila6->ObtenerCima().Color && pila2->ObtenerCima().Numero < pila6->ObtenerCima().Numero)
			{
				pila6->Apilar(pila2->Desapilar());
			}
			break;
		case 7:
			if (pila2->ObtenerCima().Color != pila7->ObtenerCima().Color && pila2->ObtenerCima().Numero < pila7->ObtenerCima().Numero)
			{
				pila7->Apilar(pila2->Desapilar());
			}
			break;
		default:
			break;
		}
		break;

	case 3:
		switch (destino)
		{

		case 2:
			if (pila3->ObtenerCima().Color != pila2->ObtenerCima().Color && pila3->ObtenerCima().Numero < pila2->ObtenerCima().Numero)
			{
				pila2->Apilar(pila3->Desapilar());
			}
			break;
		case 1:
			if (pila1->ObtenerCima().Color != pila3->ObtenerCima().Color && pila1->ObtenerCima().Numero < pila3->ObtenerCima().Numero)
			{
				pila1->Apilar(pila3->Desapilar());
			}
			break;
		case 4:
			if (pila3->ObtenerCima().Color != pila4->ObtenerCima().Color && pila3->ObtenerCima().Numero < pila4->ObtenerCima().Numero)
			{
				pila4->Apilar(pila3->Desapilar());
			}break;

		case 5:
			if (pila3->ObtenerCima().Color != pila5->ObtenerCima().Color && pila3->ObtenerCima().Numero < pila5->ObtenerCima().Numero)
			{
				pila5->Apilar(pila3->Desapilar());
			}break;
		case 6:
			if (pila3->ObtenerCima().Color != pila6->ObtenerCima().Color && pila3->ObtenerCima().Numero < pila6->ObtenerCima().Numero)
			{
				pila6->Apilar(pila3->Desapilar());
			}break;
		case 7:
			if (pila3->ObtenerCima().Color != pila7->ObtenerCima().Color && pila3->ObtenerCima().Numero < pila7->ObtenerCima().Numero)
			{
				pila7->Apilar(pila3->Desapilar());
			}
			break;
		default:
			break;
		}
		break;

	case 4:
		switch (destino)
		{

		case 2:
			if (pila4->ObtenerCima().Color != pila2->ObtenerCima().Color && pila4->ObtenerCima().Numero < pila2->ObtenerCima().Numero)
			{
				pila2->Apilar(pila4->Desapilar());
			}
			break;
		case 3:
			if (pila4->ObtenerCima().Color != pila3->ObtenerCima().Color && pila4->ObtenerCima().Numero < pila3->ObtenerCima().Numero)
			{
				pila3->Apilar(pila4->Desapilar());
			}
			break;
		case 1:
			if (pila1->ObtenerCima().Color != pila4->ObtenerCima().Color && pila4->ObtenerCima().Numero < pila1->ObtenerCima().Numero)
			{
				pila1->Apilar(pila4->Desapilar());
			}break;

		case 5:
			if (pila4->ObtenerCima().Color != pila5->ObtenerCima().Color && pila4->ObtenerCima().Numero < pila5->ObtenerCima().Numero)
			{
				pila5->Apilar(pila4->Desapilar());
			}break;
		case 6:
			if (pila4->ObtenerCima().Color != pila6->ObtenerCima().Color && pila4->ObtenerCima().Numero < pila6->ObtenerCima().Numero)
			{
				pila6->Apilar(pila4->Desapilar());
			}break;
		case 7:
			if (pila4->ObtenerCima().Color != pila7->ObtenerCima().Color && pila4->ObtenerCima().Numero < pila7->ObtenerCima().Numero)
			{
				pila7->Apilar(pila4->Desapilar());
			}
			break;
		default:
			break;
		}
		break;
	case 5:
		switch (destino)
		{

		case 2:
			if (pila5->ObtenerCima().Color != pila2->ObtenerCima().Color && pila5->ObtenerCima().Numero < pila2->ObtenerCima().Numero)
			{
				pila2->Apilar(pila5->Desapilar());
			}
			break;
		case 1:
			if (pila1->ObtenerCima().Color != pila5->ObtenerCima().Color && pila1->ObtenerCima().Numero < pila5->ObtenerCima().Numero)
			{
				pila1->Apilar(pila5->Desapilar());
			}
			break;
		case 4:
			if (pila5->ObtenerCima().Color != pila4->ObtenerCima().Color && pila5->ObtenerCima().Numero < pila4->ObtenerCima().Numero)
			{
				pila4->Apilar(pila5->Desapilar());
			}break;

		case 3:
			if (pila3->ObtenerCima().Color != pila5->ObtenerCima().Color && pila3->ObtenerCima().Numero < pila5->ObtenerCima().Numero)
			{
				pila3->Apilar(pila5->Desapilar());
			}break;
		case 6:
			if (pila5->ObtenerCima().Color != pila6->ObtenerCima().Color && pila5->ObtenerCima().Numero < pila6->ObtenerCima().Numero)
			{
				pila6->Apilar(pila5->Desapilar());
			}break;
		case 7:
			if (pila5->ObtenerCima().Color != pila7->ObtenerCima().Color && pila5->ObtenerCima().Numero < pila7->ObtenerCima().Numero)
			{
				pila7->Apilar(pila5->Desapilar());
			}
			break;
		default:
			break;
		}
		break;
	case 6:
		switch (destino)
		{

		case 2:
			if (pila6->ObtenerCima().Color != pila2->ObtenerCima().Color && pila6->ObtenerCima().Numero < pila2->ObtenerCima().Numero)
			{
				pila6->Apilar(pila3->Desapilar());
			}
			break;
		case 1:
			if (pila6->ObtenerCima().Color != pila1->ObtenerCima().Color && pila6->ObtenerCima().Numero < pila1->ObtenerCima().Numero)
			{
				pila1->Apilar(pila6->Desapilar());
			}
			break;
		case 4:
			if (pila6->ObtenerCima().Color != pila4->ObtenerCima().Color && pila6->ObtenerCima().Numero < pila4->ObtenerCima().Numero)
			{
				pila4->Apilar(pila6->Desapilar());
			}break;

		case 5:
			if (pila6->ObtenerCima().Color != pila5->ObtenerCima().Color && pila6->ObtenerCima().Numero < pila5->ObtenerCima().Numero)
			{
				pila5->Apilar(pila6->Desapilar());
			}break;
		case 3:
			if (pila3->ObtenerCima().Color != pila6->ObtenerCima().Color && pila3->ObtenerCima().Numero < pila6->ObtenerCima().Numero)
			{
				pila3->Apilar(pila6->Desapilar());
			}break;
		case 7:
			if (pila6->ObtenerCima().Color != pila7->ObtenerCima().Color && pila6->ObtenerCima().Numero < pila7->ObtenerCima().Numero)
			{
				pila7->Apilar(pila6->Desapilar());
			}
			break;
		default:
			break;
		}
		break;
	case 7:
		switch (destino)
		{

		case 2:
			if (pila7->ObtenerCima().Color != pila2->ObtenerCima().Color && pila7->ObtenerCima().Numero < pila2->ObtenerCima().Numero)
			{
				pila2->Apilar(pila7->Desapilar());
			}
			break;
		case 1:
			if (pila1->ObtenerCima().Color != pila7->ObtenerCima().Color && pila7->ObtenerCima().Numero < pila1->ObtenerCima().Numero)
			{
				pila1->Apilar(pila7->Desapilar());
			}
			break;
		case 4:
			if (pila7->ObtenerCima().Color != pila4->ObtenerCima().Color && pila7->ObtenerCima().Numero < pila4->ObtenerCima().Numero)
			{
				pila4->Apilar(pila7->Desapilar());
			}break;

		case 5:
			if (pila7->ObtenerCima().Color != pila5->ObtenerCima().Color && pila7->ObtenerCima().Numero < pila5->ObtenerCima().Numero)
			{
				pila5->Apilar(pila7->Desapilar());
			}break;
		case 6:
			if (pila7->ObtenerCima().Color != pila6->ObtenerCima().Color && pila7->ObtenerCima().Numero < pila6->ObtenerCima().Numero)
			{
				pila6->Apilar(pila7->Desapilar());
			}break;
		case 3:
			if (pila3->ObtenerCima().Color != pila7->ObtenerCima().Color && pila7->ObtenerCima().Numero < pila3->ObtenerCima().Numero)
			{
				pila3->Apilar(pila7->Desapilar());
			}
			break;
		default:
			break;
		}
		break;
	case 8:
		switch (destino)
		{

		case 2:
			if (mazo->ObtenerCima().Color != pila2->ObtenerCima().Color && mazo->ObtenerCima().Numero < pila2->ObtenerCima().Numero)
			{
				pila2->Apilar(mazo->Desapilar());
			}
			break;
		case 1:
			if (pila1->ObtenerCima().Color != mazo->ObtenerCima().Color && pila1->ObtenerCima().Numero < mazo->ObtenerCima().Numero)
			{
				pila1->Apilar(mazo->Desapilar());
			}
			break;
		case 4:
			if (mazo->ObtenerCima().Color != pila4->ObtenerCima().Color && mazo->ObtenerCima().Numero < pila4->ObtenerCima().Numero)
			{
				pila4->Apilar(mazo->Desapilar());
			}break;

		case 5:
			if (mazo->ObtenerCima().Color != pila5->ObtenerCima().Color && mazo->ObtenerCima().Numero < pila5->ObtenerCima().Numero)
			{
				pila5->Apilar(mazo->Desapilar());
			}break;
		case 6:
			if (mazo->ObtenerCima().Color != pila6->ObtenerCima().Color && mazo->ObtenerCima().Numero < pila6->ObtenerCima().Numero)
			{
				pila6->Apilar(mazo->Desapilar());
			}break;
		case 7:
			if (mazo->ObtenerCima().Color != pila7->ObtenerCima().Color && mazo->ObtenerCima().Numero < pila7->ObtenerCima().Numero)
			{
				pila7->Apilar(mazo->Desapilar());
			}
			break;
		case 3:
			if (mazo->ObtenerCima().Color != pila3->ObtenerCima().Color && mazo->ObtenerCima().Numero < pila3->ObtenerCima().Numero)
			{
				pila3->Apilar(mazo->Desapilar());
			}
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}


}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	pilaaux->Apilar(mazo->Desapilar());
	label7->Text = ""+mazo->Numerodeelementos();
	if (mazo->Numerodeelementos()==0)
	{
		for (int i = 0; i < 25; i++)
		{
			mazo->Apilar(pilaaux->Desapilar());
		}
	}
	richTextBoxmazo->Text= "" + mazo->ObtenerCima().Color + " " + mazo->ObtenerCima().Numero;

}
};
}
