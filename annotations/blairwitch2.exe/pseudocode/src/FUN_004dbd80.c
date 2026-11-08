// Name: FUN_004dbd80
// Address: 004dbd80
// Address Range: [[004dbd80, 004dc2b3]]
// Convention: unknown
// Signature: void FUN_004dbd80(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,int param_7)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dbd80(uint param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1084 [1007];
  char *pcVar6;
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
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
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
  uint local_54;
  uint local_50;
  float local_4c;
  float local_48;
  uint local_44;
  float local_40;
  float local_3c;
  float local_30;
  float local_2c;
  float local_28;
  uint local_1c;
  float local_18;
  float local_14;
  
  iVar1 = 0x01E661B8;
  bVar5 = 0;
  if (param_2 != 0) {
    if (0x280 < DAT_006141b8) {
      param_3 = (param_3 * 0x280) / DAT_006141b8;
      param_4 = (param_4 * 0x1e0) / DAT_006141bc;
      param_5 = (param_5 * 0x280) / DAT_006141b8;
    }
    *(uint *)(0x01E661B8 + 0x15ae84) = 1;
    *(uint *)(iVar1 + 0x15ae88) = 0xffffb7d5;
    *(uint *)(iVar1 + 0x15ae8c) = 0xffffb7d5;
    *(uint *)(iVar1 + 0x15ae90) = 0x482b;
    *(uint *)(iVar1 + 0x15ae94) = 32000;
    _DAT_01d02f44 =
         _DAT_01d02f44 +
         ((int)((_DAT_01c2a370 + (_DAT_01c2a370 >> 0x1f) * -4) -
               (uint)((_DAT_01c2a370 >> 0x1f) << 1 < 0)) >> 2);
    iVar1 = FUN_004e86b0(_DAT_01d02f44);
    iVar2 = FUN_004e86f0(_DAT_01d02f44);
    *(uint *)(0x01E661B8 + 0x15ae88) =
         (uint)((longlong)iVar1 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar1 * 0x482b) >> 0x20) << 0x10;
    *(uint *)(0x01E661B8 + 0x15ae90) =
         (uint)((longlong)iVar2 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar2 * 0x482b) >> 0x20) << 0x10;
    FUN_0046b710(DAT_0060b280,param_3,param_4,param_5,param_5);
    local_1c = FUN_004d9db0(param_2);
    iVar1 = FUN_0044fd20(local_1c);
    puVar3 = *(uint **)(iVar1 + 0x350);
    puVar4 = &stack0xffffff4c;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    local_9c = local_a8 - local_b4;
    local_98 = local_a4 - local_b0;
    local_94 = local_a0 - local_ac;
    local_6c = local_a8 - local_b4;
    *(uint *)((int)&stack0xffffff98 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffff68 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffff9c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffff6c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    local_78 = local_6c * _DAT_005db79a;
    local_74 = local_68 * _DAT_005db79a;
    local_70 = local_64 * _DAT_005db79a;
    local_84 = local_6c * _DAT_005db79a;
    *(uint *)((int)&stack0xffffff80 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffff8c + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffff84 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffff90 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    if (((local_84 <= local_80) || (local_14 = local_84, local_84 <= local_7c)) &&
       (local_14 = local_7c, local_7c < local_80)) {
      local_14 = local_80;
    }
    iVar1 = FUN_0040c840(param_2,&DAT_005db750);
    if ((iVar1 != 0) || (iVar1 = FUN_0040c840(param_2,"CKeyActor"), iVar1 != 0)) {
      local_14 = local_14 * (float)_DAT_005db7a2;
    }
    local_4c = -local_14 * (float)_DAT_005db7a2;
    local_54 = 0;
    local_50 = 0;
    local_18 = local_4c;
    FUN_0046afb0(DAT_0060b280,&stack0xffffffac);
    FUN_0046b4b0(DAT_0060b280,0x42100000);
    FUN_0046b030(DAT_0060b280,&DAT_0265370c);
    FUN_0046b2b0(DAT_0060b280,&DAT_0265370c);
    local_60 = local_b4 + local_a8;
    local_5c = local_b0 + local_a4;
    local_58 = local_ac + local_a0;
    local_90 = local_b4 + local_a8;
    *(uint *)((int)&stack0xffffff74 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffff78 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    pcVar6 = "CBoxActor";
    _DAT_01c38aec = 0;
    local_30 = local_90 * _DAT_005db7aa;
    local_2c = local_8c * _DAT_005db7aa;
    local_28 = local_88 * _DAT_005db7aa;
    local_3c = local_90 * _DAT_005db7aa;
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8);
    iVar1 = param_2;
    *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    iVar1 = FUN_0040c840(iVar1,pcVar6);
    if (iVar1 == 0) {
      local_44 = param_6;
      local_48 = 0.0;
      local_40 = 0.0;
    }
    else {
      iVar1 = FUN_0040c8f0(param_2,DAT_007bc9e8);
      if (&stack0xffffffb8 != (float *)(iVar1 + 0x7c8)) {
        local_48 = *(float *)(iVar1 + 0x7c8);
        local_44 = *(uint *)(iVar1 + 0x7cc);
        local_40 = *(float *)(iVar1 + 2000);
      }
    }
    iVar1 = FUN_0040c840(param_2,"CKeyActor");
    if (iVar1 != 0) {
      local_48 = local_48 + _DAT_005db7ae;
    }
    iVar1 = FUN_0040c8f0(param_2,_DAT_01d0557c);
    if (iVar1 != 0) {
      iVar2 = FUN_005b8130(iVar1 + 0x32c,"axe1.kfm");
      if (iVar2 == 0) {
        local_48 = local_48 + _DAT_005db7b6;
        local_40 = local_40 + _DAT_005db7b2;
      }
      iVar2 = FUN_005b8130(iVar1 + 0x32c,"ax2.kfm");
      if (iVar2 == 0) {
        local_48 = local_48 + _DAT_005db7ba;
        local_40 = local_40 + _DAT_005db7b6;
      }
      iVar2 = FUN_005b8130(iVar1 + 0x32c,"melee.kfm");
      if (iVar2 == 0) {
        local_48 = local_48 + _DAT_005db7ba;
        local_40 = local_40 + _DAT_005db7b2;
      }
      iVar1 = FUN_005b8130(iVar1 + 0x32c,"cross1.kfm");
      if (iVar1 == 0) {
        local_44 = 0x40490fdb;
      }
    }
    FUN_0046b350(DAT_0060b280,&stack0xffffffb8,0);
    FUN_0046b350(DAT_0060b280,&DAT_0265370c,&stack0xffffffc4);
    if (param_7 < 65000) {
      FUN_0046b8e0(DAT_0060b280,param_7);
      FUN_0046c540(DAT_0060b280,1);
      FUN_0044fcc0(local_1c,0,0x2e7);
      FUN_0046c900(DAT_0060b280);
    }
    else {
      FUN_0044fcc0(local_1c,0,0xffffffff);
    }
    thunk_FUN_004e9810(DAT_0060b280);
    thunk_FUN_004e9810(DAT_0060b280);
    thunk_FUN_004ea570(DAT_0060b280);
    *(uint *)(0x01E661B8 + 0x15ae84) = 0;
  }
  return;
}
