// Name: FUN_00594340
// Address: 00594340
// Address Range: [[00594340, 005944b9]]
// Convention: unknown
// Signature: int FUN_00594340(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00594340(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint auStack_fc [60];
  
  *(uint *)(0x01E82168 + 0x15ae98) = 1;
  iVar5 = 0;
  iVar6 = param_1;
  do {
    iVar4 = iVar5 + 1;
    puVar1 = (uint *)(iVar6 + 0x2298);
    iVar6 = iVar6 + 4;
    auStack_fc[iVar5] = *puVar1;
    iVar5 = iVar4;
  } while (iVar4 < 0x3c);
  iVar5 = FUN_0042f240();
  iVar6 = FUN_00483e60();
  if ((iVar6 == 0) && (_DAT_01c51cac < 0x4000)) {
    iVar6 = param_1;
    do {
      iVar4 = iVar6 + 4;
      *(uint *)(iVar6 + 0x2298) = 0;
      iVar6 = iVar4;
    } while (iVar4 != param_1 + 0xf0);
    *(uint *)(param_1 + 0x2298 + *(int *)(param_1 + 0x95628) * 4) = 1;
    uVar3 = DAT_00612560;
    *(uint *)(param_1 + 0x2298 + *(int *)(param_1 + 0x9562c) * 4) = 1;
    uVar2 = *(uint *)(0x01CCF390 + 0x210);
    *(uint *)(0x01CCF390 + 0x210) = 2;
    FUN_00483dd0(uVar3,0);
    FUN_00483de0(DAT_00612560,48000);
    if (iVar5 != 0) {
      FUN_0042f240(param_1);
    }
    *(uint *)(0x01CCF390 + 0x210) = uVar2;
    iVar4 = 0;
    iVar6 = param_1;
    do {
      puVar1 = auStack_fc + iVar4;
      iVar4 = iVar4 + 1;
      *(uint *)(iVar6 + 0x2298) = *puVar1;
      iVar6 = iVar6 + 4;
    } while (iVar4 < 0x3c);
  }
  *(uint *)(0x01E82168 + 0x15ae98) = 0;
  if (iVar5 != 0) {
    FUN_004087b0();
    FUN_00441800(param_1 + 0x1ffb4);
    FUN_00441800(param_1 + 0x5aae4);
    FUN_004087f0();
    return iVar5;
  }
  return 0;
}
