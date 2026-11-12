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
  CLocation *point;
  CBoundingBox3D *pCVar2;
  CDeformableModelInstance *pCVar3;
  float fVar4;
  CEventList *pCVar5;
  CGame *pCVar6;
  int iVar7;
  SMotion *pSVar8;
  uint uVar9;
  CCharacter *this_ptr_00;
  CVampireBoss *pCVar10;
  float *pfVar11;
  float *pfVar12;
  CVector3f *pCVar13;
  byte bVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float afStackY_116c [907];
  float fVar21;
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
  
  bVar14 = 0;
  pCVar10 = this_ptr;
  do {
    if (pCVar10->way_point_0 == (CDemonActor *)0x0) {
      _DAT_01d1d400 = "..\\core\\vampboss.cpp";
      _DAT_01d1d404 = 0xcf;
      core_main_c_FUN_005030e0("CVampireBoss::process - Need 4 waypoints");
    }
    pCVar10 = (CVampireBoss *)((pCVar10->base).base.base.actor_name + 4);
  } while (pCVar10 != (CVampireBoss *)((this_ptr->base).base.base.actor_name + 0x10));
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    return;
  }
  iVar7 = this_ptr->form;
  if (iVar7 == 2) {
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_005a6a00(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    if ((this_ptr->base).base.hit_points < (float)_DAT_005f8da8) {
      iVar7 = this_ptr->bat_ai_state;
      (this_ptr->base).base.hit_points = 24.999;
      if ((iVar7 != 2) && (iVar7 != 3)) {
        core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005a72e0(this_ptr);
        this_ptr->bat_ai_state = 2;
        this_ptr->flee_timer = 5.0;
      }
    }
    if ((this_ptr->bat_ai_state != 2) && (this_ptr->bat_ai_state != 3)) {
      iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      fStack_124 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar7 + 0x20);
      fStack_120 = (this_ptr->base).base.base.location.position.y - *(float *)(iVar7 + 0x24);
      fStack_11c = (this_ptr->base).base.base.location.position.z - *(float *)(iVar7 + 0x28);
      fStack_e8 = fStack_124;
      afStack_e4[(uint)bVar14 * -2] = afStack_138[(uint)bVar14 * -2 + 6];
      afStack_e4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           afStack_138[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
      fStack_324 = SQRT(fStack_e8 * fStack_e8 + afStack_e4[1] * afStack_e4[1]);
      if (fStack_324 < (float)_DAT_005f8db0) {
        this_ptr->bat_ai_state = 1;
        pCStack_14 = (CVector3f *)(uint)(afStack_e4[0] < (float)_DAT_005f8db8);
        if ((float10)0 != ABS((float10)(int)pCStack_14)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_2e0);
          SStack_2e0.damage_amount = 10.0;
          SStack_2e0.attacker = (CDemonActor *)this_ptr;
          iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          SStack_2e0.wielder = (CDemonActor *)this_ptr;
          (**(code **)(*(int *)(iVar7 + 0x154) + 0x108))(iVar7,&SStack_2e0);
        }
      }
      if ((float)_DAT_005f8dc0 < fStack_324) {
        this_ptr->action_timer = 5.0;
        this_ptr->has_attacked = 0;
        this_ptr->bat_ai_state = 0;
      }
      if ((this_ptr->bat_ai_state == 0) &&
         (fVar21 = this_ptr->action_timer - delta_time, this_ptr->action_timer = fVar21,
         fVar21 < 0.0)) {
        this_ptr->bat_ai_state = 1;
        this_ptr->action_timer = 0.0;
      }
      pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         (&(this_ptr->model).base);
      if ((((pSVar8->state_index == 0) && (this_ptr->bat_ai_state == 0)) &&
          (fStack_324 < (float)_DAT_005f8dc8)) && (this_ptr->has_attacked == 0)) {
        this_ptr->has_attacked = 1;
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
        if (iVar7 == 0) {
          iVar7 = 2;
        }
        else {
          iVar7 = 1;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->model).base,iVar7,1);
      }
    }
    iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    if (afStack_15c + 5 != (float *)(iVar7 + 0x20)) {
      fStack_148 = *(float *)(iVar7 + 0x20);
      fStack_144 = *(float *)(iVar7 + 0x24);
      fStack_140 = *(float *)(iVar7 + 0x28);
    }
    if (this_ptr->bat_ai_state == 2) {
      this_ptr->flee_timer = this_ptr->flee_timer - delta_time;
      iVar7 = *(int *)((int)this_ptr + (4 - this_ptr->waypoint_index) * 4 + 0xbf3e4);
      if (afStack_15c + 5 != (float *)(iVar7 + 0x20)) {
        fStack_148 = *(float *)(iVar7 + 0x20);
        fStack_144 = *(float *)(iVar7 + 0x24);
        fStack_140 = *(float *)(iVar7 + 0x28);
      }
      if ((this_ptr->flee_timer <= 0.0) ||
         (fVar21 = fStack_148 - (this_ptr->base).base.base.location.position.x,
         fVar4 = fStack_140 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar4 * fVar4 + fVar21 * fVar21) < (float)_DAT_005f8dd8)) {
        this_ptr->flee_timer = 5.0;
        this_ptr->bat_ai_state = 3;
      }
    }
    else if (this_ptr->bat_ai_state == 3) {
      fVar21 = *(float *)((int)(&this_ptr->morph + 1) + (this_ptr->waypoint_index + 7) * 4);
      if (afStack_15c + 5 != (float *)((int)fVar21 + 0x20)) {
        fStack_148 = *(float *)((int)fVar21 + 0x20);
        fStack_144 = *(float *)((int)fVar21 + 0x24);
        fStack_140 = *(float *)((int)fVar21 + 0x28);
      }
      fVar21 = this_ptr->flee_timer - delta_time;
      this_ptr->flee_timer = fVar21;
      if ((fVar21 <= 0.0) ||
         (fVar21 = fStack_148 - (this_ptr->base).base.base.location.position.x,
         fVar4 = fStack_140 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar4 * fVar4 + fVar21 * fVar21) < (float)_DAT_005f8dd0)) {
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
    afStack_180[(uint)bVar14 * -2] = afStack_138[(uint)bVar14 * -2 + 3];
    afStack_180[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         afStack_138[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
    atan2();
    fVar15 = SQRT((float10)fStack_184 * (float10)fStack_184 +
                  (float10)afStack_180[1] * (float10)afStack_180[1]);
    fVar16 = (float10)afStack_180[0];
    atan2();
    fStack_30 = (float)fVar15;
    pCStack_28 = (CVector3f *)(float)-fVar16;
    if (this_ptr->bat_ai_state == 1) {
      fStack_30 = -fStack_30;
      pCStack_28 = (CVector3f *)-(float)pCStack_28;
    }
    fStack_320 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
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
    fVar21 = (this_ptr->base).base.hit_points;
    fStack_3c = -0.3926991;
    fStack_34 = 0.3926991;
    (this_ptr->base).base.base.orient.vec.x =
         (float)pCStack_28 * delta_time * fStack_58 + (this_ptr->base).base.base.orient.vec.x;
    if ((fVar21 < (float)_DAT_005f8da8) && (this_ptr->bat_ai_state == 0)) {
      fStack_34 = 1.5707964;
      fStack_3c = -1.5707964;
    }
    if ((this_ptr->base).base.base.orient.vec.x < fStack_3c) {
      (this_ptr->base).base.base.orient.vec.x = fStack_3c;
    }
    if (fStack_34 < (this_ptr->base).base.base.orient.vec.x) {
      (this_ptr->base).base.base.orient.vec.x = fStack_34;
    }
    fVar15 = (float10)(this_ptr->base).base.base.orient.vec.x;
    fVar16 = (float10)fsin(fVar15);
    fVar17 = (float10)(this_ptr->base).base.base.orient.vec.y;
    fVar18 = (float10)fsin(fVar17);
    fVar15 = (float10)fcos(fVar15);
    fVar17 = (float10)fcos(fVar17);
    fVar19 = (float10)fStack_48;
    fVar20 = (float10)delta_time;
    fVar16 = -fVar16 * fVar19 * fVar20 + (float10)(this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.y = (float)fVar16;
    fVar21 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.x =
         (float)(fVar18 * fVar15 * fVar19 * fVar20 +
                (float10)(this_ptr->base).base.base.location.position.x);
    (this_ptr->base).base.base.location.position.z =
         (float)(fVar17 * fVar15 * fVar19 * fVar20 + (float10)fVar21);
    if (fVar16 < (float10)fStack_144) {
      (this_ptr->base).base.base.location.position.y = fStack_144;
    }
    pCStack_14 = pCStack_28;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
    core_skeleton_cpp_FUN_0056ae70(&this_ptr->model);
    pfVar11 = afStack_1e4;
    pfVar12 = &fStack_244;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar12 = *pfVar11;
      pfVar11 = pfVar11 + (uint)bVar14 * -2 + 1;
      pfVar12 = pfVar12 + (uint)bVar14 * -2 + 1;
    }
    pCVar2 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar2 != (CBoundingBox3D *)&fStack_244) {
      (pCVar2->min).x = fStack_244;
      (this_ptr->base).base.cached_bounding_box.min.y = fStack_240;
      (this_ptr->base).base.cached_bounding_box.min.z = fStack_23c;
    }
    pCVar13 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar13 != (CVector3f *)&fStack_238) {
      pCVar13->x = fStack_238;
      (this_ptr->base).base.cached_bounding_box.max.y = fStack_234;
      (this_ptr->base).base.cached_bounding_box.max.z = fStack_230;
    }
    goto LAB_005a5b9f;
  }
  if (iVar7 == 1) {
    fVar21 = delta_time / _DAT_006077ac + this_ptr->morph_t;
    this_ptr->morph_t = fVar21;
    pCVar5 = 0x01C51D80;
    if (1.0 <= fVar21) {
      this_ptr->form = 2;
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(pCVar5,"morphCompleted");
    }
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_005a6a00(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    pCVar3 = &(this_ptr->base).base.model;
    fStack_68 = delta_time;
    while (0.0 < fStack_68) {
      core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar3->base,&fStack_68);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(pCVar3);
    pUVar1 = &(this_ptr->base).base.base.orient;
    pCStack_14 = &(this_ptr->base).base.base.location.position;
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->cape_cloth,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar3);
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->skirt_cloth,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar3);
    core_skeleton_cpp_FUN_0056ae70(pCVar3);
    pfVar11 = afStack_1b4;
    pfVar12 = &fStack_1cc;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar12 = *pfVar11;
      pfVar11 = pfVar11 + (uint)bVar14 * -2 + 1;
      pfVar12 = pfVar12 + (uint)bVar14 * -2 + 1;
    }
    pCVar2 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar2 != (CBoundingBox3D *)&fStack_1cc) {
      (pCVar2->min).x = fStack_1cc;
      (this_ptr->base).base.cached_bounding_box.min.y = fStack_1c8;
      (this_ptr->base).base.cached_bounding_box.min.z = fStack_1c4;
    }
    pCVar13 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar13 != (CVector3f *)&fStack_1c0) {
      pCVar13->x = fStack_1c0;
      (this_ptr->base).base.cached_bounding_box.max.y = fStack_1bc;
      (this_ptr->base).base.cached_bounding_box.max.z = fStack_1b8;
    }
    core_skeleton_cpp_FUN_0056ae70(&this_ptr->model);
    pfVar11 = afStack_28c;
    pCVar13 = &CStack_22c;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      pCVar13->x = *pfVar11;
      pfVar11 = pfVar11 + (uint)bVar14 * -2 + 1;
      pCVar13 = (CVector3f *)((int)pCVar13 + ((uint)bVar14 * -2 + 1) * 4);
    }
    pCVar2 = &(this_ptr->base).base.cached_bounding_box;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500(pCVar2,&CStack_22c);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500(pCVar2,&CStack_220);
    (this_ptr->base).base.base.location.position.y =
         (this_ptr->base).base.base.location.position.y + delta_time;
    goto LAB_005a5b9f;
  }
  if (iVar7 == 3) {
    fStack_5c = delta_time / _DAT_006077ac;
    fStack_60 = this_ptr->morph_t;
    this_ptr->morph_t = fStack_60 - fStack_5c;
    pCVar5 = 0x01C51D80;
    if (0.0 < fStack_60 - fStack_5c) {
      fVar21 = (fStack_5c / fStack_60) *
               ((this_ptr->base).base.closest_distance_threshold -
               (this_ptr->base).base.base.location.position.y) +
               (this_ptr->base).base.base.location.position.y;
    }
    else {
      this_ptr->form = 0;
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(pCVar5,"backToHuman");
      fVar21 = (this_ptr->base).base.closest_distance_threshold;
      this_ptr->morph_t = 0.0;
    }
    (this_ptr->base).base.base.location.position.y = fVar21;
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_005a6a00(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->wing_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    pCVar3 = &(this_ptr->base).base.model;
    fStack_18 = delta_time;
    while (0.0 < fStack_18) {
      core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar3->base,&fStack_18);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(pCVar3);
    pUVar1 = &(this_ptr->base).base.base.orient;
    pCStack_14 = &(this_ptr->base).base.base.location.position;
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->cape_cloth,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar3);
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->skirt_cloth,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar3);
    core_skeleton_cpp_FUN_0056ae70(pCVar3);
    pfVar11 = afStack_19c;
    pfVar12 = &fStack_274;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar12 = *pfVar11;
      pfVar11 = pfVar11 + (uint)bVar14 * -2 + 1;
      pfVar12 = pfVar12 + (uint)bVar14 * -2 + 1;
    }
    pCVar2 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar2 != (CBoundingBox3D *)&fStack_274) {
      (pCVar2->min).x = fStack_274;
      (this_ptr->base).base.cached_bounding_box.min.y = fStack_270;
      (this_ptr->base).base.cached_bounding_box.min.z = fStack_26c;
    }
    pCVar13 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar13 != (CVector3f *)&fStack_268) {
      pCVar13->x = fStack_268;
      (this_ptr->base).base.cached_bounding_box.max.y = fStack_264;
      (this_ptr->base).base.cached_bounding_box.max.z = fStack_260;
    }
    core_skeleton_cpp_FUN_0056ae70(&this_ptr->model);
    pfVar11 = afStack_214;
    pCVar13 = &CStack_1fc;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      pCVar13->x = *pfVar11;
      pfVar11 = pfVar11 + (uint)bVar14 * -2 + 1;
      pCVar13 = (CVector3f *)((int)pCVar13 + ((uint)bVar14 * -2 + 1) * 4);
    }
    pCVar2 = &(this_ptr->base).base.cached_bounding_box;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500(pCVar2,&CStack_1fc);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500(pCVar2,&CStack_1f0);
    goto LAB_005a5b9f;
  }
  pCStack_20 = &(this_ptr->base).base.model.base;
  fStack_6c = delta_time;
  while (0.0 < fStack_6c) {
    uVar9 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_20,&fStack_6c);
    if (uVar9 < 2) {
      if (uVar9 == 1) {
        core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_005a7160(this_ptr);
LAB_005a6148:
        this_ptr->action_timer = 1.0;
      }
    }
    else {
      if (uVar9 < 3) {
        core_vampboss_cpp_CVampireBoss_summonFireEmitters_FUN_005a71e0(this_ptr);
        goto LAB_005a6148;
      }
      if (uVar9 < 4) {
        core_vampboss_cpp_CVampireBoss_summonBats_FUN_005a70f0(this_ptr);
        goto LAB_005a6148;
      }
      if (uVar9 == 0x29a) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
        uStack_168 = 0x41a00000;
        uStack_164 = 0x41a00000;
        fStack_16c = 0.0;
        core_actor_cpp_FUN_00408ac0(this_ptr,afStack_180 + 5);
        iVar7 = 0;
        pCVar13 = aCStack_b8;
        fVar21 = -1.0;
        aCStack_b8[0].x = afStack_180[2];
        *(float *)((int)aCStack_b8 + (uint)bVar14 * -8 + 4) = afStack_180[(uint)bVar14 * -2 + 3];
        pCVar10 = this_ptr;
        *(float *)((int)aCStack_b8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             afStack_180[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
        core_charactr_cpp_CCharacter_dismember_FUN_00430d90
                  ((CCharacter *)pCVar10,pCVar13,fVar21,iVar7);
        iStack_1c = 0;
        iVar7 = 0;
        while (iStack_1c < g_CDemonSetPtr->enemy_count) {
          this_ptr_00 = (CCharacter *)
                        core_actor_cpp_castToClassHash_FUN_0040c600
                                  (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar7),
                                   g_CTVBatClassInfo.name_hash);
          if ((this_ptr_00 == (CCharacter *)0x0) ||
             (this_ptr_00[1].model.bone_origins[0xc].x == 0.0)) {
            iStack_1c = iStack_1c + 1;
            iVar7 = iVar7 + 4;
          }
          else {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_31c);
            SStack_31c.damage_amount = 999.0;
            (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)(this_ptr_00,&SStack_31c);
            iStack_1c = iStack_1c + 1;
            iVar7 = iVar7 + 4;
          }
        }
      }
    }
  }
  core_skeleton_cpp_FUN_0056ae70(pCStack_20);
  pfVar11 = afStack_25c;
  pfVar12 = &fStack_2a4;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar12 = *pfVar11;
    pfVar11 = pfVar11 + (uint)bVar14 * -2 + 1;
    pfVar12 = pfVar12 + (uint)bVar14 * -2 + 1;
  }
  pCVar2 = &(this_ptr->base).base.cached_bounding_box;
  if (pCVar2 != (CBoundingBox3D *)&fStack_2a4) {
    (pCVar2->min).x = fStack_2a4;
    (this_ptr->base).base.cached_bounding_box.min.y = fStack_2a0;
    (this_ptr->base).base.cached_bounding_box.min.z = fStack_29c;
  }
  pCVar13 = &(this_ptr->base).base.cached_bounding_box.max;
  if (pCVar13 != (CVector3f *)&fStack_298) {
    pCVar13->x = fStack_298;
    (this_ptr->base).base.cached_bounding_box.max.y = fStack_294;
    (this_ptr->base).base.cached_bounding_box.max.z = fStack_290;
  }
  pCVar3 = &(this_ptr->base).base.model;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar3->base);
  pCVar6 = g_CGamePtr;
  iStack_64 = pSVar8->state_index;
  switch(pSVar8->state_index) {
  case 0:
    (this_ptr->base).base.turn_speed = _DAT_006077b4 * delta_time;
    pCVar5 = 0x01C51D80;
    if (pCVar6->letterbox_mode == 0) {
      iVar7 = this_ptr->waypoint_index;
      (this_ptr->base).base.walk_step_speed = _DAT_006077b0 * delta_time;
      core_charactr_cpp_FUN_00431cc0
                (this_ptr,*(float *)((int)(&this_ptr->morph + 1) + (iVar7 + 7) * 4),0x3e4ccccd,
                 0x497423f0,&this_ptr->follow_result);
      switch(this_ptr->follow_result) {
      default:
        fVar21 = ((this_ptr->base).base.max_hit_points * delta_time) / _DAT_006077b8 +
                 (this_ptr->base).base.hit_points;
        (this_ptr->base).base.hit_points = fVar21;
        if ((float)_DAT_005f8de8 < fVar21) goto LAB_005a6245;
        point = &(this_ptr->base).base.base.location;
        iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ea6f0(&point->position,12.0);
        if (iVar7 == 0) {
          iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          fStack_160 = *(float *)(iVar7 + 0x20) - (point->position).x;
          afStack_15c[0] = *(float *)(iVar7 + 0x24) - (this_ptr->base).base.base.location.position.y
          ;
          afStack_15c[1] = *(float *)(iVar7 + 0x28) - (this_ptr->base).base.base.location.position.z
          ;
          afStack_e4[2] = fStack_160;
          afStack_e4[(uint)bVar14 * -2 + 3] = afStack_15c[(uint)bVar14 * -2];
          afStack_e4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
               afStack_15c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_e4 + 2);
          uStack_d0 = afStack_15c[2];
          afStack_e4[(uint)bVar14 * -2 + 6] = afStack_15c[(uint)bVar14 * -2 + 3];
          afStack_e4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
               afStack_15c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
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
          fVar21 = this_ptr->action_timer - delta_time;
          (this_ptr->base).base.turn_angle_accumulator = fStack_38;
          this_ptr->action_timer = fVar21;
          if (fVar21 <= 0.0) {
            this_ptr->action_timer = 0.0;
            iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
            pCVar3 = &(this_ptr->base).base.model;
            if (iVar7 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar3->base,4,1);
            }
            else if (iVar7 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar3->base,5,1);
            }
            else if (iVar7 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar3->base,6,1);
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
      iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(pCVar5,"morphToBat")
      ;
      if (iVar7 == 0) {
        iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        fStack_13c = *(float *)(iVar7 + 0x20) - (this_ptr->base).base.base.location.position.x;
        afStack_138[0] = *(float *)(iVar7 + 0x24) - (this_ptr->base).base.base.location.position.y;
        afStack_138[1] = *(float *)(iVar7 + 0x28) - (this_ptr->base).base.base.location.position.z;
        afStack_c4[0] = fStack_13c;
        afStack_e4[(uint)bVar14 * -2 + 9] = afStack_138[(uint)bVar14 * -2];
        afStack_e4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
             afStack_138[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_e4 + 8);
        uStack_10c = uStack_100;
        afStack_138[(uint)bVar14 * -2 + 0xc] = afStack_138[(uint)bVar14 * -2 + 0xf];
        afStack_138[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
             afStack_138[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
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
    iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(0x01C51D80,"flyout")
    ;
    if (iVar7 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar3->base,0,1);
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
    *(float *)((int)&CStack_f4 + (uint)bVar14 * -8 + 4) = afStack_138[(uint)bVar14 * -2 + 9];
    *(float *)((int)&CStack_f4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         afStack_138[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
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
  pCVar3 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar3);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  pUVar1 = &(this_ptr->base).base.base.orient;
  pCStack_14 = &(this_ptr->base).base.base.location.position;
  core_cloth_cpp_CCloth_process_FUN_00440610
            (&this_ptr->cape_cloth,pCStack_14,&pUVar1->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar3);
  core_cloth_cpp_CCloth_process_FUN_00440610
            (&this_ptr->skirt_cloth,pCStack_14,&pUVar1->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar3);
LAB_005a5b9f:
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     (&(this_ptr->base).base.model.base);
  if ((pSVar8->state_index != 2) && (g_CGamePtr->letterbox_mode == 0)) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004d6340
              (g_CGamePtr,(this_ptr->base).base.descriptive_name,
               (this_ptr->base).base.hit_points / (this_ptr->base).base.max_hit_points,0.5);
    return;
  }
  return;
}
