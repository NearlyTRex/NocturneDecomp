// Name: core_vampboss.cpp_CVampireBoss_process_FUN_0054c690
// Address: 0054c690
// Address Range: [[0054c690, 0054d89b]]
// Convention: unknown
// Signature: void core_vampboss_cpp_CVampireBoss_process_FUN_0054c690(CVampireBoss *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_vampboss_cpp_CVampireBoss_process_FUN_0054c690(CVampireBoss *param_1,float param_2)

{
  CVector3f *pCVar1;
  CLocation *pCVar2;
  UOrientationVector *euler;
  CBoundingBox3D *pCVar3;
  CDeformableModelInstance *pCVar4;
  float fVar5;
  CEventList *pCVar6;
  CGame *pCVar7;
  int iVar8;
  SMotion *pSVar9;
  CBoundingBox3D *pCVar10;
  uint uVar11;
  CCharacter *this_ptr;
  CVampireBoss *pCVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  int iVar22;
  SDamageInfo local_244;
  byte auStack_208 [4];
  float fStack_204;
  CBoundingBox3D local_1cc;
  byte local_1b4 [48];
  CBoundingBox3D local_184;
  CBoundingBox3D local_16c;
  CBoundingBox3D local_154;
  float local_13c;
  float local_138;
  float local_134;
  byte local_130 [16];
  float local_120;
  float local_114;
  byte auStack_108 [12];
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  char local_ec [4];
  float local_e8;
  float local_e4;
  float local_e0;
  byte local_dc [12];
  uint local_d0 [2];
  float local_c8;
  CDemonActor *pCStack_c0;
  UActorVTable UStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_78 [2];
  float fStack_70;
  float local_64;
  float local_60;
  CVector3f *local_5c;
  CVector3f *local_54;
  CVector3f *local_50;
  CVector3f *local_4c;
  CVector3f *local_48;
  float local_40;
  CVector3f *local_3c;
  CVector3f *local_34;
  CDeformableModelInstance *local_30;
  float fStack_2c;
  CVector3f *local_28;
  float local_20;
  float local_1c;
  CVector3f *local_18;
  
  pCVar12 = param_1;
  do {
    if ((pCVar12->skirt_cloth).vertices[0x275].connected_indices[9] == 0) {
      PTR_01cc4800 = "..\\core\\vampboss.cpp";
      INT_01cc4804 = 0xcf;
      core_main_c_FUN_004c8440("CVampireBoss::process - Need 4 waypoints");
    }
    pCVar12 = (CVampireBoss *)((pCVar12->base).base.base.actor_name + 4);
  } while (pCVar12 != (CVampireBoss *)((param_1->base).base.base.actor_name + 0x10));
  iVar8 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar8 == 0) {
    return;
  }
  iVar8 = (param_1->skirt_cloth).vertices[0x26a].connected_indices[3];
  if (iVar8 == 2) {
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0(param_1,param_2);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
              (&param_1->model);
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (&param_1->wing_cloth,&(param_1->base).base.base.location.position,
               &(param_1->base).base.base.orient.vec,param_2,
               (param_1->base).base.closest_distance_threshold,&param_1->model);
    if ((param_1->base).base.hit_points < (float)25) {
      iVar8 = (param_1->skirt_cloth).vertices[0x275].connected_indices[7];
      (param_1->base).base.hit_points = 24.999;
      if ((iVar8 != 2) && (iVar8 != 3)) {
        core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_0054e230(param_1);
        (param_1->skirt_cloth).vertices[0x275].connected_indices[7] = 2;
        (param_1->skirt_cloth).vertices[0x275].connected_indices[4] = 0x40a00000;
      }
    }
    iVar8 = (param_1->skirt_cloth).vertices[0x275].connected_indices[7];
    if ((iVar8 != 2) && (iVar8 != 3)) {
      iVar8 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      local_f4 = (param_1->base).base.base.location.position.x - *(float *)(iVar8 + 0x20);
      local_f0 = (param_1->base).base.base.location.position.y - *(float *)(iVar8 + 0x24);
      local_ec = (char  [4])
                 ((param_1->base).base.base.location.position.z - *(float *)(iVar8 + 0x28));
      fVar21 = SQRT(local_f4 * local_f4 + (float)local_ec * (float)local_ec);
      if (fVar21 < (float)5) {
        (param_1->skirt_cloth).vertices[0x275].connected_indices[7] = 1;
        local_18 = (CVector3f *)(uint)(local_f0 < (float)10);
        if ((float10)0 != ABS((float10)(int)local_18)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_244);
          local_244.damage_amount = 10.0;
          local_244.attacker = (CDemonActor *)param_1;
          iVar8 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          local_244.wielder = (CDemonActor *)param_1;
          (**(code **)(*(int *)(iVar8 + 0x14c) + 0x100))(iVar8,&local_244);
        }
      }
      if ((float)40 < fVar21) {
        (param_1->skirt_cloth).vertices[0x275].connected_indices[3] = 0x40a00000;
        (param_1->skirt_cloth).vertices[0x275].connected_indices[5] = 0;
        (param_1->skirt_cloth).vertices[0x275].connected_indices[7] = 0;
      }
      if (((param_1->skirt_cloth).vertices[0x275].connected_indices[7] == 0) &&
         (fVar5 = (float)(param_1->skirt_cloth).vertices[0x275].connected_indices[3] - param_2,
         (param_1->skirt_cloth).vertices[0x275].connected_indices[3] = (int)fVar5, fVar5 < 0.0)) {
        (param_1->skirt_cloth).vertices[0x275].connected_indices[7] = 1;
        (param_1->skirt_cloth).vertices[0x275].connected_indices[3] = 0;
      }
      pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&(param_1->model).motion_controller);
      if ((((pSVar9->state_index == 0) &&
           ((param_1->skirt_cloth).vertices[0x275].connected_indices[7] == 0)) &&
          (fVar21 < (float)24)) &&
         ((param_1->skirt_cloth).vertices[0x275].connected_indices[5] == 0)) {
        (param_1->skirt_cloth).vertices[0x275].connected_indices[5] = 1;
        iVar8 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
        if (iVar8 == 0) {
          iVar8 = 2;
        }
        else {
          iVar8 = 1;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->model).motion_controller,iVar8,1);
      }
    }
    iVar8 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    if (&local_b8 != (float *)(iVar8 + 0x20)) {
      local_b8 = *(float *)(iVar8 + 0x20);
      local_b4 = *(float *)(iVar8 + 0x24);
      local_b0 = *(float *)(iVar8 + 0x28);
    }
    iVar8 = (param_1->skirt_cloth).vertices[0x275].connected_indices[7];
    if (iVar8 == 2) {
      iVar8 = (param_1->skirt_cloth).vertices[0x275].connected_indices[8];
      (param_1->skirt_cloth).vertices[0x275].connected_indices[4] =
           (int)((float)(param_1->skirt_cloth).vertices[0x275].connected_indices[4] - param_2);
      iVar8 = *(int *)((int)param_1 + (4 - iVar8) * 4 + 0xbedb0);
      if (&local_b8 != (float *)(iVar8 + 0x20)) {
        local_b8 = *(float *)(iVar8 + 0x20);
        local_b4 = *(float *)(iVar8 + 0x24);
        local_b0 = *(float *)(iVar8 + 0x28);
      }
      if (((float)(param_1->skirt_cloth).vertices[0x275].connected_indices[4] <= 0.0) ||
         (fVar21 = local_b8 - (param_1->base).base.base.location.position.x,
         fVar5 = local_b0 - (param_1->base).base.base.location.position.z,
         SQRT(fVar5 * fVar5 + fVar21 * fVar21) < (float)6)) {
        (param_1->skirt_cloth).vertices[0x275].connected_indices[4] = 0x40a00000;
        (param_1->skirt_cloth).vertices[0x275].connected_indices[7] = 3;
      }
    }
    else if (iVar8 == 3) {
      iVar8 = (param_1->skirt_cloth).vertices[0x275].connected_indices
              [(param_1->skirt_cloth).vertices[0x275].connected_indices[8] + 9];
      if (&local_b8 != (float *)(iVar8 + 0x20)) {
        local_b8 = *(float *)(iVar8 + 0x20);
        local_b4 = *(float *)(iVar8 + 0x24);
        local_b0 = *(float *)(iVar8 + 0x28);
      }
      fVar21 = (float)(param_1->skirt_cloth).vertices[0x275].connected_indices[4] - param_2;
      (param_1->skirt_cloth).vertices[0x275].connected_indices[4] = (int)fVar21;
      if ((fVar21 <= 0.0) ||
         (fVar21 = local_b8 - (param_1->base).base.base.location.position.x,
         fVar5 = local_b0 - (param_1->base).base.base.location.position.z,
         SQRT(fVar5 * fVar5 + fVar21 * fVar21) < (float)4)) {
        core_vampboss_cpp_CVampireBoss_transformToHuman_FUN_0054e1e0(param_1);
      }
    }
    local_b4 = local_b4 + 4.0f;
    local_e8 = local_b8 - (param_1->base).base.base.location.position.x;
    local_e4 = local_b4 - (param_1->base).base.base.location.position.y;
    fVar13 = (float10)local_b0 - (float10)(param_1->base).base.base.location.position.z;
    local_e0 = (float)fVar13;
    uVar20 = 0x54ca26;
    atan2((float10)local_e8,fVar13);
    fVar13 = SQRT((float10)(float)local_ec * (float10)(float)local_ec +
                  (float10)local_e4 * (float10)local_e4);
    uVar19 = 0x54ca48;
    fVar14 = atan2((float10)local_e8,fVar13);
    fStack_70 = 1.2;
    local_4c = (CVector3f *)0x41a00000;
    local_48 = (CVector3f *)(float)fVar13;
    local_40 = (float)-fVar14;
    if ((param_1->skirt_cloth).vertices[0x275].connected_indices[7] == 1) {
      local_48 = (CVector3f *)-(float)local_48;
      local_40 = -local_40;
    }
    local_20 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                ((float)local_48 - (param_1->base).base.base.orient.vec.y,uVar19,
                                 uVar20);
    fVar21 = local_20 * param_2 * fStack_70;
    if (ABS(fVar21) <= ABS(local_20)) {
      (param_1->base).base.base.orient.vec.y = (param_1->base).base.base.orient.vec.y + fVar21;
    }
    else {
      (param_1->base).base.base.orient.vec.y = (float)local_48;
    }
    local_40 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                (local_40 - (param_1->base).base.base.orient.vec.x,uVar19);
    fVar21 = (param_1->base).base.hit_points;
    local_60 = -0.3926991;
    fStack_2c = 0.3926991;
    (param_1->base).base.base.orient.vec.x =
         local_40 * param_2 * fStack_70 + (param_1->base).base.base.orient.vec.x;
    if ((fVar21 < (float)25) &&
       ((param_1->skirt_cloth).vertices[0x275].connected_indices[7] == 0)) {
      fStack_2c = 1.5707964;
      local_60 = -1.5707964;
    }
    if ((param_1->base).base.base.orient.vec.x < local_60) {
      (param_1->base).base.base.orient.vec.x = local_60;
    }
    if (fStack_2c < (param_1->base).base.base.orient.vec.x) {
      (param_1->base).base.base.orient.vec.x = fStack_2c;
    }
    fVar13 = (float10)(param_1->base).base.base.orient.vec.x;
    fVar14 = (float10)fsin(fVar13);
    fVar15 = (float10)(param_1->base).base.base.orient.vec.y;
    fVar16 = (float10)fsin(fVar15);
    fVar13 = (float10)fcos(fVar13);
    fVar15 = (float10)fcos(fVar15);
    fVar17 = (float10)(float)local_4c;
    fVar18 = (float10)param_2;
    fVar14 = -fVar14 * fVar17 * fVar18 + (float10)(param_1->base).base.base.location.position.y;
    (param_1->base).base.base.location.position.y = (float)fVar14;
    fVar21 = (param_1->base).base.base.location.position.z;
    (param_1->base).base.base.location.position.x =
         (float)(fVar16 * fVar13 * fVar17 * fVar18 +
                (float10)(param_1->base).base.base.location.position.x);
    (param_1->base).base.base.location.position.z =
         (float)(fVar15 * fVar13 * fVar17 * fVar18 + (float10)fVar21);
    if (fVar14 < (float10)(float)UStack_bc) {
      (param_1->base).base.base.location.position.y = (float)UStack_bc;
    }
    local_20 = local_40;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)param_1);
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
                        (&param_1->model,(CBoundingBox3D *)(local_1b4 + 0x10));
    pCVar3 = &(param_1->base).base.cached_bounding_box;
    if (pCVar3 != pCVar10) {
      (pCVar3->min).x = (pCVar10->min).x;
      (param_1->base).base.cached_bounding_box.min.y = (pCVar10->min).y;
      (param_1->base).base.cached_bounding_box.min.z = (pCVar10->min).z;
    }
    pCVar1 = &(param_1->base).base.cached_bounding_box.max;
    if (pCVar1 != &pCVar10->max) {
      pCVar1->x = (pCVar10->max).x;
      (param_1->base).base.cached_bounding_box.max.y = (pCVar10->max).y;
      (param_1->base).base.cached_bounding_box.max.z = (pCVar10->max).z;
    }
    goto LAB_0054cc7f;
  }
  if (iVar8 == 1) {
    fVar21 = param_2 / 5.0f +
             (float)(param_1->skirt_cloth).vertices[0x275].connected_indices[2];
    (param_1->skirt_cloth).vertices[0x275].connected_indices[2] = (int)fVar21;
    pCVar6 = 0x01C03A10;
    if (1.0 <= fVar21) {
      (param_1->skirt_cloth).vertices[0x26a].connected_indices[3] = 2;
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70(pCVar6,"morphCompleted");
    }
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0(param_1,param_2);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
              (&param_1->model);
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (&param_1->wing_cloth,&(param_1->base).base.base.location.position,
               &(param_1->base).base.base.orient.vec,param_2,
               (param_1->base).base.closest_distance_threshold,&param_1->model);
    pCVar4 = &(param_1->base).base.model;
    local_20 = param_2;
    while (0.0 < local_20) {
      core_motion_cpp_CMotionController_advance_FUN_004e11c0(&pCVar4->motion_controller,&local_20);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(pCVar4);
    local_18 = (CVector3f *)&(param_1->base).base.base.orient;
    pCVar2 = &(param_1->base).base.base.location;
    core_cloth_cpp_CCloth_process_FUN_00436e50
              ((CCloth *)((param_1->wing_cloth).vertices[0x300].connected_indices + 9),
               &pCVar2->position,local_18,param_2,(param_1->base).base.closest_distance_threshold,
               pCVar4);
    core_cloth_cpp_CCloth_process_FUN_00436e50
              ((CCloth *)((param_1->cape_cloth).vertices[0x2b5].connected_indices + 6),
               &pCVar2->position,local_18,param_2,(param_1->base).base.closest_distance_threshold,
               pCVar4);
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
                        (pCVar4,&local_154);
    pCVar3 = &(param_1->base).base.cached_bounding_box;
    if (pCVar3 != pCVar10) {
      (pCVar3->min).x = (pCVar10->min).x;
      (param_1->base).base.cached_bounding_box.min.y = (pCVar10->min).y;
      (param_1->base).base.cached_bounding_box.min.z = (pCVar10->min).z;
    }
    pCVar1 = &(param_1->base).base.cached_bounding_box.max;
    if (pCVar1 != &pCVar10->max) {
      pCVar1->x = (pCVar10->max).x;
      (param_1->base).base.cached_bounding_box.max.y = (pCVar10->max).y;
      (param_1->base).base.cached_bounding_box.max.z = (pCVar10->max).z;
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
              (&param_1->model,&local_184);
    pCVar3 = &(param_1->base).base.cached_bounding_box;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(pCVar3,&local_184.min);
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(pCVar3,&local_184.max);
    (param_1->base).base.base.location.position.y =
         (param_1->base).base.base.location.position.y + param_2;
    goto LAB_0054cc7f;
  }
  if (iVar8 == 3) {
    local_64 = param_2 / 5.0f;
    local_60 = (float)(param_1->skirt_cloth).vertices[0x275].connected_indices[2];
    (param_1->skirt_cloth).vertices[0x275].connected_indices[2] = (int)(local_60 - local_64);
    pCVar6 = 0x01C03A10;
    if (0.0 < local_60 - local_64) {
      fVar21 = (local_64 / local_60) *
               ((param_1->base).base.closest_distance_threshold -
               (param_1->base).base.base.location.position.y) +
               (param_1->base).base.base.location.position.y;
    }
    else {
      (param_1->skirt_cloth).vertices[0x26a].connected_indices[3] = 0;
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70(pCVar6,"backToHuman");
      fVar21 = (param_1->base).base.closest_distance_threshold;
      (param_1->skirt_cloth).vertices[0x275].connected_indices[2] = 0;
    }
    (param_1->base).base.base.location.position.y = fVar21;
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0(param_1,param_2);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
              (&param_1->model);
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (&param_1->wing_cloth,&(param_1->base).base.base.location.position,
               &(param_1->base).base.base.orient.vec,param_2,
               (param_1->base).base.closest_distance_threshold,&param_1->model);
    pCVar4 = &(param_1->base).base.model;
    local_1c = param_2;
    while (0.0 < local_1c) {
      core_motion_cpp_CMotionController_advance_FUN_004e11c0(&pCVar4->motion_controller,&local_1c);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(pCVar4);
    euler = &(param_1->base).base.base.orient;
    local_18 = &(param_1->base).base.base.location.position;
    core_cloth_cpp_CCloth_process_FUN_00436e50
              ((CCloth *)((param_1->wing_cloth).vertices[0x300].connected_indices + 9),local_18,
               &euler->vec,param_2,(param_1->base).base.closest_distance_threshold,pCVar4);
    core_cloth_cpp_CCloth_process_FUN_00436e50
              ((CCloth *)((param_1->cape_cloth).vertices[0x2b5].connected_indices + 6),local_18,
               &euler->vec,param_2,(param_1->base).base.closest_distance_threshold,pCVar4);
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
                        (pCVar4,(CBoundingBox3D *)local_1b4);
    pCVar3 = &(param_1->base).base.cached_bounding_box;
    if (pCVar3 != pCVar10) {
      (pCVar3->min).x = (pCVar10->min).x;
      (param_1->base).base.cached_bounding_box.min.y = (pCVar10->min).y;
      (param_1->base).base.cached_bounding_box.min.z = (pCVar10->min).z;
    }
    pCVar1 = &(param_1->base).base.cached_bounding_box.max;
    if (pCVar1 != &pCVar10->max) {
      pCVar1->x = (pCVar10->max).x;
      (param_1->base).base.cached_bounding_box.max.y = (pCVar10->max).y;
      (param_1->base).base.cached_bounding_box.max.z = (pCVar10->max).z;
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
              (&param_1->model,&local_1cc);
    pCVar3 = &(param_1->base).base.cached_bounding_box;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(pCVar3,&local_1cc.min);
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(pCVar3,&local_1cc.max);
    goto LAB_0054cc7f;
  }
  local_30 = &(param_1->base).base.model;
  local_78[0] = param_2;
  while (0.0 < local_78[0]) {
    uVar11 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                       (&local_30->motion_controller,local_78);
    if (uVar11 < 2) {
      if (uVar11 == 1) {
        core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0(param_1);
LAB_0054d1ae:
        (param_1->skirt_cloth).vertices[0x275].connected_indices[3] = 0x3f800000;
      }
    }
    else {
      if (uVar11 < 3) {
        core_vampboss_cpp_FUN_0054e130(param_1);
        goto LAB_0054d1ae;
      }
      if (uVar11 < 4) {
        core_vampboss_cpp_CVampireBoss_summonBats_FUN_0054e040(param_1);
        goto LAB_0054d1ae;
      }
      if (uVar11 == 0x29a) {
        (*(((param_1->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)param_1);
        pCStack_c0 = (CDemonActor *)0x0;
        UStack_bc._ub = (CDemonActor_vtable *)0x41a00000;
        local_b8 = 20.0;
        core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,auStack_108,&pCStack_c0);
        iVar22 = 0;
        core_charactr_cpp_CCharacter_dismember_FUN_00427b60
                  ((CCharacter *)param_1,(CVector3f *)auStack_108,-1.0,0);
        iVar8 = 0;
        local_28 = (CVector3f *)0x0;
        for (; (int)fStack_2c < *(int *)(0x01E57284 + 0x150bf4);
            fStack_2c = (float)((int)fStack_2c + 1)) {
          this_ptr = (CCharacter *)
                     core_actor_cpp_castToClassHash_FUN_0040d890
                               (*(CDemonActor **)(iVar8 + 0x150bf8 + 0x01E57284),
                                g_CTVBatActorType_02dd110c.name_hash);
          if ((this_ptr != (CCharacter *)0x0) &&
             (this_ptr[1].model.transformed_vertices[0xc].z != 0.0)) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)auStack_208);
            fStack_204 = 999.0;
            (*(((this_ptr->base).vtable._uc)->_uc).getGrabbed)
                      (this_ptr,(CDemonActor *)auStack_208,iVar22);
          }
          iVar8 = iVar8 + 4;
        }
      }
    }
  }
  pCVar10 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
                      (local_30,&local_16c);
  pCVar3 = &(param_1->base).base.cached_bounding_box;
  if (pCVar3 != pCVar10) {
    (pCVar3->min).x = (pCVar10->min).x;
    (param_1->base).base.cached_bounding_box.min.y = (pCVar10->min).y;
    (param_1->base).base.cached_bounding_box.min.z = (pCVar10->min).z;
  }
  pCVar1 = &(param_1->base).base.cached_bounding_box.max;
  if (pCVar1 != &pCVar10->max) {
    pCVar1->x = (pCVar10->max).x;
    (param_1->base).base.cached_bounding_box.max.y = (pCVar10->max).y;
    (param_1->base).base.cached_bounding_box.max.z = (pCVar10->max).z;
  }
  pCVar4 = &(param_1->base).base.model;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar4->motion_controller);
  pCVar7 = 0x01C775EC;
  iVar8 = pSVar9->state_index;
  switch(iVar8) {
  case 0:
    (param_1->base).base.turn_speed = 3.141593f * param_2;
    pCVar6 = 0x01C03A10;
    if (pCVar7->letterbox_mode == 0) {
      iVar22 = (param_1->skirt_cloth).vertices[0x275].connected_indices[8];
      (param_1->base).base.walk_step_speed = 10.0f * param_2;
      core_charactr_cpp_CCharacter_followActor_FUN_00428780
                ((CCharacter *)param_1,
                 (CDemonActor *)(param_1->skirt_cloth).vertices[0x275].connected_indices[iVar22 + 9]
                 ,0.2,999999.0,(param_1->skirt_cloth).vertices[0x275].connected_indices + 0xd);
      switch((param_1->skirt_cloth).vertices[0x275].connected_indices[0xd]) {
      default:
        fVar21 = ((param_1->base).base.max_hit_points * param_2) / 120.0f +
                 (param_1->base).base.hit_points;
        (param_1->base).base.hit_points = fVar21;
        if ((float)50 < fVar21) goto LAB_0054d280;
        pCVar2 = &(param_1->base).base.base.location;
        iVar22 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0(&pCVar2->position,12.0);
        if (iVar22 == 0) {
          iVar22 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          local_d0[0] = *(float *)(iVar22 + 0x20) - (pCVar2->position).x;
          local_d0[1] = *(float *)(iVar22 + 0x24) - (param_1->base).base.base.location.position.y;
          local_c8 = *(float *)(iVar22 + 0x28) - (param_1->base).base.base.location.position.z;
          iVar22 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                             (local_dc,local_d0);
          local_114 = *(float *)(iVar22 + 4);
          local_18 = (CVector3f *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                               (local_114 - (param_1->base).base.base.orient.vec.y);
          (param_1->base).base.turn_angle_accumulator = (float)local_18;
          local_3c = (CVector3f *)(param_1->base).base.turn_angle_accumulator;
          local_48 = (CVector3f *)(param_1->base).base.turn_speed;
          local_3c = (CVector3f *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_3c);
          local_28 = (CVector3f *)-(float)local_48;
          local_4c = local_28;
          if (((float)local_28 <= (float)local_3c) &&
             (local_4c = local_3c, (float)local_48 < (float)local_3c)) {
            local_4c = local_48;
          }
          fVar21 = (float)(param_1->skirt_cloth).vertices[0x275].connected_indices[3] - param_2;
          (param_1->base).base.turn_angle_accumulator = (float)local_4c;
          (param_1->skirt_cloth).vertices[0x275].connected_indices[3] = (int)fVar21;
          local_18 = local_3c;
          if (fVar21 <= 0.0) {
            (param_1->skirt_cloth).vertices[0x275].connected_indices[3] = 0;
            iVar22 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
            pCVar4 = &(param_1->base).base.model;
            if (iVar22 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar4->motion_controller,4,1);
            }
            else if (iVar22 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar4->motion_controller,5,1);
            }
            else if (iVar22 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar4->motion_controller,6,1);
            }
          }
        }
        else {
          core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_0054e230(param_1);
        }
        break;
      case 1:
      case 2:
        (param_1->skirt_cloth).vertices[0x275].connected_indices[3] = 0x40400000;
      }
    }
    else {
      (param_1->skirt_cloth).vertices[0x275].connected_indices[3] = 0x40400000;
      iVar22 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                         (pCVar6,"morphToBat");
      if (iVar22 == 0) {
        iVar22 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        local_13c = *(float *)(iVar22 + 0x20) - (param_1->base).base.base.location.position.x;
        local_138 = *(float *)(iVar22 + 0x24) - (param_1->base).base.base.location.position.y;
        local_134 = *(float *)(iVar22 + 0x28) - (param_1->base).base.base.location.position.z;
        iVar22 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                           (local_130,&local_13c);
        local_120 = *(float *)(iVar22 + 4);
        local_18 = (CVector3f *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                             (local_120 - (param_1->base).base.base.orient.vec.y);
        (param_1->base).base.turn_angle_accumulator = (float)local_18;
        local_34 = (CVector3f *)(param_1->base).base.turn_angle_accumulator;
        local_50 = (CVector3f *)(param_1->base).base.turn_speed;
        local_34 = (CVector3f *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_34);
        local_5c = (CVector3f *)-(float)local_50;
        local_54 = local_5c;
        if (((float)local_5c <= (float)local_34) &&
           (local_54 = local_34, (float)local_50 < (float)local_34)) {
          local_54 = local_50;
        }
        (param_1->base).base.turn_angle_accumulator = (float)local_54;
        local_18 = local_34;
      }
      else {
LAB_0054d280:
        core_vampboss_cpp_CVampireBoss_transformToBat_FUN_0054e1a0(param_1);
      }
    }
    break;
  case 2:
    iVar22 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                       (0x01C03A10,"flyout");
    if (iVar22 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar4->motion_controller,0,1)
      ;
    }
  }
  if ((0x01C775EC->letterbox_mode == 0) && (iVar8 != 2)) {
    auStack_108._8_4_ =
         (param_1->base).base.position_delta.x +
         (param_1->base).base.model.accumulated_root_motion.x;
    local_f8 = (param_1->base).base.position_delta.z +
               (param_1->base).base.model.accumulated_root_motion.z;
    local_fc = ((param_1->base).base.position_delta.y +
               (param_1->base).base.model.accumulated_root_motion.y) -
               param_2 * (float)3;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050
              ((CCharacter *)param_1,(CVector3f *)(auStack_108 + 8));
  }
  (param_1->base).base.position_delta.z = 0.0;
  (param_1->base).base.position_delta.y = (param_1->base).base.position_delta.z;
  (param_1->base).base.position_delta.x = (param_1->base).base.position_delta.y;
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.model.accumulated_root_motion.x =
       (param_1->base).base.model.accumulated_root_motion.y;
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  pCVar4 = &(param_1->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCVar4);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  local_18 = (CVector3f *)&(param_1->base).base.base.orient;
  pCVar2 = &(param_1->base).base.base.location;
  core_cloth_cpp_CCloth_process_FUN_00436e50
            ((CCloth *)((param_1->wing_cloth).vertices[0x300].connected_indices + 9),
             &pCVar2->position,local_18,param_2,(param_1->base).base.closest_distance_threshold,
             pCVar4);
  core_cloth_cpp_CCloth_process_FUN_00436e50
            ((CCloth *)((param_1->cape_cloth).vertices[0x2b5].connected_indices + 6),
             &pCVar2->position,local_18,param_2,(param_1->base).base.closest_distance_threshold,
             pCVar4);
LAB_0054cc7f:
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(param_1->base).base.model.motion_controller);
  if ((pSVar9->state_index != 2) && (0x01C775EC->letterbox_mode == 0)) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004a3ab0
              (0x01C775EC,(param_1->base).base.descriptive_name,
               (int)((param_1->base).base.hit_points / (param_1->base).base.max_hit_points),0.5);
    return;
  }
  return;
}
