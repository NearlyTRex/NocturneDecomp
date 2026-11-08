// Name: FUN_0041d000
// Address: 0041d000
// Address Range: [[0041d000, 0041d0c7]]
// Convention: unknown
// Signature: int FUN_0041d000(int param_1)

#include "nocturne.h"

int FUN_0041d000(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0x24fc) != 0) {
    return 0;
  }
  FUN_004087b0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar3 = auStack_20;
  puVar4 = auStack_38;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = FUN_004207b0(auStack_38);
  if (iVar2 != 0) {
    FUN_00484a40(DAT_00612560,0);
    uVar1 = DAT_00612560;
    *(uint *)(0x01E82168 + 0x15ac98) = 1;
    FUN_00483de0(uVar1,0xffff);
    FUN_0042e960(param_1);
    uVar1 = DAT_00612560;
    *(uint *)(0x01E82168 + 0x15ac98) = 0;
    FUN_00484e00(uVar1);
  }
  FUN_004087f0(param_1);
  return iVar2;
}
