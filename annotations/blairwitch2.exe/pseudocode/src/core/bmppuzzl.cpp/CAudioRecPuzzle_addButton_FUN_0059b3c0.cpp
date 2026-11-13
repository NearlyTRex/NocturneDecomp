// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_addButton_FUN_0059b3c0
// Address: 0059b3c0
// Address Range: [[0059b3c0, 0059b42a]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_addButton_FUN_0059b3c0(CAudioRecPuzzle *this_ptr,int index,char *filename,int width,int height,int enabled,int x,int y,int visible)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_addButton_FUN_0059b3c0(CAudioRecPuzzle *this_ptr,int index,char *filename,int width,int height,int enabled,int x,int y,int visible)

{
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
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
