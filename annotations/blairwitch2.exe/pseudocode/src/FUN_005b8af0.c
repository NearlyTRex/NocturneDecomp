// Name: FUN_005b8af0
// Address: 005b8af0
// Address Range: [[005b8af0, 005b8be1]]
// Convention: unknown
// Signature: uint FUN_005b8af0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_005b8af0(int param_1,int param_2)

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
      uVar1 = FUN_005bea80(param_1);
    }
    (*(code *)PTR_FUN_0061f2a8)(*(uint *)(param_1 + 0x10));
    iVar2 = FUN_005baab0(param_1);
    if (iVar2 != -1) {
      FUN_005bebb0(*(uint *)(param_1 + 0x10),iVar2,0);
    }
    if (param_2 != 0) {
      uVar3 = FUN_005bec40(*(uint *)(param_1 + 0x10));
      uVar1 = uVar1 | uVar3;
    }
    if ((*(byte *)(param_1 + 0xc) & 8) != 0) {
      FUN_005b86a0(*(uint *)(*(int *)(param_1 + 8) + 8));
      *(uint *)(*(int *)(param_1 + 8) + 8) = 0;
    }
    if ((*(byte *)(param_1 + 0xd) & 8) != 0) {
      FUN_005b8a3c(auStack_124,*(byte *)(*(int *)(param_1 + 8) + 0x14));
      FUN_005ba1e0(auStack_124);
    }
    (*(code *)PTR_FUN_0061f2ac)(*(uint *)(param_1 + 0x10));
    if (param_2 != 0) {
      (*(code *)PTR_FUN_0061f2b4)(*(uint *)(param_1 + 0x10));
    }
  }
  return uVar1;
}
