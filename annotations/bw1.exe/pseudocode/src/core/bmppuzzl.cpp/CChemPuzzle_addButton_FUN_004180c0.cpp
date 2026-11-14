// Name: core_bmppuzzl.cpp_CChemPuzzle_addButton_FUN_004180c0
// Address: 004180c0
// Address Range: [[004180c0, 0041813c]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CChemPuzzle_addButton_FUN_004180c0(CChemPuzzle *this_ptr,int index,char *filename,int width,int height,int enabled,int x,int y,int visible)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_CChemPuzzle_addButton_FUN_004180c0(CChemPuzzle *this_ptr,int index,char *filename,int width,int height,int enabled,int x,int y,int visible)

{
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&this_ptr->buttons[index].bitmap,filename,width,height);
  this_ptr->buttons[index].enabled = enabled;
  this_ptr->buttons[index].x = x;
  this_ptr->buttons[index].y = y;
  this_ptr->buttons[index].width = width;
  this_ptr->buttons[index].height = height;
  this_ptr->buttons[index].visible = visible;
  this_ptr->button_count = this_ptr->button_count + 1;
  return;
}
