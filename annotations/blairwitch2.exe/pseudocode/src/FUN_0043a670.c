// Name: FUN_0043a670
// Address: 0043a670
// Address Range: [[0043a670, 0043a703]]
// Convention: unknown
// Signature: int FUN_0043a670(int param_1)

#include "nocturne.h"

int FUN_0043a670(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_40 [6];
  uint auStack_28 [6];
  uint uStack_10;
  
  bVar4 = 0;
  FUN_004089d0(param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar2 = auStack_28;
  puVar3 = auStack_40;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041a840(auStack_40);
  if (iVar1 == 0) {
    FUN_00408a10(param_1);
    return 0;
  }
  uStack_10 = FUN_0043ae10(param_1,0xffffffff);
  FUN_0044fcc0(param_1 + 0x2b4,uStack_10);
  FUN_00408a10(param_1);
  return iVar1;
}
