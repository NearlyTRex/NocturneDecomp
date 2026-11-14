// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_addButton_FUN_00412320
// Address: 00412320
// Address Range: [[00412320, 004123bb]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_addButton_FUN_00412320(CAudioRecPuzzle *this_ptr,int index,char *filename,int width,int height,int enabled,int x,int y,int visible)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_addButton_FUN_00412320(CAudioRecPuzzle *this_ptr,int index,char *filename,int width,int height,int enabled,int x,int y,int visible)

{
  int iVar1;
  
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&this_ptr->buttons[index].bitmap,filename,width,height);
  this_ptr->buttons[index].enabled = enabled;
  this_ptr->buttons[index].x = x;
  this_ptr->buttons[index].y = y;
  this_ptr->buttons[index].width = width;
  this_ptr->buttons[index].height = height;
  this_ptr->buttons[index].visible = visible;
  iVar1 = this_ptr->button_count + 1;
  this_ptr->button_count = iVar1;
  if (iVar1 < 0x33) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\bmppuzzl.cpp";
  _DAT_01d71de4 = 0x290;
  core_main_c_FUN_004e4330("Too damn many buttons");
  return;
}
