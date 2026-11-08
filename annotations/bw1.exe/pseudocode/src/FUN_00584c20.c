// Name: FUN_00584c20
// Address: 00584c20
// Address Range: [[00584c20, 00584c54]]
// Convention: unknown
// Signature: void FUN_00584c20(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00584c20(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x170;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x16c) * 2; iVar1 = iVar1 + 1) {
    FUN_004904d0(iVar2,param_2);
    iVar2 = iVar2 + 0x38;
  }
  return;
}
