// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_onMouse_FUN_0059bb40
// Address: 0059bb40
// Address Range: [[0059bb40, 0059bb58]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_onMouse_FUN_0059bb40(CAudioRecPuzzle *this_ptr,int x,int y,int button,int pressed)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_onMouse_FUN_0059bb40(CAudioRecPuzzle *this_ptr,int x,int y,int button,int pressed)

{
  this_ptr->click_handled = 0;
  this_ptr->previous_mouse_button = this_ptr->mouse_button;
  this_ptr->mouse_button = pressed;
  return;
}
