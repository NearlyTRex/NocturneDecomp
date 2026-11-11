// Name: unkafter_superopt.cpp_CChemPuzzle_isButtonHovered_FUN_00414330
// Address: 00414330
// Address Range: [[00414330, 00414394]]
// Convention: __cdecl
// Signature: undefined4 __cdecl unkafter_superopt_cpp_CChemPuzzle_isButtonHovered_FUN_00414330(CChemPuzzle *this_ptr,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl unkafter_superopt_cpp_CChemPuzzle_isButtonHovered_FUN_00414330(CChemPuzzle *this_ptr,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this_ptr->buttons[param_2].x;
  iVar2 = this_ptr->buttons[param_2].y;
  if ((((iVar1 <= _DAT_01c5fadc) && (_DAT_01c5fadc <= this_ptr->buttons[param_2].width + iVar1)) &&
      (iVar2 <= _DAT_01c5fae0)) && (_DAT_01c5fae0 <= this_ptr->buttons[param_2].height + iVar2)) {
    return 1;
  }
  return 0;
}
