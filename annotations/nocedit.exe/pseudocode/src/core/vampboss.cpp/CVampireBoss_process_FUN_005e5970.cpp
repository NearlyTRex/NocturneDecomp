// Name: core_vampboss.cpp_CVampireBoss_process_FUN_005e5970
// Address: 005e5970
// Address Range: [[005e5970, 005e6b7b]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_005e5970(CVampireBoss *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_005e5970(CVampireBoss *this_ptr,float delta_time)

{
  UOrientationVector *euler;
  CBoundingBox3D *pCVar1;
  CDeformableModelInstance *pCVar2;
  CHero *pCVar3;
  float fVar4;
  CEventList *pCVar5;
  CGame *pCVar6;
  int iVar7;
  SMotion *pSVar8;
  CBoundingBox3D *pCVar9;
  uint uVar10;
  CCharacter *this_ptr_00;
  CVector3f *pCVar11;
  int iVar12;
  CLocation *pCVar13;
  CVampireBoss *pCVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 extraout_ST1;
  float in_stack_fffffdb0;
  float fVar21;
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
  float local_78;
  float local_70;
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
  float local_2c;
  CVector3f *local_28;
  float local_20;
  float local_1c;
  CVector3f *local_18;
  
  pCVar14 = this_ptr;
  do {
    if (pCVar14->way_point_0 == (CDemonActor *)0x0) {
      g_CurrentFilename = "..\\core\\vampboss.cpp";
      g_CurrentLineNumber = 0xcf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CVampireBoss::process - Need 4 waypoints");
    }
    pCVar14 = (CVampireBoss *)((pCVar14->base).base.base.actor_name + 4);
  } while (pCVar14 != (CVampireBoss *)((this_ptr->base).base.base.actor_name + 0x10));
  iVar7 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    return;
  }
  iVar7 = this_ptr->form;
  if (iVar7 == 2) {
    core_vampboss_cpp_CVampireBoss_FUN_005e6ca0(this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              ((CCloth *)this_ptr->unk2,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    if ((this_ptr->base).base.hit_points < (float)25) {
      iVar7 = *(int *)(this_ptr->unk4 + 0x10);
      (this_ptr->base).base.hit_points = 24.999;
      if ((iVar7 != 2) && (iVar7 != 3)) {
        core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510(this_ptr);
        this_ptr->unk4[0x10] = '\x02';
        this_ptr->unk4[0x11] = '\0';
        this_ptr->unk4[0x12] = '\0';
        this_ptr->unk4[0x13] = '\0';
        this_ptr->unk4[4] = '\0';
        this_ptr->unk4[5] = '\0';
        this_ptr->unk4[6] = -0x60;
        this_ptr->unk4[7] = '@';
      }
    }
    if ((*(int *)(this_ptr->unk4 + 0x10) != 2) && (*(int *)(this_ptr->unk4 + 0x10) != 3)) {
      pCVar3 = g_HeroActors[g_LocalHeroIndex];
      local_f4 = (this_ptr->base).base.base.location.position.x -
                 (pCVar3->base).base.location.position.x;
      local_f0 = (this_ptr->base).base.base.location.position.y -
                 (pCVar3->base).base.location.position.y;
      local_ec = (this_ptr->base).base.base.location.position.z -
                 (pCVar3->base).base.location.position.z;
      fVar21 = SQRT(local_f4 * local_f4 + local_ec * local_ec);
      if (fVar21 < (float)5) {
        this_ptr->unk4[0x10] = '\x01';
        this_ptr->unk4[0x11] = '\0';
        this_ptr->unk4[0x12] = '\0';
        this_ptr->unk4[0x13] = '\0';
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
      if ((float)40 < fVar21) {
        this_ptr->unk4[0] = '\0';
        this_ptr->unk4[1] = '\0';
        this_ptr->unk4[2] = -0x60;
        this_ptr->unk4[3] = '@';
        this_ptr->unk4[8] = '\0';
        this_ptr->unk4[9] = '\0';
        this_ptr->unk4[10] = '\0';
        this_ptr->unk4[0xb] = '\0';
        this_ptr->unk4[0x10] = '\0';
        this_ptr->unk4[0x11] = '\0';
        this_ptr->unk4[0x12] = '\0';
        this_ptr->unk4[0x13] = '\0';
      }
      if ((*(int *)(this_ptr->unk4 + 0x10) == 0) &&
         (fVar4 = *(float *)this_ptr->unk4 - delta_time, *(float *)this_ptr->unk4 = fVar4,
         fVar4 < 0.0)) {
        this_ptr->unk4[0x10] = '\x01';
        this_ptr->unk4[0x11] = '\0';
        this_ptr->unk4[0x12] = '\0';
        this_ptr->unk4[0x13] = '\0';
        this_ptr->unk4[0] = '\0';
        this_ptr->unk4[1] = '\0';
        this_ptr->unk4[2] = '\0';
        this_ptr->unk4[3] = '\0';
      }
      pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->model).motion_controller);
      if ((((pSVar8->state_index == 0) && (*(int *)(this_ptr->unk4 + 0x10) == 0)) &&
          (fVar21 < (float)24)) && (*(int *)(this_ptr->unk4 + 8) == 0)) {
        this_ptr->unk4[8] = '\x01';
        this_ptr->unk4[9] = '\0';
        this_ptr->unk4[10] = '\0';
        this_ptr->unk4[0xb] = '\0';
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar7 == 0) {
          iVar7 = 2;
        }
        else {
          iVar7 = 1;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->model).motion_controller,iVar7,1);
      }
    }
    pCVar3 = g_HeroActors[g_LocalHeroIndex];
    pCVar13 = &(pCVar3->base).base.location;
    if ((CLocation *)&local_b8 != pCVar13) {
      local_b8 = (pCVar13->position).x;
      local_b4 = (pCVar3->base).base.location.position.y;
      local_b0 = (pCVar3->base).base.location.position.z;
    }
    if (*(int *)(this_ptr->unk4 + 0x10) == 2) {
      *(float *)(this_ptr->unk4 + 4) = *(float *)(this_ptr->unk4 + 4) - delta_time;
      iVar7 = *(int *)((int)this_ptr + (4 - *(int *)(this_ptr->unk4 + 0x14)) * 4 + 0xce908);
      if (&local_b8 != (float *)(iVar7 + 0x20)) {
        local_b8 = *(float *)(iVar7 + 0x20);
        local_b4 = *(float *)(iVar7 + 0x24);
        local_b0 = *(float *)(iVar7 + 0x28);
      }
      if ((*(float *)(this_ptr->unk4 + 4) <= 0.0) ||
         (fVar21 = local_b8 - (this_ptr->base).base.base.location.position.x,
         fVar4 = local_b0 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar4 * fVar4 + fVar21 * fVar21) < (float)6)) {
        this_ptr->unk4[4] = '\0';
        this_ptr->unk4[5] = '\0';
        this_ptr->unk4[6] = -0x60;
        this_ptr->unk4[7] = '@';
        this_ptr->unk4[0x10] = '\x03';
        this_ptr->unk4[0x11] = '\0';
        this_ptr->unk4[0x12] = '\0';
        this_ptr->unk4[0x13] = '\0';
      }
    }
    else if (*(int *)(this_ptr->unk4 + 0x10) == 3) {
      iVar7 = *(int *)(this_ptr->unk4 + *(int *)(this_ptr->unk4 + 0x14) * 4 + 0x18);
      if (&local_b8 != (float *)(iVar7 + 0x20)) {
        local_b8 = *(float *)(iVar7 + 0x20);
        local_b4 = *(float *)(iVar7 + 0x24);
        local_b0 = *(float *)(iVar7 + 0x28);
      }
      fVar21 = *(float *)(this_ptr->unk4 + 4) - delta_time;
      *(float *)(this_ptr->unk4 + 4) = fVar21;
      if ((fVar21 <= 0.0) ||
         (fVar21 = local_b8 - (this_ptr->base).base.base.location.position.x,
         fVar4 = local_b0 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar4 * fVar4 + fVar21 * fVar21) < (float)4)) {
        core_vampboss_cpp_CVampireBoss_FUN_005e74c0(this_ptr);
      }
    }
    local_b4 = local_b4 + 4.0f;
    local_e8 = local_b8 - (this_ptr->base).base.base.location.position.x;
    local_e4 = local_b4 - (this_ptr->base).base.base.location.position.y;
    fVar15 = (float10)local_b0 - (float10)(this_ptr->base).base.base.location.position.z;
    local_e0 = (float)fVar15;
    atan2((float10)local_e8,fVar15);
    fVar15 = atan2
                       ((float10)local_e8,
                        SQRT((float10)local_ec * (float10)local_ec +
                             (float10)local_e4 * (float10)local_e4));
    local_70 = 1.2;
    local_4c = (CVector3f *)0x41a00000;
    local_48 = (CVector3f *)(float)extraout_ST1;
    local_40 = (float)-fVar15;
    if (*(int *)(this_ptr->unk4 + 0x10) == 1) {
      local_48 = (CVector3f *)-(float)local_48;
      local_40 = -local_40;
    }
    local_20 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         ((float)local_48 - (this_ptr->base).base.base.orient.vec.y);
    fVar21 = local_20 * delta_time * local_70;
    if (ABS(fVar21) <= ABS(local_20)) {
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fVar21;
    }
    else {
      (this_ptr->base).base.base.orient.vec.y = (float)local_48;
    }
    local_40 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (local_40 - (this_ptr->base).base.base.orient.vec.x);
    fVar21 = (this_ptr->base).base.hit_points;
    local_60 = -0.3926991;
    local_2c = 0.3926991;
    (this_ptr->base).base.base.orient.vec.x =
         local_40 * delta_time * local_70 + (this_ptr->base).base.base.orient.vec.x;
    if ((fVar21 < (float)25) && (*(int *)(this_ptr->unk4 + 0x10) == 0)) {
      local_2c = 1.5707964;
      local_60 = -1.5707964;
    }
    if ((this_ptr->base).base.base.orient.vec.x < local_60) {
      (this_ptr->base).base.base.orient.vec.x = local_60;
    }
    if (local_2c < (this_ptr->base).base.base.orient.vec.x) {
      (this_ptr->base).base.base.orient.vec.x = local_2c;
    }
    fVar15 = (float10)(this_ptr->base).base.base.orient.vec.x;
    fVar16 = (float10)fsin(fVar15);
    fVar17 = (float10)(this_ptr->base).base.base.orient.vec.y;
    fVar18 = (float10)fsin(fVar17);
    fVar15 = (float10)fcos(fVar15);
    fVar17 = (float10)fcos(fVar17);
    fVar19 = (float10)(float)local_4c;
    fVar20 = (float10)delta_time;
    fVar16 = -fVar16 * fVar19 * fVar20 + (float10)(this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.y = (float)fVar16;
    fVar21 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.x =
         (float)(fVar18 * fVar15 * fVar19 * fVar20 +
                (float10)(this_ptr->base).base.base.location.position.x);
    (this_ptr->base).base.base.location.position.z =
         (float)(fVar17 * fVar15 * fVar19 * fVar20 + (float10)fVar21);
    if (fVar16 < (float10)CStack_c4.z) {
      (this_ptr->base).base.base.location.position.y = CStack_c4.z;
    }
    local_20 = local_40;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    pCVar9 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                       (&this_ptr->model,(CBoundingBox3D *)(local_1b4 + 0x10));
    pCVar1 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar1 != pCVar9) {
      (pCVar1->min).x = (pCVar9->min).x;
      (this_ptr->base).base.cached_bounding_box.min.y = (pCVar9->min).y;
      (this_ptr->base).base.cached_bounding_box.min.z = (pCVar9->min).z;
    }
    pCVar11 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar11 != &pCVar9->max) {
      pCVar11->x = (pCVar9->max).x;
      (this_ptr->base).base.cached_bounding_box.max.y = (pCVar9->max).y;
      (this_ptr->base).base.cached_bounding_box.max.z = (pCVar9->max).z;
    }
    goto LAB_005e5f5f;
  }
  if (iVar7 == 1) {
    fVar21 = delta_time / 5.0f + this_ptr->morph_t;
    this_ptr->morph_t = fVar21;
    pCVar5 = g_CEventListPtr;
    if (1.0 <= fVar21) {
      this_ptr->form = 2;
      core_event_cpp_CEventList_executeCommands_FUN_004aabe0(pCVar5,"morphCompleted");
    }
    core_vampboss_cpp_CVampireBoss_FUN_005e6ca0(this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              ((CCloth *)this_ptr->unk2,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    pCVar2 = &(this_ptr->base).base.model;
    local_20 = delta_time;
    while (0.0 < local_20) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar2->motion_controller);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar2);
    local_18 = (CVector3f *)&(this_ptr->base).base.base.orient;
    pCVar13 = &(this_ptr->base).base.base.location;
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              ((CCloth *)(this_ptr->unk2 + 0x3fe70),&pCVar13->position,local_18,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar2);
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              ((CCloth *)(this_ptr->unk2 + 0x7fce0),&pCVar13->position,local_18,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar2);
    pCVar9 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                       (pCVar2,&local_154);
    pCVar1 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar1 != pCVar9) {
      (pCVar1->min).x = (pCVar9->min).x;
      (this_ptr->base).base.cached_bounding_box.min.y = (pCVar9->min).y;
      (this_ptr->base).base.cached_bounding_box.min.z = (pCVar9->min).z;
    }
    pCVar11 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar11 != &pCVar9->max) {
      pCVar11->x = (pCVar9->max).x;
      (this_ptr->base).base.cached_bounding_box.max.y = (pCVar9->max).y;
      (this_ptr->base).base.cached_bounding_box.max.z = (pCVar9->max).z;
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
  if (iVar7 == 3) {
    local_64 = delta_time / 5.0f;
    local_60 = this_ptr->morph_t;
    this_ptr->morph_t = local_60 - local_64;
    pCVar5 = g_CEventListPtr;
    if (0.0 < local_60 - local_64) {
      fVar21 = (local_64 / local_60) *
               ((this_ptr->base).base.closest_distance_threshold -
               (this_ptr->base).base.base.location.position.y) +
               (this_ptr->base).base.base.location.position.y;
    }
    else {
      this_ptr->form = 0;
      core_event_cpp_CEventList_executeCommands_FUN_004aabe0(pCVar5,"backToHuman");
      fVar21 = (this_ptr->base).base.closest_distance_threshold;
      this_ptr->morph_t = 0.0;
    }
    (this_ptr->base).base.base.location.position.y = fVar21;
    core_vampboss_cpp_CVampireBoss_FUN_005e6ca0(this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              ((CCloth *)this_ptr->unk2,&(this_ptr->base).base.base.location.position,
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
              ((CCloth *)(this_ptr->unk2 + 0x3fe70),local_18,&euler->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar2);
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              ((CCloth *)(this_ptr->unk2 + 0x7fce0),local_18,&euler->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar2);
    pCVar9 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                       (pCVar2,(CBoundingBox3D *)local_1b4);
    pCVar1 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar1 != pCVar9) {
      (pCVar1->min).x = (pCVar9->min).x;
      (this_ptr->base).base.cached_bounding_box.min.y = (pCVar9->min).y;
      (this_ptr->base).base.cached_bounding_box.min.z = (pCVar9->min).z;
    }
    pCVar11 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar11 != &pCVar9->max) {
      pCVar11->x = (pCVar9->max).x;
      (this_ptr->base).base.cached_bounding_box.max.y = (pCVar9->max).y;
      (this_ptr->base).base.cached_bounding_box.max.z = (pCVar9->max).z;
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
    uVar10 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_30->motion_controller);
    if (uVar10 < 2) {
      if (uVar10 == 1) {
        core_vampboss_cpp_CVampireBoss_FUN_005e7390(this_ptr);
LAB_005e648e:
        this_ptr->unk4[0] = '\0';
        this_ptr->unk4[1] = '\0';
        this_ptr->unk4[2] = -0x80;
        this_ptr->unk4[3] = '?';
      }
    }
    else {
      if (uVar10 < 3) {
        core_vampboss_cpp_CVampireBoss_FUN_005e7410(this_ptr);
        goto LAB_005e648e;
      }
      if (uVar10 < 4) {
        core_vampboss_cpp_CVampireBoss_FUN_005e7320(this_ptr);
        goto LAB_005e648e;
      }
      if (uVar10 == 0x29a) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
        CStack_c4.x = 0.0;
        CStack_c4.y = 20.0;
        CStack_c4.z = 20.0;
        core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                  ((CDemonActor *)this_ptr,&CStack_10c,&CStack_c4);
        core_charactr_cpp_CCharacter_dismember_FUN_0042b9e0((CCharacter *)this_ptr,&CStack_10c,-1.0)
        ;
        iVar7 = 0;
        for (local_2c = 0.0; (int)local_2c < g_CDemonSetPtr->enemy_count;
            local_2c = (float)((int)local_2c + 1)) {
          this_ptr_00 = (CCharacter *)
                        core_actor_cpp_castToClassHash_FUN_0040c790
                                  (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar7),
                                   g_CTVBatClassInfo.name_hash);
          if ((this_ptr_00 != (CCharacter *)0x0) &&
             (this_ptr_00[1].model.transformed_vertices[0xc].x != 0.0)) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_208);
            SStack_208.damage_amount = 999.0;
            (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)(this_ptr_00,&SStack_208);
          }
          iVar7 = iVar7 + 4;
        }
      }
    }
  }
  pCVar9 = core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
                     (local_30,&local_16c);
  pCVar1 = &(this_ptr->base).base.cached_bounding_box;
  if (pCVar1 != pCVar9) {
    (pCVar1->min).x = (pCVar9->min).x;
    (this_ptr->base).base.cached_bounding_box.min.y = (pCVar9->min).y;
    (this_ptr->base).base.cached_bounding_box.min.z = (pCVar9->min).z;
  }
  pCVar11 = &(this_ptr->base).base.cached_bounding_box.max;
  if (pCVar11 != &pCVar9->max) {
    pCVar11->x = (pCVar9->max).x;
    (this_ptr->base).base.cached_bounding_box.max.y = (pCVar9->max).y;
    (this_ptr->base).base.cached_bounding_box.max.z = (pCVar9->max).z;
  }
  pCVar2 = &(this_ptr->base).base.model;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar2->motion_controller);
  pCVar6 = g_CGamePtr;
  iVar7 = pSVar8->state_index;
  switch(iVar7) {
  case 0:
    (this_ptr->base).base.turn_speed = 3.141593f * delta_time;
    pCVar5 = g_CEventListPtr;
    if (pCVar6->letterbox_mode == 0) {
      iVar12 = *(int *)(this_ptr->unk4 + 0x14);
      (this_ptr->base).base.walk_step_speed = 10.0f * delta_time;
      core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0
                ((CCharacter *)this_ptr,*(CDemonActor **)(this_ptr->unk4 + iVar12 * 4 + 0x18),0.2,
                 999999.0,&this_ptr->unk5);
      switch(this_ptr->unk5) {
      default:
        fVar21 = ((this_ptr->base).base.max_hit_points * delta_time) / 120.0f +
                 (this_ptr->base).base.hit_points;
        (this_ptr->base).base.hit_points = fVar21;
        if ((float)50 < fVar21) goto LAB_005e6560;
        iVar12 = core_hero_cpp_FUN_004f2220();
        if (iVar12 == 0) {
          pCVar3 = g_HeroActors[g_LocalHeroIndex];
          local_d0.x = (pCVar3->base).base.location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_d0.y = (pCVar3->base).base.location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_d0.z = (pCVar3->base).base.location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          pCVar11 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_dc,&local_d0);
          local_114 = pCVar11->y;
          local_18 = (CVector3f *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (local_114 - (this_ptr->base).base.base.orient.vec.y);
          (this_ptr->base).base.turn_angle_accumulator = (float)local_18;
          local_3c = (CVector3f *)(this_ptr->base).base.turn_angle_accumulator;
          local_48 = (CVector3f *)(this_ptr->base).base.turn_speed;
          local_3c = (CVector3f *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)local_3c);
          local_28 = (CVector3f *)-(float)local_48;
          local_4c = local_28;
          if (((float)local_28 <= (float)local_3c) &&
             (local_4c = local_3c, (float)local_48 < (float)local_3c)) {
            local_4c = local_48;
          }
          fVar21 = *(float *)this_ptr->unk4 - delta_time;
          (this_ptr->base).base.turn_angle_accumulator = (float)local_4c;
          *(float *)this_ptr->unk4 = fVar21;
          local_18 = local_3c;
          if (fVar21 <= 0.0) {
            this_ptr->unk4[0] = '\0';
            this_ptr->unk4[1] = '\0';
            this_ptr->unk4[2] = '\0';
            this_ptr->unk4[3] = '\0';
            iVar12 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
            pCVar2 = &(this_ptr->base).base.model;
            if (iVar12 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,4,1);
            }
            else if (iVar12 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,5,1);
            }
            else if (iVar12 == 2) {
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
        this_ptr->unk4[0] = '\0';
        this_ptr->unk4[1] = '\0';
        this_ptr->unk4[2] = '@';
        this_ptr->unk4[3] = '@';
      }
    }
    else {
      this_ptr->unk4[0] = '\0';
      this_ptr->unk4[1] = '\0';
      this_ptr->unk4[2] = '@';
      this_ptr->unk4[3] = '@';
      iVar12 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                         (pCVar5,"morphToBat");
      if (iVar12 == 0) {
        pCVar3 = g_HeroActors[g_LocalHeroIndex];
        local_13c.x = (pCVar3->base).base.location.position.x -
                      (this_ptr->base).base.base.location.position.x;
        local_13c.y = (pCVar3->base).base.location.position.y -
                      (this_ptr->base).base.base.location.position.y;
        local_13c.z = (pCVar3->base).base.location.position.z -
                      (this_ptr->base).base.base.location.position.z;
        pCVar11 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                            (&local_130,&local_13c);
        local_120 = pCVar11->y;
        local_18 = (CVector3f *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_120 - (this_ptr->base).base.base.orient.vec.y);
        (this_ptr->base).base.turn_angle_accumulator = (float)local_18;
        local_34 = (CVector3f *)(this_ptr->base).base.turn_angle_accumulator;
        local_50 = (CVector3f *)(this_ptr->base).base.turn_speed;
        local_34 = (CVector3f *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)local_34);
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
LAB_005e6560:
        core_vampboss_cpp_CVampireBoss_FUN_005e7480(this_ptr);
      }
    }
    break;
  case 2:
    iVar12 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,"flyout");
    if (iVar12 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar2->motion_controller,0,1)
      ;
    }
  }
  if ((g_CGamePtr->letterbox_mode == 0) && (iVar7 != 2)) {
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
  pCVar13 = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CCloth_process_FUN_0043ab80
            ((CCloth *)(this_ptr->unk2 + 0x3fe70),&pCVar13->position,local_18,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar2);
  core_cloth_cpp_CCloth_process_FUN_0043ab80
            ((CCloth *)(this_ptr->unk2 + 0x7fce0),&pCVar13->position,local_18,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar2);
LAB_005e5f5f:
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->base).base.model.motion_controller);
  if ((pSVar8->state_index != 2) && (g_CGamePtr->letterbox_mode == 0)) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004e0bf0
              (g_CGamePtr,(this_ptr->base).base.descriptive_name,
               (int)((this_ptr->base).base.hit_points / (this_ptr->base).base.max_hit_points),0.5);
    return;
  }
  return;
}
