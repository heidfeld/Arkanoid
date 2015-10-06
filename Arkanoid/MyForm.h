#pragma once

namespace Arkanoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  ball;
	protected: 
	private: System::Windows::Forms::Timer^  timer_ball;
	private: System::ComponentModel::IContainer^  components;

	private:
		static int x=-8,y=-8;
		static int wsp_x, wsp_y;
		static int win=19;

	private: System::Windows::Forms::Label^  game_status;
	private: System::Windows::Forms::Timer^  timer_left;
	private: System::Windows::Forms::Timer^  timer_right;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  paddle;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary> 
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->ball = (gcnew System::Windows::Forms::PictureBox());
			this->timer_ball = (gcnew System::Windows::Forms::Timer(this->components));
			this->paddle = (gcnew System::Windows::Forms::PictureBox());
			this->game_status = (gcnew System::Windows::Forms::Label());
			this->timer_left = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_right = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ball))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->paddle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->BeginInit();
			this->SuspendLayout();
			// 
			// ball
			// 
			this->ball->BackColor = System::Drawing::Color::Transparent;
			this->ball->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ball->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->ball->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ball.Image")));
			this->ball->Location = System::Drawing::Point(256, 317);
			this->ball->Name = L"ball";
			this->ball->Size = System::Drawing::Size(30, 30);
			this->ball->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->ball->TabIndex = 0;
			this->ball->TabStop = false;
			// 
			// timer_ball
			// 
			this->timer_ball->Enabled = true;
			this->timer_ball->Interval = 15;
			this->timer_ball->Tick += gcnew System::EventHandler(this, &MyForm::timer_ball_Tick);
			// 
			// paddle
			// 
			this->paddle->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"paddle.Image")));
			this->paddle->Location = System::Drawing::Point(336, 438);
			this->paddle->Name = L"paddle";
			this->paddle->Size = System::Drawing::Size(90, 24);
			this->paddle->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->paddle->TabIndex = 1;
			this->paddle->TabStop = false;
			// 
			// game_status
			// 
			this->game_status->AutoSize = true;
			this->game_status->Font = (gcnew System::Drawing::Font(L"Nightclub BTN", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->game_status->ForeColor = System::Drawing::Color::Red;
			this->game_status->Location = System::Drawing::Point(235, 150);
			this->game_status->Name = L"game_status";
			this->game_status->Size = System::Drawing::Size(287, 71);
			this->game_status->TabIndex = 2;
			this->game_status->Text = L"YOU LOSE !";
			this->game_status->Visible = false;
			// 
			// timer_left
			// 
			this->timer_left->Interval = 20;
			this->timer_left->Tick += gcnew System::EventHandler(this, &MyForm::timer_left_Tick);
			// 
			// timer_right
			// 
			this->timer_right->Interval = 20;
			this->timer_right->Tick += gcnew System::EventHandler(this, &MyForm::timer_right_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(237, 15);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(40, 40);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(283, 15);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(40, 40);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(329, 15);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(40, 40);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(375, 15);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(40, 40);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(421, 15);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(40, 40);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 7;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(467, 15);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(40, 40);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 8;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(258, 61);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(40, 40);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 9;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(304, 61);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(40, 40);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 10;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(350, 61);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(40, 40);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox9->TabIndex = 11;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(396, 61);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(40, 40);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox10->TabIndex = 12;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(442, 61);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(40, 40);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox11->TabIndex = 13;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(283, 107);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(40, 40);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox12->TabIndex = 14;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(329, 107);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(40, 40);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox13->TabIndex = 15;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(375, 107);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(40, 40);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox14->TabIndex = 16;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(421, 107);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(40, 40);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox15->TabIndex = 17;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(304, 153);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(40, 40);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox16->TabIndex = 18;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(350, 153);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(40, 40);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox17->TabIndex = 19;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(396, 153);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(40, 40);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox18->TabIndex = 20;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(350, 199);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(40, 40);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox19->TabIndex = 21;
			this->pictureBox19->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(283, 224);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 34);
			this->button1->TabIndex = 22;
			this->button1->Text = L"RESTART";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(752, 474);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->game_status);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->paddle);
			this->Controls->Add(this->ball);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ball))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->paddle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	bool kolizja(PictureBox^ pilka, PictureBox^ cegla){
			if (pilka->Left >= cegla->Left-pilka->Width && 
				pilka->Left <= cegla->Left+cegla->Width &&
				pilka->Top >= cegla->Top-pilka->Height &&
				pilka->Top <= cegla->Top+cegla->Height){
					return true;
			}
			else {return false;}
		}
			
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void timer_ball_Tick(System::Object^  sender, System::EventArgs^  e) {
				 Point wsp = this->ball->Location;
				 Point wsp_pad = this->paddle->Location;
				 wsp_x = wsp.X + x;
				 wsp_y = wsp.Y + y;
				 this->ball->Location = System::Drawing::Point(wsp_x, wsp_y);
				 // ball pickup
				 if (wsp_x<=0) x=-x;
				 if (wsp_y<=0) y=-y;
				 if (wsp_x>=MyForm::Width-35) x=-x;

				 //you lose
				 if (wsp_y>wsp_pad.Y+10){
					 this->game_status->Text="YOU LOSE !";
					 this->game_status->Visible = true;
					 this->timer_ball->Enabled = false;
					 this->ball->Visible = false;
					 this->button1->Visible = true;
					 this->timer_left->Enabled=false;
					 this->timer_right->Enabled=false;
				 }
				  // ball in paddle
				 else if (wsp_y>=wsp_pad.Y-30 && wsp_x>=wsp_pad.X-10 && wsp_x<=wsp_pad.X+this->paddle->Width+10){
					 if (y>0) y=-y;
				 }
				 if (win <= 0){
					 this->game_status->Text="YOU WIN !";
					 this->game_status->Visible = true;
					 this->timer_ball->Enabled = false;
					 this->ball->Visible = false;
					 this->button1->Visible = true;
					 this->timer_left->Enabled=false;
					 this->timer_right->Enabled=false;
				 }

				 // brick1
				 if (kolizja(ball, pictureBox1) && this->pictureBox1->Visible==true){
					 x=-x; y=-y; this->pictureBox1->Visible=false; win--;}
				 // brick2
				 if (kolizja(ball, pictureBox2) && this->pictureBox2->Visible==true){
					 x=-x; y=-y; this->pictureBox2->Visible=false; win--;}
				 // brick3
				 if (kolizja(ball, pictureBox3) && this->pictureBox3->Visible==true){
					 x=-x; y=-y; this->pictureBox3->Visible=false; win--;}
				 // brick4
				 if (kolizja(ball, pictureBox4) && this->pictureBox4->Visible==true){
					 x=-x; y=-y; this->pictureBox4->Visible=false; win--;}
				 // brick5
				 if (kolizja(ball, pictureBox5) && this->pictureBox5->Visible==true){
					 x=-x; y=-y; this->pictureBox5->Visible=false; win--;}
				 // brick6
				 if (kolizja(ball, pictureBox6) && this->pictureBox6->Visible==true){
					 x=-x; y=-y; this->pictureBox6->Visible=false; win--;}
				 // brick7
				 if (kolizja(ball, pictureBox7) && this->pictureBox7->Visible==true){
					 x=-x; y=-y; this->pictureBox7->Visible=false; win--;}
				 // brick8
				 if (kolizja(ball, pictureBox8) && this->pictureBox8->Visible==true){
					 x=-x; y=-y; this->pictureBox8->Visible=false; win--;}
				 // brick9
				 if (kolizja(ball, pictureBox9) && this->pictureBox9->Visible==true){
					 x=-x; y=-y; this->pictureBox9->Visible=false; win--;}
				 // brick10
				 if (kolizja(ball, pictureBox10) && this->pictureBox10->Visible==true){
					 x=-x; y=-y; this->pictureBox10->Visible=false; win--;}
				 // brick11
				 if (kolizja(ball, pictureBox11) && this->pictureBox11->Visible==true){
					 x=-x; y=-y; this->pictureBox11->Visible=false; win--;}
				 // brick12
				 if (kolizja(ball, pictureBox12) && this->pictureBox12->Visible==true){
					 x=-x; y=-y; this->pictureBox12->Visible=false; win--;}
				 // brick13
				 if (kolizja(ball, pictureBox13) && this->pictureBox13->Visible==true){
					 x=-x; y=-y; this->pictureBox13->Visible=false; win--;}
				 // brick14
				 if (kolizja(ball, pictureBox14) && this->pictureBox14->Visible==true){
					 x=-x; y=-y; this->pictureBox14->Visible=false; win--;}
				 // brick15
				 if (kolizja(ball, pictureBox15) && this->pictureBox15->Visible==true){
					 x=-x; y=-y; this->pictureBox15->Visible=false; win--;}
				 // brick16
				 if (kolizja(ball, pictureBox16) && this->pictureBox16->Visible==true){
					 x=-x; y=-y; this->pictureBox16->Visible=false; win--;}
				 // brick17
				 if (kolizja(ball, pictureBox17) && this->pictureBox17->Visible==true){
					 x=-x; y=-y; this->pictureBox17->Visible=false; win--;}
				 // brick18
				 if (kolizja(ball, pictureBox18) && this->pictureBox18->Visible==true){
					 x=-x; y=-y; this->pictureBox18->Visible=false; win--;}
				 // brick19
				 if (kolizja(ball, pictureBox19) && this->pictureBox19->Visible==true){
					 x=-x; y=-y; this->pictureBox19->Visible=false; win--;}


			 }
