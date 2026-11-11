// Name: core_vampboss.cpp_CVampireBoss_process_FUN_005a5550
// Address: 005a5550
// Address Range: [[005a5550, 005a68ca]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_005a5550(CVampireBoss *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_005a5550(CVampireBoss *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CLocation *pCVar2;
  CBoundingBox3D *pCVar3;
  CDeformableModelInstance *pCVar4;
  float fVar5;
  CEventList *pCVar6;
  CGame *pCVar7;
  int iVar8;
  SMotion *pSVar9;
  uint uVar10;
  int iVar11;
  CVampireBoss *pCVar12;
  float *pfVar13;
  float *pfVar14;
  CVector3f *pCVar15;
  byte bVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float afStackY_116c [907];
  float fVar23;
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
  
  bVar16 = 0;
  pCVar12 = this_ptr;
  do {
    if (pCVar12->way_point_0 == (CDemonActor *)0x0) {
      _DAT_01d1d400 = "..\\core\\vampboss.cpp";
      _DAT_01d1d404 = 0xcf;
      core_main_c_FUN_005030e0("CVampireBoss::process - Need 4 waypoints");
    }
    pCVar12 = (CVampireBoss *)((pCVar12->base).base.base.actor_name + 4);
  } while (pCVar12 != (CVampireBoss *)((this_ptr->base).base.base.actor_name + 0x10));
  iVar8 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    return;
  }
  iVar8 = this_ptr->form;
  if (iVar8 == 2) {
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_005a6a00(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    if ((this_ptr->base).base.hit_points < (float)_DAT_005f8da8) {
      iVar8 = this_ptr->bat_ai_state;
      (this_ptr->base).base.hit_points = 24.999;
      if ((iVar8 != 2) && (iVar8 != 3)) {
        core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005a72e0(this_ptr);
        this_ptr->bat_ai_state = 2;
        this_ptr->flee_timer = 5.0;
      }
    }
    if ((this_ptr->bat_ai_state != 2) && (this_ptr->bat_ai_state != 3)) {
      iVar8 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      fStack_124 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar8 + 0x20);
      fStack_120 = (this_ptr->base).base.base.location.position.y - *(float *)(iVar8 + 0x24);
      fStack_11c = (this_ptr->base).base.base.location.position.z - *(float *)(iVar8 + 0x28);
      fStack_e8 = fStack_124;
      afStack_e4[(uint)bVar16 * -2] = afStack_138[(uint)bVar16 * -2 + 6];
      afStack_e4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
           afStack_138[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
      fStack_324 = SQRT(fStack_e8 * fStack_e8 + afStack_e4[1] * afStack_e4[1]);
      if (fStack_324 < (float)_DAT_005f8db0) {
        this_ptr->bat_ai_state = 1;
        pCStack_14 = (CVector3f *)(uint)(afStack_e4[0] < (float)_DAT_005f8db8);
        if ((float10)0 != ABS((float10)(int)pCStack_14)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_2e0);
          SStack_2e0.damage_amount = 10.0;
          SStack_2e0.attacker = (CDemonActor *)this_ptr;
          iVar8 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          SStack_2e0.wielder = (CDemonActor *)this_ptr;
          (**(code **)(*(int *)(iVar8 + 0x154) + 0x108))(iVar8,&SStack_2e0);
        }
      }
      if ((float)_DAT_005f8dc0 < fStack_324) {
        this_ptr->action_timer = 5.0;
        this_ptr->has_attacked = 0;
        this_ptr->bat_ai_state = 0;
      }
      if ((this_ptr->bat_ai_state == 0) &&
         (fVar23 = this_ptr->action_timer - delta_time, this_ptr->action_timer = fVar23,
         fVar23 < 0.0)) {
        this_ptr->bat_ai_state = 1;
        this_ptr->action_timer = 0.0;
      }
      pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         (&(this_ptr->model).base);
      if ((((pSVar9->state_index == 0) && (this_ptr->bat_ai_state == 0)) &&
          (fStack_324 < (float)_DAT_005f8dc8)) && (this_ptr->has_attacked == 0)) {
        this_ptr->has_attacked = 1;
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
        if (iVar8 == 0) {
          iVar8 = 2;
        }
        else {
          iVar8 = 1;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->model).base,iVar8,1);
      }
    }
    iVar8 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    if (afStack_15c + 5 != (float *)(iVar8 + 0x20)) {
      fStack_148 = *(float *)(iVar8 + 0x20);
      fStack_144 = *(float *)(iVar8 + 0x24);
      fStack_140 = *(float *)(iVar8 + 0x28);
    }
    if (this_ptr->bat_ai_state == 2) {
      this_ptr->flee_timer = this_ptr->flee_timer - delta_time;
      iVar8 = *(int *)((int)this_ptr + (4 - this_ptr->waypoint_index) * 4 + 0xbf3e4);
      if (afStack_15c + 5 != (float *)(iVar8 + 0x20)) {
        fStack_148 = *(float *)(iVar8 + 0x20);
        fStack_144 = *(float *)(iVar8 + 0x24);
        fStack_140 = *(float *)(iVar8 + 0x28);
      }
      if ((this_ptr->flee_timer <= 0.0) ||
         (fVar23 = fStack_148 - (this_ptr->base).base.base.location.position.x,
         fVar5 = fStack_140 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar5 * fVar5 + fVar23 * fVar23) < (float)_DAT_005f8dd8)) {
        this_ptr->flee_timer = 5.0;
        this_ptr->bat_ai_state = 3;
      }
    }
    else if (this_ptr->bat_ai_state == 3) {
      fVar23 = *(float *)((int)(&this_ptr->morph + 1) + (this_ptr->waypoint_index + 7) * 4);
      if (afStack_15c + 5 != (float *)((int)fVar23 + 0x20)) {
        fStack_148 = *(float *)((int)fVar23 + 0x20);
        fStack_144 = *(float *)((int)fVar23 + 0x24);
        fStack_140 = *(float *)((int)fVar23 + 0x28);
      }
      fVar23 = this_ptr->flee_timer - delta_time;
      this_ptr->flee_timer = fVar23;
      if ((fVar23 <= 0.0) ||
         (fVar23 = fStack_148 - (this_ptr->base).base.base.location.position.x,
         fVar5 = fStack_140 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar5 * fVar5 + fVar23 * fVar23) < (float)_DAT_005f8dd0)) {
        core_vampboss_cpp_CVampireBoss_transformToHuman_FUN_005a7290(this_ptr);
      }
    }
    fStack_58 = 1.2;
    fStack_144 = fStack_144 + _DAT_005f8de0;
    fStack_48 = 20.0;
    afStack_138[2] = fStack_148 - (this_ptr->base).base.base.location.position.x;
    fStack_128 = fStack_140 - (this_ptr->base).base.base.location.position.z;
    afStack_138[3] = fStack_144 - (this_ptr->base).base.base.location.position.y;
    fStack_184 = afStack_138[2];
    afStack_180[(uint)bVar16 * -2] = afStack_138[(uint)bVar16 * -2 + 3];
    afStack_180[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         afStack_138[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
    atan2();
    fVar17 = SQRT((float10)fStack_184 * (float10)fStack_184 +
                  (float10)afStack_180[1] * (float10)afStack_180[1]);
    fVar18 = (float10)afStack_180[0];
    atan2();
    fStack_30 = (float)fVar17;
    pCStack_28 = (CVector3f *)(float)-fVar18;
    if (this_ptr->bat_ai_state == 1) {
      fStack_30 = -fStack_30;
      pCStack_28 = (CVector3f *)-(float)pCStack_28;
    }
    fStack_320 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
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
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                           ((float)pCStack_28 - (this_ptr->base).base.base.orient.vec.x);
    fVar23 = (this_ptr->base).base.hit_points;
    fStack_3c = -0.3926991;
    fStack_34 = 0.3926991;
    (this_ptr->base).base.base.orient.vec.x =
         (float)pCStack_28 * delta_time * fStack_58 + (this_ptr->base).base.base.orient.vec.x;
    if ((fVar23 < (float)_DAT_005f8da8) && (this_ptr->bat_ai_state == 0)) {
      fStack_34 = 1.5707964;
      fStack_3c = -1.5707964;
    }
    if ((this_ptr->base).base.base.orient.vec.x < fStack_3c) {
      (this_ptr->base).base.base.orient.vec.x = fStack_3c;
    }
    if (fStack_34 < (this_ptr->base).base.base.orient.vec.x) {
      (this_ptr->base).base.base.orient.vec.x = fStack_34;
    }
    fVar17 = (float10)(this_ptr->base).base.base.orient.vec.x;
    fVar18 = (float10)fsin(fVar17);
    fVar19 = (float10)(this_ptr->base).base.base.orient.vec.y;
    fVar20 = (float10)fsin(fVar19);
    fVar17 = (float10)fcos(fVar17);
    fVar19 = (float10)fcos(fVar19);
    fVar21 = (float10)fStack_48;
    fVar22 = (float10)delta_time;
    fVar18 = -fVar18 * fVar21 * fVar22 + (float10)(this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.y = (float)fVar18;
    fVar23 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.x =
         (float)(fVar20 * fVar17 * fVar21 * fVar22 +
                (float10)(this_ptr->base).base.base.location.position.x);
    (this_ptr->base).base.base.location.position.z =
         (float)(fVar19 * fVar17 * fVar21 * fVar22 + (float10)fVar23);
    if (fVar18 < (float10)fStack_144) {
      (this_ptr->base).base.base.location.position.y = fStack_144;
    }
    pCStack_14 = pCStack_28;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
    core_skeleton_cpp_FUN_0056ae70(&this_ptr->model);
    pfVar13 = afStack_1e4;
    pfVar14 = &fStack_244;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar14 = *pfVar13;
      pfVar13 = pfVar13 + (uint)bVar16 * -2 + 1;
      pfVar14 = pfVar14 + (uint)bVar16 * -2 + 1;
    }
    pCVar3 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar3 != (CBoundingBox3D *)&fStack_244) {
      (pCVar3->min).x = fStack_244;
      (this_ptr->base).base.cached_bounding_box.min.y = fStack_240;
      (this_ptr->base).base.cached_bounding_box.min.z = fStack_23c;
    }
    pCVar15 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar15 != (CVector3f *)&fStack_238) {
      pCVar15->x = fStack_238;
      (this_ptr->base).base.cached_bounding_box.max.y = fStack_234;
      (this_ptr->base).base.cached_bounding_box.max.z = fStack_230;
    }
    goto LAB_005a5b9f;
  }
  if (iVar8 == 1) {
    fVar23 = delta_time / _DAT_006077ac + this_ptr->morph_t;
    this_ptr->morph_t = fVar23;
    pCVar6 = 0x01C51D80;
    if (1.0 <= fVar23) {
      this_ptr->form = 2;
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(pCVar6,"morphCompleted");
    }
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_005a6a00(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    pCVar4 = &(this_ptr->base).base.model;
    fStack_68 = delta_time;
    while (0.0 < fStack_68) {
      core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar4->base,&fStack_68);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(pCVar4);
    pUVar1 = &(this_ptr->base).base.base.orient;
    pCStack_14 = &(this_ptr->base).base.base.location.position;
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->cape_cloth,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar4);
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->skirt_cloth,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar4);
    core_skeleton_cpp_FUN_0056ae70(pCVar4);
    pfVar13 = afStack_1b4;
    pfVar14 = &fStack_1cc;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar14 = *pfVar13;
      pfVar13 = pfVar13 + (uint)bVar16 * -2 + 1;
      pfVar14 = pfVar14 + (uint)bVar16 * -2 + 1;
    }
    pCVar3 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar3 != (CBoundingBox3D *)&fStack_1cc) {
      (pCVar3->min).x = fStack_1cc;
      (this_ptr->base).base.cached_bounding_box.min.y = fStack_1c8;
      (this_ptr->base).base.cached_bounding_box.min.z = fStack_1c4;
    }
    pCVar15 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar15 != (CVector3f *)&fStack_1c0) {
      pCVar15->x = fStack_1c0;
      (this_ptr->base).base.cached_bounding_box.max.y = fStack_1bc;
      (this_ptr->base).base.cached_bounding_box.max.z = fStack_1b8;
    }
    core_skeleton_cpp_FUN_0056ae70(&this_ptr->model);
    pfVar13 = afStack_28c;
    pCVar15 = &CStack_22c;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      pCVar15->x = *pfVar13;
      pfVar13 = pfVar13 + (uint)bVar16 * -2 + 1;
      pCVar15 = (CVector3f *)((int)pCVar15 + ((uint)bVar16 * -2 + 1) * 4);
    }
    pCVar3 = &(this_ptr->base).base.cached_bounding_box;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500(pCVar3,&CStack_22c);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500(pCVar3,&CStack_220);
    (this_ptr->base).base.base.location.position.y =
         (this_ptr->base).base.base.location.position.y + delta_time;
    goto LAB_005a5b9f;
  }
  if (iVar8 == 3) {
    fStack_5c = delta_time / _DAT_006077ac;
    fStack_60 = this_ptr->morph_t;
    this_ptr->morph_t = fStack_60 - fStack_5c;
    pCVar6 = 0x01C51D80;
    if (0.0 < fStack_60 - fStack_5c) {
      fVar23 = (fStack_5c / fStack_60) *
               ((this_ptr->base).base.closest_distance_threshold -
               (this_ptr->base).base.base.location.position.y) +
               (this_ptr->base).base.base.location.position.y;
    }
    else {
      this_ptr->form = 0;
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(pCVar6,"backToHuman");
      fVar23 = (this_ptr->base).base.closest_distance_threshold;
      this_ptr->morph_t = 0.0;
    }
    (this_ptr->base).base.base.location.position.y = fVar23;
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_005a6a00(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    pCVar4 = &(this_ptr->base).base.model;
    fStack_18 = delta_time;
    while (0.0 < fStack_18) {
      core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar4->base,&fStack_18);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(pCVar4);
    pUVar1 = &(this_ptr->base).base.base.orient;
    pCStack_14 = &(this_ptr->base).base.base.location.position;
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->cape_cloth,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar4);
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->skirt_cloth,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar4);
    core_skeleton_cpp_FUN_0056ae70(pCVar4);
    pfVar13 = afStack_19c;
    pfVar14 = &fStack_274;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar14 = *pfVar13;
      pfVar13 = pfVar13 + (uint)bVar16 * -2 + 1;
      pfVar14 = pfVar14 + (uint)bVar16 * -2 + 1;
    }
    pCVar3 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar3 != (CBoundingBox3D *)&fStack_274) {
      (pCVar3->min).x = fStack_274;
      (this_ptr->base).base.cached_bounding_box.min.y = fStack_270;
      (this_ptr->base).base.cached_bounding_box.min.z = fStack_26c;
    }
    pCVar15 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar15 != (CVector3f *)&fStack_268) {
      pCVar15->x = fStack_268;
      (this_ptr->base).base.cached_bounding_box.max.y = fStack_264;
      (this_ptr->base).base.cached_bounding_box.max.z = fStack_260;
    }
    core_skeleton_cpp_FUN_0056ae70(&this_ptr->model);
    pfVar13 = afStack_214;
    pCVar15 = &CStack_1fc;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      pCVar15->x = *pfVar13;
      pfVar13 = pfVar13 + (uint)bVar16 * -2 + 1;
      pCVar15 = (CVector3f *)((int)pCVar15 + ((uint)bVar16 * -2 + 1) * 4);
    }
    pCVar3 = &(this_ptr->base).base.cached_bounding_box;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500(pCVar3,&CStack_1fc);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500(pCVar3,&CStack_1f0);
    goto LAB_005a5b9f;
  }
  pCStack_20 = &(this_ptr->base).base.model.base;
  fStack_6c = delta_time;
  while (0.0 < fStack_6c) {
    uVar10 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_20,&fStack_6c);
    if (uVar10 < 2) {
      if (uVar10 == 1) {
        core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_005a7160(this_ptr);
LAB_005a6148:
        this_ptr->action_timer = 1.0;
      }
    }
    else {
      if (uVar10 < 3) {
        core_vampboss_cpp_CVampireBoss_summonFireEmitters_FUN_005a71e0(this_ptr);
        goto LAB_005a6148;
      }
      if (uVar10 < 4) {
        core_vampboss_cpp_CVampireBoss_summonBats_FUN_005a70f0(this_ptr);
        goto LAB_005a6148;
      }
      if (uVar10 == 0x29a) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
        uStack_168 = 0x41a00000;
        uStack_164 = 0x41a00000;
        fStack_16c = 0.0;
        core_actor_cpp_FUN_00408ac0(this_ptr,afStack_180 + 5);
        iVar8 = 0;
        pCVar15 = aCStack_b8;
        fVar23 = -1.0;
        aCStack_b8[0].x = afStack_180[2];
        *(float *)((int)aCStack_b8 + (uint)bVar16 * -8 + 4) = afStack_180[(uint)bVar16 * -2 + 3];
        pCVar12 = this_ptr;
        *(float *)((int)aCStack_b8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             afStack_180[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
        core_charactr_cpp_CCharacter_dismember_FUN_00430d90
                  ((CCharacter *)pCVar12,pCVar15,fVar23,iVar8);
        iStack_1c = 0;
        iVar8 = 0;
        while (iStack_1c < g_CDemonSetPtr->enemy_count) {
          iVar11 = core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(uint *)((int)g_CDemonSetPtr->enemies + iVar8),
                              g_CTVBatClassInfo.name_hash);
          if ((iVar11 == 0) || (*(int *)(iVar11 + 0xc410) == 0)) {
            iStack_1c = iStack_1c + 1;
            iVar8 = iVar8 + 4;
          }
          else {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_31c);
            SStack_31c.damage_amount = 999.0;
            (**(code **)(*(int *)(iVar11 + 0x154) + 0x108))(iVar11,&SStack_31c);
            iStack_1c = iStack_1c + 1;
            iVar8 = iVar8 + 4;
          }
        }
      }
    }
  }
  core_skeleton_cpp_FUN_0056ae70(pCStack_20);
  pfVar13 = afStack_25c;
  pfVar14 = &fStack_2a4;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar14 = *pfVar13;
    pfVar13 = pfVar13 + (uint)bVar16 * -2 + 1;
    pfVar14 = pfVar14 + (uint)bVar16 * -2 + 1;
  }
  pCVar3 = &(this_ptr->base).base.cached_bounding_box;
  if (pCVar3 != (CBoundingBox3D *)&fStack_2a4) {
    (pCVar3->min).x = fStack_2a4;
    (this_ptr->base).base.cached_bounding_box.min.y = fStack_2a0;
    (this_ptr->base).base.cached_bounding_box.min.z = fStack_29c;
  }
  pCVar15 = &(this_ptr->base).base.cached_bounding_box.max;
  if (pCVar15 != (CVector3f *)&fStack_298) {
    pCVar15->x = fStack_298;
    (this_ptr->base).base.cached_bounding_box.max.y = fStack_294;
    (this_ptr->base).base.cached_bounding_box.max.z = fStack_290;
  }
  pCVar4 = &(this_ptr->base).base.model;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar4->base);
  pCVar7 = g_CGamePtr;
  iStack_64 = pSVar9->state_index;
  switch(pSVar9->state_index) {
  case 0:
    (this_ptr->base).base.turn_speed = _DAT_006077b4 * delta_time;
    pCVar6 = 0x01C51D80;
    if (pCVar7->letterbox_mode == 0) {
      iVar8 = this_ptr->waypoint_index;
      (this_ptr->base).base.walk_step_speed = _DAT_006077b0 * delta_time;
      core_charactr_cpp_FUN_00431cc0
                (this_ptr,*(float *)((int)(&this_ptr->morph + 1) + (iVar8 + 7) * 4),0x3e4ccccd,
                 0x497423f0,&this_ptr->follow_result);
      switch(this_ptr->follow_result) {
      default:
        fVar23 = ((this_ptr->base).base.max_hit_points * delta_time) / _DAT_006077b8 +
                 (this_ptr->base).base.hit_points;
        (this_ptr->base).base.hit_points = fVar23;
        if ((float)_DAT_005f8de8 < fVar23) goto LAB_005a6245;
        pCVar2 = &(this_ptr->base).base.base.location;
        iVar8 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ea6f0(pCVar2,0x41400000);
        if (iVar8 == 0) {
          iVar8 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          fStack_160 = *(float *)(iVar8 + 0x20) - (pCVar2->position).x;
          afStack_15c[0] = *(float *)(iVar8 + 0x24) - (this_ptr->base).base.base.location.position.y
          ;
          afStack_15c[1] = *(float *)(iVar8 + 0x28) - (this_ptr->base).base.base.location.position.z
          ;
          afStack_e4[2] = fStack_160;
          afStack_e4[(uint)bVar16 * -2 + 3] = afStack_15c[(uint)bVar16 * -2];
          afStack_e4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
               afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_e4 + 2);
          uStack_d0 = afStack_15c[2];
          afStack_e4[(uint)bVar16 * -2 + 6] = afStack_15c[(uint)bVar16 * -2 + 3];
          afStack_e4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
               afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
          pCStack_14 = (CVector3f *)
                       core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                 (fStack_cc - (this_ptr->base).base.base.orient.vec.y);
          (this_ptr->base).base.turn_angle_accumulator = (float)pCStack_14;
          fStack_2c = (this_ptr->base).base.turn_angle_accumulator;
          fStack_4c = (this_ptr->base).base.turn_speed;
          pCStack_14 = (CVector3f *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_2c);
          fStack_2c = (float)pCStack_14;
          fStack_38 = -fStack_4c;
          fStack_50 = fStack_38;
          if ((fStack_38 <= (float)pCStack_14) &&
             (fStack_38 = (float)pCStack_14, fStack_4c < (float)pCStack_14)) {
            fStack_38 = fStack_4c;
          }
          fVar23 = this_ptr->action_timer - delta_time;
          (this_ptr->base).base.turn_angle_accumulator = fStack_38;
          this_ptr->action_timer = fVar23;
          if (fVar23 <= 0.0) {
            this_ptr->action_timer = 0.0;
            iVar8 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
            pCVar4 = &(this_ptr->base).base.model;
            if (iVar8 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar4->base,4,1);
            }
            else if (iVar8 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar4->base,5,1);
            }
            else if (iVar8 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar4->base,6,1);
            }
          }
        }
        else {
          core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005a72e0(this_ptr);
        }
        break;
      case 1:
      case 2:
        this_ptr->action_timer = 3.0;
      }
    }
    else {
      this_ptr->action_timer = 3.0;
      iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(pCVar6,"morphToBat")
      ;
      if (iVar8 == 0) {
        iVar8 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        fStack_13c = *(float *)(iVar8 + 0x20) - (this_ptr->base).base.base.location.position.x;
        afStack_138[0] = *(float *)(iVar8 + 0x24) - (this_ptr->base).base.base.location.position.y;
        afStack_138[1] = *(float *)(iVar8 + 0x28) - (this_ptr->base).base.base.location.position.z;
        afStack_c4[0] = fStack_13c;
        afStack_e4[(uint)bVar16 * -2 + 9] = afStack_138[(uint)bVar16 * -2];
        afStack_e4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
             afStack_138[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_e4 + 8);
        uStack_10c = uStack_100;
        afStack_138[(uint)bVar16 * -2 + 0xc] = afStack_138[(uint)bVar16 * -2 + 0xf];
        afStack_138[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
             afStack_138[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
        pCStack_14 = (CVector3f *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                               (fStack_108 - (this_ptr->base).base.base.orient.vec.y);
        (this_ptr->base).base.turn_angle_accumulator = (float)pCStack_14;
        fStack_24 = (this_ptr->base).base.turn_angle_accumulator;
        fStack_44 = (this_ptr->base).base.turn_speed;
        pCStack_14 = (CVector3f *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_24);
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
LAB_005a6245:
        core_vampboss_cpp_CVampireBoss_transformToBat_FUN_005a7250(this_ptr);
      }
    }
    break;
  case 2:
    iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(0x01C51D80,"flyout")
    ;
    if (iVar8 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar4->base,0,1);
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
    *(float *)((int)&CStack_f4 + (uint)bVar16 * -8 + 4) = afStack_138[(uint)bVar16 * -2 + 9];
    *(float *)((int)&CStack_f4 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         afStack_138[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
    CStack_f4.y = CStack_f4.y - delta_time * (float)_DAT_005f8df0;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_f4);
  }
  (this_ptr->base).base.position_delta.z = 0.0;
  (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
  (this_ptr->base).base.position_delta.x = (this_ptr->base).base.position_delta.y;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  pCVar4 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar4);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  pUVar1 = &(this_ptr->base).base.base.orient;
  pCStack_14 = &(this_ptr->base).base.base.location.position;
  core_cloth_cpp_CCloth_process_FUN_00440610
            (&this_ptr->cape_cloth,pCStack_14,&pUVar1->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar4);
  core_cloth_cpp_CCloth_process_FUN_00440610
            (&this_ptr->skirt_cloth,pCStack_14,&pUVar1->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar4);
LAB_005a5b9f:
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     (&(this_ptr->base).base.model.base);
  if ((pSVar9->state_index != 2) && (g_CGamePtr->letterbox_mode == 0)) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004d6340
              (g_CGamePtr,(this_ptr->base).base.descriptive_name,
               (this_ptr->base).base.hit_points / (this_ptr->base).base.max_hit_points,0.5);
    return;
  }
  return;
}
