// Name: core_mimic.cpp_FUN_004d4f30
// Address: 004d4f30
// Address Range: [[004d4f30, 004d5768]]
// Convention: unknown
// Signature: void core_mimic_cpp_FUN_004d4f30(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mimic_cpp_FUN_004d4f30(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  byte bVar10;
  byte local_1e4 [4];
  float local_1e0;
  int local_1b0;
  int local_1ac;
  uint local_1a8 [12];
  uint local_178 [12];
  byte local_148 [24];
  byte local_130 [12];
  float local_124;
  float local_120;
  float local_11c;
  byte local_118 [8];
  float local_110;
  byte local_10c [12];
  byte local_100 [3];
  byte local_fd;
  byte local_f4 [12];
  uint local_e8;
  uint local_e4;
  float local_e0;
  float local_dc;
  uint local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  byte local_c4 [3];
  byte local_c1;
  byte local_b8 [12];
  byte local_ac [3];
  byte local_a9;
  byte local_a0 [12];
  byte local_94 [4];
  uint local_90;
  float local_88 [2];
  float local_80;
  byte local_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  uint local_64;
  uint local_60;
  float local_5c;
  byte local_58 [12];
  uint local_4c;
  uint local_48;
  uint local_44;
  double local_38;
  float local_2c [2];
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  float local_14;
  
  bVar10 = 0;
  uVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                    (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x150,local_10c,0);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            (*(uint *)(_DAT_01cae0e8 * 4 + 0x1cae0d8),local_94,uVar2);
  local_90 = *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x24);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,local_88,local_94);
  local_1c = -1.0;
  local_70 = local_88[0];
  local_68 = local_80;
  local_18 = param_1 + 0x150;
  local_6c = 0.0;
  iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(local_18);
  uVar4 = *(uint *)(iVar3 + 0x24);
  if (uVar4 < 2) {
    if (uVar4 == 0) {
      iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3);
      if (((iVar3 == 0) && (*(int *)(0x01C775EC + 0x1d4) == 0)) &&
         (ABS(*(float *)(param_1 + 0x24) -
              *(float *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x24)) <= (float)15)
         ) {
        iVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_58,&local_70)
        ;
        local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(iVar3 + 4))
        ;
        if (SQRT(local_68 * local_68 + local_70 * local_70 + local_6c * local_6c) <
            (1.0 - ABS(local_14) * (float)0.63661977238577705) * (float)25 +
            (float)30) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
                    (local_18,_DAT_01cc9094);
          local_48 = 0x3f333333;
          puVar7 = local_1a8;
          puVar8 = local_178;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          }
          local_44 = 0x3e99999a;
          local_4c = 0;
          uVar2 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(local_b8,&local_4c,local_178);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_f4,uVar2);
          iVar3 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0
                            (0x01E57284,local_f4,local_94);
          if (iVar3 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(local_18,2,1);
            (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"gh-alrt[1,4].wav");
          }
        }
      }
      goto LAB_004d5024;
    }
LAB_004d4fed:
    iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3);
    if ((iVar3 != 0) || (*(int *)(0x01C775EC + 0x1d4) != 0)) {
      uVar2 = 0;
      goto LAB_004d5015;
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
              (*(uint *)(param_1 + 0x46920),local_118,param_1 + 0x20);
    pfVar5 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_148);
    local_dc = pfVar5[3] - *pfVar5;
    local_d4 = pfVar5[5] - pfVar5[2];
    local_d8 = 0;
    if (-local_110 <= SQRT(local_d4 * local_d4 + local_dc * local_dc)) {
      iVar3 = param_1 + 0x150;
      local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar3,1);
      *(float *)(param_1 + 0x242c) = local_14 * 4.242857f;
      local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar3,2);
      fVar1 = (float)1.57079632675;
      *(float *)(param_1 + 0x242c) = local_14 * 12.22222f + *(float *)(param_1 + 0x242c);
      local_e0 = 2.5f;
      *(float *)(param_1 + 0x2430) = param_2 * fVar1 * *(float *)(param_1 + 0xbc8c);
      *(float *)(param_1 + 0x242c) =
           *(float *)(param_1 + 0xbc8c) * param_2 * *(float *)(param_1 + 0x242c);
      iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      local_e8 = 0;
      local_e4 = 0;
      iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        (param_1,iVar6 + 0x20,iVar6 + 0xbcc0,&local_e8,0x3f800000,0x3e32b8c2);
      if (iVar6 < 0) {
        uVar2 = 0;
      }
      else {
        if (0 < iVar6) {
          core_mimic_cpp_CMimic_beginMorph_FUN_004d5d00(param_1);
          goto LAB_004d5024;
        }
        if (ABS(*(float *)(param_1 + 0x2410)) / (param_2 * *(float *)(param_1 + 0xbc8c)) <=
            (float)0.78539816337500001) {
          uVar2 = 2;
        }
        else {
          uVar2 = 1;
        }
      }
      goto LAB_004d501c;
    }
    core_mimic_cpp_CMimic_beginMorph_FUN_004d5d00(param_1);
  }
  else {
    if (uVar4 < 3) goto LAB_004d4fed;
    if (0xb < uVar4) {
      if (0xc < uVar4) {
        if (uVar4 != 0x13) goto LAB_004d5527;
        if (*(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2590) == 0) {
          local_20 = (float)core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                                      (local_18);
          local_38 = (double)local_20;
          local_14 = local_20;
          if (local_20 <= (float)2) {
            local_1c = 2.5f;
            if (1.0 <= local_38) {
              local_24 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                          (0x40e00000,0x41700000);
              local_14 = local_24;
              core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                        (local_18,local_ac,_DAT_01cc90b4);
              local_a9 = local_a9 ^ 0x80;
              core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_1e4);
              local_1e0 = local_24;
              local_1b0 = param_1;
              local_1ac = param_1;
              uVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                (param_1,local_130,local_ac,0x3e4ccccd,local_1e4);
              iVar3 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar2);
              if (iVar3 != 0) {
                (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"gh-hits[1,4].wav");
              }
            }
          }
          goto LAB_004d5024;
        }
        uVar2 = 0;
        iVar3 = local_18;
        goto LAB_004d501c;
      }
      if ((*(int *)(param_1 + 0xbc90) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        uVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (local_18,local_a0,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_7c,uVar2);
        core_gore_cpp_FUN_004b0480(INT_005b96c4,local_7c,0);
        *(uint *)(param_1 + 0xbc90) = 1;
      }
      goto LAB_004d5024;
    }
