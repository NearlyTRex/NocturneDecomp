// Name: FUN_005042e0
// Address: 005042e0
// Address Range: [[005042e0, 005043f6]]
// Convention: unknown
// Signature: int FUN_005042e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005042e0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_48 [6];
  uint auStack_30 [6];
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  bVar5 = 0;
  FUN_004087b0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar3 = auStack_48;
  puVar4 = auStack_30;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar1 = FUN_004207b0(auStack_30);
  if (iVar1 != 0) {
    iStack_18 = (int)ROUND(_DAT_02c8af28 * _DAT_00603420);
    iStack_14 = (int)ROUND(_DAT_02c8af2c * _DAT_00603420);
    iStack_10 = (int)ROUND(_DAT_02c8af30 * _DAT_00603420);
    FUN_00580173(*DAT_00612560 + 48000,&iStack_18);
    iVar2 = 0;
    do {
      FUN_00504fe0(param_1,iVar2);
      FUN_00505060(param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xc);
    if ((*(int *)(0x01D2C900 + 0x1008) != 0) && (iVar2 = FUN_00483e60(DAT_00612560), iVar2 == 0))
    {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xc);
    }
    iVar2 = 0;
    do {
      FUN_005054c0(param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    FUN_004087f0(param_1);
    return iVar1;
  }
  FUN_004087f0(param_1);
  return 0;
}
