// Name: FUN_00410670
// Address: 00410670
// Address Range: [[00410670, 00410873]]
// Convention: unknown
// Signature: int FUN_00410670(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00410670(int param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  uint auStack_58 [6];
  uint auStack_40 [6];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  float fStack_1c;
  int iStack_18;
  
  bVar6 = 0;
  if ((*(int *)(param_1 + 0x25738) == 0) && (*(int *)(param_1 + 0x10a64) == 2)) {
    return 0;
  }
  iVar3 = FUN_005035c0(param_1 + 0x2b4);
  uVar1 = *(uint *)(iVar3 + 0x24);
  fVar2 = *(float *)(param_1 + 700);
  fStack_1c = fVar2;
  iVar3 = FUN_005035c0(param_1 + 0x2b4);
  iVar3 = *(int *)(iVar3 + 100);
  if (uVar1 < 6) {
    if (uVar1 != 5) {
LAB_00410867:
      iStack_18 = 65000;
      goto LAB_004106e9;
    }
LAB_004106d3:
    fVar7 = ((float10)fVar2 * (float10)_DAT_005cb59f) / (float10)iVar3;
  }
  else {
    if (uVar1 < 7) goto LAB_004106d3;
    if (uVar1 != 7) goto LAB_00410867;
    fVar7 = (((float10)iVar3 - (float10)fStack_1c) * (float10)_DAT_005cb59f) / (float10)iVar3;
  }
  FUN_005b7ff0((float)iVar3);
  iStack_18 = (int)ROUND(fVar7);
LAB_004106e9:
  if (*(int *)(param_1 + 0x2573c) != 0) {
    FUN_00406da0((iStack_18 * 2) / 3);
    FUN_0046b2b0(DAT_0060b280,param_1 + 0x20);
    uStack_24 = DAT_007bc4dc;
    uStack_28 = 0;
    uStack_20 = 0;
    FUN_0046b350(DAT_0060b280,&uStack_28,0);
    FUN_0044fcc0(&DAT_007bc51c,0,0x23);
    thunk_FUN_004e9810(DAT_0060b280);
  }
  FUN_004089d0(param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar4 = auStack_58;
  puVar5 = auStack_40;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  iVar3 = FUN_0041a840(auStack_40);
  if (iVar3 != 0) {
    FUN_0046b8d0(DAT_0060b280,1);
    FUN_0046b8e0(DAT_0060b280,iStack_18);
    FUN_0046c540(DAT_0060b280,1);
    FUN_00547170(param_1 + 0x2b4,0xffffffff,0x2e7,1,0);
    FUN_0046c900(DAT_0060b280);
    if (_DAT_01d1cdc8 != 0) {
      FUN_005042e0(param_1 + 0x2b4,param_1);
    }
    FUN_0046b8d0(DAT_0060b280,0);
  }
  FUN_00408a10(param_1);
  return iVar3;
}
