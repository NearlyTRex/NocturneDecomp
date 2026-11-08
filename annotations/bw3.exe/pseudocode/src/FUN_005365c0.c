// Name: FUN_005365c0
// Address: 005365c0
// Address Range: [[005365c0, 0053698a]]
// Convention: unknown
// Signature: void FUN_005365c0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005365c0(int param_1)

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
  iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  local_14 = 0x1d1e360;
  uVar3 = FUN_0054eac0(iVar5 + 0x158);
  iVar4 = FUN_00548090(uVar3,"@Bip01 Head" + 1,0);
  local_80 = 0x3ead0e56;
  local_18 = iVar5 + 0xfd8 + iVar4 * 0x30;
  local_7c = 0x3f400000;
  local_84 = 0;
  FUN_00583260(&stack0xffffff7c,local_18);
  puVar7 = &stack0xffffff88;
  local_78 = local_6c;
  *(uint *)((int)&stack0xffffff8c + (uint)bVar6 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff98 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffff9c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  FUN_00408b80(iVar5,puVar7);
  iVar4 = local_18;
  local_24 = local_54;
  local_20[(uint)bVar6 * -2] = *(float *)(&stack0xffffffb0 + (uint)bVar6 * -8);
  local_20[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       *(float *)(&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  FUN_00583b10(iVar4);
  local_2c = 0.0;
  local_28 = 0;
  local_60 = local_48;
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar6 * -8);
  *(float *)(&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       local_20[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -8];
  _DAT_01d2001c = 0;
  local_30 = local_60 + (float)_DAT_005d05c7;
  local_2c = local_5c + *(float *)(iVar5 + 0x34);
  if (&stack0x00000000 != (byte *)0x1d1e388) {
    _DAT_01d1e364 = local_24;
    _DAT_01d1e368 = local_20[0];
    _DAT_01d1e36c = local_20[1];
  }
  FUN_0045b550(local_14 + 0x10,&local_30);
  *(uint *)(local_14 + 0x140) = 0x42000000;
  *(uint *)(local_14 + 0x38) = 0x41800000;
  FUN_0045fab0(local_14,0x3f800000);
  uVar3 = _DAT_01c6cee8;
  if (&stack0x00000000 != (byte *)0x2038f74) {
    _DAT_02038f50 = local_24;
    _DAT_02038f54 = local_20[0];
    _DAT_02038f58 = local_20[1];
  }
  if (*(int *)(0x01D2130C + 0x23c) != 0) {
    _DAT_01c6cee8 = 0;
    FUN_0046cb90(DAT_005f2afc,&local_24);
    FUN_0046d090(DAT_005f2afc,0x42000000);
    FUN_0046cc10(DAT_005f2afc,&local_30);
    _DAT_0203b37c = 1;
    FUN_00560dd4();
    FUN_00533b80(0x01ED78C8,0x461c3f9a,0);
    _DAT_01c6cee8 = uVar3;
    _DAT_0203b37c = 0;
    return;
  }
  FUN_0045c530(local_14,0);
  iVar5 = local_14;
  FUN_0045d070(local_14);
  iVar4 = 0;
  DAT_00603b38 = 0;
  FUN_00533b80(param_1,*(uint *)(iVar5 + 0x140),0);
  DAT_00603b38 = 1;
  FUN_00539f30(param_1,0xffffffff);
  FUN_005346b0(param_1,1);
  FUN_00539f30(param_1,1);
  iVar5 = param_1;
  if (0 < *(int *)(param_1 + 0x15f6fc)) {
    do {
      (**(code **)(*(int *)(*(int *)(iVar5 + 0x15f700) + 0x154) + 0x10))(*(int *)(iVar5 + 0x15f700))
      ;
      FUN_0046d500(DAT_005f2afc,1);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x15f6fc));
  }
  FUN_004ce5b0(0x01D22E44);
  FUN_004a1ad0(0x01C73654);
  FUN_0045c7e0(local_14,1);
  local_3c = (int)ROUND(local_24 * _DAT_005e3bc0);
  local_38 = (int)ROUND(local_20[0] * _DAT_005e3bc0);
  local_34 = (int)ROUND(local_20[1] * _DAT_005e3bc0);
  FUN_005375c0(param_1,0,0,0,0,0);
  iVar5 = FUN_00537e20(param_1,&local_3c,0);
  iVar4 = FUN_004a4100(0x01C73654);
  if (DAT_005fba1c < 0xf1) {
    iVar1 = -*(int *)(local_14 + 0x1cc0);
    iVar2 = -*(int *)(local_14 + 0x1cc4);
  }
  else {
    iVar1 = *(int *)(local_14 + 0x1cc0) * -2;
    iVar2 = *(int *)(local_14 + 0x1cc4) * -2;
  }
  FUN_0045fb40(local_14,(DAT_005fba18 + iVar1) / 2,(DAT_005fba1c + iVar2) / 2,
               ((int)((iVar5 + (iVar5 >> 0x1f) * -0x80) - (uint)((iVar5 >> 0x1f) << 6 < 0)) >> 7) +
               iVar4 * 0x80 + *(int *)(0x02D0C1A0 + 0x24) * 0x8000);
  return;
}
