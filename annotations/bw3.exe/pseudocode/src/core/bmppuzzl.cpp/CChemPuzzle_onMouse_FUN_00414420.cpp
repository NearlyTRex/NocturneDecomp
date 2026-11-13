// Name: core_bmppuzzl.cpp_CChemPuzzle_onMouse_FUN_00414420
// Address: 00414420
// Address Range: [[00414420, 00414438]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CChemPuzzle_onMouse_FUN_00414420(CChemPuzzle *this_ptr,int x,int y,int button,int pressed)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_CChemPuzzle_onMouse_FUN_00414420(CChemPuzzle *this_ptr,int x,int y,int button,int pressed)

{
  this_ptr->click_handled = 0;
  this_ptr->previous_mouse_button = this_ptr->mouse_button;
  this_ptr->mouse_button = pressed;
  return;
}
