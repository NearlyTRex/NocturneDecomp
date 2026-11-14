// Name: core_bmppuzzl.cpp_CExamplePuzzle_load_FUN_0059ad20
// Address: 0059ad20
// Address Range: [[0059ad20, 0059ad91]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CExamplePuzzle_load_FUN_0059ad20(CExamplePuzzle *this_ptr,int activate)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_CExamplePuzzle_load_FUN_0059ad20(CExamplePuzzle *this_ptr,int activate)

{
  int iVar1;
  
  if (activate == 0) {
    return;
  }
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cfc0(10,DAT_006141b8 + -0x14);
  this_ptr->rect_left = iVar1;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cfc0(10,DAT_006141bc + -0x14);
  this_ptr->rect_top = iVar1;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cfc0(this_ptr->rect_left + 5,DAT_006141b8 + -10);
  this_ptr->rect_right = iVar1;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cfc0(this_ptr->rect_top + 5,DAT_006141bc + -10);
  this_ptr->rect_bottom = iVar1;
  return;
}
