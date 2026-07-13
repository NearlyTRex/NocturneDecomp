// Name: FUN_00534a30
// Address: 00534a30
// Address Range: [[00534a30, 00534a64]]
// Convention: unknown
// Signature: void FUN_00534a30(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00534a30(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x168;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x164) * 2; iVar1 = iVar1 + 1) {
    FUN_0046cba0(iVar2,param_2);
    iVar2 = iVar2 + 0x38;
  }
  return;
}
