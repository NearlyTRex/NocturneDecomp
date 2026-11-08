// Name: FUN_004101f0
// Address: 004101f0
// Address Range: [[004101f0, 004103f3]]
// Convention: unknown
// Signature: int FUN_004101f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004101f0(int param_1)

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
  if ((*(int *)(param_1 + 0x200a4) == 0) && (*(int *)(param_1 + 0xc1d4) == 2)) {
    return 0;
  }
  iVar3 = FUN_00524770(param_1 + 0x158);
  uVar1 = *(uint *)(iVar3 + 0x24);
  fVar2 = *(float *)(param_1 + 0x160);
  fStack_1c = fVar2;
  iVar3 = FUN_00524770(param_1 + 0x158);
  iVar3 = *(int *)(iVar3 + 100);
  if (uVar1 < 6) {
    if (uVar1 != 5) {
LAB_004103e7:
      iStack_18 = 65000;
      goto LAB_00410269;
    }
LAB_00410253:
    fVar7 = ((float10)fVar2 * (float10)_DAT_005d350a) / (float10)iVar3;
  }
  else {
    if (uVar1 < 7) goto LAB_00410253;
    if (uVar1 != 7) goto LAB_004103e7;
    fVar7 = (((float10)iVar3 - (float10)fStack_1c) * (float10)_DAT_005d350a) / (float10)iVar3;
  }
  FUN_005c03a0((float)iVar3);
  iStack_18 = (int)ROUND(fVar7);
LAB_00410269:
  if (*(int *)(param_1 + 0x200a8) != 0) {
    FUN_00406bd0((iStack_18 * 2) / 3);
    FUN_004837b0(DAT_00612560,param_1 + 0x20);
    uStack_24 = DAT_007c34dc;
    uStack_28 = 0;
    uStack_20 = 0;
    FUN_00483850(DAT_00612560,&uStack_28,0);
    FUN_004688a0(&DAT_007c351c,0,0x23);
    thunk_FUN_005084b0(DAT_00612560);
  }
  FUN_004087b0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar4 = auStack_58;
  puVar5 = auStack_40;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  iVar3 = FUN_004207b0(auStack_40);
  if (iVar3 != 0) {
    FUN_00483dd0(DAT_00612560,1);
    FUN_00483de0(DAT_00612560,iStack_18);
    FUN_00484a40(DAT_00612560,1);
    FUN_00569810(param_1 + 0x158,0xffffffff,0x2e7,1,0);
    FUN_00484e00(DAT_00612560);
    if (_DAT_01d39d34 != 0) {
      FUN_005254b0(param_1 + 0x158,param_1);
    }
    FUN_00483dd0(DAT_00612560,0);
  }
  FUN_004087f0(param_1);
  return iVar3;
}
