// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_onMouse_FUN_00416f80
// Address: 00416f80
// Address Range: [[00416f80, 00416f98]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_onMouse_FUN_00416f80(CAudioRecPuzzle *this_ptr,int x,int y,int button,int pressed)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_onMouse_FUN_00416f80(CAudioRecPuzzle *this_ptr,int x,int y,int button,int pressed)

{
  this_ptr->click_handled = 0;
  this_ptr->previous_mouse_button = this_ptr->mouse_button;
  this_ptr->mouse_button = pressed;
  return;
}
