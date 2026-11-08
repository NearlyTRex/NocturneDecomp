// Name: FUN_00550da0
// Address: 00550da0
// Address Range: [[00550da0, 0055116a]]
// Convention: unknown
// Signature: void FUN_00550da0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00550da0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1060 [1009];
  uint *puVar7;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_6c;
  float local_60;
  float local_5c;
  float local_54;
  float local_48;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  uint local_28;
  float local_24;
  float local_20 [2];
  int local_18;
  int local_14;
  
  bVar6 = 0;
  iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_14 = 0x1ccc3e4;
  uVar3 = FUN_00569f30(iVar5 + 0x158);
  iVar4 = FUN_005634f0(uVar3,"@Bip01 Head" + 1,0);
  local_80 = 0x3ead0e56;
  local_18 = iVar5 + 0xfd8 + iVar4 * 0x30;
  local_7c = 0x3f400000;
  local_84 = 0;
  FUN_005b5080(&stack0xffffff7c,local_18);
  puVar7 = &stack0xffffff88;
  local_78 = local_6c;
  *(uint *)((int)&stack0xffffff8c + (uint)bVar6 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff98 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffff9c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  FUN_00408b40(iVar5,puVar7);
  iVar4 = local_18;
  local_24 = local_54;
  local_20[(uint)bVar6 * -2] = *(float *)(&stack0xffffffb0 + (uint)bVar6 * -8);
  local_20[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       *(float *)(&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  FUN_005b5930(iVar4);
  local_2c = 0.0;
  local_28 = 0;
  local_60 = local_48;
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar6 * -8);
  *(float *)(&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       local_20[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -8];
  _DAT_01cce0a0 = 0;
  local_30 = local_60 + (float)_DAT_005f092e;
  local_2c = local_5c + *(float *)(iVar5 + 0x34);
  if (&stack0x00000000 != (byte *)0x1ccc40c) {
    _DAT_01ccc3e8 = local_24;
    _DAT_01ccc3ec = local_20[0];
    _DAT_01ccc3f0 = local_20[1];
  }
  FUN_0045f3e0(local_14 + 0x10,&local_30);
  *(uint *)(local_14 + 0x140) = 0x42000000;
  *(uint *)(local_14 + 0x38) = 0x41800000;
  FUN_00465da0(local_14,0x3f800000);
  uVar3 = _DAT_01c50948;
  if (&stack0x00000000 != (byte *)0x1fe3814) {
    _DAT_01fe37f0 = local_24;
    _DAT_01fe37f4 = local_20[0];
    _DAT_01fe37f8 = local_20[1];
  }
  if (*(int *)(0x01CCF390 + 0x234) != 0) {
    _DAT_01c50948 = 0;
    FUN_004834b0(DAT_00612560,&local_24);
    FUN_004839b0(DAT_00612560,0x42000000);
    FUN_00483530(DAT_00612560,&local_30);
    _DAT_01fe5c1c = 1;
    FUN_0057dca4();
    FUN_0054e3c0(0x01E82168,0x461c3f9a,0);
    _DAT_01c50948 = uVar3;
    _DAT_01fe5c1c = 0;
    return;
  }
  FUN_00462820(local_14,0);
  iVar5 = local_14;
  FUN_00463360(local_14);
  iVar4 = 0;
  DAT_00622c28 = 0;
  FUN_0054e3c0(param_1,*(uint *)(iVar5 + 0x140),0);
  DAT_00622c28 = 1;
  FUN_005545a0(param_1,0xffffffff);
  FUN_0054eef0(param_1,1);
  FUN_005545a0(param_1,1);
  iVar5 = param_1;
  if (0 < *(int *)(param_1 + 0x15f6fc)) {
    do {
      (**(code **)(*(int *)(*(int *)(iVar5 + 0x15f700) + 0x154) + 0x10))(*(int *)(iVar5 + 0x15f700))
      ;
      FUN_00483e20(DAT_00612560,1);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x15f6fc));
  }
  FUN_004e5c50(0x01CD0E3C);
  FUN_004b5100(0x01C57074);
  FUN_00462ad0(local_14,1);
  local_3c = (int)ROUND(local_24 * _DAT_00605000);
  local_38 = (int)ROUND(local_20[0] * _DAT_00605000);
  local_34 = (int)ROUND(local_20[1] * _DAT_00605000);
  FUN_00551c30(param_1,0,0,0,0,0);
  iVar5 = FUN_00552490(param_1,&local_3c,0);
  iVar4 = FUN_004b7440(0x01C57074);
  if (DAT_0061b49c < 0xf1) {
    iVar1 = -*(int *)(local_14 + 0x1cc0);
    iVar2 = -*(int *)(local_14 + 0x1cc4);
  }
  else {
    iVar1 = *(int *)(local_14 + 0x1cc0) * -2;
    iVar2 = *(int *)(local_14 + 0x1cc4) * -2;
  }
  FUN_00465e30(local_14,(DAT_0061b498 + iVar1) / 2,(DAT_0061b49c + iVar2) / 2,
               ((int)((iVar5 + (iVar5 >> 0x1f) * -0x80) - (uint)((iVar5 >> 0x1f) << 6 < 0)) >> 7) +
               iVar4 * 0x80 + *(int *)(0x02C997C0 + 0x24) * 0x8000);
  return;
}
