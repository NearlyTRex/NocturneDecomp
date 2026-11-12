// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_isButtonHovered_FUN_00416cf0
// Address: 00416cf0
// Address Range: [[00416cf0, 00416d4f] [00416d51, 00416d56]]
// Convention: __cdecl
// Signature: longlong __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_isButtonHovered_FUN_00416cf0(CAudioRecPuzzle *this_ptr,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_isButtonHovered_FUN_00416cf0(CAudioRecPuzzle *this_ptr,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = this_ptr->buttons[param_2].x;
  iVar2 = this_ptr->buttons[param_2].y;
  if (((((int)uVar1 <= _DAT_01c4353c) &&
       (_DAT_01c4353c <= (int)(this_ptr->buttons[param_2].width + uVar1))) &&
      (iVar2 <= _DAT_01c43540)) && (_DAT_01c43540 <= this_ptr->buttons[param_2].height + iVar2)) {
    return CONCAT44(uVar1,1);
  }
  return (ulonglong)uVar1 << 0x20;
}
