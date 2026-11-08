// Name: FUN_0040ef70
// Address: 0040ef70
// Address Range: [[0040ef70, 0040effd]]
// Convention: unknown
// Signature: void FUN_0040ef70(int param_1,int param_2)

#include "nocturne.h"

void FUN_0040ef70(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar4 = 0;
  if ((param_2 != 0) &&
     ((*(int *)(param_1 + 0x158) != 0 || (iVar1 = FUN_00483e60(DAT_00612560), iVar1 == 0)))) {
    FUN_004087b0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar2 = auStack_20;
    puVar3 = auStack_38;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = FUN_004207b0(auStack_38);
    if (iVar1 != 0) {
      FUN_004688a0(param_1 + 0x15c,0,0xffffffff);
    }
    FUN_004087f0(param_1);
  }
  return;
}
