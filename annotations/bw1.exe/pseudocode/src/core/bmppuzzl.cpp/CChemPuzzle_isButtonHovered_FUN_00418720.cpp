// Name: core_bmppuzzl.cpp_CChemPuzzle_isButtonHovered_FUN_00418720
// Address: 00418720
// Address Range: [[00418720, 00418784]]
// Convention: __cdecl
// Signature: int __cdecl core_bmppuzzl_cpp_CChemPuzzle_isButtonHovered_FUN_00418720(CChemPuzzle *this_ptr,int button)

#include "nocturne.h"

int __cdecl core_bmppuzzl_cpp_CChemPuzzle_isButtonHovered_FUN_00418720(CChemPuzzle *this_ptr,int button)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this_ptr->buttons[button].x;
  iVar2 = this_ptr->buttons[button].y;
  if ((((iVar1 <= g_MouseX) && (g_MouseX <= this_ptr->buttons[button].width + iVar1)) &&
      (iVar2 <= g_MouseY)) && (g_MouseY <= this_ptr->buttons[button].height + iVar2)) {
    return 1;
  }
  return 0;
}
