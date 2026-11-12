// Name: core_bmppuzzl.cpp_CExamplePuzzle_onMouse_FUN_0059adf0
// Address: 0059adf0
// Address Range: [[0059adf0, 0059ae32]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CExamplePuzzle_onMouse_FUN_0059adf0(CExamplePuzzle *this_ptr,int param_2,int param_3)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_CExamplePuzzle_onMouse_FUN_0059adf0(CExamplePuzzle *this_ptr,int param_2,int param_3)

{
  if ((((this_ptr->rect_left <= param_2) && (param_2 <= this_ptr->rect_right)) &&
      (this_ptr->rect_top <= param_3)) && (param_3 <= this_ptr->rect_bottom)) {
    core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,"Hooray");
    core_zombie_cpp_FUN_0059ab70(this_ptr,0);
    return;
  }
  return;
}
