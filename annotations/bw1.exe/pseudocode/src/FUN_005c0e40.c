// Name: FUN_005c0e40
// Address: 005c0e40
// Address Range: [[005c0e40, 005c0f31]]
// Convention: unknown
// Signature: uint FUN_005c0e40(int param_1,int param_2)

#include "nocturne.h"

uint FUN_005c0e40(int param_1,int param_2)

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
      uVar1 = FUN_005c6d50(param_1);
    }
    (*(code *)PTR_FUN_00626600)(*(uint *)(param_1 + 0x10));
    iVar2 = FUN_005c2e90(param_1);
    if (iVar2 != -1) {
      FUN_005c6e80(*(uint *)(param_1 + 0x10),iVar2,0);
    }
    if (param_2 != 0) {
      uVar3 = FUN_005c6f10(*(uint *)(param_1 + 0x10));
      uVar1 = uVar1 | uVar3;
    }
    if ((*(byte *)(param_1 + 0xc) & 8) != 0) {
      FUN_005c09f0(*(uint *)(*(int *)(param_1 + 8) + 8));
      *(uint *)(*(int *)(param_1 + 8) + 8) = 0;
    }
    if ((*(byte *)(param_1 + 0xd) & 8) != 0) {
      FUN_005c0d8c(auStack_124,*(byte *)(*(int *)(param_1 + 8) + 0x14));
      FUN_005c25c0(auStack_124);
    }
    (*(code *)PTR_FUN_00626604)(*(uint *)(param_1 + 0x10));
    if (param_2 != 0) {
      (*(code *)PTR_FUN_0062660c)(*(uint *)(param_1 + 0x10));
    }
  }
  return uVar1;
}
