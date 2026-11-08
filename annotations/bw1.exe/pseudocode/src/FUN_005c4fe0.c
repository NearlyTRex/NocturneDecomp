// Name: FUN_005c4fe0
// Address: 005c4fe0
// Address Range: [[005c4fe0, 005c50bd]]
// Convention: unknown
// Signature: undefined4 FUN_005c4fe0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_005c4fe0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  
  (*(code *)PTR_FUN_00626600)(*(uint *)(param_1 + 0x10));
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      (*(code *)PTR_FUN_00626604)(*(uint *)(param_1 + 0x10));
      return 0;
    }
    *(uint *)(*(int *)(param_1 + 8) + 0xc) = 1;
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xcf;
  if (*(int *)(*(int *)(param_1 + 8) + 8) == 0) {
    FUN_005c64a0(param_1);
  }
  bVar5 = (*(byte *)(param_1 + 0xd) & 4) != 0;
  if (bVar5) {
    bVar4 = *(byte *)(param_1 + 0xd) & 0xfa;
    *(byte *)(param_1 + 0xd) = bVar4;
    *(byte *)(param_1 + 0xd) = bVar4 | 1;
  }
  uVar3 = FUN_005c3320(param_1,param_2,param_3,&LAB_005c4fc0);
  if (bVar5) {
    bVar4 = *(byte *)(param_1 + 0xd) & 0xfa;
    *(byte *)(param_1 + 0xd) = bVar4;
    *(byte *)(param_1 + 0xd) = bVar4 | 4;
    FUN_005c6d50(param_1);
  }
  if ((*(byte *)(param_1 + 0xc) & 0x20) != 0) {
    uVar3 = 0xffffffff;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | uVar2 & 0x30;
  (*(code *)PTR_FUN_00626604)(*(uint *)(param_1 + 0x10));
  return uVar3;
}
