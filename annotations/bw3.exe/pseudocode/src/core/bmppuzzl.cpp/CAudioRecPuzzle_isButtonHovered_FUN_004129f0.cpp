// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_isButtonHovered_FUN_004129f0
// Address: 004129f0
// Address Range: [[004129f0, 00412a4f] [00412a51, 00412a56]]
// Convention: __cdecl
// Signature: int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_isButtonHovered_FUN_004129f0(CAudioRecPuzzle *this_ptr,int button)

#include "nocturne.h"

int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_isButtonHovered_FUN_004129f0(CAudioRecPuzzle *this_ptr,int button)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this_ptr->buttons[button].x;
  iVar2 = this_ptr->buttons[button].y;
  if ((((iVar1 <= g_INT_01c5fadc) && (g_INT_01c5fadc <= this_ptr->buttons[button].width + iVar1)) &&
      (iVar2 <= g_INT_01c5fae0)) && (g_INT_01c5fae0 <= this_ptr->buttons[button].height + iVar2)) {
    return 1;
  }
  return 0;
}
