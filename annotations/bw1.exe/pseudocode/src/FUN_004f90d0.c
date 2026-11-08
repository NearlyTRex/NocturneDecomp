// Name: FUN_004f90d0
// Address: 004f90d0
// Address Range: [[004f90d0, 004f95a8]]
// Convention: unknown
// Signature: void FUN_004f90d0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,int param_7)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f90d0(uint param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1084 [1007];
  char *pcVar7;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  uint local_84;
  uint local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  uint local_18;
  float local_14;
  
  iVar2 = 0x01E82168;
  bVar6 = 0;
  if (param_2 != 0) {
    if (0x280 < DAT_0061b498) {
      param_3 = (param_3 * 0x280) / DAT_0061b498;
      param_4 = (param_4 * 0x1e0) / DAT_0061b49c;
      param_5 = (param_5 * 0x280) / DAT_0061b498;
    }
    *(uint *)(0x01E82168 + 0x15ae84) = 1;
    *(uint *)(iVar2 + 0x15ae88) = 0xffffb7d5;
    *(uint *)(iVar2 + 0x15ae8c) = 0xffffb7d5;
    *(uint *)(iVar2 + 0x15ae90) = 0x482b;
    *(uint *)(iVar2 + 0x15ae94) = 32000;
    _DAT_01d1bc60 =
         _DAT_01d1bc60 +
         ((int)((_DAT_01c43530 + (_DAT_01c43530 >> 0x1f) * -4) -
               (uint)((_DAT_01c43530 >> 0x1f) << 1 < 0)) >> 2);
    iVar2 = FUN_00507350(_DAT_01d1bc60);
    iVar3 = FUN_00507390(_DAT_01d1bc60);
    *(uint *)(0x01E82168 + 0x15ae88) =
         (uint)((longlong)iVar2 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar2 * 0x482b) >> 0x20) << 0x10;
    uVar1 = DAT_00612560;
    *(uint *)(0x01E82168 + 0x15ae90) =
         (uint)((longlong)iVar3 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar3 * 0x482b) >> 0x20) << 0x10;
    FUN_00483c10(uVar1,param_3,param_4,param_5,param_5);
    local_18 = FUN_004f60c0(param_2);
    iVar2 = FUN_00468900(local_18);
    puVar4 = *(uint **)(iVar2 + 0x350);
    puVar5 = &stack0xffffff4c;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    local_9c = local_a8 - local_b4;
    local_98 = local_a4 - local_b0;
    local_94 = local_a0 - local_ac;
    local_6c = local_a8 - local_b4;
    *(uint *)((int)&stack0xffffff98 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff68 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffff9c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff6c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    local_30 = local_6c * _DAT_005e65c0;
    local_2c = local_68 * _DAT_005e65c0;
    local_28 = local_64 * _DAT_005e65c0;
    local_60 = local_6c * _DAT_005e65c0;
    *(float *)((int)&stack0xffffffa4 + (uint)bVar6 * -8) =
         (&stack0xffffffd4)[(uint)bVar6 * 0xfffffffe];
    *(uint *)((int)&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    if (((local_60 <= local_5c) || (local_14 = local_60, local_60 <= local_58)) &&
       (local_14 = local_58, local_58 < local_5c)) {
      local_14 = local_5c;
    }
    iVar2 = FUN_0040c550(param_2,"CGun");
    if ((iVar2 != 0) || (iVar2 = FUN_0040c550(param_2,"CKeyActor"), iVar2 != 0)) {
      local_14 = local_14 * (float)_DAT_005e65c8;
    }
    local_7c = -local_14 * (float)_DAT_005e65c8;
    local_84 = 0;
    local_80 = 0;
    local_1c = local_7c;
    FUN_004834b0(DAT_00612560,&stack0xffffff7c);
    FUN_004839b0(DAT_00612560,0x42100000);
    FUN_00483530(DAT_00612560,&DAT_02c8af28);
    FUN_004837b0(DAT_00612560,&DAT_02c8af28);
    local_48 = local_b4 + local_a8;
    local_44 = local_b0 + local_a4;
    local_40 = local_ac + local_a0;
    local_54 = local_b4 + local_a8;
    *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffbc + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    pcVar7 = "CBoxActor";
    _DAT_01c51cac = 0;
    local_78 = local_54 * _DAT_005e65d0;
    local_74 = local_50 * _DAT_005e65d0;
    local_70 = local_4c * _DAT_005e65d0;
    local_90 = local_54 * _DAT_005e65d0;
    *(float *)((int)&stack0xffffff74 + (uint)bVar6 * 0xfffffffe * 4) =
         (&stack0xffffff8c)[(uint)bVar6 * 0xfffffffe];
    iVar2 = param_2;
    *(uint *)(&stack0xffffff78 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    iVar2 = FUN_0040c550(iVar2,pcVar7);
    if (iVar2 == 0) {
      local_38 = param_6;
      local_3c = 0.0;
      local_34 = 0.0;
    }
    else {
      iVar2 = FUN_0040c600(param_2,DAT_007c5094);
      if (&stack0xffffffc4 != (float *)(iVar2 + 0x66c)) {
        local_3c = *(float *)(iVar2 + 0x66c);
        local_38 = *(uint *)(iVar2 + 0x670);
        local_34 = *(float *)(iVar2 + 0x674);
      }
    }
    iVar2 = FUN_0040c550(param_2,"CKeyActor");
    if (iVar2 != 0) {
      local_3c = local_3c + _DAT_005e65d4;
    }
    iVar2 = FUN_0040c600(param_2,_DAT_01d1e2dc);
    if (iVar2 != 0) {
      iVar3 = FUN_005c04e0(iVar2 + 0x1d0,"axe1.kfm");
      if (iVar3 == 0) {
        local_3c = local_3c + _DAT_005e65d8;
        local_34 = local_34 + _DAT_005e65d8;
      }
      iVar2 = FUN_005c04e0(iVar2 + 0x1d0,"ax.kfm");
      if (iVar2 == 0) {
        local_3c = local_3c + _DAT_005e65d8;
        local_34 = local_34 + _DAT_005e65d8;
      }
    }
    FUN_00483850(DAT_00612560,&stack0xffffffc4,0);
    FUN_00483850(DAT_00612560,&DAT_02c8af28,&stack0xffffff70);
    if (param_7 < 65000) {
      FUN_00483de0(DAT_00612560,param_7);
      FUN_00484a40(DAT_00612560,1);
      FUN_004688a0(local_18,0,0x2e7);
      FUN_00484e00(DAT_00612560);
    }
    else {
      FUN_004688a0(local_18,0,0xffffffff);
    }
    thunk_FUN_005084b0(DAT_00612560);
    thunk_FUN_005084b0(DAT_00612560);
    thunk_FUN_00509210(DAT_00612560);
    *(uint *)(0x01E82168 + 0x15ae84) = 0;
  }
  return;
}
