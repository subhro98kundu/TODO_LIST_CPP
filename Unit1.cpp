//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddButtonClick(TObject *Sender)
{
	String taskInput = TaskInput->Text;
	if(taskInput != ""){
		TaskList->Items->Add(taskInput);
		TaskInput->Text = "";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TaskListItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	int taskIndex = Item->Index;
    TaskList->Items->Delete(taskIndex);
}
//---------------------------------------------------------------------------
