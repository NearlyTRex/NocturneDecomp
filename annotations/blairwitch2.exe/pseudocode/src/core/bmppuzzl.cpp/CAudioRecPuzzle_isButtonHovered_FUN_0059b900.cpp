// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_isButtonHovered_FUN_0059b900
// Address: 0059b900
// Address Range: [[0059b900, 0059b95f] [0059b961, 0059b966]]
// Convention: __cdecl
// Signature: longlong __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_isButtonHovered_FUN_0059b900(CAudioRecPuzzle *this_ptr,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_isButtonHovered_FUN_0059b900(CAudioRecPuzzle *this_ptr,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = this_ptr->buttons[param_2].x;
  iVar2 = this_ptr->buttons[param_2].y;
  if (((((int)uVar1 <= _DAT_01c2a37c) &&
       (_DAT_01c2a37c <= (int)(this_ptr->buttons[param_2].width + uVar1))) &&
      (iVar2 <= _DAT_01c2a380)) && (_DAT_01c2a380 <= this_ptr->buttons[param_2].height + iVar2)) {
    return CONCAT44(uVar1,1);
  }
  return (ulonglong)uVar1 << 0x20;
}
