// Name: unkafter_bmppuzzl.cpp_CAudioRecPuzzle_isButtonHovered_FUN_004129f0
// Address: 004129f0
// Address Range: [[004129f0, 00412a4f] [00412a51, 00412a56]]
// Convention: __cdecl
// Signature: longlong __cdecl unkafter_bmppuzzl_cpp_CAudioRecPuzzle_isButtonHovered_FUN_004129f0(CAudioRecPuzzle *this_ptr,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong __cdecl unkafter_bmppuzzl_cpp_CAudioRecPuzzle_isButtonHovered_FUN_004129f0(CAudioRecPuzzle *this_ptr,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = this_ptr->buttons[param_2].x;
  iVar2 = this_ptr->buttons[param_2].y;
  if (((((int)uVar1 <= _DAT_01c5fadc) &&
       (_DAT_01c5fadc <= (int)(this_ptr->buttons[param_2].width + uVar1))) &&
      (iVar2 <= _DAT_01c5fae0)) && (_DAT_01c5fae0 <= this_ptr->buttons[param_2].height + iVar2)) {
    return CONCAT44(uVar1,1);
  }
  return (ulonglong)uVar1 << 0x20;
}
