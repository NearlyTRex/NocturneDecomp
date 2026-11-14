// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_isButtonHovered_FUN_00416cf0
// Address: 00416cf0
// Address Range: [[00416cf0, 00416d4f] [00416d51, 00416d56]]
// Convention: __cdecl
// Signature: int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_isButtonHovered_FUN_00416cf0(CAudioRecPuzzle *this_ptr,int button)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_isButtonHovered_FUN_00416cf0(CAudioRecPuzzle *this_ptr,int button)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this_ptr->buttons[button].x;
  iVar2 = this_ptr->buttons[button].y;
  if ((((iVar1 <= _DAT_01c4353c) && (_DAT_01c4353c <= this_ptr->buttons[button].width + iVar1)) &&
      (iVar2 <= _DAT_01c43540)) && (_DAT_01c43540 <= this_ptr->buttons[button].height + iVar2)) {
    return 1;
  }
  return 0;
}
