// Name: core_vampboss.cpp_CVampireBoss_process_FUN_0054c690
// Address: 0054c690
// Address Range: [[0054c690, 0054d89b]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_0054c690(CVampireBoss *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_0054c690(CVampireBoss *this_ptr,float delta_time)

{
  UOrientationVector *euler;
  CBoundingBox3D *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  CHero *pCVar4;
  float fVar5;
  CEventList *pCVar6;
  CGame *pCVar7;
  int iVar8;
  SMotion *pSVar9;
  CBoundingBox3D *pCVar10;
  uint uVar11;
  CCharacter *this_ptr_00;
  CVector3f *pCVar12;
  int iVar13;
  CLocation *pCVar14;
  CVampireBoss *pCVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  SDamageInfo local_244;
  SDamageInfo SStack_208;
  CBoundingBox3D local_1cc;
  byte local_1b4 [48];
  CBoundingBox3D local_184;
  CBoundingBox3D local_16c;
  CBoundingBox3D local_154;
  CVector3f local_13c;
  CVector3f local_130;
  float local_120;
  float local_114;
  CVector3f CStack_10c;
  CVector3f local_100;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f CStack_c4;
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
  
  pCVar15 = this_ptr;
  do {
    if (pCVar15->way_point_0 == (CDemonActor *)0x0) {
      g_CurrentFilename = "..\\core\\vampboss.cpp";
      g_CurrentLineNumber = 207;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CVampireBoss::process - Need 4 waypoints");
    }
    pCVar15 = (CVampireBoss *)((pCVar15->base).base.base.actor_name + 4);
  } while (pCVar15 != (CVampireBoss *)((this_ptr->base).base.base.actor_name + 0x10));
  iVar8 = core_charactr_cpp_CCharacter_FUN_004259f0((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    return;
  }
  iVar8 = this_ptr->form;
  if (iVar8 == 2) {
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    if ((this_ptr->base).base.hit_points < (float)25) {
      iVar8 = this_ptr->bat_ai_state;
      (this_ptr->base).base.hit_points = 24.999;
      if ((iVar8 != 2) && (iVar8 != 3)) {
        core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_0054e230(this_ptr);
        this_ptr->bat_ai_state = 2;
        this_ptr->flee_timer = 5.0;
      }
    }
    if ((this_ptr->bat_ai_state != 2) && (this_ptr->bat_ai_state != 3)) {
      pCVar4 = g_HeroActors[g_LocalHeroIndex];
      local_f4 = (this_ptr->base).base.base.location.position.x -
                 (pCVar4->base).base.location.position.x;
      local_f0 = (this_ptr->base).base.base.location.position.y -
                 (pCVar4->base).base.location.position.y;
      local_ec = (this_ptr->base).base.base.location.position.z -
                 (pCVar4->base).base.location.position.z;
      fVar3 = SQRT(local_f4 * local_f4 + local_ec * local_ec);
      if (fVar3 < (float)5) {
        this_ptr->bat_ai_state = 1;
        local_18 = (CVector3f *)(uint)(local_f0 < (float)10);
        if ((float10)0 != ABS((float10)(int)local_18)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_244);
          local_244.damage_amount = 10.0;
          local_244.attacker = (CDemonActor *)this_ptr;
          local_244.wielder = (CDemonActor *)this_ptr;
          (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).processDamage)
                    (&g_HeroActors[g_LocalHeroIndex]->base,&local_244);
        }
      }
      if ((float)40 < fVar3) {
        this_ptr->action_timer = 5.0;
        this_ptr->has_attacked = 0;
        this_ptr->bat_ai_state = 0;
      }
      if ((this_ptr->bat_ai_state == 0) &&
         (fVar5 = this_ptr->action_timer - delta_time, this_ptr->action_timer = fVar5, fVar5 < 0.0))
      {
        this_ptr->bat_ai_state = 1;
        this_ptr->action_timer = 0.0;
      }
      pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&(this_ptr->model).motion_controller);
      if ((((pSVar9->state_index == 0) && (this_ptr->bat_ai_state == 0)) &&
          (fVar3 < (float)24)) && (this_ptr->has_attacked == 0)) {
        this_ptr->has_attacked = 1;
        iVar8 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
        if (iVar8 == 0) {
          iVar8 = 2;
        }
        else {
          iVar8 = 1;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->model).motion_controller,iVar8,1);
      }
    }
    pCVar4 = g_HeroActors[g_LocalHeroIndex];
    pCVar14 = &(pCVar4->base).base.location;
    if ((CLocation *)&local_b8 != pCVar14) {
      local_b8 = (pCVar14->position).x;
      local_b4 = (pCVar4->base).base.location.position.y;
      local_b0 = (pCVar4->base).base.location.position.z;
    }
    if (this_ptr->bat_ai_state == 2) {
      this_ptr->flee_timer = this_ptr->flee_timer - delta_time;
      iVar8 = *(int *)((int)this_ptr + (4 - this_ptr->waypoint_index) * 4 + 0xbedb0);
      if (&local_b8 != (float *)(iVar8 + 0x20)) {
        local_b8 = *(float *)(iVar8 + 0x20);
        local_b4 = *(float *)(iVar8 + 0x24);
        local_b0 = *(float *)(iVar8 + 0x28);
      }
      if ((this_ptr->flee_timer <= 0.0) ||
         (fVar3 = local_b8 - (this_ptr->base).base.base.location.position.x,
         fVar5 = local_b0 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar5 * fVar5 + fVar3 * fVar3) < (float)6)) {
        this_ptr->flee_timer = 5.0;
        this_ptr->bat_ai_state = 3;
      }
    }
    else if (this_ptr->bat_ai_state == 3) {
      fVar3 = *(float *)((int)(&this_ptr->morph + 1) + (this_ptr->waypoint_index + 7) * 4);
      if (&local_b8 != (float *)((int)fVar3 + 0x20)) {
        local_b8 = *(float *)((int)fVar3 + 0x20);
        local_b4 = *(float *)((int)fVar3 + 0x24);
        local_b0 = *(float *)((int)fVar3 + 0x28);
      }
      fVar3 = this_ptr->flee_timer - delta_time;
      this_ptr->flee_timer = fVar3;
      if ((fVar3 <= 0.0) ||
         (fVar3 = local_b8 - (this_ptr->base).base.base.location.position.x,
         fVar5 = local_b0 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar5 * fVar5 + fVar3 * fVar3) < (float)4)) {
        core_vampboss_cpp_CVampireBoss_transformToHuman_FUN_0054e1e0(this_ptr);
      }
    }
    local_b4 = local_b4 + 4.0f;
    local_e8 = local_b8 - (this_ptr->base).base.base.location.position.x;
    local_e4 = local_b4 - (this_ptr->base).base.base.location.position.y;
    fVar16 = (float10)local_b0 - (float10)(this_ptr->base).base.base.location.position.z;
    local_e0 = (float)fVar16;
    atan2((float10)local_e8,fVar16);
    fVar16 = SQRT((float10)local_ec * (float10)local_ec + (float10)local_e4 * (float10)local_e4);
    fVar17 = atan2((float10)local_e8,fVar16);
    fStack_70 = 1.2;
    local_4c = (CVector3f *)0x41a00000;
    local_48 = (CVector3f *)(float)fVar16;
    local_40 = (float)-fVar17;
    if (this_ptr->bat_ai_state == 1) {
      local_48 = (CVector3f *)-(float)local_48;
      local_40 = -local_40;
    }
    local_20 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                         ((float)local_48 - (this_ptr->base).base.base.orient.vec.y);
    fVar3 = local_20 * delta_time * fStack_70;
    if (ABS(fVar3) <= ABS(local_20)) {
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fVar3;
    }
    else {
      (this_ptr->base).base.base.orient.vec.y = (float)local_48;
    }
    local_40 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                         (local_40 - (this_ptr->base).base.base.orient.vec.x);
    fVar3 = (this_ptr->base).base.hit_points;
    local_60 = -0.3926991;
    fStack_2c = 0.3926991;
    (this_ptr->base).base.base.orient.vec.x =
         local_40 * delta_time * fStack_70 + (this_ptr->base).base.base.orient.vec.x;
    if ((fVar3 < (float)25) && (this_ptr->bat_ai_state == 0)) {
      fStack_2c = 1.5707964;
      local_60 = -1.5707964;
    }
    if ((this_ptr->base).base.base.orient.vec.x < local_60) {
      (this_ptr->base).base.base.orient.vec.x = local_60;
    }
    if (fStack_2c < (this_ptr->base).base.base.orient.vec.x) {
      (this_ptr->base).base.base.orient.vec.x = fStack_2c;
    }
    fVar16 = (float10)(this_ptr->base).base.base.orient.vec.x;
    fVar17 = (float10)fsin(fVar16);
    fVar18 = (float10)(this_ptr->base).base.base.orient.vec.y;
    fVar19 = (float10)fsin(fVar18);
    fVar16 = (float10)fcos(fVar16);
    fVar18 = (float10)fcos(fVar18);
    fVar20 = (float10)(float)local_4c;
    fVar21 = (float10)delta_time;
    fVar17 = -fVar17 * fVar20 * fVar21 + (float10)(this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.y = (float)fVar17;
    fVar3 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.x =
         (float)(fVar19 * fVar16 * fVar20 * fVar21 +
                (float10)(this_ptr->base).base.base.location.position.x);
    (this_ptr->base).base.base.location.position.z =
         (float)(fVar18 * fVar16 * fVar20 * fVar21 + (float10)fVar3);
    if (fVar17 < (float10)CStack_c4.z) {
      (this_ptr->base).base.base.location.position.y = CStack_c4.z;
    }
    local_20 = local_40;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)this_ptr);
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
                        (&this_ptr->model,(CBoundingBox3D *)(local_1b4 + 0x10));
    pCVar1 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar1 != pCVar10) {
      (pCVar1->min).x = (pCVar10->min).x;
      (this_ptr->base).base.cached_bounding_box.min.y = (pCVar10->min).y;
      (this_ptr->base).base.cached_bounding_box.min.z = (pCVar10->min).z;
    }
    pCVar12 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar12 != &pCVar10->max) {
      pCVar12->x = (pCVar10->max).x;
      (this_ptr->base).base.cached_bounding_box.max.y = (pCVar10->max).y;
      (this_ptr->base).base.cached_bounding_box.max.z = (pCVar10->max).z;
    }
    goto LAB_0054cc7f;
  }
  if (iVar8 == 1) {
    fVar3 = delta_time / 5.0f + this_ptr->morph_t;
    this_ptr->morph_t = fVar3;
    pCVar6 = 0x01C03A10;
    if (1.0 <= fVar3) {
      this_ptr->form = 2;
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70(pCVar6,"morphCompleted");
    }
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    pCVar2 = &(this_ptr->base).base.model;
    local_20 = delta_time;
    while (0.0 < local_20) {
      core_motion_cpp_CMotionController_advance_FUN_004e11c0(&pCVar2->motion_controller,&local_20);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(pCVar2);
    local_18 = (CVector3f *)&(this_ptr->base).base.base.orient;
    pCVar14 = &(this_ptr->base).base.base.location;
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (&this_ptr->cape_cloth,&pCVar14->position,local_18,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar2);
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (&this_ptr->skirt_cloth,&pCVar14->position,local_18,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar2);
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
                        (pCVar2,&local_154);
    pCVar1 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar1 != pCVar10) {
      (pCVar1->min).x = (pCVar10->min).x;
      (this_ptr->base).base.cached_bounding_box.min.y = (pCVar10->min).y;
      (this_ptr->base).base.cached_bounding_box.min.z = (pCVar10->min).z;
    }
    pCVar12 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar12 != &pCVar10->max) {
      pCVar12->x = (pCVar10->max).x;
      (this_ptr->base).base.cached_bounding_box.max.y = (pCVar10->max).y;
      (this_ptr->base).base.cached_bounding_box.max.z = (pCVar10->max).z;
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
              (&this_ptr->model,&local_184);
    pCVar1 = &(this_ptr->base).base.cached_bounding_box;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(pCVar1,&local_184.min);
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(pCVar1,&local_184.max);
    (this_ptr->base).base.base.location.position.y =
         (this_ptr->base).base.base.location.position.y + delta_time;
    goto LAB_0054cc7f;
  }
  if (iVar8 == 3) {
    local_64 = delta_time / 5.0f;
    local_60 = this_ptr->morph_t;
    this_ptr->morph_t = local_60 - local_64;
    pCVar6 = 0x01C03A10;
    if (0.0 < local_60 - local_64) {
      fVar3 = (local_64 / local_60) *
              ((this_ptr->base).base.closest_distance_threshold -
              (this_ptr->base).base.base.location.position.y) +
              (this_ptr->base).base.base.location.position.y;
    }
    else {
      this_ptr->form = 0;
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70(pCVar6,"backToHuman");
      fVar3 = (this_ptr->base).base.closest_distance_threshold;
      this_ptr->morph_t = 0.0;
    }
    (this_ptr->base).base.base.location.position.y = fVar3;
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    pCVar2 = &(this_ptr->base).base.model;
    local_1c = delta_time;
    while (0.0 < local_1c) {
      core_motion_cpp_CMotionController_advance_FUN_004e11c0(&pCVar2->motion_controller,&local_1c);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(pCVar2);
    euler = &(this_ptr->base).base.base.orient;
    local_18 = &(this_ptr->base).base.base.location.position;
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (&this_ptr->cape_cloth,local_18,&euler->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar2);
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (&this_ptr->skirt_cloth,local_18,&euler->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar2);
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
                        (pCVar2,(CBoundingBox3D *)local_1b4);
    pCVar1 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar1 != pCVar10) {
      (pCVar1->min).x = (pCVar10->min).x;
      (this_ptr->base).base.cached_bounding_box.min.y = (pCVar10->min).y;
      (this_ptr->base).base.cached_bounding_box.min.z = (pCVar10->min).z;
    }
    pCVar12 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar12 != &pCVar10->max) {
      pCVar12->x = (pCVar10->max).x;
      (this_ptr->base).base.cached_bounding_box.max.y = (pCVar10->max).y;
      (this_ptr->base).base.cached_bounding_box.max.z = (pCVar10->max).z;
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
              (&this_ptr->model,&local_1cc);
    pCVar1 = &(this_ptr->base).base.cached_bounding_box;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(pCVar1,&local_1cc.min);
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(pCVar1,&local_1cc.max);
    goto LAB_0054cc7f;
  }
  local_30 = &(this_ptr->base).base.model;
  local_78[0] = delta_time;
  while (0.0 < local_78[0]) {
    uVar11 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                       (&local_30->motion_controller,local_78);
    if (uVar11 < 2) {
      if (uVar11 == 1) {
        core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0(this_ptr);
LAB_0054d1ae:
        this_ptr->action_timer = 1.0;
      }
    }
    else {
      if (uVar11 < 3) {
        core_vampboss_cpp_CVampireBoss_FUN_0054e130(this_ptr);
        goto LAB_0054d1ae;
      }
      if (uVar11 < 4) {
        core_vampboss_cpp_CVampireBoss_summonBats_FUN_0054e040(this_ptr);
        goto LAB_0054d1ae;
      }
      if (uVar11 == 0x29a) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
        CStack_c4.x = 0.0;
        CStack_c4.y = 20.0;
        CStack_c4.z = 20.0;
        core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                  ((CDemonActor *)this_ptr,&CStack_10c,&CStack_c4);
        core_charactr_cpp_CCharacter_dismember_FUN_00427b60
                  ((CCharacter *)this_ptr,&CStack_10c,-1.0,0);
        iVar8 = 0;
        for (fStack_2c = 0.0; (int)fStack_2c < g_CDemonSet_PTR_005be368->enemy_count;
            fStack_2c = (float)((int)fStack_2c + 1)) {
          this_ptr_00 = (CCharacter *)
                        core_actor_cpp_castToClassHash_FUN_0040d890
                                  (*(CDemonActor **)((int)g_CDemonSet_PTR_005be368->enemies + iVar8)
                                   ,g_CTVBatActorType_02dd110c.name_hash);
          if ((this_ptr_00 != (CCharacter *)0x0) &&
             (this_ptr_00[1].model.transformed_vertices[0xc].z != 0.0)) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&SStack_208);
            SStack_208.damage_amount = 999.0;
            (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)(this_ptr_00,&SStack_208);
          }
          iVar8 = iVar8 + 4;
        }
      }
    }
  }
  pCVar10 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
                      (local_30,&local_16c);
  pCVar1 = &(this_ptr->base).base.cached_bounding_box;
  if (pCVar1 != pCVar10) {
    (pCVar1->min).x = (pCVar10->min).x;
    (this_ptr->base).base.cached_bounding_box.min.y = (pCVar10->min).y;
    (this_ptr->base).base.cached_bounding_box.min.z = (pCVar10->min).z;
  }
  pCVar12 = &(this_ptr->base).base.cached_bounding_box.max;
  if (pCVar12 != &pCVar10->max) {
    pCVar12->x = (pCVar10->max).x;
    (this_ptr->base).base.cached_bounding_box.max.y = (pCVar10->max).y;
    (this_ptr->base).base.cached_bounding_box.max.z = (pCVar10->max).z;
  }
  pCVar2 = &(this_ptr->base).base.model;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar2->motion_controller);
  pCVar7 = g_CGame_PTR_005b9354;
  iVar8 = pSVar9->state_index;
  switch(iVar8) {
  case 0:
    (this_ptr->base).base.turn_speed = 3.141593f * delta_time;
    pCVar6 = 0x01C03A10;
    if (pCVar7->letterbox_mode == 0) {
      iVar13 = this_ptr->waypoint_index;
      (this_ptr->base).base.walk_step_speed = 10.0f * delta_time;
      core_charactr_cpp_CCharacter_followActor_FUN_00428780
                ((CCharacter *)this_ptr,
                 *(CDemonActor **)((int)(&this_ptr->morph + 1) + (iVar13 + 7) * 4),0.2,999999.0,
                 &this_ptr->follow_result);
      switch(this_ptr->follow_result) {
      default:
        fVar3 = ((this_ptr->base).base.max_hit_points * delta_time) / 120.0f +
                (this_ptr->base).base.hit_points;
        (this_ptr->base).base.hit_points = fVar3;
        if ((float)50 < fVar3) goto LAB_0054d280;
        pCVar14 = &(this_ptr->base).base.base.location;
        iVar13 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0(&pCVar14->position,12.0);
        if (iVar13 == 0) {
          pCVar4 = g_HeroActors[g_LocalHeroIndex];
          local_d0.x = (pCVar4->base).base.location.position.x - (pCVar14->position).x;
          local_d0.y = (pCVar4->base).base.location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_d0.z = (pCVar4->base).base.location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          pCVar12 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                              (&local_dc,&local_d0);
          local_114 = pCVar12->y;
          local_18 = (CVector3f *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                               (local_114 - (this_ptr->base).base.base.orient.vec.y);
          (this_ptr->base).base.turn_angle_accumulator = (float)local_18;
          local_3c = (CVector3f *)(this_ptr->base).base.turn_angle_accumulator;
          local_48 = (CVector3f *)(this_ptr->base).base.turn_speed;
          local_3c = (CVector3f *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00((float)local_3c);
          local_28 = (CVector3f *)-(float)local_48;
          local_4c = local_28;
          if (((float)local_28 <= (float)local_3c) &&
             (local_4c = local_3c, (float)local_48 < (float)local_3c)) {
            local_4c = local_48;
          }
          fVar3 = this_ptr->action_timer - delta_time;
          (this_ptr->base).base.turn_angle_accumulator = (float)local_4c;
          this_ptr->action_timer = fVar3;
          local_18 = local_3c;
          if (fVar3 <= 0.0) {
            this_ptr->action_timer = 0.0;
            iVar13 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
            pCVar2 = &(this_ptr->base).base.model;
            if (iVar13 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar2->motion_controller,4,1);
            }
            else if (iVar13 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar2->motion_controller,5,1);
            }
            else if (iVar13 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar2->motion_controller,6,1);
            }
          }
        }
        else {
          core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_0054e230(this_ptr);
        }
        break;
      case 1:
      case 2:
        this_ptr->action_timer = 3.0;
      }
    }
    else {
      this_ptr->action_timer = 3.0;
      iVar13 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                         (pCVar6,"morphToBat");
      if (iVar13 == 0) {
        pCVar4 = g_HeroActors[g_LocalHeroIndex];
        local_13c.x = (pCVar4->base).base.location.position.x -
                      (this_ptr->base).base.base.location.position.x;
        local_13c.y = (pCVar4->base).base.location.position.y -
                      (this_ptr->base).base.base.location.position.y;
        local_13c.z = (pCVar4->base).base.location.position.z -
                      (this_ptr->base).base.base.location.position.z;
        pCVar12 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                            (&local_130,&local_13c);
        local_120 = pCVar12->y;
        local_18 = (CVector3f *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                             (local_120 - (this_ptr->base).base.base.orient.vec.y);
        (this_ptr->base).base.turn_angle_accumulator = (float)local_18;
        local_34 = (CVector3f *)(this_ptr->base).base.turn_angle_accumulator;
        local_50 = (CVector3f *)(this_ptr->base).base.turn_speed;
        local_34 = (CVector3f *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00((float)local_34);
        local_5c = (CVector3f *)-(float)local_50;
        local_54 = local_5c;
        if (((float)local_5c <= (float)local_34) &&
           (local_54 = local_34, (float)local_50 < (float)local_34)) {
          local_54 = local_50;
        }
        (this_ptr->base).base.turn_angle_accumulator = (float)local_54;
        local_18 = local_34;
      }
      else {
LAB_0054d280:
        core_vampboss_cpp_CVampireBoss_transformToBat_FUN_0054e1a0(this_ptr);
      }
    }
    break;
  case 2:
    iVar13 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                       (0x01C03A10,"flyout");
    if (iVar13 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar2->motion_controller,0,1)
      ;
    }
  }
  if ((g_CGame_PTR_005b9354->letterbox_mode == 0) && (iVar8 != 2)) {
    local_100.x = (this_ptr->base).base.position_delta.x +
                  (this_ptr->base).base.model.accumulated_root_motion.x;
    local_100.z = (this_ptr->base).base.position_delta.z +
                  (this_ptr->base).base.model.accumulated_root_motion.z;
    local_100.y = ((this_ptr->base).base.position_delta.y +
                  (this_ptr->base).base.model.accumulated_root_motion.y) -
                  delta_time * (float)3;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_100);
  }
  (this_ptr->base).base.position_delta.z = 0.0;
  (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
  (this_ptr->base).base.position_delta.x = (this_ptr->base).base.position_delta.y;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  pCVar2 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCVar2);
  core_charactr_cpp_CCharacter_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  local_18 = (CVector3f *)&(this_ptr->base).base.base.orient;
  pCVar14 = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CCloth_process_FUN_00436e50
            (&this_ptr->cape_cloth,&pCVar14->position,local_18,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar2);
  core_cloth_cpp_CCloth_process_FUN_00436e50
            (&this_ptr->skirt_cloth,&pCVar14->position,local_18,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar2);
LAB_0054cc7f:
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(this_ptr->base).base.model.motion_controller);
  if ((pSVar9->state_index != 2) && (g_CGame_PTR_005b9354->letterbox_mode == 0)) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004a3ab0
              (g_CGame_PTR_005b9354,(this_ptr->base).base.descriptive_name,
               (int)((this_ptr->base).base.hit_points / (this_ptr->base).base.max_hit_points),0.5);
    return;
  }
  return;
}
