// Name: unkafter_superopt.cpp_CChemPuzzle_isButtonHovered_FUN_00418720
// Address: 00418720
// Address Range: [[00418720, 00418784]]
// Convention: __cdecl
// Signature: undefined4 __cdecl unkafter_superopt_cpp_CChemPuzzle_isButtonHovered_FUN_00418720(CChemPuzzle *this_ptr,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl unkafter_superopt_cpp_CChemPuzzle_isButtonHovered_FUN_00418720(CChemPuzzle *this_ptr,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this_ptr->buttons[param_2].x;
  iVar2 = this_ptr->buttons[param_2].y;
  if ((((iVar1 <= _DAT_01c4353c) && (_DAT_01c4353c <= this_ptr->buttons[param_2].width + iVar1)) &&
      (iVar2 <= _DAT_01c43540)) && (_DAT_01c43540 <= this_ptr->buttons[param_2].height + iVar2)) {
    return 1;
  }
  return 0;
}
