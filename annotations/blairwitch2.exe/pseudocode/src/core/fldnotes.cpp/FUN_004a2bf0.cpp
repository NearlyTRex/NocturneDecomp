// Name: core_fldnotes.cpp_FUN_004a2bf0
// Address: 004a2bf0
// Address Range: [[004a2bf0, 004a2c87]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a2bf0(int param_1)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004a2bf0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  core_fldnotes_cpp_FUN_004a2b30(param_1);
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x1c);
  iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(*(CBitFont **)(param_1 + 0x2c),0x6a);
  *(int *)(param_1 + 0x18) =
       *(int *)(param_1 + 0x18) + *(int *)(*(int *)(param_1 + 0x2c) + 0x41f8) + iVar1;
  if (*(int *)(param_1 + 0x28) < iVar1 + *(int *)(param_1 + 0x18)) {
    core_fldnotes_cpp_FUN_004a2c90(param_1);
  }
  iVar1 = 0;
  iVar3 = 0;
  while (piVar2 = (int *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x10) * 0x144),
        iVar3 < *piVar2) {
    piVar2 = *(int **)(iVar1 + 4 + (int)piVar2);
    if ((*(int *)(param_1 + 0x18) < piVar2[1] + piVar2[3]) &&
       (*(int *)(param_1 + 0x14) <= *piVar2 + piVar2[2])) {
      *(int *)(param_1 + 0x14) = *piVar2 + piVar2[2];
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 4;
    }
    else {
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 4;
    }
  }
  return;
}
