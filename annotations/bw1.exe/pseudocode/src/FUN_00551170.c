// Name: FUN_00551170
// Address: 00551170
// Address Range: [[00551170, 0055147a]]
// Convention: unknown
// Signature: void FUN_00551170(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00551170(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1070 [1012];
  uint *puVar5;
  float local_88;
  uint local_7c;
  uint local_70;
  uint local_6c;
  uint local_68;
  float local_64;
  float local_60;
  uint local_58;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  float afStack_30 [4];
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  bVar4 = 0;
  local_14 = 0x1ccc3e4;
  iVar3 = *(int *)(0x01E81C80 + 0x18);
  local_18 = 0;
  if (iVar3 != 0) {
    iVar1 = FUN_0040c550(iVar3,&DAT_005f0936);
    if (iVar1 != 0) {
      local_18 = 1;
    }
    uVar2 = FUN_00569f30(iVar3 + 0x158);
    iVar1 = FUN_005634f0(uVar2,"Bip01 Head",0);
    local_68 = 0x3f400000;
    local_1c = iVar3 + 0xfd8 + iVar1 * 0x30;
    local_70 = 0;
    local_6c = 0x3ead0e56;
    FUN_005b5080(&stack0xffffff90,local_1c);
    puVar5 = &stack0xffffff84;
    local_7c = local_58;
    *(uint *)((int)&stack0xffffff88 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffac + (uint)bVar4 * -8);
    *(float *)(&stack0xffffff8c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8];
    FUN_00408b40(iVar3,puVar5);
    local_4c = local_88;
    afStack_30[(uint)bVar4 * -2 + -6] = *(float *)(&stack0xffffff7c + (uint)bVar4 * -8);
    afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -5] =
         *(float *)(&stack0xffffff80 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    FUN_005b5930(local_1c);
    local_64 = local_34;
    (&stack0xffffffa0)[(uint)bVar4 * 0xfffffffe] = afStack_30[(uint)bVar4 * -2];
    *(float *)(&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    afStack_30[2] = local_64 + (float)_DAT_005f0946;
    local_20 = 0;
    afStack_30[3] = local_60 + *(float *)(iVar3 + 0x34);
    *(uint *)(local_14 + 0x1cbc) = 0;
    if ((float *)(local_14 + 4) != &local_4c) {
      *(float *)(local_14 + 4) = local_4c;
      *(float *)(local_14 + 8) = local_48;
      *(float *)(local_14 + 0xc) = local_44;
    }
    FUN_0045f3e0(local_14 + 0x10,afStack_30 + 2);
    *(uint *)(local_14 + 0x140) = 0x42280000;
    *(uint *)(local_14 + 0x38) = 0x41d00000;
    FUN_00465da0(local_14,0x3f800000);
    if (&stack0x00000000 != (byte *)0x1fe383c) {
      _DAT_01fe37f0 = local_4c;
      _DAT_01fe37f4 = local_48;
      _DAT_01fe37f8 = local_44;
    }
    FUN_00462820(local_14,0);
    DAT_00622c28 = 0;
    FUN_0054e3c0(param_1,*(uint *)(local_14 + 0x140),0);
    DAT_00622c28 = 1;
    FUN_005545a0(param_1,0xffffffff);
    FUN_0054eef0(param_1,1);
    FUN_005545a0(param_1,1);
    iVar1 = 0;
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 0x15f6fc)) {
      do {
        (**(code **)(*(int *)(*(int *)(iVar3 + 0x15f700) + 0x154) + 0x10))
                  (*(int *)(iVar3 + 0x15f700));
        FUN_00483e20(DAT_00612560,1);
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar1 < *(int *)(param_1 + 0x15f6fc));
    }
    FUN_004e5c50(0x01CD0E3C);
    FUN_004b5100(0x01C57074);
    FUN_00462ad0(local_14,1);
    local_40 = (int)ROUND(local_4c * _DAT_00605000);
    local_3c = (int)ROUND(local_48 * _DAT_00605000);
    local_38 = (int)ROUND(local_44 * _DAT_00605000);
    FUN_00551c30(param_1,0,0,0,0,0);
    if (DAT_0061b49c < 0xf1) {
      iVar3 = -*(int *)(local_14 + 0x1cc0);
      iVar1 = -*(int *)(local_14 + 0x1cc4);
    }
    else {
      iVar3 = *(int *)(local_14 + 0x1cc0) * -2;
      iVar1 = *(int *)(local_14 + 0x1cc4) * -2;
    }
    FUN_00466220(local_14,(DAT_0061b498 + iVar3) / 2,(DAT_0061b49c + iVar1) / 2,0,local_18);
    return;
  }
  return;
}
