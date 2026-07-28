// Name: core_mimic.cpp_FUN_004d4f30
// Address: 004d4f30
// Address Range: [[004d4f30, 004d5768]]
// Convention: unknown
// Signature: void core_mimic_cpp_FUN_004d4f30(CMimic *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mimic_cpp_FUN_004d4f30(CMimic *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  SMotion *pSVar5;
  int iVar6;
  uint uVar7;
  CBoundingBox3D *pCVar8;
  float *pfVar9;
  CMatrix3x4f *pCVar10;
  bool bVar11;
  byte bVar12;
  CDeformableModelInstance *pCVar13;
  float fVar14;
  SDamageInfo *damage_info;
  SDamageInfo local_1e4;
  float local_1a8 [12];
  CMatrix3x4f local_178;
  CBoundingBox3D local_148;
  CVector3f local_130;
  CVector3f local_124;
  CVector3f local_118;
  CVector3f local_10c;
  CVector3f local_100;
  CVector3f local_f4;
  CVector3f local_e8;
  float local_dc;
  uint local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  float local_70;
  float local_6c;
  float local_68;
  CVector3f local_64;
  byte local_58 [12];
  CVector3f local_4c;
  double local_38;
  float local_2c [2];
  float local_24;
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  float local_14;
  
  bVar12 = 0;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                     ((CDeformableModelInstance *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x150),
                      &local_10c,0);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            (*(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8),&local_94,pCVar4);
  local_94.y = *(float *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x24);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
            ((CDemonActor *)param_1,&local_88,&local_94);
  local_1c = -1.0;
  local_70 = local_88.x;
  local_68 = local_88.z;
  local_18 = &(param_1->base).base.model;
  local_6c = 0.0;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&local_18->motion_controller);
  uVar7 = pSVar5->state_index;
  if (uVar7 < 2) {
    if (uVar7 == 0) {
      iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      iVar6 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0x104))(iVar6);
      if (((iVar6 == 0) && (*(int *)(0x01C775EC + 0x1d4) == 0)) &&
         (ABS((param_1->base).base.base.location.position.y -
              *(float *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x24)) <= (float)15)
         ) {
        iVar6 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_58,&local_70)
        ;
        local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(iVar6 + 4))
        ;
        if (SQRT(local_68 * local_68 + local_70 * local_70 + local_6c * local_6c) <
            (1.0 - ABS(local_14) * (float)0.63661977238577705) * (float)25 +
            (float)30) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
                    (local_18,_DAT_01cc9094);
          local_4c.y = 0.7;
          pfVar9 = local_1a8;
          pCVar10 = &local_178;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            pCVar10->m[0].w = *pfVar9;
            pfVar9 = pfVar9 + (uint)bVar12 * -2 + 1;
            pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar12 * -2 + 1) * 4);
          }
          local_4c.z = 0.3;
          local_4c.x = 0.0;
          pCVar4 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_b8,&local_4c,&local_178);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    ((CDemonActor *)param_1,&local_f4,pCVar4);
          iVar6 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0
                            (0x01E57284,&local_f4,&local_94);
          if (iVar6 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&local_18->motion_controller,2,1);
            (*((param_1->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"gh-alrt[1,4].wav");
          }
        }
      }
      goto LAB_004d5024;
    }
LAB_004d4fed:
    iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    iVar6 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0x104))(iVar6);
    if ((iVar6 != 0) || (*(int *)(0x01C775EC + 0x1d4) != 0)) {
      iVar6 = 0;
      goto LAB_004d5015;
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
              ((CDemonActor *)(param_1->cloth).vertices[0x300].connected_indices[10],&local_118,
               &(param_1->base).base.base.location.position);
    pCVar8 = (*((param_1->base).base.base.vtable._ub)->getBoundingBox)
                       ((CDemonActor *)param_1,&local_148);
    local_dc = (pCVar8->max).x - (pCVar8->min).x;
    local_d4 = (pCVar8->max).z - (pCVar8->min).z;
    local_d8 = 0;
    if (-local_118.z <= SQRT(local_d4 * local_d4 + local_dc * local_dc)) {
      pCVar13 = &(param_1->base).base.model;
      local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                  (pCVar13,1);
      (param_1->base).base.walk_step_speed = local_14 * 4.242857f;
      local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                  (pCVar13,2);
      fVar14 = (param_1->base).speed;
      fVar1 = (param_1->base).speed;
      fVar3 = (float)1.57079632675;
      (param_1->base).base.walk_step_speed =
           local_14 * 12.22222f + (param_1->base).base.walk_step_speed;
      local_e8.z = 2.5f;
      fVar2 = (param_1->base).base.walk_step_speed;
      (param_1->base).base.turn_speed = param_2 * fVar3 * fVar1;
      (param_1->base).base.walk_step_speed = fVar14 * param_2 * fVar2;
      iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      local_e8.x = 0.0;
      local_e8.y = 0.0;
      iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        ((CCharacter *)param_1,(CVector3f *)(iVar6 + 0x20),
                         (CPathMap *)(iVar6 + 0xbcc0),&local_e8,1.0,0.17453292);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else {
        if (0 < iVar6) {
          core_mimic_cpp_CMimic_beginMorph_FUN_004d5d00(param_1);
          goto LAB_004d5024;
        }
        if (ABS((param_1->base).base.turn_angle_accumulator) / (param_2 * (param_1->base).speed) <=
            (float)0.78539816337500001) {
          iVar6 = 2;
        }
        else {
          iVar6 = 1;
        }
      }
      goto LAB_004d501c;
    }
    core_mimic_cpp_CMimic_beginMorph_FUN_004d5d00(param_1);
  }
  else {
    if (uVar7 < 3) goto LAB_004d4fed;
    if (0xb < uVar7) {
      if (0xc < uVar7) {
        if (uVar7 != 0x13) goto LAB_004d5527;
        if (*(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2590) == 0) {
          local_20 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                               (&local_18->motion_controller);
          local_38 = (double)local_20;
          local_14 = local_20;
          if (local_20 <= (float)2) {
            local_1c = 2.5f;
            if (1.0 <= local_38) {
              local_24 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                          (0x40e00000,0x41700000);
              local_14 = local_24;
              core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                        (local_18,&local_ac,_DAT_01cc90b4);
              local_ac.x._3_1_ = local_ac.x._3_1_ ^ 0x80;
              core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_1e4);
              local_1e4.damage_amount = local_24;
              damage_info = &local_1e4;
              fVar14 = 0.2;
              local_1e4.attacker = (CDemonActor *)param_1;
              local_1e4.wielder = (CDemonActor *)param_1;
              pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                 ((CDemonActor *)param_1,&local_130,&local_ac);
              iVar6 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0
                                (&param_1->base,pCVar4,fVar14,damage_info);
              if (iVar6 != 0) {
                (*((param_1->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)param_1,"gh-hits[1,4].wav");
              }
            }
          }
          goto LAB_004d5024;
        }
        iVar6 = 0;
        pCVar13 = local_18;
        goto LAB_004d501c;
      }
      if (((param_1->base).pool_me == 0) &&
         ((param_1->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                           (local_18,&local_a0,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_7c,pCVar4);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_7c,0);
        (param_1->base).pool_me = 1;
      }
      goto LAB_004d5024;
    }
LAB_004d5527:
    iVar6 = 2;
LAB_004d5015:
    pCVar13 = &(param_1->base).base.model;
LAB_004d501c:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&pCVar13->motion_controller,iVar6,1);
  }
