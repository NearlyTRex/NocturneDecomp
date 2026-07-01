// Name: core_vampboss.cpp_CVampireBoss_process_FUN_005e5970
// Address: 005e5970
// Address Range: [[005e5970, 005e6b7b]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_005e5970(CVampireBoss *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_atan2_FUN_006013b1 */
/* WARNING: Type propagation algorithm not settling */

void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_005e5970(CVampireBoss *this_ptr,float delta_time)

{
  CLocation *pCVar3;
  UOrientationVector *euler_00;
  CDeformableModelInstance *pCVar6;
  CBoundingBox3D *pCVar9;
  float fVar10;
  float fVar11;
  CHero *pCVar12;
  float fVar13;
  float fVar14;
  CEventList *pCVar17;
  int iVar9;
  SMotion *pSVar10;
  int iVar18;
  CBoundingBox3D *pCVar11;
  SMotion *pSVar19;
  CBoundingBox3D *pCVar20;
  uint uVar12;
  int iVar21;
  CTVBat *this_ptr_00;
  CVector3f *pCVar13;
  CVector3f *pCVar22;
  CVector3f *pCVar23;
  int iVar14;
  CLocation *pCVar15;
  CVampireBoss *pCVar16;
  float10 fVar17;
  float10 fVar24;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar25;
  float10 fVar21;
  float10 fVar22;
  float10 fVar26;
  SDamageInfo local_244;
  SDamageInfo SStack_208;
  CBoundingBox3D local_1cc;
  CBoundingBox3D local_1b4;
  CBoundingBox3D local_19c;
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
  float local_78 [4];
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
  CVector3f *local_38;
  float local_34;
  CDeformableModelInstance *local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  CVector3f *local_18;
  CBoundingBox3D *pCVar1;
  CHero *pCVar4;
  UOrientationVector *euler;
  CDeformableModelInstance *pCVar2;
  CEventList *pCVar7;
  CGame *pCVar8;
  float fVar6;
  CDemonActor *pCVar5;
  float fVar3;
  
  pCVar16 = this_ptr;
  do {
    if (pCVar16->way_point_0 == (CDemonActor *)0x0) {
      g_CurrentFilename = "..\\core\\vampboss.cpp";
      g_CurrentLineNumber = 207;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CVampireBoss::process - Need 4 waypoints");
    }
    pCVar16 = (CVampireBoss *)((pCVar16->base).base.base.actor_name + 4);
  } while (pCVar16 != (CVampireBoss *)((this_ptr->base).base.base.actor_name + 0x10));
  iVar9 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    return;
  }
  iVar18 = this_ptr->form;
  if (iVar18 == 2) {
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_005e6ca0(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    if ((this_ptr->base).base.hit_points < (float)25) {
      iVar18 = this_ptr->bat_ai_state;
      (this_ptr->base).base.hit_points = 24.999;
      if ((iVar18 != 2) && (iVar18 != 3)) {
        core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510(this_ptr);
        this_ptr->bat_ai_state = 2;
        this_ptr->flee_timer = 5.0;
      }
    }
    if ((this_ptr->bat_ai_state != 2) && (this_ptr->bat_ai_state != 3)) {
      pCVar4 = g_HeroActors[g_LocalHeroIndex];
      fVar13 = (this_ptr->base).base.base.location.position.x -
               (pCVar4->base).base.location.position.x;
      fVar10 = (this_ptr->base).base.base.location.position.y;
      fVar11 = (pCVar4->base).base.location.position.y;
      fVar14 = (this_ptr->base).base.base.location.position.z -
               (pCVar4->base).base.location.position.z;
      fVar13 = SQRT(fVar13 * fVar13 + fVar14 * fVar14);
      if (fVar13 < (float)5) {
        this_ptr->bat_ai_state = 1;
        local_18 = (CVector3f *)(uint)(fVar10 - fVar11 < (float)10);
        if ((float10)0 != ABS((float10)(int)local_18)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_244);
          local_244.damage_amount = 10.0;
          local_244.attacker = (CDemonActor *)this_ptr;
          local_244.wielder = (CDemonActor *)this_ptr;
          (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).processDamage)
                    (&g_HeroActors[g_LocalHeroIndex]->base,&local_244);
        }
      }
      if ((float)40 < fVar13) {
        this_ptr->action_timer = 5.0;
        this_ptr->has_attacked = 0;
        this_ptr->bat_ai_state = 0;
      }
      if ((this_ptr->bat_ai_state == 0) &&
         (fVar6 = this_ptr->action_timer - delta_time, this_ptr->action_timer = fVar6, fVar6 < 0.0))
      {
        this_ptr->bat_ai_state = 1;
        this_ptr->action_timer = 0.0;
      }
      pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&(this_ptr->model).motion_controller);
      if ((((pSVar10->state_index == 0) && (this_ptr->bat_ai_state == 0)) &&
          (fVar13 < (float)24)) && (this_ptr->has_attacked == 0)) {
        this_ptr->has_attacked = 1;
        iVar18 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar18 == 0) {
          iVar18 = 2;
        }
        else {
          iVar18 = 1;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->model).motion_controller,iVar18,1);
      }
    }
    pCVar12 = g_HeroActors[g_LocalHeroIndex];
    pCVar15 = &(pCVar12->base).base.location;
    if ((CLocation *)&local_b8 != pCVar15) {
      local_b8 = (pCVar15->position).x;
      local_b4 = (pCVar12->base).base.location.position.y;
      local_b0 = (pCVar12->base).base.location.position.z;
    }
    if (this_ptr->bat_ai_state == 2) {
      this_ptr->flee_timer = this_ptr->flee_timer - delta_time;
      iVar18 = *(int *)((int)this_ptr + (4 - this_ptr->waypoint_index) * 4 + 0xce908);
      if (&local_b8 != (float *)(iVar18 + 0x20)) {
        local_b8 = *(float *)(iVar18 + 0x20);
        local_b4 = *(float *)(iVar18 + 0x24);
        local_b0 = *(float *)(iVar18 + 0x28);
      }
      if ((this_ptr->flee_timer <= 0.0) ||
         (fVar10 = local_b8 - (this_ptr->base).base.base.location.position.x,
         fVar11 = local_b0 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar11 * fVar11 + fVar10 * fVar10) < (float)6)) {
        this_ptr->flee_timer = 5.0;
        this_ptr->bat_ai_state = 3;
      }
    }
    else if (this_ptr->bat_ai_state == 3) {
      pCVar5 = *(CDemonActor **)((int)(&this_ptr->morph + 1) + (this_ptr->waypoint_index + 7) * 4);
      if ((CLocation *)&local_b8 != &pCVar5->location) {
        local_b8 = (pCVar5->location).position.x;
        local_b4 = (pCVar5->location).position.y;
        local_b0 = (pCVar5->location).position.z;
      }
      fVar10 = this_ptr->flee_timer - delta_time;
      this_ptr->flee_timer = fVar10;
      if ((fVar10 <= 0.0) ||
         (fVar10 = local_b8 - (this_ptr->base).base.base.location.position.x,
         fVar11 = local_b0 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar11 * fVar11 + fVar10 * fVar10) < (float)4)) {
        core_vampboss_cpp_CVampireBoss_transformToHuman_FUN_005e74c0(this_ptr);
      }
    }
    local_b4 = local_b4 + 4.0f;
    fVar10 = local_b8 - (this_ptr->base).base.base.location.position.x;
    fVar17 = (float10)local_b0 - (float10)(this_ptr->base).base.base.location.position.z;
    fVar25 = (float10)fpatan((float10)fVar10,fVar17);
    fVar24 = (float10)fVar10;
    fVar24 = (float10)fpatan((float10)(local_b4 - (this_ptr->base).base.base.location.position.y),
                             SQRT(fVar24 * fVar24 + (float10)(float)fVar17 * (float10)(float)fVar17)
                            );
    local_40 = (float)fVar25;
    local_38 = (CVector3f *)(float)-fVar24;
    if (this_ptr->bat_ai_state == 1) {
      local_40 = -local_40;
      local_38 = (CVector3f *)-(float)local_38;
    }
    local_18 = (CVector3f *)
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (local_40 - (this_ptr->base).base.base.orient.vec.y);
    fVar10 = (float)local_18 * delta_time * 1.2;
    if (ABS(fVar10) <= ABS((float)local_18)) {
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fVar10;
    }
    else {
      (this_ptr->base).base.base.orient.vec.y = local_40;
    }
    local_18 = (CVector3f *)
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         ((float)local_38 - (this_ptr->base).base.base.orient.vec.x);
    fVar3 = (this_ptr->base).base.hit_points;
    local_58 = -0.3926991;
    local_24 = 0.3926991;
    (this_ptr->base).base.base.orient.vec.x =
         (float)local_18 * delta_time * 1.2 + (this_ptr->base).base.base.orient.vec.x;
    if ((fVar3 < (float)25) && (this_ptr->bat_ai_state == 0)) {
      local_24 = 1.5707964;
      local_58 = -1.5707964;
    }
    if ((this_ptr->base).base.base.orient.vec.x < local_58) {
      (this_ptr->base).base.base.orient.vec.x = local_58;
    }
    if (local_24 < (this_ptr->base).base.base.orient.vec.x) {
      (this_ptr->base).base.base.orient.vec.x = local_24;
    }
    fVar24 = (float10)(this_ptr->base).base.base.orient.vec.x;
    fVar18 = (float10)fsin(fVar24);
    fVar19 = (float10)(this_ptr->base).base.base.orient.vec.y;
    fVar20 = (float10)fsin(fVar19);
    fVar24 = (float10)fcos(fVar24);
    fVar25 = (float10)fcos(fVar19);
    fVar21 = (float10)20.0;
    fVar22 = (float10)delta_time;
    fVar26 = -fVar18 * fVar21 * fVar22 + (float10)(this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.y = (float)fVar26;
    fVar10 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.x =
         (float)(fVar20 * fVar24 * fVar21 * fVar22 +
                (float10)(this_ptr->base).base.base.location.position.x);
    (this_ptr->base).base.base.location.position.z =
         (float)(fVar25 * fVar24 * fVar21 * fVar22 + (float10)fVar10);
    if (fVar26 < (float10)local_b4) {
      (this_ptr->base).base.base.location.position.y = local_b4;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005a16c0
                        (&this_ptr->model,&local_19c);
    pCVar1 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar1 != pCVar11) {
      (pCVar1->min).x = (pCVar11->min).x;
      (this_ptr->base).base.cached_bounding_box.min.y = (pCVar11->min).y;
      (this_ptr->base).base.cached_bounding_box.min.z = (pCVar11->min).z;
    }
    pCVar22 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar22 != &pCVar11->max) {
      pCVar22->x = (pCVar11->max).x;
      (this_ptr->base).base.cached_bounding_box.max.y = (pCVar11->max).y;
      (this_ptr->base).base.cached_bounding_box.max.z = (pCVar11->max).z;
    }
    goto LAB_005e5f5f;
  }
  if (iVar18 == 1) {
    fVar10 = delta_time / 5.0f + this_ptr->morph_t;
    this_ptr->morph_t = fVar10;
    pCVar7 = g_CEventListPtr;
    if (1.0 <= fVar10) {
      this_ptr->form = 2;
      core_event_cpp_CEventList_executeCommands_FUN_004aabe0(pCVar7,"morphCompleted");
    }
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_005e6ca0(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    pCVar6 = &(this_ptr->base).base.model;
    local_20 = delta_time;
    while (0.0 < local_20) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar6->motion_controller,&local_20);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar6);
    local_18 = (CVector3f *)&(this_ptr->base).base.base.orient;
    pCVar3 = &(this_ptr->base).base.base.location;
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              (&this_ptr->cape_cloth,&pCVar3->position,local_18,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar6);
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              (&this_ptr->skirt_cloth,&pCVar3->position,local_18,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar6);
    pCVar20 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005a16c0
                        (pCVar6,&local_154);
    pCVar9 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar9 != pCVar20) {
      (pCVar9->min).x = (pCVar20->min).x;
      (this_ptr->base).base.cached_bounding_box.min.y = (pCVar20->min).y;
      (this_ptr->base).base.cached_bounding_box.min.z = (pCVar20->min).z;
    }
    pCVar22 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar22 != &pCVar20->max) {
      pCVar22->x = (pCVar20->max).x;
      (this_ptr->base).base.cached_bounding_box.max.y = (pCVar20->max).y;
      (this_ptr->base).base.cached_bounding_box.max.z = (pCVar20->max).z;
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005a16c0
              (&this_ptr->model,&local_184);
    pCVar9 = &(this_ptr->base).base.cached_bounding_box;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar9,&local_184.min);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar9,&local_184.max);
    (this_ptr->base).base.base.location.position.y =
         (this_ptr->base).base.base.location.position.y + delta_time;
    goto LAB_005e5f5f;
  }
  if (iVar18 == 3) {
    fVar13 = delta_time / 5.0f;
    fVar10 = this_ptr->morph_t;
    fVar11 = fVar10 - fVar13;
    this_ptr->morph_t = fVar11;
    pCVar17 = g_CEventListPtr;
    if (0.0 < fVar11) {
      fVar10 = (fVar13 / fVar10) *
               ((this_ptr->base).base.closest_distance_threshold -
               (this_ptr->base).base.base.location.position.y) +
               (this_ptr->base).base.base.location.position.y;
    }
    else {
      this_ptr->form = 0;
      core_event_cpp_CEventList_executeCommands_FUN_004aabe0(pCVar17,"backToHuman");
      fVar10 = (this_ptr->base).base.closest_distance_threshold;
      this_ptr->morph_t = 0.0;
    }
    (this_ptr->base).base.base.location.position.y = fVar10;
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_005e6ca0(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    pCVar6 = &(this_ptr->base).base.model;
    local_1c = delta_time;
    while (0.0 < local_1c) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar6->motion_controller,&local_1c);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar6);
    euler_00 = &(this_ptr->base).base.base.orient;
    local_18 = &(this_ptr->base).base.base.location.position;
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              (&this_ptr->cape_cloth,local_18,&euler_00->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar6);
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              (&this_ptr->skirt_cloth,local_18,&euler_00->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar6);
    pCVar20 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005a16c0
                        (pCVar6,&local_1b4);
    pCVar9 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar9 != pCVar20) {
      (pCVar9->min).x = (pCVar20->min).x;
      (this_ptr->base).base.cached_bounding_box.min.y = (pCVar20->min).y;
      (this_ptr->base).base.cached_bounding_box.min.z = (pCVar20->min).z;
    }
    pCVar22 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar22 != &pCVar20->max) {
      pCVar22->x = (pCVar20->max).x;
      (this_ptr->base).base.cached_bounding_box.max.y = (pCVar20->max).y;
      (this_ptr->base).base.cached_bounding_box.max.z = (pCVar20->max).z;
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005a16c0
              (&this_ptr->model,&local_1cc);
    pCVar9 = &(this_ptr->base).base.cached_bounding_box;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar9,&local_1cc.min);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar9,&local_1cc.max);
    goto LAB_005e5f5f;
  }
  pCVar6 = &(this_ptr->base).base.model;
  local_78[0] = delta_time;
  while (0.0 < local_78[0]) {
    uVar12 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                       (&pCVar6->motion_controller,local_78);
    if (uVar12 < 2) {
      if (uVar12 == 1) {
        core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_005e7390(this_ptr);
LAB_005e648e:
        this_ptr->action_timer = 1.0;
      }
    }
    else {
      if (uVar12 < 3) {
        core_vampboss_cpp_CVampireBoss_summonFireEmitters_FUN_005e7410(this_ptr);
        goto LAB_005e648e;
      }
      if (uVar12 < 4) {
        core_vampboss_cpp_CVampireBoss_summonBats_FUN_005e7320(this_ptr);
        goto LAB_005e648e;
      }
      if (uVar12 == 0x29a) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
        CStack_c4.x = 0.0;
        CStack_c4.y = 20.0;
        CStack_c4.z = 20.0;
        core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                  ((CDemonActor *)this_ptr,&CStack_10c,&CStack_c4);
        core_charactr_cpp_CCharacter_dismember_FUN_0042b9e0
                  ((CCharacter *)this_ptr,&CStack_10c,-1.0,0);
        iVar18 = 0;
        for (local_2c = 0; local_2c < g_CDemonSetPtr->enemy_count; local_2c = local_2c + 1) {
          this_ptr_00 = (CTVBat *)
                        core_actor_cpp_castToClassHash_FUN_0040c790
                                  (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar18),
                                   g_CTVBatClassInfo.name_hash);
          if ((this_ptr_00 != (CTVBat *)0x0) && (this_ptr_00->follow_orders != 0)) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_208);
            SStack_208.damage_amount = 999.0;
            (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).processDamage)
                      ((CCharacter *)this_ptr_00,&SStack_208);
          }
          iVar18 = iVar18 + 4;
        }
      }
    }
  }
  pCVar20 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005a16c0
                      (pCVar6,&local_16c);
  pCVar9 = &(this_ptr->base).base.cached_bounding_box;
  if (pCVar9 != pCVar20) {
    (pCVar9->min).x = (pCVar20->min).x;
    (this_ptr->base).base.cached_bounding_box.min.y = (pCVar20->min).y;
    (this_ptr->base).base.cached_bounding_box.min.z = (pCVar20->min).z;
  }
  pCVar22 = &(this_ptr->base).base.cached_bounding_box.max;
  if (pCVar22 != &pCVar20->max) {
    pCVar22->x = (pCVar20->max).x;
    (this_ptr->base).base.cached_bounding_box.max.y = (pCVar20->max).y;
    (this_ptr->base).base.cached_bounding_box.max.z = (pCVar20->max).z;
  }
  pCVar6 = &(this_ptr->base).base.model;
  pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar6->motion_controller);
  pCVar8 = g_CGamePtr;
  iVar18 = pSVar19->state_index;
  switch(iVar18) {
  case 0:
    (this_ptr->base).base.turn_speed = 3.141593f * delta_time;
    pCVar17 = g_CEventListPtr;
    if (pCVar8->letterbox_mode == 0) {
      iVar21 = this_ptr->waypoint_index;
      (this_ptr->base).base.walk_step_speed = 10.0f * delta_time;
      core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0
                ((CCharacter *)this_ptr,
                 *(CDemonActor **)((int)(&this_ptr->morph + 1) + (iVar21 + 7) * 4),0.2,999999.0,
                 &this_ptr->follow_result);
      switch(this_ptr->follow_result) {
      default:
        fVar10 = ((this_ptr->base).base.max_hit_points * delta_time) / 120.0f +
                 (this_ptr->base).base.hit_points;
        (this_ptr->base).base.hit_points = fVar10;
        if ((float)50 < fVar10) goto LAB_005e6560;
        pCVar3 = &(this_ptr->base).base.base.location;
        iVar21 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004f2220(&pCVar3->position,12.0);
        if (iVar21 == 0) {
          pCVar12 = g_HeroActors[g_LocalHeroIndex];
          local_d0.x = (pCVar12->base).base.location.position.x - (pCVar3->position).x;
          local_d0.y = (pCVar12->base).base.location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_d0.z = (pCVar12->base).base.location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          pCVar22 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_dc,&local_d0);
          local_18 = (CVector3f *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (pCVar22->y - (this_ptr->base).base.base.orient.vec.y);
          (this_ptr->base).base.turn_angle_accumulator = (float)local_18;
          pCVar22 = (CVector3f *)(this_ptr->base).base.turn_speed;
          local_18 = (CVector3f *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               ((this_ptr->base).base.turn_angle_accumulator);
          pCVar23 = (CVector3f *)-(float)pCVar22;
          if (((float)pCVar23 <= (float)local_18) &&
             (pCVar23 = local_18, (float)pCVar22 < (float)local_18)) {
            pCVar23 = pCVar22;
          }
          fVar10 = this_ptr->action_timer - delta_time;
          (this_ptr->base).base.turn_angle_accumulator = (float)pCVar23;
          this_ptr->action_timer = fVar10;
          if (fVar10 <= 0.0) {
            this_ptr->action_timer = 0.0;
            iVar21 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
            pCVar6 = &(this_ptr->base).base.model;
            if (iVar21 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar6->motion_controller,4,1);
            }
            else if (iVar21 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar6->motion_controller,5,1);
            }
            else if (iVar21 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar6->motion_controller,6,1);
            }
          }
        }
        else {
          core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510(this_ptr);
        }
        break;
      case 1:
      case 2:
        this_ptr->action_timer = 3.0;
      }
    }
    else {
      this_ptr->action_timer = 3.0;
      iVar21 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                         (pCVar17,"morphToBat");
      if (iVar21 == 0) {
        pCVar12 = g_HeroActors[g_LocalHeroIndex];
        local_13c.x = (pCVar12->base).base.location.position.x -
                      (this_ptr->base).base.base.location.position.x;
        local_13c.y = (pCVar12->base).base.location.position.y -
                      (this_ptr->base).base.base.location.position.y;
        local_13c.z = (pCVar12->base).base.location.position.z -
                      (this_ptr->base).base.base.location.position.z;
        pCVar13 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                            (&local_130,&local_13c);
        local_18 = (CVector3f *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (pCVar13->y - (this_ptr->base).base.base.orient.vec.y);
        (this_ptr->base).base.turn_angle_accumulator = (float)local_18;
        pCVar22 = (CVector3f *)(this_ptr->base).base.turn_speed;
        local_18 = (CVector3f *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             ((this_ptr->base).base.turn_angle_accumulator);
        pCVar23 = (CVector3f *)-(float)pCVar22;
        if (((float)pCVar23 <= (float)local_18) &&
           (pCVar23 = local_18, (float)pCVar22 < (float)local_18)) {
          pCVar23 = pCVar22;
        }
        (this_ptr->base).base.turn_angle_accumulator = (float)pCVar23;
      }
      else {
LAB_005e6560:
        core_vampboss_cpp_CVampireBoss_transformToBat_FUN_005e7480(this_ptr);
      }
    }
    break;
  case 2:
    iVar14 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,"flyout");
    if (iVar14 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar6->motion_controller,0,1)
      ;
    }
  }
  if ((g_CGamePtr->letterbox_mode == 0) && (iVar18 != 2)) {
    local_100.x = (this_ptr->base).base.position_delta.x +
                  (this_ptr->base).base.model.accumulated_root_motion.x;
    local_100.z = (this_ptr->base).base.position_delta.z +
                  (this_ptr->base).base.model.accumulated_root_motion.z;
    local_100.y = ((this_ptr->base).base.position_delta.y +
                  (this_ptr->base).base.model.accumulated_root_motion.y) -
                  delta_time * (float)3;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_100);
  }
  (this_ptr->base).base.position_delta.z = 0.0;
  (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
  (this_ptr->base).base.position_delta.x = (this_ptr->base).base.position_delta.y;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  pCVar6 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar6);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  local_18 = (CVector3f *)&(this_ptr->base).base.base.orient;
  pCVar3 = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CCloth_process_FUN_0043ab80
            (&this_ptr->cape_cloth,&pCVar3->position,local_18,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar6);
  core_cloth_cpp_CCloth_process_FUN_0043ab80
            (&this_ptr->skirt_cloth,&pCVar3->position,local_18,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar6);
LAB_005e5f5f:
  pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&(this_ptr->base).base.model.motion_controller);
  if ((pSVar19->state_index != 2) && (g_CGamePtr->letterbox_mode == 0)) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004e0bf0
              (g_CGamePtr,(this_ptr->base).base.descriptive_name,
               (int)((this_ptr->base).base.hit_points / (this_ptr->base).base.max_hit_points),0.5);
    return;
  }
  return;
}
