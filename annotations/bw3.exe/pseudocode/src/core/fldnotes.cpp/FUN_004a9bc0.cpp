// Name: core_fldnotes.cpp_FUN_004a9bc0
// Address: 004a9bc0
// Address Range: [[004a9bc0, 004a9c24]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a9bc0(int param_1)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004a9bc0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 0x150)) {
    do {
      if (*(int *)(iVar3 + 0x154) != 0) {
        uVar1 = core_fldnotes_cpp_FUN_004a9930(*(int *)(iVar3 + 0x154),0);
        FUN_005a30c4(uVar1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x150));
  }
  *(uint *)(param_1 + 0x140) = 0;
  *(uint *)(param_1 + 0x144) = 0;
  *(uint *)(param_1 + 0x150) = 0;
  return;
}
