// Name: unkafter_bmppuzzl.cpp_CAudioRecPuzzle_onMouse_FUN_00412c30
// Address: 00412c30
// Address Range: [[00412c30, 00412c48]]
// Convention: __cdecl
// Signature: void __cdecl unkafter_bmppuzzl_cpp_CAudioRecPuzzle_onMouse_FUN_00412c30(CAudioRecPuzzle *this_ptr)

#include "nocturne.h"

void __cdecl unkafter_bmppuzzl_cpp_CAudioRecPuzzle_onMouse_FUN_00412c30(CAudioRecPuzzle *this_ptr)

{
  int in_stack_00000014;
  
  this_ptr->click_handled = 0;
  this_ptr->previous_mouse_button = this_ptr->mouse_button;
  this_ptr->mouse_button = in_stack_00000014;
  return;
}