LAB_004d5024:
  if (0.0 <= local_1c) {
    fVar14 = (param_1->base).speed;
    fVar1 = (float)3.1415926535000001;
    (param_1->base).base.walk_step_speed = fVar14 * param_2;
    (param_1->base).base.turn_speed = param_2 * fVar1 * fVar14;
    local_64.z = local_1c;
    iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    local_64.x = 0.0;
    local_64.y = 0.0;
    iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                      ((CCharacter *)param_1,(CVector3f *)(iVar6 + 0x20),
                       (CPathMap *)(iVar6 + 0xbcc0),&local_64,3.0,0.5235988);
    if (iVar6 != 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,2,1);
    }
  }
  local_2c[0] = param_2 * (param_1->base).speed;
  pCVar13 = &(param_1->base).base.model;
  while (0.0 < local_2c[0]) {
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar13->motion_controller,local_2c);
    if (uVar7 != 0) {
      if (uVar7 < 2) {
        if ((param_1->base).base.is_on_ground != 0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                    (pCVar13,&local_c4,_DAT_01cc90b0);
          local_c4.x._3_1_ = local_c4.x._3_1_ ^ 0x80;
          (*((param_1->base).base.base.vtable._ub)->processFootstepAtOffset)
                    ((CDemonActor *)param_1,&local_c4,1.0);
        }
      }
      else if ((uVar7 == 7) && ((param_1->base).base.is_on_ground != 0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                  (pCVar13,&local_100,_DAT_01cc90b4);
        local_100.x._3_1_ = local_100.x._3_1_ ^ 0x80;
        (*((param_1->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)param_1,&local_100,1.0);
      }
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar13->motion_controller);
  uVar7 = pSVar5->state_index;
  if (((uVar7 == 0xc) || (uVar7 == 0)) &&
     ((param_1->base).base.base.standing_platform == (CPlatform *)0x0)) goto LAB_004d56f2;
  (param_1->base).base.velocity.y =
       (param_1->base).base.velocity.y - param_2 * (float)32;
  local_d0 = (param_1->base).base.velocity.x * param_2;
  local_cc = (param_1->base).base.velocity.y * param_2;
  local_c8 = param_2 * (param_1->base).base.velocity.z;
  local_124.x = local_d0 + (param_1->base).base.position_delta.x;
  local_124.y = local_cc + (param_1->base).base.position_delta.y;
  local_124.z = local_c8 + (param_1->base).base.position_delta.z;
  if (uVar7 < 3) {
    if (uVar7 == 0) {
      bVar11 = true;
LAB_004d56aa:
      if (!bVar11) {
LAB_004d56ac:
        local_124.x = local_124.x + (param_1->base).base.model.accumulated_root_motion.x;
        local_124.y = local_124.y + (param_1->base).base.model.accumulated_root_motion.y;
        local_124.z = local_124.z + (param_1->base).base.model.accumulated_root_motion.z;
      }
    }
  }
  else if (3 < uVar7) {
    if (uVar7 < 0x11) {
      bVar11 = uVar7 == 0x10;
      goto LAB_004d56aa;
    }
    if (0x11 < uVar7) {
      if (uVar7 < 0x14) goto LAB_004d56ac;
      if (0x14 < uVar7) {
        bVar11 = uVar7 == 0x15;
        goto LAB_004d56aa;
      }
    }
  }
  core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&local_124);
LAB_004d56f2:
  pCVar13 = &(param_1->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCVar13);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(pCVar13);
  core_cloth_cpp_CCloth_process_FUN_00436e50
            (&param_1->cloth,&(param_1->base).base.base.location.position,
             &(param_1->base).base.base.orient.vec,param_2,
             (param_1->base).base.closest_distance_threshold,pCVar13);
  return;
}
