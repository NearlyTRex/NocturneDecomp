// Name: FUN_005686d0
// Address: 005686d0
// Address Range: [[005686d0, 0056871a]]
// Convention: unknown
// Signature: undefined4 FUN_005686d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

uint FUN_005686d0(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_1 + 0x170;
  uVar4 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x16c) * 2; iVar2 = iVar2 + 1) {
    iVar1 = FUN_004795c0(iVar3,param_2,param_3,param_4);
    if (iVar1 != 0) {
      uVar4 = 1;
    }
    iVar3 = iVar3 + 0x38;
  }
  return uVar4;
}
