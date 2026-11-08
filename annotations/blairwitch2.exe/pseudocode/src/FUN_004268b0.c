// Name: FUN_004268b0
// Address: 004268b0
// Address Range: [[004268b0, 00426981]]
// Convention: unknown
// Signature: undefined4 FUN_004268b0(int param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00426937) */

uint FUN_004268b0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_40 [6];
  uint local_28 [6];
  
  bVar4 = 0;
  if ((DAT_007bdad8 & 1) == 0) {
    DAT_007bdad8 = DAT_007bdad8 | 1;
  }
  FUN_004089d0(param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar2 = local_40;
  puVar3 = local_28;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041a840(local_28);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x2828) = 1;
    FUN_00424bd0(param_1);
    FUN_0042b620(param_1);
  }
  FUN_00408a10(param_1);
  if ((0 < *(int *)(param_1 + 0x3564)) && (*(int *)(param_1 + 0x2828) != 0)) {
    FUN_00426990(param_1);
    return *(uint *)(param_1 + 0x2828);
  }
  return *(uint *)(param_1 + 0x2828);
}
