// Name: core_vampboss.cpp_CVampireBoss_process_FUN_00581910
// Address: 00581910
// Address Range: [[00581910, 00582c8a]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_00581910(CVampireBoss *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_00581910(CVampireBoss *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CLocation *pCVar2;
  CBoundingBox3D *pCVar3;
  CDeformableModelInstance *pCVar4;
  float fVar5;
  CEventList *pCVar6;
  CGame *pCVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  CVampireBoss *pCVar11;
  float *pfVar12;
  float *pfVar13;
  CVector3f *pCVar14;
  byte bVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float afStackY_116c [907];
  float fVar22;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  SDamageInfo SStack_31c;
  SDamageInfo SStack_2e0;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float afStack_28c [6];
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float afStack_25c [6];
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  CVector3f CStack_22c;
  CVector3f CStack_220;
  float afStack_214 [6];
  CVector3f CStack_1fc;
  CVector3f CStack_1f0;
  float afStack_1e4 [6];
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float afStack_1b4 [6];
  float afStack_19c [6];
  float fStack_184;
  float afStack_180 [5];
  float fStack_16c;
  uint uStack_168;
  uint uStack_164;
  float fStack_160;
  float afStack_15c [5];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float afStack_138 [4];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  uint uStack_10c;
  float fStack_108;
  uint uStack_100;
  CVector3f CStack_f4;
  float fStack_e8;
  float afStack_e4 [5];
  uint uStack_d0;
  float fStack_cc;
  float afStack_c4 [3];
  CVector3f aCStack_b8 [6];
  float fStack_6c;
  float fStack_68;
  int iStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f *pCStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  int iStack_1c;
  float fStack_18;
  CVector3f *pCStack_14;
  
  bVar15 = 0;
  pCVar11 = this_ptr;
  do {
    if (pCVar11->way_point_0 == (CDemonActor *)0x0) {
      _DAT_01d046a0 = "..\\core\\vampboss.cpp";
      _DAT_01d046a4 = 0xcf;
      core_main_c_FUN_004e4500("CVampireBoss::process - Need 4 waypoints");
    }
    pCVar11 = (CVampireBoss *)((pCVar11->base).base.base.actor_name + 4);
  } while (pCVar11 != (CVampireBoss *)((this_ptr->base).base.base.actor_name + 0x10));
  iVar8 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    return;
  }
  iVar8 = this_ptr->form;
  if (iVar8 == 2) {
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_00582dc0(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_005afdf0
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    if ((this_ptr->base).base.hit_points < (float)_DAT_005eda4c) {
      iVar8 = this_ptr->bat_ai_state;
      (this_ptr->base).base.hit_points = 24.999;
      if ((iVar8 != 2) && (iVar8 != 3)) {
        core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005836a0(this_ptr);
        this_ptr->bat_ai_state = 2;
        this_ptr->flee_timer = 5.0;
      }
    }
    if ((this_ptr->bat_ai_state != 2) && (this_ptr->bat_ai_state != 3)) {
      iVar8 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      fStack_124 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar8 + 0x20);
      fStack_120 = (this_ptr->base).base.base.location.position.y - *(float *)(iVar8 + 0x24);
      fStack_11c = (this_ptr->base).base.base.location.position.z - *(float *)(iVar8 + 0x28);
      fStack_e8 = fStack_124;
      afStack_e4[(uint)bVar15 * -2] = afStack_138[(uint)bVar15 * -2 + 6];
      afStack_e4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_138[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
      fStack_324 = SQRT(fStack_e8 * fStack_e8 + afStack_e4[1] * afStack_e4[1]);
      if (fStack_324 < (float)_DAT_005eda54) {
        this_ptr->bat_ai_state = 1;
        pCStack_14 = (CVector3f *)(uint)(afStack_e4[0] < (float)_DAT_005eda5c);
        if ((float10)0 != ABS((float10)(int)pCStack_14)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_2e0);
          SStack_2e0.damage_amount = 10.0;
          SStack_2e0.attacker = (CDemonActor *)this_ptr;
          iVar8 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          SStack_2e0.wielder = (CDemonActor *)this_ptr;
          (**(code **)(*(int *)(iVar8 + 0x2b0) + 0x110))(iVar8,&SStack_2e0);
        }
      }
      if ((float)_DAT_005eda64 < fStack_324) {
        this_ptr->action_timer = 5.0;
        this_ptr->has_attacked = 0;
        this_ptr->bat_ai_state = 0;
      }
      if ((this_ptr->bat_ai_state == 0) &&
         (fVar22 = this_ptr->action_timer - delta_time, this_ptr->action_timer = fVar22,
         fVar22 < 0.0)) {
        this_ptr->bat_ai_state = 1;
        this_ptr->action_timer = 0.0;
      }
      iVar8 = core_motion_cpp_FUN_005035c0(&this_ptr->model);
      if ((((*(int *)(iVar8 + 0x24) == 0) && (this_ptr->bat_ai_state == 0)) &&
          (fStack_324 < (float)_DAT_005eda6c)) && (this_ptr->has_attacked == 0)) {
        this_ptr->has_attacked = 1;
        iVar8 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
        if (iVar8 == 0) {
          iVar8 = 2;
        }
        else {
          iVar8 = 1;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->model).base,iVar8,1);
      }
    }
    iVar8 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    if (afStack_15c + 5 != (float *)(iVar8 + 0x20)) {
      fStack_148 = *(float *)(iVar8 + 0x20);
      fStack_144 = *(float *)(iVar8 + 0x24);
      fStack_140 = *(float *)(iVar8 + 0x28);
    }
    if (this_ptr->bat_ai_state == 2) {
      this_ptr->flee_timer = this_ptr->flee_timer - delta_time;
      iVar8 = *(int *)((int)this_ptr + (4 - this_ptr->waypoint_index) * 4 + 0xc3b84);
      if (afStack_15c + 5 != (float *)(iVar8 + 0x20)) {
        fStack_148 = *(float *)(iVar8 + 0x20);
        fStack_144 = *(float *)(iVar8 + 0x24);
        fStack_140 = *(float *)(iVar8 + 0x28);
      }
      if ((this_ptr->flee_timer <= 0.0) ||
         (fVar22 = fStack_148 - (this_ptr->base).base.base.location.position.x,
         fVar5 = fStack_140 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar5 * fVar5 + fVar22 * fVar22) < (float)_DAT_005eda7c)) {
        this_ptr->flee_timer = 5.0;
        this_ptr->bat_ai_state = 3;
      }
    }
    else if (this_ptr->bat_ai_state == 3) {
      fVar22 = *(float *)((int)(&this_ptr->morph + 1) + (this_ptr->waypoint_index + 7) * 4);
      if (afStack_15c + 5 != (float *)((int)fVar22 + 0x20)) {
        fStack_148 = *(float *)((int)fVar22 + 0x20);
        fStack_144 = *(float *)((int)fVar22 + 0x24);
        fStack_140 = *(float *)((int)fVar22 + 0x28);
      }
      fVar22 = this_ptr->flee_timer - delta_time;
      this_ptr->flee_timer = fVar22;
      if ((fVar22 <= 0.0) ||
         (fVar22 = fStack_148 - (this_ptr->base).base.base.location.position.x,
         fVar5 = fStack_140 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar5 * fVar5 + fVar22 * fVar22) < (float)_DAT_005eda74)) {
        core_vampboss_cpp_CVampireBoss_transformToHuman_FUN_00583650(this_ptr);
      }
    }
    fStack_58 = 1.2;
    fStack_144 = fStack_144 + _DAT_005eda84;
    fStack_48 = 20.0;
    afStack_138[2] = fStack_148 - (this_ptr->base).base.base.location.position.x;
    fStack_128 = fStack_140 - (this_ptr->base).base.base.location.position.z;
    afStack_138[3] = fStack_144 - (this_ptr->base).base.base.location.position.y;
    fStack_184 = afStack_138[2];
    afStack_180[(uint)bVar15 * -2] = afStack_138[(uint)bVar15 * -2 + 3];
    afStack_180[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_138[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    atan2();
    fVar16 = SQRT((float10)fStack_184 * (float10)fStack_184 +
                  (float10)afStack_180[1] * (float10)afStack_180[1]);
    fVar17 = (float10)afStack_180[0];
    atan2();
    fStack_30 = (float)fVar16;
    pCStack_28 = (CVector3f *)(float)-fVar17;
    if (this_ptr->bat_ai_state == 1) {
      fStack_30 = -fStack_30;
      pCStack_28 = (CVector3f *)-(float)pCStack_28;
    }
    fStack_320 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                  (fStack_30 - (this_ptr->base).base.base.orient.vec.y);
    fStack_328 = fStack_320 * delta_time * fStack_58;
    if (ABS(fStack_328) <= ABS(fStack_320)) {
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fStack_328
      ;
    }
    else {
      (this_ptr->base).base.base.orient.vec.y = fStack_30;
    }
    pCStack_14 = (CVector3f *)fStack_320;
    pCStack_28 = (CVector3f *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                           ((float)pCStack_28 - (this_ptr->base).base.base.orient.vec.x);
    fVar22 = (this_ptr->base).base.hit_points;
    fStack_3c = -0.3926991;
    fStack_34 = 0.3926991;
    (this_ptr->base).base.base.orient.vec.x =
         (float)pCStack_28 * delta_time * fStack_58 + (this_ptr->base).base.base.orient.vec.x;
    if ((fVar22 < (float)_DAT_005eda4c) && (this_ptr->bat_ai_state == 0)) {
      fStack_34 = 1.5707964;
      fStack_3c = -1.5707964;
    }
    if ((this_ptr->base).base.base.orient.vec.x < fStack_3c) {
      (this_ptr->base).base.base.orient.vec.x = fStack_3c;
    }
    if (fStack_34 < (this_ptr->base).base.base.orient.vec.x) {
      (this_ptr->base).base.base.orient.vec.x = fStack_34;
    }
    fVar16 = (float10)(this_ptr->base).base.base.orient.vec.x;
    fVar17 = (float10)fsin(fVar16);
    fVar18 = (float10)(this_ptr->base).base.base.orient.vec.y;
    fVar19 = (float10)fsin(fVar18);
    fVar16 = (float10)fcos(fVar16);
    fVar18 = (float10)fcos(fVar18);
    fVar20 = (float10)fStack_48;
    fVar21 = (float10)delta_time;
    fVar17 = -fVar17 * fVar20 * fVar21 + (float10)(this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.y = (float)fVar17;
    fVar22 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.x =
         (float)(fVar19 * fVar16 * fVar20 * fVar21 +
                (float10)(this_ptr->base).base.base.location.position.x);
    (this_ptr->base).base.base.location.position.z =
         (float)(fVar18 * fVar16 * fVar20 * fVar21 + (float10)fVar22);
    if (fVar17 < (float10)fStack_144) {
      (this_ptr->base).base.base.location.position.y = fStack_144;
    }
    pCStack_14 = pCStack_28;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
    core_skeleton_cpp_FUN_005487d0(&this_ptr->model);
    pfVar12 = afStack_1e4;
    pfVar13 = &fStack_244;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar13 = *pfVar12;
      pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
      pfVar13 = pfVar13 + (uint)bVar15 * -2 + 1;
    }
    pCVar3 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar3 != (CBoundingBox3D *)&fStack_244) {
      (pCVar3->min).x = fStack_244;
      (this_ptr->base).base.cached_bounding_box.min.y = fStack_240;
      (this_ptr->base).base.cached_bounding_box.min.z = fStack_23c;
    }
    pCVar14 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar14 != (CVector3f *)&fStack_238) {
      pCVar14->x = fStack_238;
      (this_ptr->base).base.cached_bounding_box.max.y = fStack_234;
      (this_ptr->base).base.cached_bounding_box.max.z = fStack_230;
    }
    goto LAB_00581f5f;
  }
  if (iVar8 == 1) {
    fVar22 = delta_time / _DAT_005fd82c + this_ptr->morph_t;
    this_ptr->morph_t = fVar22;
    pCVar6 = 0x01C38BC0;
    if (1.0 <= fVar22) {
      this_ptr->form = 2;
      core_event_cpp_CEventList_executeCommands_FUN_004894f0(pCVar6,"morphCompleted");
    }
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_00582dc0(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_005afdf0
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    pCVar4 = &(this_ptr->base).base.model;
    fStack_68 = delta_time;
    while (0.0 < fStack_68) {
      core_motion_cpp_CMotionController_advance_FUN_005030c0(&pCVar4->base,&fStack_68);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(pCVar4);
    pUVar1 = &(this_ptr->base).base.base.orient;
    pCStack_14 = &(this_ptr->base).base.base.location.position;
    core_cloth_cpp_CCloth_process_FUN_005afdf0
              (&this_ptr->cape_cloth,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar4);
    core_cloth_cpp_CCloth_process_FUN_005afdf0
              (&this_ptr->skirt_cloth,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar4);
    core_skeleton_cpp_FUN_005487d0(pCVar4);
    pfVar12 = afStack_1b4;
    pfVar13 = &fStack_1cc;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar13 = *pfVar12;
      pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
      pfVar13 = pfVar13 + (uint)bVar15 * -2 + 1;
    }
    pCVar3 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar3 != (CBoundingBox3D *)&fStack_1cc) {
      (pCVar3->min).x = fStack_1cc;
      (this_ptr->base).base.cached_bounding_box.min.y = fStack_1c8;
      (this_ptr->base).base.cached_bounding_box.min.z = fStack_1c4;
    }
    pCVar14 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar14 != (CVector3f *)&fStack_1c0) {
      pCVar14->x = fStack_1c0;
      (this_ptr->base).base.cached_bounding_box.max.y = fStack_1bc;
      (this_ptr->base).base.cached_bounding_box.max.z = fStack_1b8;
    }
    core_skeleton_cpp_FUN_005487d0(&this_ptr->model);
    pfVar12 = afStack_28c;
    pCVar14 = &CStack_22c;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      pCVar14->x = *pfVar12;
      pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
      pCVar14 = (CVector3f *)((int)pCVar14 + ((uint)bVar15 * -2 + 1) * 4);
    }
    pCVar3 = &(this_ptr->base).base.cached_bounding_box;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(pCVar3,&CStack_22c);
    core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(pCVar3,&CStack_220);
    (this_ptr->base).base.base.location.position.y =
         (this_ptr->base).base.base.location.position.y + delta_time;
    goto LAB_00581f5f;
  }
  if (iVar8 == 3) {
    fStack_5c = delta_time / _DAT_005fd82c;
    fStack_60 = this_ptr->morph_t;
    this_ptr->morph_t = fStack_60 - fStack_5c;
    pCVar6 = 0x01C38BC0;
    if (0.0 < fStack_60 - fStack_5c) {
      fVar22 = (fStack_5c / fStack_60) *
               ((this_ptr->base).base.closest_distance_threshold -
               (this_ptr->base).base.base.location.position.y) +
               (this_ptr->base).base.base.location.position.y;
    }
    else {
      this_ptr->form = 0;
      core_event_cpp_CEventList_executeCommands_FUN_004894f0(pCVar6,"backToHuman");
      fVar22 = (this_ptr->base).base.closest_distance_threshold;
      this_ptr->morph_t = 0.0;
    }
    (this_ptr->base).base.base.location.position.y = fVar22;
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_00582dc0(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_005afdf0
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    pCVar4 = &(this_ptr->base).base.model;
    fStack_18 = delta_time;
    while (0.0 < fStack_18) {
      core_motion_cpp_CMotionController_advance_FUN_005030c0(&pCVar4->base,&fStack_18);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(pCVar4);
    pUVar1 = &(this_ptr->base).base.base.orient;
    pCStack_14 = &(this_ptr->base).base.base.location.position;
    core_cloth_cpp_CCloth_process_FUN_005afdf0
              (&this_ptr->cape_cloth,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar4);
    core_cloth_cpp_CCloth_process_FUN_005afdf0
              (&this_ptr->skirt_cloth,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar4);
    core_skeleton_cpp_FUN_005487d0(pCVar4);
    pfVar12 = afStack_19c;
    pfVar13 = &fStack_274;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar13 = *pfVar12;
      pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
      pfVar13 = pfVar13 + (uint)bVar15 * -2 + 1;
    }
    pCVar3 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar3 != (CBoundingBox3D *)&fStack_274) {
      (pCVar3->min).x = fStack_274;
      (this_ptr->base).base.cached_bounding_box.min.y = fStack_270;
      (this_ptr->base).base.cached_bounding_box.min.z = fStack_26c;
    }
    pCVar14 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar14 != (CVector3f *)&fStack_268) {
      pCVar14->x = fStack_268;
      (this_ptr->base).base.cached_bounding_box.max.y = fStack_264;
      (this_ptr->base).base.cached_bounding_box.max.z = fStack_260;
    }
    core_skeleton_cpp_FUN_005487d0(&this_ptr->model);
    pfVar12 = afStack_214;
    pCVar14 = &CStack_1fc;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      pCVar14->x = *pfVar12;
      pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
      pCVar14 = (CVector3f *)((int)pCVar14 + ((uint)bVar15 * -2 + 1) * 4);
    }
    pCVar3 = &(this_ptr->base).base.cached_bounding_box;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(pCVar3,&CStack_1fc);
    core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(pCVar3,&CStack_1f0);
    goto LAB_00581f5f;
  }
  pCStack_20 = &(this_ptr->base).base.model.base;
  fStack_6c = delta_time;
  while (0.0 < fStack_6c) {
    uVar9 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_20,&fStack_6c);
    if (uVar9 < 2) {
      if (uVar9 == 1) {
        core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_00583520(this_ptr);
LAB_00582508:
        this_ptr->action_timer = 1.0;
      }
    }
    else {
      if (uVar9 < 3) {
        core_vampboss_cpp_CVampireBoss_summonFireEmitters_FUN_005835a0(this_ptr);
        goto LAB_00582508;
      }
      if (uVar9 < 4) {
        core_vampboss_cpp_CVampireBoss_summonBats_FUN_005834b0(this_ptr);
        goto LAB_00582508;
      }
      if (uVar9 == 0x29a) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
        uStack_168 = 0x41a00000;
        uStack_164 = 0x41a00000;
        fStack_16c = 0.0;
        core_actor_cpp_FUN_00408cf0(this_ptr,afStack_180 + 5);
        iVar8 = 0;
        pCVar14 = aCStack_b8;
        fVar22 = -1.0;
        aCStack_b8[0].x = afStack_180[2];
        *(float *)((int)aCStack_b8 + (uint)bVar15 * -8 + 4) = afStack_180[(uint)bVar15 * -2 + 3];
        pCVar11 = this_ptr;
        *(float *)((int)aCStack_b8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
             afStack_180[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
        core_charactr_cpp_CCharacter_dismember_FUN_00427360
                  ((CCharacter *)pCVar11,pCVar14,fVar22,iVar8);
        iStack_1c = 0;
        iVar8 = 0;
        while (iStack_1c < g_CDemonSetPtr->enemy_count) {
          iVar10 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(uint *)((int)g_CDemonSetPtr->enemies + iVar8),
                              g_CTVBatClassInfo.name_hash);
          if ((iVar10 == 0) || (*(int *)(iVar10 + 0x10ca0) == 0)) {
            iStack_1c = iStack_1c + 1;
            iVar8 = iVar8 + 4;
          }
          else {
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_31c);
            SStack_31c.damage_amount = 999.0;
            (**(code **)(*(int *)(iVar10 + 0x2b0) + 0x110))(iVar10,&SStack_31c);
            iStack_1c = iStack_1c + 1;
            iVar8 = iVar8 + 4;
          }
        }
      }
    }
  }
  core_skeleton_cpp_FUN_005487d0(pCStack_20);
  pfVar12 = afStack_25c;
  pfVar13 = &fStack_2a4;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar13 = *pfVar12;
    pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
    pfVar13 = pfVar13 + (uint)bVar15 * -2 + 1;
  }
  pCVar3 = &(this_ptr->base).base.cached_bounding_box;
  if (pCVar3 != (CBoundingBox3D *)&fStack_2a4) {
    (pCVar3->min).x = fStack_2a4;
    (this_ptr->base).base.cached_bounding_box.min.y = fStack_2a0;
    (this_ptr->base).base.cached_bounding_box.min.z = fStack_29c;
  }
  pCVar14 = &(this_ptr->base).base.cached_bounding_box.max;
  if (pCVar14 != (CVector3f *)&fStack_298) {
    pCVar14->x = fStack_298;
    (this_ptr->base).base.cached_bounding_box.max.y = fStack_294;
    (this_ptr->base).base.cached_bounding_box.max.z = fStack_290;
  }
  pCVar4 = &(this_ptr->base).base.model;
  iVar8 = core_motion_cpp_FUN_005035c0(pCVar4);
  pCVar7 = g_CGamePtr;
  iStack_64 = *(int *)(iVar8 + 0x24);
  switch(*(int *)(iVar8 + 0x24)) {
  case 0:
    (this_ptr->base).base.turn_speed = _DAT_005fd834 * delta_time;
    pCVar6 = 0x01C38BC0;
    if (pCVar7->letterbox_mode == 0) {
      iVar8 = this_ptr->waypoint_index;
      (this_ptr->base).base.walk_step_speed = _DAT_005fd830 * delta_time;
      core_charactr_cpp_FUN_00428260
                (this_ptr,*(float *)((int)(&this_ptr->morph + 1) + (iVar8 + 7) * 4),0x3e4ccccd,
                 0x497423f0,&this_ptr->follow_result);
      switch(this_ptr->follow_result) {
      default:
        fVar22 = ((this_ptr->base).base.max_hit_points * delta_time) / _DAT_005fd838 +
                 (this_ptr->base).base.hit_points;
        (this_ptr->base).base.hit_points = fVar22;
        if ((float)_DAT_005eda8c < fVar22) goto LAB_00582605;
        pCVar2 = &(this_ptr->base).base.base.location;
        iVar8 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100(pCVar2,0x41400000);
        if (iVar8 == 0) {
          iVar8 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          fStack_160 = *(float *)(iVar8 + 0x20) - (pCVar2->position).x;
          afStack_15c[0] = *(float *)(iVar8 + 0x24) - (this_ptr->base).base.base.location.position.y
          ;
          afStack_15c[1] = *(float *)(iVar8 + 0x28) - (this_ptr->base).base.base.location.position.z
          ;
          afStack_e4[2] = fStack_160;
          afStack_e4[(uint)bVar15 * -2 + 3] = afStack_15c[(uint)bVar15 * -2];
          afStack_e4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
               afStack_15c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_e4 + 2);
          uStack_d0 = afStack_15c[2];
          afStack_e4[(uint)bVar15 * -2 + 6] = afStack_15c[(uint)bVar15 * -2 + 3];
          afStack_e4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
               afStack_15c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
          pCStack_14 = (CVector3f *)
                       core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                 (fStack_cc - (this_ptr->base).base.base.orient.vec.y);
          (this_ptr->base).base.turn_angle_accumulator = (float)pCStack_14;
          fStack_2c = (this_ptr->base).base.turn_angle_accumulator;
          fStack_4c = (this_ptr->base).base.turn_speed;
          pCStack_14 = (CVector3f *)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fStack_2c);
          fStack_2c = (float)pCStack_14;
          fStack_38 = -fStack_4c;
          fStack_50 = fStack_38;
          if ((fStack_38 <= (float)pCStack_14) &&
             (fStack_38 = (float)pCStack_14, fStack_4c < (float)pCStack_14)) {
            fStack_38 = fStack_4c;
          }
          fVar22 = this_ptr->action_timer - delta_time;
          (this_ptr->base).base.turn_angle_accumulator = fStack_38;
          this_ptr->action_timer = fVar22;
          if (fVar22 <= 0.0) {
            this_ptr->action_timer = 0.0;
            iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
            pCVar4 = &(this_ptr->base).base.model;
            if (iVar8 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar4->base,4,1);
            }
            else if (iVar8 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar4->base,5,1);
            }
            else if (iVar8 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar4->base,6,1);
            }
          }
        }
        else {
          core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005836a0(this_ptr);
        }
        break;
      case 1:
      case 2:
        this_ptr->action_timer = 3.0;
      }
    }
    else {
      this_ptr->action_timer = 3.0;
      iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340(pCVar6,"morphToBat")
      ;
      if (iVar8 == 0) {
        iVar8 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        fStack_13c = *(float *)(iVar8 + 0x20) - (this_ptr->base).base.base.location.position.x;
        afStack_138[0] = *(float *)(iVar8 + 0x24) - (this_ptr->base).base.base.location.position.y;
        afStack_138[1] = *(float *)(iVar8 + 0x28) - (this_ptr->base).base.base.location.position.z;
        afStack_c4[0] = fStack_13c;
        afStack_e4[(uint)bVar15 * -2 + 9] = afStack_138[(uint)bVar15 * -2];
        afStack_e4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
             afStack_138[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_e4 + 8);
        uStack_10c = uStack_100;
        afStack_138[(uint)bVar15 * -2 + 0xc] = afStack_138[(uint)bVar15 * -2 + 0xf];
        afStack_138[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
             afStack_138[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
        pCStack_14 = (CVector3f *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                               (fStack_108 - (this_ptr->base).base.base.orient.vec.y);
        (this_ptr->base).base.turn_angle_accumulator = (float)pCStack_14;
        fStack_24 = (this_ptr->base).base.turn_angle_accumulator;
        fStack_44 = (this_ptr->base).base.turn_speed;
        pCStack_14 = (CVector3f *)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fStack_24);
        fStack_24 = (float)pCStack_14;
        fStack_40 = -fStack_44;
        fStack_54 = fStack_40;
        if ((fStack_40 <= (float)pCStack_14) &&
           (fStack_40 = (float)pCStack_14, fStack_44 < (float)pCStack_14)) {
          fStack_40 = fStack_44;
        }
        (this_ptr->base).base.turn_angle_accumulator = fStack_40;
      }
      else {
LAB_00582605:
        core_vampboss_cpp_CVampireBoss_transformToBat_FUN_00583610(this_ptr);
      }
    }
    break;
  case 2:
    iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340(0x01C38BC0,"flyout")
    ;
    if (iVar8 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar4->base,0,1);
    }
  }
  if ((g_CGamePtr->letterbox_mode == 0) && (iStack_64 != 2)) {
    fStack_118 = (this_ptr->base).base.position_delta.x +
                 (this_ptr->base).base.model.accumulated_root_motion.x;
    fStack_114 = (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_110 = (this_ptr->base).base.position_delta.z +
                 (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_f4.x = fStack_118;
    *(float *)((int)&CStack_f4 + (uint)bVar15 * -8 + 4) = afStack_138[(uint)bVar15 * -2 + 9];
    *(float *)((int)&CStack_f4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         afStack_138[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
    CStack_f4.y = CStack_f4.y - delta_time * (float)_DAT_005eda94;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_f4);
  }
  (this_ptr->base).base.position_delta.z = 0.0;
  (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
  (this_ptr->base).base.position_delta.x = (this_ptr->base).base.position_delta.y;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  pCVar4 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar4);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  pUVar1 = &(this_ptr->base).base.base.orient;
  pCStack_14 = &(this_ptr->base).base.base.location.position;
  core_cloth_cpp_CCloth_process_FUN_005afdf0
            (&this_ptr->cape_cloth,pCStack_14,&pUVar1->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar4);
  core_cloth_cpp_CCloth_process_FUN_005afdf0
            (&this_ptr->skirt_cloth,pCStack_14,&pUVar1->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar4);
LAB_00581f5f:
  iVar8 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
  if ((*(int *)(iVar8 + 0x24) != 2) && (g_CGamePtr->letterbox_mode == 0)) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004bb8d0
              (g_CGamePtr,(this_ptr->base).base.descriptive_name,
               (this_ptr->base).base.hit_points / (this_ptr->base).base.max_hit_points,0.5);
    return;
  }
  return;
}
