// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_addButton_FUN_00416570
// Address: 00416570
// Address Range: [[00416570, 00416614]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_addButton_FUN_00416570(CAudioRecPuzzle *this_ptr,int param_2,char *param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_addButton_FUN_00416570(CAudioRecPuzzle *this_ptr,int param_2,char *param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&this_ptr->buttons[param_2].bitmap,param_3,param_4,param_5);
  this_ptr->buttons[param_2].enabled = param_6;
  this_ptr->buttons[param_2].x = param_7;
  this_ptr->buttons[param_2].y = param_8;
  this_ptr->buttons[param_2].width = param_4;
  this_ptr->buttons[param_2].height = param_5;
  this_ptr->buttons[param_2].visible = param_9;
  iVar1 = this_ptr->button_count + 1;
  this_ptr->button_count = iVar1;
  if (iVar1 < 0x33) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\bmppuzzl.cpp";
  _DAT_01d1d404 = 0x299;
  core_main_c_FUN_005030e0("Too damn many buttons");
  return;
}