LAB_004d5527:
    uVar2 = 2;
LAB_004d5015:
    iVar3 = param_1 + 0x150;
LAB_004d501c:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,uVar2,1);
  }
LAB_004d5024:
  if (0.0 <= local_1c) {
    fVar1 = (float)3.1415926535000001;
    *(float *)(param_1 + 0x242c) = *(float *)(param_1 + 0xbc8c) * param_2;
    *(float *)(param_1 + 0x2430) = param_2 * fVar1 * *(float *)(param_1 + 0xbc8c);
    local_5c = local_1c;
    iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    local_64 = 0;
    local_60 = 0;
    iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                      (param_1,iVar3 + 0x20,iVar3 + 0xbcc0,&local_64,0x40400000,0x3f060a92);
    if (iVar3 != 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,2,1);
    }
  }
  local_2c[0] = param_2 * *(float *)(param_1 + 0xbc8c);
  iVar3 = param_1 + 0x150;
  while (0.0 < local_2c[0]) {
    uVar4 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(iVar3,local_2c);
    if (uVar4 != 0) {
      if (uVar4 < 2) {
        if (*(int *)(param_1 + 0x2408) != 0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                    (iVar3,local_c4,_DAT_01cc90b0);
          local_c1 = local_c1 ^ 0x80;
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x1c))(param_1,local_c4,0x3f800000);
        }
      }
      else if ((uVar4 == 7) && (*(int *)(param_1 + 0x2408) != 0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                  (iVar3,local_100,_DAT_01cc90b4);
        local_fd = local_fd ^ 0x80;
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x1c))(param_1,local_100,0x3f800000);
      }
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar3);
  uVar4 = *(uint *)(iVar3 + 0x24);
  if (((uVar4 == 0xc) || (uVar4 == 0)) && (*(int *)(param_1 + 0xdc) == 0)) goto LAB_004d56f2;
  *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
  local_d0 = *(float *)(param_1 + 0x2420) * param_2;
  local_cc = *(float *)(param_1 + 0x2424) * param_2;
  local_c8 = param_2 * *(float *)(param_1 + 0x2428);
  local_124 = local_d0 + *(float *)(param_1 + 0x2414);
  local_120 = local_cc + *(float *)(param_1 + 0x2418);
  local_11c = local_c8 + *(float *)(param_1 + 0x241c);
  if (uVar4 < 3) {
    if (uVar4 == 0) {
      bVar9 = true;
LAB_004d56aa:
      if (!bVar9) {
LAB_004d56ac:
        local_124 = local_124 + *(float *)(param_1 + 0x23a4);
        local_120 = local_120 + *(float *)(param_1 + 0x23a8);
        local_11c = local_11c + *(float *)(param_1 + 0x23ac);
      }
    }
  }
  else if (3 < uVar4) {
    if (uVar4 < 0x11) {
      bVar9 = uVar4 == 0x10;
      goto LAB_004d56aa;
    }
    if (0x11 < uVar4) {
      if (uVar4 < 0x14) goto LAB_004d56ac;
      if (0x14 < uVar4) {
        bVar9 = uVar4 == 0x15;
        goto LAB_004d56aa;
      }
    }
  }
  core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_124);
LAB_004d56f2:
  iVar3 = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(iVar3);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(iVar3);
  core_cloth_cpp_CCloth_process_FUN_00436e50
            (param_1 + 0xbdec,param_1 + 0x20,param_1 + 0x30,param_2,
             *(uint *)(param_1 + 0x240c),iVar3);
  return;
}
