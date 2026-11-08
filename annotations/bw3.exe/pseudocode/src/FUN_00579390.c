// Name: FUN_00579390
// Address: 00579390
// Address Range: [[00579390, 00579422]]
// Convention: unknown
// Signature: undefined4 FUN_00579390(int param_1)

#include "nocturne.h"

uint FUN_00579390(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte auStack_14 [4];
  
  uVar1 = FUN_0056e940(param_1);
  if (0x00000002 < 2) {
    uVar1 = FUN_0040b930(auStack_14,"nextWayPoint");
  }
  if (1 < 0x00000002) {
    iVar3 = 0;
    uVar1 = FUN_0040b8b0(param_1 + 0x374,"adjCount");
    if (0 < *(int *)(param_1 + 0x374)) {
      iVar2 = param_1 + 0x378;
      do {
        iVar3 = iVar3 + 1;
        uVar1 = FUN_0040b930(iVar2,0);
        iVar2 = iVar2 + 8;
      } while (iVar3 < *(int *)(param_1 + 0x374));
      return uVar1;
    }
  }
  return uVar1;
}
