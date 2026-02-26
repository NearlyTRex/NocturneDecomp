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
  UOrientationVector *euler;
  CBoundingBox3D *pCVar1;
  CDeformableModelInstance *pCVar2;
  CHero *pCVar3;
  CDemonActor *pCVar4;
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
  float in_stack_fffffdb0;
  float fVar22;
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
  float local_78;
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
  
  pCVar15 = this_ptr;
  do {
    if (pCVar15->way_point_0 == (CDemonActor *)0x0) {
      g_CurrentFilename = "..\\core\\vampboss.cpp";
      g_CurrentLineNumber = 0xcf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CVampireBoss::process - Need 4 waypoints");
    }
    pCVar15 = (CVampireBoss *)((pCVar15->base).base.base.actor_name + 4);
  } while (pCVar15 != (CVampireBoss *)((this_ptr->base).base.base.actor_name + 0x10));
  iVar8 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    return;
  }
  iVar8 = this_ptr->form;
  if (iVar8 == 2) {
    core_vampboss_cpp_CVampireBoss_FUN_005e6ca0(this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    if ((this_ptr->base).base.hit_points < (float)25) {
      iVar8 = this_ptr->bat_ai_state;
      (this_ptr->base).base.hit_points = 24.999;
      if ((iVar8 != 2) && (iVar8 != 3)) {
        core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510(this_ptr);
        this_ptr->bat_ai_state = 2;
        this_ptr->flee_timer = 5.0;
      }
    }
    if ((this_ptr->bat_ai_state != 2) && (this_ptr->bat_ai_state != 3)) {
      pCVar3 = g_HeroActors[g_LocalHeroIndex];
      local_f4 = (this_ptr->base).base.base.location.position.x -
                 (pCVar3->base).base.location.position.x;
      local_f0 = (this_ptr->base).base.base.location.position.y -
                 (pCVar3->base).base.location.position.y;
      local_ec = (this_ptr->base).base.base.location.position.z -
                 (pCVar3->base).base.location.position.z;
      fVar22 = SQRT(local_f4 * local_f4 + local_ec * local_ec);
      if (fVar22 < (float)5) {
        this_ptr->bat_ai_state = 1;
        local_18 = (CVector3f *)(uint)(local_f0 < (float)10);
        if ((float10)0 != ABS((float10)(int)local_18)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_244);
          local_244.damage_amount = 10.0;
          local_244.attacker = (CDemonActor *)this_ptr;
          local_244.wielder = (CDemonActor *)this_ptr;
          (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).processDamage)
                    (&g_HeroActors[g_LocalHeroIndex]->base,&local_244);
        }
      }
      if ((float)40 < fVar22) {
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
      pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->model).motion_controller);
      if ((((pSVar9->state_index == 0) && (this_ptr->bat_ai_state == 0)) &&
          (fVar22 < (float)24)) && (this_ptr->has_attacked == 0)) {
        this_ptr->has_attacked = 1;
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar8 == 0) {
          iVar8 = 2;
        }
        else {
          iVar8 = 1;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->model).motion_controller,iVar8,1);
      }
    }
    pCVar3 = g_HeroActors[g_LocalHeroIndex];
    pCVar14 = &(pCVar3->base).base.location;
    if ((CLocation *)&local_b8 != pCVar14) {
      local_b8 = (pCVar14->position).x;
      local_b4 = (pCVar3->base).base.location.position.y;
      local_b0 = (pCVar3->base).base.location.position.z;
    }
    if (this_ptr->bat_ai_state == 2) {
      this_ptr->flee_timer = this_ptr->flee_timer - delta_time;
      iVar8 = *(int *)((int)this_ptr + (4 - this_ptr->waypoint_index) * 4 + 0xce908);
      if (&local_b8 != (float *)(iVar8 + 0x20)) {
        local_b8 = *(float *)(iVar8 + 0x20);
        local_b4 = *(float *)(iVar8 + 0x24);
        local_b0 = *(float *)(iVar8 + 0x28);
      }
      if ((this_ptr->flee_timer <= 0.0) ||
         (fVar22 = local_b8 - (this_ptr->base).base.base.location.position.x,
         fVar5 = local_b0 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar5 * fVar5 + fVar22 * fVar22) < (float)6)) {
        this_ptr->flee_timer = 5.0;
        this_ptr->bat_ai_state = 3;
      }
    }
    else if (this_ptr->bat_ai_state == 3) {
      pCVar4 = (&this_ptr->way_point_0)[this_ptr->waypoint_index];
      if ((CLocation *)&local_b8 != &pCVar4->location) {
        local_b8 = (pCVar4->location).position.x;
        local_b4 = (pCVar4->location).position.y;
        local_b0 = (pCVar4->location).position.z;
      }
      fVar22 = this_ptr->flee_timer - delta_time;
      this_ptr->flee_timer = fVar22;
      if ((fVar22 <= 0.0) ||
         (fVar22 = local_b8 - (this_ptr->base).base.base.location.position.x,
         fVar5 = local_b0 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar5 * fVar5 + fVar22 * fVar22) < (float)4)) {
        core_vampboss_cpp_CVampireBoss_FUN_005e74c0(this_ptr);
      }
    }
    local_b4 = local_b4 + 4.0f;
    local_e8 = local_b8 - (this_ptr->base).base.base.location.position.x;
    local_e4 = local_b4 - (this_ptr->base).base.base.location.position.y;
    fVar16 = (float10)local_b0 - (float10)(this_ptr->base).base.base.location.position.z;
    local_e0 = (float)fVar16;
    fVar17 = (float10)fpatan((float10)local_e8,fVar16);
    fVar16 = (float10)fpatan((float10)local_e4,
                             SQRT((float10)local_e8 * (float10)local_e8 +
                                  (float10)local_e0 * (float10)local_e0));
    local_68 = 1.2;
    local_44 = 20.0;
    local_40 = (float)fVar17;
    local_38 = (CVector3f *)(float)-fVar16;
    if (this_ptr->bat_ai_state == 1) {
      local_40 = -local_40;
      local_38 = (CVector3f *)-(float)local_38;
    }
    local_18 = (CVector3f *)
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (local_40 - (this_ptr->base).base.base.orient.vec.y);
    fVar22 = (float)local_18 * delta_time * local_68;
    if (ABS(fVar22) <= ABS((float)local_18)) {
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fVar22;
    }
    else {
      (this_ptr->base).base.base.orient.vec.y = local_40;
    }
    local_38 = (CVector3f *)
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         ((float)local_38 - (this_ptr->base).base.base.orient.vec.x);
    fVar22 = (this_ptr->base).base.hit_points;
    local_58 = -0.3926991;
    local_24 = 0.3926991;
    (this_ptr->base).base.base.orient.vec.x =
         (float)local_38 * delta_time * local_68 + (this_ptr->base).base.base.orient.vec.x;
    if ((fVar22 < (float)25) && (this_ptr->bat_ai_state == 0)) {
      local_24 = 1.5707964;
      local_58 = -1.5707964;
    }
    if ((this_ptr->base).base.base.orient.vec.x < local_58) {
      (this_ptr->base).base.base.orient.vec.x = local_58;
    }
    if (local_24 < (this_ptr->base).base.base.orient.vec.x) {
      (this_ptr->base).base.base.orient.vec.x = local_24;
    }
    fVar16 = (float10)(this_ptr->base).base.base.orient.vec.x;
    fVar17 = (float10)fsin(fVar16);
    fVar18 = (float10)(this_ptr->base).base.base.orient.vec.y;
    fVar19 = (float10)fsin(fVar18);
    fVar16 = (float10)fcos(fVar16);
    fVar18 = (float10)fcos(fVar18);
    fVar20 = (float10)local_44;
    fVar21 = (float10)delta_time;
    fVar17 = -fVar17 * fVar20 * fVar21 + (float10)(this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.y = (float)fVar17;
    fVar22 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.x =
         (float)(fVar19 * fVar16 * fVar20 * fVar21 +
                (float10)(this_ptr->base).base.base.location.position.x);
    (this_ptr->base).base.base.location.position.z =
         (float)(fVar18 * fVar16 * fVar20 * fVar21 + (float10)fVar22);
    if (fVar17 < (float10)local_b4) {
      (this_ptr->base).base.base.location.position.y = local_b4;
    }
    local_18 = local_38;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                        (&this_ptr->model,&local_19c);
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
    goto LAB_005e5f5f;
  }
  if (iVar8 == 1) {
    fVar22 = delta_time / 5.0f + this_ptr->morph_t;
    this_ptr->morph_t = fVar22;
    pCVar6 = g_CEventListPtr;
    if (1.0 <= fVar22) {
      this_ptr->form = 2;
      core_event_cpp_CEventList_executeCommands_FUN_004aabe0(pCVar6,"morphCompleted");
    }
    core_vampboss_cpp_CVampireBoss_FUN_005e6ca0(this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    pCVar2 = &(this_ptr->base).base.model;
    local_20 = delta_time;
    while (0.0 < local_20) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar2->motion_controller);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar2);
    local_18 = (CVector3f *)&(this_ptr->base).base.base.orient;
    pCVar14 = &(this_ptr->base).base.base.location;
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              (&this_ptr->cape_cloth,&pCVar14->position,local_18,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar2);
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              (&this_ptr->skirt_cloth,&pCVar14->position,local_18,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar2);
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
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
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
              (&this_ptr->model,&local_184);
    pCVar1 = &(this_ptr->base).base.cached_bounding_box;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar1,&local_184.min);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar1,&local_184.max);
    (this_ptr->base).base.base.location.position.y =
         (this_ptr->base).base.base.location.position.y + delta_time;
    goto LAB_005e5f5f;
  }
  if (iVar8 == 3) {
    local_64 = delta_time / 5.0f;
    local_60 = this_ptr->morph_t;
    this_ptr->morph_t = local_60 - local_64;
    pCVar6 = g_CEventListPtr;
    if (0.0 < local_60 - local_64) {
      fVar22 = (local_64 / local_60) *
               ((this_ptr->base).base.closest_distance_threshold -
               (this_ptr->base).base.base.location.position.y) +
               (this_ptr->base).base.base.location.position.y;
    }
    else {
      this_ptr->form = 0;
      core_event_cpp_CEventList_executeCommands_FUN_004aabe0(pCVar6,"backToHuman");
      fVar22 = (this_ptr->base).base.closest_distance_threshold;
      this_ptr->morph_t = 0.0;
    }
    (this_ptr->base).base.base.location.position.y = fVar22;
    core_vampboss_cpp_CVampireBoss_FUN_005e6ca0(this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    pCVar2 = &(this_ptr->base).base.model;
    local_1c = delta_time;
    while (0.0 < local_1c) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar2->motion_controller);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar2);
    euler = &(this_ptr->base).base.base.orient;
    local_18 = &(this_ptr->base).base.base.location.position;
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              (&this_ptr->cape_cloth,local_18,&euler->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar2);
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              (&this_ptr->skirt_cloth,local_18,&euler->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar2);
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                        (pCVar2,&local_1b4);
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
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
              (&this_ptr->model,&local_1cc);
    pCVar1 = &(this_ptr->base).base.cached_bounding_box;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar1,&local_1cc.min);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar1,&local_1cc.max);
    goto LAB_005e5f5f;
  }
  local_30 = &(this_ptr->base).base.model;
  local_78 = delta_time;
  while (0.0 < local_78) {
    uVar11 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_30->motion_controller);
    if (uVar11 < 2) {
      if (uVar11 == 1) {
        core_vampboss_cpp_CVampireBoss_FUN_005e7390(this_ptr);
LAB_005e648e:
        this_ptr->action_timer = 1.0;
      }
    }
    else {
      if (uVar11 < 3) {
        core_vampboss_cpp_CVampireBoss_FUN_005e7410(this_ptr);
        goto LAB_005e648e;
      }
      if (uVar11 < 4) {
        core_vampboss_cpp_CVampireBoss_FUN_005e7320(this_ptr);
        goto LAB_005e648e;
      }
      if (uVar11 == 0x29a) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
        CStack_c4.x = 0.0;
        CStack_c4.y = 20.0;
        CStack_c4.z = 20.0;
        core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                  ((CDemonActor *)this_ptr,&CStack_10c,&CStack_c4);
        core_charactr_cpp_CCharacter_dismember_FUN_0042b9e0((CCharacter *)this_ptr,&CStack_10c,-1.0)
        ;
        iVar8 = 0;
        for (local_2c = 0; local_2c < g_CDemonSetPtr->enemy_count; local_2c = local_2c + 1) {
          this_ptr_00 = (CCharacter *)
                        core_actor_cpp_castToClassHash_FUN_0040c790
                                  (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar8),
                                   g_CTVBatClassInfo.name_hash);
          if ((this_ptr_00 != (CCharacter *)0x0) &&
             (this_ptr_00[1].model.transformed_vertices[0xc].x != 0.0)) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_208);
            SStack_208.damage_amount = 999.0;
            (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)(this_ptr_00,&SStack_208);
          }
          iVar8 = iVar8 + 4;
        }
      }
    }
  }
  pCVar10 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
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
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar2->motion_controller);
  pCVar7 = g_CGamePtr;
  iVar8 = pSVar9->state_index;
  switch(iVar8) {
  case 0:
    (this_ptr->base).base.turn_speed = 3.141593f * delta_time;
    pCVar6 = g_CEventListPtr;
    if (pCVar7->letterbox_mode == 0) {
      iVar13 = this_ptr->waypoint_index;
      (this_ptr->base).base.walk_step_speed = 10.0f * delta_time;
      core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0
                ((CCharacter *)this_ptr,(&this_ptr->way_point_0)[iVar13],0.2,999999.0,
                 &this_ptr->follow_result);
      switch(this_ptr->follow_result) {
      default:
        fVar22 = ((this_ptr->base).base.max_hit_points * delta_time) / 120.0f +
                 (this_ptr->base).base.hit_points;
        (this_ptr->base).base.hit_points = fVar22;
        if ((float)50 < fVar22) goto LAB_005e6560;
        pCVar14 = &(this_ptr->base).base.base.location;
        iVar13 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004f2220(&pCVar14->position,12.0);
        if (iVar13 == 0) {
          pCVar3 = g_HeroActors[g_LocalHeroIndex];
          local_d0.x = (pCVar3->base).base.location.position.x - (pCVar14->position).x;
          local_d0.y = (pCVar3->base).base.location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_d0.z = (pCVar3->base).base.location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          pCVar12 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_dc,&local_d0);
          local_114 = pCVar12->y;
          local_18 = (CVector3f *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (local_114 - (this_ptr->base).base.base.orient.vec.y);
          (this_ptr->base).base.turn_angle_accumulator = (float)local_18;
          local_3c = (this_ptr->base).base.turn_angle_accumulator;
          local_48 = (this_ptr->base).base.turn_speed;
          local_3c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_3c);
          local_28 = -local_48;
          local_4c = local_28;
          if ((local_28 <= local_3c) && (local_4c = local_3c, local_48 < local_3c)) {
            local_4c = local_48;
          }
          fVar22 = this_ptr->action_timer - delta_time;
          (this_ptr->base).base.turn_angle_accumulator = local_4c;
          this_ptr->action_timer = fVar22;
          local_18 = (CVector3f *)local_3c;
          if (fVar22 <= 0.0) {
            this_ptr->action_timer = 0.0;
            iVar13 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
            pCVar2 = &(this_ptr->base).base.model;
            if (iVar13 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,4,1);
            }
            else if (iVar13 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,5,1);
            }
            else if (iVar13 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,6,1);
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
      iVar13 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                         (pCVar6,"morphToBat");
      if (iVar13 == 0) {
        pCVar3 = g_HeroActors[g_LocalHeroIndex];
        local_13c.x = (pCVar3->base).base.location.position.x -
                      (this_ptr->base).base.base.location.position.x;
        local_13c.y = (pCVar3->base).base.location.position.y -
                      (this_ptr->base).base.base.location.position.y;
        local_13c.z = (pCVar3->base).base.location.position.z -
                      (this_ptr->base).base.base.location.position.z;
        pCVar12 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                            (&local_130,&local_13c);
        local_120 = pCVar12->y;
        local_18 = (CVector3f *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_120 - (this_ptr->base).base.base.orient.vec.y);
        (this_ptr->base).base.turn_angle_accumulator = (float)local_18;
        local_34 = (this_ptr->base).base.turn_angle_accumulator;
        local_50 = (this_ptr->base).base.turn_speed;
        local_34 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_34);
        local_5c = -local_50;
        local_54 = local_5c;
        if ((local_5c <= local_34) && (local_54 = local_34, local_50 < local_34)) {
          local_54 = local_50;
        }
        (this_ptr->base).base.turn_angle_accumulator = local_54;
        local_18 = (CVector3f *)local_34;
      }
      else {
LAB_005e6560:
        core_vampboss_cpp_CVampireBoss_FUN_005e7480(this_ptr);
      }
    }
    break;
  case 2:
    iVar13 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,"flyout");
    if (iVar13 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar2->motion_controller,0,1)
      ;
    }
  }
  if ((g_CGamePtr->letterbox_mode == 0) && (iVar8 != 2)) {
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
  pCVar2 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar2);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,in_stack_fffffdb0);
  local_18 = (CVector3f *)&(this_ptr->base).base.base.orient;
  pCVar14 = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CCloth_process_FUN_0043ab80
            (&this_ptr->cape_cloth,&pCVar14->position,local_18,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar2);
  core_cloth_cpp_CCloth_process_FUN_0043ab80
            (&this_ptr->skirt_cloth,&pCVar14->position,local_18,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar2);
LAB_005e5f5f:
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->base).base.model.motion_controller);
  if ((pSVar9->state_index != 2) && (g_CGamePtr->letterbox_mode == 0)) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004e0bf0
              (g_CGamePtr,(this_ptr->base).base.descriptive_name,
               (int)((this_ptr->base).base.hit_points / (this_ptr->base).base.max_hit_points),0.5);
    return;
  }
  return;
}