private: System::Void timer_left_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(this->paddle->Left>10) this->paddle->Left -= 10;
			 }
private: System::Void timer_right_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(this->paddle->Left+this->paddle->Width<=MyForm::Width-30) this->paddle->Left += 10;
		 }
private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Left)
				 this->timer_left->Enabled=true;
			 else if(e->KeyCode == Keys::Right)
				 this->timer_right->Enabled=true;
		 }
private: System::Void MyForm_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Left)
				 this->timer_left->Enabled=false;
			 else if(e->KeyCode == Keys::Right)
				 this->timer_right->Enabled=false;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			this->timer_ball->Enabled = true;
			this->ball->Location=System::Drawing::Point(50, 50);
			x=-8;
			y=-8;
			win = 19;

			this->pictureBox1->Visible=true;
			this->pictureBox2->Visible=true;
			this->pictureBox3->Visible=true;
			this->pictureBox4->Visible=true;
			this->pictureBox5->Visible=true;
			this->pictureBox6->Visible=true;
			this->pictureBox7->Visible=true;
			this->pictureBox8->Visible=true;
			this->pictureBox9->Visible=true;
			this->pictureBox10->Visible=true;
			this->pictureBox11->Visible=true;
			this->pictureBox12->Visible=true;
			this->pictureBox13->Visible=true;
			this->pictureBox14->Visible=true;
			this->pictureBox15->Visible=true;
			this->pictureBox16->Visible=true;
			this->pictureBox17->Visible=true;
			this->pictureBox18->Visible=true;
			this->pictureBox19->Visible=true;

			this->game_status->Visible = false;
			this->ball->Visible = true;
			this->button1->Visible = false;
		 }
};
}
