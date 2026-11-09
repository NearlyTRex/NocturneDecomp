// Name: core_fldnotes.cpp_FUN_004bb630
// Address: 004bb630
// Address Range: [[004bb630, 004bb6bb]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004bb630(int param_1)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004bb630(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  core_fldnotes_cpp_FUN_004bb570(param_1);
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x1c);
  iVar1 = engine_font_cpp_FUN_004c4510(*(CBitFont **)(param_1 + 0x2c),0x6a);
  *(int *)(param_1 + 0x18) =
       *(int *)(param_1 + 0x18) + iVar1 + *(int *)(*(int *)(param_1 + 0x2c) + 0x41f8);
  iVar4 = 0;
  for (iVar5 = 0; piVar2 = (int *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x10) * 0x144),
      iVar5 < *piVar2; iVar5 = iVar5 + 1) {
    iVar3 = *(int *)(iVar4 + 4 + (int)piVar2);
    iVar3 = *(int *)(iVar3 + 4) + *(int *)(iVar3 + 0xc);
    if (*(int *)(param_1 + 0x18) < iVar3) {
      *(int *)(param_1 + 0x18) = iVar3;
    }
    iVar4 = iVar4 + 4;
  }
  if (iVar1 + *(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0x28)) {
    return;
  }
  core_fldnotes_cpp_FUN_004bb6c0(param_1);
  return;
}
