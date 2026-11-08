// Name: FUN_005a3bc0
// Address: 005a3bc0
// Address Range: [[005a3bc0, 005a3cb1]]
// Convention: unknown
// Signature: uint FUN_005a3bc0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_005a3bc0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte auStack_124 [276];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    if ((*(byte *)(param_1 + 0xd) & 0x10) != 0) {
      uVar1 = FUN_005a9bc0(param_1);
    }
    (*(code *)PTR_FUN_006079a4)(*(uint *)(param_1 + 0x10));
    iVar2 = FUN_005a5d00(param_1);
    if (iVar2 != -1) {
      FUN_005a9cf0(*(uint *)(param_1 + 0x10),iVar2,0);
    }
    if (param_2 != 0) {
      uVar3 = FUN_005a9d80(*(uint *)(param_1 + 0x10));
      uVar1 = uVar1 | uVar3;
    }
    if ((*(byte *)(param_1 + 0xc) & 8) != 0) {
      FUN_005a3770(*(uint *)(*(int *)(param_1 + 8) + 8));
      *(uint *)(*(int *)(param_1 + 8) + 8) = 0;
    }
    if ((*(byte *)(param_1 + 0xd) & 8) != 0) {
      FUN_005a3b0c(auStack_124,*(byte *)(*(int *)(param_1 + 8) + 0x14));
      FUN_005a54b0(auStack_124);
    }
    (*(code *)PTR_FUN_006079a8)(*(uint *)(param_1 + 0x10));
    if (param_2 != 0) {
      (*(code *)PTR_FUN_006079b0)(*(uint *)(param_1 + 0x10));
    }
  }
  return uVar1;
}
