// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_isButtonHovered_FUN_0059b900
// Address: 0059b900
// Address Range: [[0059b900, 0059b95f] [0059b961, 0059b966]]
// Convention: __cdecl
// Signature: int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_isButtonHovered_FUN_0059b900(CAudioRecPuzzle *this_ptr,int button)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_isButtonHovered_FUN_0059b900(CAudioRecPuzzle *this_ptr,int button)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this_ptr->buttons[button].x;
  iVar2 = this_ptr->buttons[button].y;
  if ((((iVar1 <= _DAT_01c2a37c) && (_DAT_01c2a37c <= this_ptr->buttons[button].width + iVar1)) &&
      (iVar2 <= _DAT_01c2a380)) && (_DAT_01c2a380 <= this_ptr->buttons[button].height + iVar2)) {
    return 1;
  }
  return 0;
}
