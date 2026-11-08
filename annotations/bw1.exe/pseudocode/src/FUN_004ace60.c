// Name: FUN_004ace60
// Address: 004ace60
// Address Range: [[004ace60, 004acf12]]
// Convention: unknown
// Signature: void FUN_004ace60(int param_1)

#include "nocturne.h"

void FUN_004ace60(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint local_28 [3];
  byte local_1c [12];
  
  bVar5 = 0;
  FUN_004837b0(DAT_00612560,param_1 + 4);
  FUN_00483850(DAT_00612560,param_1 + 0x10,0);
  iVar1 = FUN_00468900(0x1c570b8);
  puVar3 = (uint *)(iVar1 + 0x338);
  puVar4 = local_28;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar1 = FUN_004207b0(local_28,0);
  if (iVar1 != 0) {
    FUN_00551c30(0x01E82168,param_1 + 4,param_1 + 0x10,local_28,local_1c,param_1 + 0x1c);
    FUN_004688a0(0x1c570b8,0,0xffffffff);
  }
  thunk_FUN_005084b0(DAT_00612560);
  return;
}
