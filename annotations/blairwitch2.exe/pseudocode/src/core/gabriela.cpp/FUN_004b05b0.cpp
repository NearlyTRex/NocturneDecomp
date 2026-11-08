// Name: FUN_004b05b0
// Address: 004b05b0
// Address Range: [[004b05b0, 004b0a3a]]
// Convention: unknown
// Signature: undefined4 FUN_004b05b0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004b05b0(int param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_10b8 [1003];
  uint uVar6;
  float local_100 [3];
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc [2];
  uint local_c4;
  uint local_c0;
  uint local_bc;
  float fStack_b8;
  uint local_ac;
  uint local_a0;
  uint local_9c;
  uint local_98;
  float fStack_94;
  float afStack_90 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint auStack_60 [2];
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint auStack_48 [2];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  int local_2c;
  float local_28;
  float fStack_24;
  uint uStack_20;
  float fStack_1c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  *(uint *)(param_1 + 0x25608) = 0;
  FUN_005b7f5f(local_100,4,&DAT_005f22b0);
  local_a0 = 0xbda3d70a;
  local_9c = 0x3ee147ae;
  local_98 = 0x3ff5c28f;
  FUN_00408d70(param_1,&local_a0);
  local_40 = local_ac;
  *(uint *)((int)auStack_48 + ((uint)bVar5 * -2 + 3) * 4) =
       *(uint *)((int)local_cc + ((uint)bVar5 * -2 + 9) * 4);
  *(uint *)((int)auStack_48 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4) =
       *(uint *)((int)local_cc + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 10) * 4);
  if (&local_f4 != &local_40) {
    local_f4 = local_40;
    local_f0 = local_3c;
    local_ec = local_38;
  }
  local_54 = 0;
  local_58 = 0xbf266666;
  local_50 = 0x4007ae14;
  FUN_00408d70(param_1,&local_58);
  local_d0 = local_4c;
  *(uint *)((int)local_cc + (uint)bVar5 * 0xfffffff8) =
       *(uint *)((int)auStack_48 + (uint)bVar5 * 0xfffffff8);
  *(uint *)((int)local_cc + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
       *(uint *)((int)auStack_48 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
  if (&local_e8 != &local_d0) {
    local_e8 = local_d0;
    local_e4 = local_cc[0];
    local_e0 = local_cc[1];
  }
  local_70 = 0;
  local_6c = 0;
  local_68 = 0x40000000;
  FUN_00408d70(param_1,&local_70);
  local_c4 = local_64;
  *(uint *)((int)local_cc + ((uint)bVar5 * -2 + 3) * 4) =
       *(uint *)((int)auStack_60 + (uint)bVar5 * 0xfffffff8);
  *(uint *)((int)local_cc + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4) =
       *(uint *)((int)auStack_60 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
  if (&local_dc != &local_c4) {
    local_dc = local_c4;
    local_d8 = local_c0;
    local_d4 = local_bc;
  }
  local_28 = 4.0;
  local_14 = 0;
  local_2c = param_1 + 0x20;
  for (local_18 = 0; local_18 < *(int *)(0x01E661B8 + 0x14d164); local_18 = local_18 + 1) {
    iVar1 = *(int *)(0x01E661B8 + local_14 + 0x14d168);
    iVar4 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x9c))(iVar1);
    if (iVar4 == 0) {
      uStack_20 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x8c))(iVar1,param_1);
      if (uStack_20 < 2) {
        if ((uStack_20 == 1) && (*(int *)(param_1 + 0x2620) == 0)) {
          FUN_00408de0(iVar1,local_2c);
          fStack_7c = fStack_b8;
          *(uint *)((int)afStack_90 + ((uint)bVar5 * -2 + 6) * 4) =
               *(uint *)((int)local_cc + ((uint)bVar5 * -2 + 6) * 4);
          *(uint *)((int)afStack_90 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4) =
               *(uint *)((int)local_cc + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4);
          fStack_1c = SQRT(fStack_74 * fStack_74 + fStack_7c * fStack_7c + fStack_78 * fStack_78);
          if (fStack_1c <= 0.0) {
            fStack_78 = 0.0;
            fStack_7c = 0.0;
            fStack_74 = 0.0;
          }
          else {
            fVar2 = 1.0 / fStack_1c;
            fStack_7c = fStack_7c * fVar2;
            fStack_78 = fStack_78 * fVar2;
            fStack_74 = fStack_74 * fVar2;
          }
          if (fStack_74 <= (float)_DAT_005d70b3) goto LAB_004b07bf;
        }
      }
      else if (((uStack_20 < 3) || (uStack_20 == 3)) && (*(int *)(param_1 + 0x2620) == 0)) {
LAB_004b07bf:
        uVar3 = uStack_20;
        fStack_94 = *(float *)(iVar1 + 0x20) - *(float *)((int)local_100 + uStack_20 * 0xc);
        afStack_90[0] = *(float *)(iVar1 + 0x24) - local_100[uStack_20 * 3 + 1];
        afStack_90[1] = *(float *)(iVar1 + 0x28) - local_100[uStack_20 * 3 + 2];
        afStack_90[2] = fStack_94;
        *(uint *)((int)afStack_90 + ((uint)bVar5 * -2 + 3) * 4) =
             *(uint *)((int)afStack_90 + (uint)bVar5 * 0xfffffff8);
        *(uint *)((int)afStack_90 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4) =
             *(uint *)((int)afStack_90 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
        if (ABS(afStack_90[3]) <= (float)_DAT_005d70bb) {
          fStack_24 = afStack_90[2] * afStack_90[2] + fStack_80 * fStack_80;
          if (fStack_24 <= local_28) {
            *(int *)(param_1 + 0x25608) = iVar1;
            uStack_34 = uVar3;
            local_28 = fStack_24;
          }
        }
      }
    }
    local_14 = local_14 + 4;
  }
  if (*(int *)(param_1 + 0x25608) == 0) {
    return 0;
  }
  *(float *)(param_1 + 0x20) =
       (*(float *)(*(int *)(param_1 + 0x25608) + 0x20) -
       *(float *)((int)local_100 + uStack_34 * 0xc)) + *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x28) =
       (*(float *)(*(int *)(param_1 + 0x25608) + 0x28) - local_100[uStack_34 * 3 + 2]) +
       *(float *)(param_1 + 0x28);
  if (uStack_34 < 2) {
    if (uStack_34 != 1) {
LAB_004b0a06:
      _DAT_01d046a0 = "..\\core\\gabriela.cpp";
      _DAT_01d046a4 = 0x637;
      FUN_004e4500("Hell froze - invalid pickUpType: %d",uStack_34);
      return 1;
    }
    uVar6 = 0xe;
  }
  else if (uStack_34 < 3) {
    uVar6 = 0xf;
  }
  else {
    if (uStack_34 != 3) goto LAB_004b0a06;
    uVar6 = 4;
  }
  FUN_00503620(param_1 + 0x2b4,uVar6,1);
  return 1;
}
