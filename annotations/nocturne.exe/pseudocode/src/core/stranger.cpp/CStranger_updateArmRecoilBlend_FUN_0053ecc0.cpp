// Name: core_stranger.cpp_CStranger_updateArmRecoilBlend_FUN_0053ecc0
// Address: 0053ecc0
// Address Range: [[0053ecc0, 0053f20b]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_0053ecc0(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_0053ecc0(int param_1,float param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float local_f8;
  float local_f4;
  float fStack_f0;
  byte auStack_e4 [28];
  float fStack_c8;
  byte local_bc [12];
  byte local_b0 [12];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  byte local_80 [12];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  byte local_50 [12];
  byte local_44 [12];
  float local_38;
  float local_34;
  float local_30;
  float local_20;
  float local_1c;
  float local_18;
  
  if ((*(int *)(param_1 + 0x1fa94) == 0) || (*(int *)(*(int *)(param_1 + 0x1fa94) + 0x2d8) != 0)) {
    param_3 = 0;
  }
  iVar6 = 0;
  local_f8 = 0.0;
  if (param_3 != 0) {
    iVar7 = 0;
LAB_0053ecf1:
    do {
      if (*(int *)(0x01E57284 + 0x14ecb0) <= iVar6) goto LAB_0053ee02;
      iVar3 = *(int *)(iVar7 + 0x14ecb4 + 0x01E57284);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,&local_68,iVar3 + 0x20);
      if (((ABS(local_68) <= (float)1.5) && (ABS(local_64) <= (float)4))
         && ((0.0 <= local_60 &&
             ((((int)local_60 < 0x40c00001 && (iVar3 != param_1)) &&
              (iVar2 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3), iVar2 == 0)))))) {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(auStack_e4);
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x34))(iVar3,auStack_e4);
        if ((iVar3 == 2) &&
           (fStack_f0 = 1.0 - ((local_60 - fStack_c8) + (float)-1.5) *
                              (float)0.40000000000000002, local_f8 <= fStack_f0)) {
          if (fStack_f0 < 0.0) {
            fStack_f0 = 0.0;
          }
          local_f8 = fStack_f0;
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 4;
          goto LAB_0053ecf1;
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 4;
    } while( true );
  }
LAB_0053f147:
  if (1.0 < local_f8) {
    local_f8 = 1.0;
  }
  local_f4 = local_f8 - *(float *)(param_1 + 0x1faf4);
  if (0.0 <= local_f4) {
    if ((0.0 < local_f4) && (param_2 / 0.05f < local_f4)) {
      local_f4 = param_2 / 0.05f;
    }
  }
  else {
    fVar1 = -param_2 * (1.0 / 0.5f);
    if (local_f4 < fVar1) {
      local_f4 = fVar1;
    }
  }
  *(float *)(param_1 + 0x1faf4) = *(float *)(param_1 + 0x1faf4) + local_f4;
  return;
LAB_0053ee02:
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
  local_a4 = 0;
  local_a0 = 0;
  local_20 = 3.5;
  local_1c = 1.5;
  local_9c = 0x40600000;
  pfVar4 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                              (param_1,local_b0,&local_a4);
  if (&local_8c != pfVar4) {
    local_8c = *pfVar4;
    local_88 = pfVar4[1];
    local_84 = pfVar4[2];
  }
  uVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                    (param_1 + 0x150,local_bc,_DAT_02dc9f54);
  pfVar4 = (float *)core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                              (param_1,local_80,uVar5);
  if (&local_5c != pfVar4) {
    local_5c = *pfVar4;
    local_58 = pfVar4[1];
    local_54 = pfVar4[2];
  }
  local_74 = local_5c + local_8c;
  local_70 = local_58 + local_88;
  local_6c = local_54 + local_84;
  if (&local_98 != &local_74) {
    local_98 = local_74;
    local_94 = local_70;
    local_90 = local_6c;
  }
  local_18 = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                              (0x01E57284,&local_5c,&local_98);
  if (((0.0 <= local_18) && (local_18 < 1.0)) &&
     (fVar1 = 1.0 - (local_18 * local_20 - local_1c) / (local_20 - local_1c), local_f8 < fVar1)) {
    local_f8 = fVar1;
  }
  uVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                    (param_1 + 0x150,local_50,_DAT_02dc9f58);
  pfVar4 = (float *)core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                              (param_1,local_44,uVar5);
  if (&local_5c != pfVar4) {
    local_5c = *pfVar4;
    local_58 = pfVar4[1];
    local_54 = pfVar4[2];
  }
  local_38 = local_5c + local_8c;
  local_34 = local_58 + local_88;
  local_30 = local_54 + local_84;
  if (&local_98 != &local_38) {
    local_98 = local_38;
    local_94 = local_34;
    local_90 = local_30;
  }
  local_18 = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                              (0x01E57284,&local_5c,&local_98);
  if (((0.0 <= local_18) && (local_18 < 1.0)) &&
     (fVar1 = 1.0 - (local_18 * local_20 - local_1c) / (local_20 - local_1c), local_f8 < fVar1)) {
    local_f8 = fVar1;
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  goto LAB_0053f147;
}
