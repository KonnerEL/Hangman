#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include <string.h>

namespace Hangman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	int intentosfaltantes = 5;
	int con = 0;

	/// <summary>
	/// Resumen de Hangman
	/// </summary>
	public ref class Hangman : public System::Windows::Forms::Form
	{
		public: String^ palabra_seleccionada;
	    public: String^ letra;
		public: array<String^ > ^palabras;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;

	private: System::Windows::Forms::GroupBox^  groupBox1;


	public: 
	private: System::Windows::Forms::Label^  label4;

	public:
		Hangman(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Hangman()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Hangman::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Chiller", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(397, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(269, 74);
			this->label1->TabIndex = 0;
			this->label1->Text = L"El Ahorcado";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(410, 190);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(277, 132);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Iniciar!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Hangman::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(6, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Digite una Letra: ";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(9, 32);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(50, 37);
			this->textBox1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(65, 36);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Verificar!";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Hangman::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(900, 538);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 52);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Reiniciar!";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Hangman::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(86, 434);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Letras Usadas: ";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(85, 482);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(223, 25);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Intentos Restantes: ";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(256, 338);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 44);
			this->label5->TabIndex = 8;
			this->label5->Text = L"-------";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(526, 95);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(498, 440);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(922, 508);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 10);
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(526, 95);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(498, 440);
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(526, 96);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(498, 440);
			this->pictureBox4->TabIndex = 12;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(526, 95);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(498, 440);
			this->pictureBox5->TabIndex = 13;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(526, 95);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(498, 440);
			this->pictureBox6->TabIndex = 13;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::White;
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(526, 96);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(498, 440);
			this->pictureBox7->TabIndex = 14;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(90, 155);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(202, 102);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Visible = false;
			// 
			// Hangman
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1040, 599);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Name = L"Hangman";
			this->Text = L"Hangman";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //label2->Visible = true;
				 label3->Visible = true;
				 label4->Visible = true;
				 label5->Visible = true;
				 label5->Text = "";
				 button1->Visible = false;
				 //button2->Visible = true;
				 button3->Visible = true;
				 button3->Enabled = false;
				 //textBox1->Visible = true;
				 pictureBox1->Visible = true;
				 pictureBox2->Visible = true;
				 groupBox1->Visible = true;

				 intentosfaltantes = 5;
				 array<String^ >^ palabras = { "murcielago", "jaula", "banana", "peligro", "peinilla", "abanico", "campamento", "cafeteria", "hormigas", "bodegas", "campana", "escudriñar", "enseñar", "cadena", "caracteres" };
				 int xRan;
				 srand(time(0));
				 xRan = rand() % 14 + 1;

			  	 palabra_seleccionada = palabras[xRan];

				 label4->Text = label4->Text + intentosfaltantes;
				 
				 int lon = palabra_seleccionada->Length;

				 label5->Text = "" + poner_guiones (0, "", lon);

				 /*for (int i = 0; i < palabra_seleccionada->Length; i++) {
					 label5->Text = label5->Text + "_ ";
				 }*/
			 }

			 String^ poner_guiones (int i, String^ guiones, int lon)  { 
				if (i < lon) {
					guiones = guiones + "-";
					return poner_guiones (i + 1, guiones, lon);
				}
				else {
					return guiones;
				}
			}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {							
				 int lon = palabra_seleccionada->Length;
				 //array<String^>^lets = gcnew array<String^>(25);
				 String^ letra = textBox1->Text->ToLowerInvariant();
				 String^ lets = label5->Text;
				 bool sw, sw2 = false; 

				 textBox1->Text = ""; 

				 if (intentosfaltantes <= 5) {
					if ((letra->Length) > 1) {
						MessageBox::Show("Usted solo puede digitar una Letra");
						textBox1->Focus();
					}else {
						if ((letra->Length) == 0) {
						MessageBox::Show("Por favor digite una Letra");
						textBox1->Focus();
						}
						else {
							if (Char::IsNumber(Convert::ToChar(letra))) MessageBox::Show("Usted no puede digitar Numeros");		
							else if (Char::IsSymbol(Convert::ToChar(letra))) MessageBox::Show("Caracter Invalido, por favor digite un Caracter Valido");
							else if (Char::IsPunctuation(Convert::ToChar(letra))) MessageBox::Show("Caracter Invalido, por favor digite un Caracter Valido");
							else {
								label3->Text = label3->Text + letra + " ";

								for (int i = 0; i < palabra_seleccionada->Length; i++) {
									if (palabra_seleccionada->Substring(i, 1)->ToLowerInvariant()->Equals(letra)) {
										sw = true;
										con++;

										eliminar_guiones (palabra_seleccionada, letra, lon);
									}
								}

								if (sw == false) {
									intentosfaltantes -= 1;
									label4->Text = "Intentos Restantes: " + intentosfaltantes;
									switch (intentosfaltantes) {
										case 4:
											pictureBox7->Visible = true;
											pictureBox6->Visible = false;
											pictureBox5->Visible = false;
											pictureBox4->Visible = false;
											pictureBox3->Visible = false;
											pictureBox2->Visible = true;
											pictureBox1->Visible = false;
										break;
										case 3:
											pictureBox4->Visible = true;
											pictureBox7->Visible = false;
											pictureBox6->Visible = false;
											pictureBox5->Visible = false;
											pictureBox3->Visible = false;
											pictureBox2->Visible = true;
											pictureBox1->Visible = false;
										break;
										case 2:
											pictureBox6->Visible = true;
											pictureBox7->Visible = false;
											pictureBox5->Visible = false;
											pictureBox4->Visible = false;
											pictureBox3->Visible = false;
											pictureBox2->Visible = true;
											pictureBox1->Visible = false;
										break;
										case 1:
											pictureBox5->Visible = true;
											pictureBox7->Visible = false;
											pictureBox6->Visible = false;
											pictureBox4->Visible = false;
											pictureBox3->Visible = false;
											pictureBox2->Visible = true;
											pictureBox1->Visible = false;
										break;
										default:
											pictureBox3->Visible = true;
											pictureBox7->Visible = false;
											pictureBox6->Visible = false;
											pictureBox5->Visible = false;
											pictureBox4->Visible = false;
											pictureBox2->Visible = true;
											pictureBox1->Visible = false;
										break;
										    //pictureBox2->Visible = true;
									}
								}

								if (intentosfaltantes == 0) {
									MessageBox::Show("You Are DEAD!. La Palabra era " + palabra_seleccionada);
									button3->Enabled = true;
								}

								if (con == lon) {
									MessageBox::Show("ENHORABUENA, has GANADO!");
									button3->Enabled = true;
								}
							  }
							}	
						}
					 }
				}

				void eliminar_guiones (String^ palabra_seleccionada, String^ letra, int lon) {
					int pos = 0;
					String^ lets = label5->Text;
					String^ nuevlet = letra;
					
					for (int j = 0; j < lon; j++) {
						int index = palabra_seleccionada->IndexOf(nuevlet, pos, lon - pos);
						if (index != -1) {
							//String^ substr = palabra_seleccionada->Substring(index, 1);
							pos = index + 1;
							lets = lets->Remove(index, 1);
							lets = lets->Insert(index, nuevlet);
						}
						label5->Text = lets;
					}
				}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox7->Visible = false;
			 pictureBox6->Visible = false;
			 pictureBox5->Visible = false;
			 pictureBox4->Visible = false;	
			 pictureBox3->Visible = false;

			 button1_Click(sender, e);

			 label4->Text = "Intentos Restantes: " + intentosfaltantes;
			 label3->Text = "Letras Usadas: ";

			 con = 0;
		 }
		
};
}
