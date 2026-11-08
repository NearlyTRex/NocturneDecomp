// Name: FUN_004af040
// Address: 004af040
// Address Range: [[004af040, 004af0e2]]
// Convention: unknown
// Signature: void FUN_004af040(int param_1)

#include "nocturne.h"

void FUN_004af040(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_28 [3];
  byte auStack_1c [12];
  
  bVar4 = 0;
  FUN_004837b0(DAT_00612560,param_1);
  FUN_00483800(DAT_00612560,param_1 + 0x40,0);
  puVar2 = *(uint **)(*(int *)(param_1 + 0x4c) + 0x350);
  puVar3 = auStack_28;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_004207b0(auStack_28,0);
  if (iVar1 != 0) {
    FUN_00551c30(0x01E82168,param_1,&DAT_02c8af28,auStack_28,auStack_1c,0);
    FUN_00467270(*(uint *)(param_1 + 0x4c),0,0,0xffffffff);
  }
  thunk_FUN_005084b0(DAT_00612560);
  return;
}
