// Name: FUN_00571700
// Address: 00571700
// Address Range: [[00571700, 00571863]]
// Convention: unknown
// Signature: int FUN_00571700(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00571700(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint auStack_84 [30];
  
  *(uint *)(0x01E661B8 + 0x15ae98) = 1;
  iVar5 = 0;
  iVar6 = param_1;
  do {
    iVar4 = iVar5 + 1;
    puVar1 = (uint *)(iVar6 + 0x23f4);
    iVar6 = iVar6 + 4;
    auStack_84[iVar5] = *puVar1;
    iVar5 = iVar4;
  } while (iVar4 < 0x1e);
  iVar5 = FUN_004254b0();
  iVar6 = FUN_0046b960();
  if ((iVar6 == 0) && (_DAT_01c38aec < 0x4000)) {
    iVar6 = param_1;
    do {
      iVar4 = iVar6 + 4;
      *(uint *)(iVar6 + 0x23f4) = 0;
      iVar6 = iVar4;
    } while (iVar4 != param_1 + 0x78);
    *(uint *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x9acbc) * 4) = 1;
    uVar3 = DAT_0060b280;
    *(uint *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x9acc0) * 4) = 1;
    uVar2 = *(uint *)(0x01CB6900 + 0x210);
    *(uint *)(0x01CB6900 + 0x210) = 2;
    FUN_0046b8d0(uVar3,0);
    FUN_0046b8e0(DAT_0060b280,48000);
    if (iVar5 != 0) {
      FUN_004254b0(param_1);
    }
    *(uint *)(0x01CB6900 + 0x210) = uVar2;
    iVar4 = 0;
    iVar6 = param_1;
    do {
      puVar1 = auStack_84 + iVar4;
      iVar4 = iVar4 + 1;
      *(uint *)(iVar6 + 0x23f4) = *puVar1;
      iVar6 = iVar6 + 4;
    } while (iVar4 < 0x1e);
  }
  *(uint *)(0x01E661B8 + 0x15ae98) = 0;
  if (iVar5 != 0) {
    FUN_004089d0();
    FUN_005b0fe0(param_1 + 0x25648);
    FUN_005b0fe0(param_1 + 0x60178);
    FUN_00408a10();
    return iVar5;
  }
  return 0;
}
