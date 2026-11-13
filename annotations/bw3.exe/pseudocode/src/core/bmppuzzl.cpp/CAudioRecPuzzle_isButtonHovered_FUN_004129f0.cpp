// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_isButtonHovered_FUN_004129f0
// Address: 004129f0
// Address Range: [[004129f0, 00412a4f] [00412a51, 00412a56]]
// Convention: __cdecl
// Signature: int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_isButtonHovered_FUN_004129f0(CAudioRecPuzzle *this_ptr,int button)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_isButtonHovered_FUN_004129f0(CAudioRecPuzzle *this_ptr,int button)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this_ptr->buttons[button].x;
  iVar2 = this_ptr->buttons[button].y;
  if ((((iVar1 <= _DAT_01c5fadc) && (_DAT_01c5fadc <= this_ptr->buttons[button].width + iVar1)) &&
      (iVar2 <= _DAT_01c5fae0)) && (_DAT_01c5fae0 <= this_ptr->buttons[button].height + iVar2)) {
    return 1;
  }
  return 0;
}
