// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_addButton_FUN_0059b3c0
// Address: 0059b3c0
// Address Range: [[0059b3c0, 0059b42a]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_addButton_FUN_0059b3c0(CAudioRecPuzzle *this_ptr,int param_2,char *param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_addButton_FUN_0059b3c0(CAudioRecPuzzle *this_ptr,int param_2,char *param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9)

{
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&this_ptr->buttons[param_2].bitmap,param_3,param_4,param_5);
  this_ptr->buttons[param_2].enabled = param_6;
  this_ptr->buttons[param_2].x = param_7;
  this_ptr->buttons[param_2].y = param_8;
  this_ptr->buttons[param_2].width = param_4;
  this_ptr->buttons[param_2].height = param_5;
  this_ptr->buttons[param_2].visible = param_9;
  this_ptr->button_count = this_ptr->button_count + 1;
  return;
}
