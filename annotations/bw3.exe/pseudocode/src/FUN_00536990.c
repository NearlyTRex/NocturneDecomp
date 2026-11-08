// Name: FUN_00536990
// Address: 00536990
// Address Range: [[00536990, 00536c86]]
// Convention: unknown
// Signature: void FUN_00536990(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00536990(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float afStackY_106c [1012];
  uint *puVar5;
  float local_84;
  float local_80;
  float local_7c;
  uint local_78;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  float afStack_50 [6];
  float local_38 [5];
  float local_24;
  int local_18;
  int local_14;
  
  bVar4 = 0;
  iVar3 = *(int *)(0x01ED73E0 + 0x18);
  local_14 = 0x1d1e360;
  if (iVar3 != 0) {
    uVar1 = FUN_0054eac0(iVar3 + 0x158);
    iVar2 = FUN_00548090(uVar1,"?Bip01 Head" + 1,0);
    local_5c = 0x3ead0e56;
    local_18 = iVar3 + 0xfd8 + iVar2 * 0x30;
    local_58 = 0x3f400000;
    local_60 = 0;
    FUN_00583260(&local_60,local_18);
    puVar5 = &stack0xffffff88;
    local_78 = local_54;
    *(float *)((int)&stack0xffffff8c + (uint)bVar4 * 0xfffffffe * 4) = afStack_50[(uint)bVar4 * -2];
    afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8] =
         afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    FUN_00408b80(iVar3,puVar5);
    iVar2 = local_18;
    local_84 = local_24;
    *(float *)((int)&stack0xffffff80 + (uint)bVar4 * -8) = local_38[(uint)bVar4 * -2 + 6];
    *(float *)((int)&stack0xffffff84 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         local_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    FUN_00583b10(iVar2);
    afStack_50[3] = 0.0;
    afStack_50[4] = 0.0;
    afStack_50[5] = local_38[2];
    local_38[(uint)bVar4 * -2] = local_38[(uint)bVar4 * -2 + 3];
    local_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    _DAT_01d2001c = 0;
    afStack_50[2] = afStack_50[5] + (float)_DAT_005d05df;
    afStack_50[3] = local_38[0] + *(float *)(iVar3 + 0x34);
    if (&stack0x00000000 != (byte *)0x1d1e3e8) {
      _DAT_01d1e364 = local_84;
      _DAT_01d1e368 = local_80;
      _DAT_01d1e36c = local_7c;
    }
    FUN_0045b550(local_14 + 0x10,afStack_50 + 2);
    *(uint *)(local_14 + 0x140) = 0x42280000;
    *(uint *)(local_14 + 0x38) = 0x41d00000;
    FUN_0045fab0(local_14,0x3f800000);
    if (&stack0x00000000 != (byte *)0x2038fd4) {
      _DAT_02038f50 = local_84;
      _DAT_02038f54 = local_80;
      _DAT_02038f58 = local_7c;
    }
    FUN_0045c530(local_14,0);
    DAT_00603b38 = 0;
    FUN_00533b80(param_1,*(uint *)(local_14 + 0x140),0);
    DAT_00603b38 = 1;
    FUN_00539f30(param_1,0xffffffff);
    FUN_005346b0(param_1,1);
    FUN_00539f30(param_1,1);
    iVar2 = 0;
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 0x15f6fc)) {
      do {
        (**(code **)(*(int *)(*(int *)(iVar3 + 0x15f700) + 0x154) + 0x10))
                  (*(int *)(iVar3 + 0x15f700));
        FUN_0046d500(DAT_005f2afc,1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(int *)(param_1 + 0x15f6fc));
    }
    FUN_004ce5b0(0x01D22E44);
    FUN_004a1ad0(0x01C73654);
    FUN_0045c7e0(local_14,1);
    local_6c = (int)ROUND(local_84 * _DAT_005e3bc0);
    local_68 = (int)ROUND(local_80 * _DAT_005e3bc0);
    local_64 = (int)ROUND(local_7c * _DAT_005e3bc0);
    FUN_005375c0(param_1,0,0,0,0,0);
    if (DAT_005fba1c < 0xf1) {
      iVar3 = -*(int *)(local_14 + 0x1cc0);
      iVar2 = -*(int *)(local_14 + 0x1cc4);
    }
    else {
      iVar3 = *(int *)(local_14 + 0x1cc0) * -2;
      iVar2 = *(int *)(local_14 + 0x1cc4) * -2;
    }
    FUN_0045ff30(local_14,(DAT_005fba18 + iVar3) / 2,(DAT_005fba1c + iVar2) / 2,0);
    return;
  }
  return;
}
