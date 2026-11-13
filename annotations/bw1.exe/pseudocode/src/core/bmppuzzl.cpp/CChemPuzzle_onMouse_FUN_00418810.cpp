// Name: core_bmppuzzl.cpp_CChemPuzzle_onMouse_FUN_00418810
// Address: 00418810
// Address Range: [[00418810, 00418828]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CChemPuzzle_onMouse_FUN_00418810(CChemPuzzle *this_ptr,int x,int y,int button,int pressed)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_CChemPuzzle_onMouse_FUN_00418810(CChemPuzzle *this_ptr,int x,int y,int button,int pressed)

{
  this_ptr->click_handled = 0;
  this_ptr->previous_mouse_button = this_ptr->mouse_button;
  this_ptr->mouse_button = pressed;
  return;
}
