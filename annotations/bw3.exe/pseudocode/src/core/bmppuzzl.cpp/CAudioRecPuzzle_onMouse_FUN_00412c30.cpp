// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_onMouse_FUN_00412c30
// Address: 00412c30
// Address Range: [[00412c30, 00412c48]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_onMouse_FUN_00412c30(CAudioRecPuzzle *this_ptr,int x,int y,int button,int pressed)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_onMouse_FUN_00412c30(CAudioRecPuzzle *this_ptr,int x,int y,int button,int pressed)

{
  this_ptr->click_handled = 0;
  this_ptr->previous_mouse_button = this_ptr->mouse_button;
  this_ptr->mouse_button = pressed;
  return;
}
