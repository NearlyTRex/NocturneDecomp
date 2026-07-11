// Name: FUN_004c45a0
// Address: 004c45a0
// Address Range: [[004c45a0, 004c46a4]]
// Convention: unknown
// Signature: void FUN_004c45a0(int param_1)

#include "nocturne.h"

void FUN_004c45a0(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  byte local_dc [48];
  byte local_ac [48];
  uint local_7c [3];
  uint local_70;
  uint local_60;
  uint local_50;
  uint local_4c [12];
  uint local_1c;
  uint local_18;
  uint local_14;
  byte local_10 [12];
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x2d8) == 0) {
    return;
  }
  FUN_0055afb0(local_dc,param_1 + 0x2dc,param_1 + 0x2e8);
  FUN_0055afb0(local_ac,*(int *)(param_1 + 0x2d8) + 0x20,*(int *)(param_1 + 0x2d8) + 0x30);
  FUN_0055aa00(local_dc,local_ac);
  puVar1 = local_4c;
  puVar3 = local_7c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  local_1c = local_70;
  local_18 = local_60;
  local_14 = local_50;
  *(uint *)(param_1 + 0x20) = local_70;
  *(uint *)(param_1 + 0x24) = local_60;
  *(uint *)(param_1 + 0x28) = local_50;
  puVar1 = (uint *)FUN_0055b180(local_7c,local_10);
  if ((uint *)(param_1 + 0x30) != puVar1) {
    *(uint *)(param_1 + 0x30) = *puVar1;
    *(uint *)(param_1 + 0x34) = puVar1[1];
    *(uint *)(param_1 + 0x38) = puVar1[2];
  }
  FUN_0040a000(param_1);
  return;
}
