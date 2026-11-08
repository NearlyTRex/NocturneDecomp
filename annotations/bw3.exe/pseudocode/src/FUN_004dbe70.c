// Name: FUN_004dbe70
// Address: 004dbe70
// Address Range: [[004dbe70, 004dc556]]
// Convention: unknown
// Signature: void FUN_004dbe70(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,float param_6,int param_7)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dbe70(uint param_1,int param_2,int param_3,int param_4,int param_5,float param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1078 [1004];
  char *pcVar6;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  uint local_9c;
  uint local_98;
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
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  uint local_18;
  float local_14;
  
  iVar1 = 0x01ED78C8;
  bVar5 = 0;
  if (param_2 != 0) {
    if (0x280 < DAT_005fba18) {
      param_3 = (param_3 * 0x280) / DAT_005fba18;
      param_4 = (param_4 * 0x1e0) / DAT_005fba1c;
      param_5 = (param_5 * 0x280) / DAT_005fba18;
    }
    *(uint *)(0x01ED78C8 + 0x15ae84) = 1;
    *(uint *)(iVar1 + 0x15ae88) = 0xffffb7d5;
    *(uint *)(iVar1 + 0x15ae8c) = 0xffffb7d5;
    *(uint *)(iVar1 + 0x15ae90) = 0x482b;
    *(uint *)(iVar1 + 0x15ae94) = 32000;
    _DAT_01d70a38 =
         _DAT_01d70a38 +
         ((int)((_DAT_01c5fad0 + (_DAT_01c5fad0 >> 0x1f) * -4) -
               (uint)((_DAT_01c5fad0 >> 0x1f) << 1 < 0)) >> 2);
    iVar1 = FUN_004e4d90(_DAT_01d70a38);
    iVar2 = FUN_004e4dd0(_DAT_01d70a38);
    *(uint *)(0x01ED78C8 + 0x15ae88) =
         (uint)((longlong)iVar1 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar1 * 0x482b) >> 0x20) << 0x10;
    *(uint *)(0x01ED78C8 + 0x15ae90) =
         (uint)((longlong)iVar2 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar2 * 0x482b) >> 0x20) << 0x10;
    FUN_0046d2f0(DAT_005f2afc,param_3,param_4,param_5,param_5);
    local_18 = FUN_004d9d20(param_2);
    iVar1 = FUN_004625a0(local_18);
    puVar3 = *(uint **)(iVar1 + 0x350);
    puVar4 = &stack0xffffff4c;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    local_3c = local_a8 - local_b4;
    local_38 = local_a4 - local_b0;
    local_34 = local_a0 - local_ac;
    local_84 = local_a8 - local_b4;
    *(uint *)((int)&stack0xffffff80 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffff84 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    local_48 = local_84 * _DAT_005c63a7;
    local_44 = local_80 * _DAT_005c63a7;
    local_40 = local_7c * _DAT_005c63a7;
    local_90 = local_84 * _DAT_005c63a7;
    (&stack0xffffff74)[(uint)bVar5 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffff78 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    if (((local_90 <= local_8c) || (local_14 = local_90, local_90 <= local_88)) &&
       (local_14 = local_88, local_88 < local_8c)) {
      local_14 = local_8c;
    }
    iVar1 = FUN_0040c790(param_2,"CLightstaff");
    if ((iVar1 != 0) || (iVar1 = FUN_0040c790(param_2,"CFirestaff"), iVar1 != 0)) {
      local_14 = local_14 * (float)_DAT_005c63af;
    }
    iVar1 = FUN_0040c790(param_2,&DAT_005c62e2);
    if (((iVar1 != 0) || (iVar1 = FUN_0040c790(param_2,"CKeyActor"), iVar1 != 0)) ||
       ((iVar1 = FUN_0040c790(param_2,"CExorcism"), iVar1 != 0 ||
        ((iVar1 = FUN_0040c790(param_2,&DAT_005c62fb), iVar1 != 0 ||
         (iVar1 = FUN_0040c790(param_2,"CBindEvil"), iVar1 != 0)))))) {
      local_14 = local_14 * (float)_DAT_005c63b7;
    }
    local_94 = -local_14 * (float)_DAT_005c63b7;
    local_9c = 0;
    local_98 = 0;
    local_1c = local_94;
    FUN_0046cb90(DAT_005f2afc,&stack0xffffff64);
    FUN_0046d090(DAT_005f2afc,0x42100000);
    FUN_0046cc10(DAT_005f2afc,&DAT_02cfd900);
    FUN_0046ce90(DAT_005f2afc,&DAT_02cfd900);
    local_78 = local_b4 + local_a8;
    local_74 = local_b0 + local_a4;
    local_70 = local_ac + local_a0;
    local_54 = local_b4 + local_a8;
    *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffff8c + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffff90 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    pcVar6 = "CLightstaff";
    _DAT_01c6e24c = 0;
    local_6c = local_54 * _DAT_005c63bf;
    local_68 = local_50 * _DAT_005c63bf;
    local_64 = local_4c * _DAT_005c63bf;
    local_60 = local_54 * _DAT_005c63bf;
    (&stack0xffffffa4)[(uint)bVar5 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffff98 + (uint)bVar5 * -8);
    iVar1 = param_2;
    *(uint *)(&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffff9c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    iVar1 = FUN_0040c790(iVar1,pcVar6);
    if ((iVar1 != 0) || (iVar1 = FUN_0040c790(param_2,"CFirestaff"), iVar1 != 0)) {
      local_5c = local_5c - local_a4 * _DAT_005c63a7;
    }
    iVar1 = FUN_0040c790(param_2,"CBurncross");
    if (((((iVar1 != 0) || (iVar1 = FUN_0040c790(param_2,"CFirestaff"), iVar1 != 0)) ||
         (iVar1 = FUN_0040c790(param_2,"CHeal"), iVar1 != 0)) ||
        ((iVar1 = FUN_0040c790(param_2,"CExorcism"), iVar1 != 0 ||
         (iVar1 = FUN_0040c790(param_2,"CHolycross"), iVar1 != 0)))) ||
       ((iVar1 = FUN_0040c790(param_2,"CLightstaff"), iVar1 != 0 ||
        (iVar1 = FUN_0040c790(param_2,&DAT_005c635e), iVar1 != 0)))) {
      param_6 = 0.0;
    }
    iVar1 = FUN_0040c790(param_2,"CBoxActor");
    if (iVar1 == 0) {
      local_2c = param_6;
      local_30 = 0.0;
      local_28 = 0.0;
    }
    else {
      iVar1 = FUN_0040c840(param_2,DAT_007e17b4);
      iVar2 = FUN_005a3d00(iVar1 + 0x1d0,"journal.kfm");
      if (iVar2 == 0) {
        local_30 = local_30 + _DAT_005c63c3;
        local_2c = local_2c + _DAT_005c63c7;
        local_28 = local_28 + _DAT_005c63c7;
      }
      else if (&stack0xffffffd0 != (float *)(iVar1 + 0x6d0)) {
        local_30 = *(float *)(iVar1 + 0x6d0);
        local_2c = *(float *)(iVar1 + 0x6d4);
        local_28 = *(float *)(iVar1 + 0x6d8);
      }
    }
    iVar1 = FUN_0040c790(param_2,"CBindEvil");
    if (iVar1 != 0) {
      local_30 = local_30 + _DAT_005c63cb;
      local_2c = 0.3926991;
    }
    iVar1 = FUN_0040c790(param_2,"CExorcism");
    if (iVar1 != 0) {
      local_30 = local_30 + _DAT_005c63c7;
    }
    iVar1 = FUN_0040c790(param_2,"CKeyActor");
    if (iVar1 != 0) {
      local_30 = local_30 + _DAT_005c63c3;
    }
    iVar1 = FUN_0040c840(param_2,_DAT_01d72c08);
    if (iVar1 != 0) {
      iVar2 = FUN_005a3260(iVar1 + 0x1d0,"axe1.kfm");
      if (iVar2 == 0) {
        local_30 = local_30 + _DAT_005c63cf;
        local_28 = local_28 + _DAT_005c63cf;
      }
      iVar1 = FUN_005a3260(iVar1 + 0x1d0,"ax.kfm");
      if (iVar1 == 0) {
        local_30 = local_30 + _DAT_005c63cf;
        local_28 = local_28 + _DAT_005c63cf;
      }
    }
    FUN_0046cf30(DAT_005f2afc,&stack0xffffffd0,0);
    FUN_0046cf30(DAT_005f2afc,&DAT_02cfd900,&stack0xffffffa0);
    if (param_7 < 65000) {
      FUN_0046d4c0(DAT_005f2afc,param_7);
      FUN_0046e120(DAT_005f2afc,1);
      FUN_00462540(local_18,0,0x2e7);
      FUN_0046e4e0(DAT_005f2afc);
    }
    else {
      FUN_00462540(local_18,0,0xffffffff);
    }
    thunk_FUN_004e5ef0(DAT_005f2afc);
    thunk_FUN_004e5ef0(DAT_005f2afc);
    thunk_FUN_004e6c50(DAT_005f2afc);
    *(uint *)(0x01ED78C8 + 0x15ae84) = 0;
  }
  return;
}
