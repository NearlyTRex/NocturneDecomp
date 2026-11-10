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
  byte *puVar3;
  CDeformableModelInstance *pCVar4;
  CDemonActor *pCVar5;
  float fVar6;
  CEventList *pCVar7;
  CGame *pCVar8;
  int iVar9;
  SMotion *pSVar10;
  uint uVar11;
  int iVar12;
  CVampireBoss *pCVar13;
  uint *puVar14;
  float *pfVar15;
  uint *puVar16;
  CVector3f *pCVar17;
  byte bVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float afStackY_116c [907];
  float fVar25;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  SDamageInfo aSStack_31c [4];
  uint uStack_318;
  SDamageInfo aSStack_2e0 [4];
  uint uStack_2dc;
  CVampireBoss *pCStack_2ac;
  CVampireBoss *pCStack_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  uint uStack_29c;
  uint uStack_298;
  uint uStack_294;
  uint uStack_290;
  float afStack_28c [6];
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  uint uStack_268;
  uint uStack_264;
  uint uStack_260;
  uint auStack_25c [6];
  uint uStack_244;
  uint uStack_240;
  uint uStack_23c;
  uint uStack_238;
  uint uStack_234;
  uint uStack_230;
  CVector3f CStack_22c;
  CVector3f CStack_220;
  float afStack_214 [6];
  CVector3f CStack_1fc;
  CVector3f CStack_1f0;
  uint auStack_1e4 [6];
  uint uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint auStack_1b4 [6];
  uint auStack_19c [6];
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
  
  bVar18 = 0;
  pCVar13 = this_ptr;
  do {
    if (pCVar13->way_point_0 == (CDemonActor *)0x0) {
      _DAT_01d1d400 = "..\\core\\vampboss.cpp";
      _DAT_01d1d404 = 0xcf;
      core_main_c_FUN_005030e0("CVampireBoss::process - Need 4 waypoints");
    }
    pCVar13 = (CVampireBoss *)((pCVar13->base).base.base.actor_name + 4);
  } while (pCVar13 != (CVampireBoss *)((this_ptr->base).base.base.actor_name + 0x10));
  iVar9 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    return;
  }
  iVar9 = this_ptr->form;
  if (iVar9 == 2) {
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_005a6a00(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_00440610
              ((CCloth *)&this_ptr->field_0xe60c,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->model);
    if ((this_ptr->base).base.hit_points < (float)_DAT_005f8da8) {
      iVar9 = this_ptr->bat_ai_state;
      (this_ptr->base).base.hit_points = 24.999;
      if ((iVar9 != 2) && (iVar9 != 3)) {
        core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005a72e0(this_ptr);
        this_ptr->bat_ai_state = 2;
        this_ptr->flee_timer = 5.0;
      }
    }
    if ((this_ptr->bat_ai_state != 2) && (this_ptr->bat_ai_state != 3)) {
      iVar9 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      fStack_124 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar9 + 0x20);
      fStack_120 = (this_ptr->base).base.base.location.position.y - *(float *)(iVar9 + 0x24);
      fStack_11c = (this_ptr->base).base.base.location.position.z - *(float *)(iVar9 + 0x28);
      fStack_e8 = fStack_124;
      afStack_e4[(uint)bVar18 * -2] = afStack_138[(uint)bVar18 * -2 + 6];
      afStack_e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
           afStack_138[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7];
      fStack_324 = SQRT(fStack_e8 * fStack_e8 + afStack_e4[1] * afStack_e4[1]);
      if (fStack_324 < (float)_DAT_005f8db0) {
        this_ptr->bat_ai_state = 1;
        pCStack_14 = (CVector3f *)(uint)(afStack_e4[0] < (float)_DAT_005f8db8);
        if ((float10)0 != ABS((float10)(int)pCStack_14)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_2e0);
          uStack_2dc = 0x41200000;
          pCStack_2ac = this_ptr;
          iVar9 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          pCStack_2a8 = this_ptr;
          (**(code **)(*(int *)(iVar9 + 0x154) + 0x108))(iVar9,aSStack_2e0);
        }
      }
      if ((float)_DAT_005f8dc0 < fStack_324) {
        this_ptr->action_timer = 5.0;
        this_ptr->has_attacked = 0;
        this_ptr->bat_ai_state = 0;
      }
      if ((this_ptr->bat_ai_state == 0) &&
         (fVar25 = this_ptr->action_timer - delta_time, this_ptr->action_timer = fVar25,
         fVar25 < 0.0)) {
        this_ptr->bat_ai_state = 1;
        this_ptr->action_timer = 0.0;
      }
      pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                          (&(this_ptr->model).base);
      if ((((*(int *)(pSVar10 + 0x24) == 0) && (this_ptr->bat_ai_state == 0)) &&
          (fStack_324 < (float)_DAT_005f8dc8)) && (this_ptr->has_attacked == 0)) {
        this_ptr->has_attacked = 1;
        iVar9 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
        if (iVar9 == 0) {
          iVar9 = 2;
        }
        else {
          iVar9 = 1;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->model).base,iVar9,1);
      }
    }
    iVar9 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    if (afStack_15c + 5 != (float *)(iVar9 + 0x20)) {
      fStack_148 = *(float *)(iVar9 + 0x20);
      fStack_144 = *(float *)(iVar9 + 0x24);
      fStack_140 = *(float *)(iVar9 + 0x28);
    }
    if (this_ptr->bat_ai_state == 2) {
      this_ptr->flee_timer = this_ptr->flee_timer - delta_time;
      iVar9 = *(int *)((int)this_ptr + (4 - this_ptr->waypoint_index) * 4 + 0xbf3e4);
      if (afStack_15c + 5 != (float *)(iVar9 + 0x20)) {
        fStack_148 = *(float *)(iVar9 + 0x20);
        fStack_144 = *(float *)(iVar9 + 0x24);
        fStack_140 = *(float *)(iVar9 + 0x28);
      }
      if ((this_ptr->flee_timer <= 0.0) ||
         (fVar25 = fStack_148 - (this_ptr->base).base.base.location.position.x,
         fVar6 = fStack_140 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar6 * fVar6 + fVar25 * fVar25) < (float)_DAT_005f8dd8)) {
        this_ptr->flee_timer = 5.0;
        this_ptr->bat_ai_state = 3;
      }
    }
    else if (this_ptr->bat_ai_state == 3) {
      pCVar5 = (&this_ptr->way_point_0)[this_ptr->waypoint_index];
      if ((CLocation *)(afStack_15c + 5) != &pCVar5->location) {
        fStack_148 = (pCVar5->location).position.x;
        fStack_144 = (pCVar5->location).position.y;
        fStack_140 = (pCVar5->location).position.z;
      }
      fVar25 = this_ptr->flee_timer - delta_time;
      this_ptr->flee_timer = fVar25;
      if ((fVar25 <= 0.0) ||
         (fVar25 = fStack_148 - (this_ptr->base).base.base.location.position.x,
         fVar6 = fStack_140 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar6 * fVar6 + fVar25 * fVar25) < (float)_DAT_005f8dd0)) {
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
    afStack_180[(uint)bVar18 * -2] = afStack_138[(uint)bVar18 * -2 + 3];
    afStack_180[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
         afStack_138[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
    atan2();
    fVar19 = SQRT((float10)fStack_184 * (float10)fStack_184 +
                  (float10)afStack_180[1] * (float10)afStack_180[1]);
    fVar20 = (float10)afStack_180[0];
    atan2();
    fStack_30 = (float)fVar19;
    pCStack_28 = (CVector3f *)(float)-fVar20;
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
    fVar25 = (this_ptr->base).base.hit_points;
    fStack_3c = -0.3926991;
    fStack_34 = 0.3926991;
    (this_ptr->base).base.base.orient.vec.x =
         (float)pCStack_28 * delta_time * fStack_58 + (this_ptr->base).base.base.orient.vec.x;
    if ((fVar25 < (float)_DAT_005f8da8) && (this_ptr->bat_ai_state == 0)) {
      fStack_34 = 1.5707964;
      fStack_3c = -1.5707964;
    }
    if ((this_ptr->base).base.base.orient.vec.x < fStack_3c) {
      (this_ptr->base).base.base.orient.vec.x = fStack_3c;
    }
    if (fStack_34 < (this_ptr->base).base.base.orient.vec.x) {
      (this_ptr->base).base.base.orient.vec.x = fStack_34;
    }
    fVar19 = (float10)(this_ptr->base).base.base.orient.vec.x;
    fVar20 = (float10)fsin(fVar19);
    fVar21 = (float10)(this_ptr->base).base.base.orient.vec.y;
    fVar22 = (float10)fsin(fVar21);
    fVar19 = (float10)fcos(fVar19);
    fVar21 = (float10)fcos(fVar21);
    fVar23 = (float10)fStack_48;
    fVar24 = (float10)delta_time;
    fVar20 = -fVar20 * fVar23 * fVar24 + (float10)(this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.y = (float)fVar20;
    fVar25 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.x =
         (float)(fVar22 * fVar19 * fVar23 * fVar24 +
                (float10)(this_ptr->base).base.base.location.position.x);
    (this_ptr->base).base.base.location.position.z =
         (float)(fVar21 * fVar19 * fVar23 * fVar24 + (float10)fVar25);
    if (fVar20 < (float10)fStack_144) {
      (this_ptr->base).base.base.location.position.y = fStack_144;
    }
    pCStack_14 = pCStack_28;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
    core_skeleton_cpp_FUN_0056ae70(&this_ptr->model);
    puVar14 = auStack_1e4;
    puVar16 = &uStack_244;
    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + (uint)bVar18 * -2 + 1;
      puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
    }
    puVar3 = &(this_ptr->base).base.field_0x2788;
    if ((uint *)puVar3 != &uStack_244) {
      *(uint *)puVar3 = uStack_244;
      *(uint *)&(this_ptr->base).base.field_0x278c = uStack_240;
      *(uint *)&(this_ptr->base).base.field_0x2790 = uStack_23c;
    }
    puVar3 = &(this_ptr->base).base.field_0x2794;
    if ((uint *)puVar3 != &uStack_238) {
      *(uint *)puVar3 = uStack_238;
      *(uint *)&(this_ptr->base).base.field_0x2798 = uStack_234;
      *(uint *)&(this_ptr->base).base.field_0x279c = uStack_230;
    }
    goto LAB_005a5b9f;
  }
  if (iVar9 == 1) {
    fVar25 = delta_time / _DAT_006077ac + this_ptr->morph_t;
    this_ptr->morph_t = fVar25;
    pCVar7 = 0x01C51D80;
    if (1.0 <= fVar25) {
      this_ptr->form = 2;
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(pCVar7,"morphCompleted");
    }
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_005a6a00(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_00440610
              ((CCloth *)&this_ptr->field_0xe60c,&(this_ptr->base).base.base.location.position,
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
              ((CCloth *)&this_ptr->field_0x4913c,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar4);
    core_cloth_cpp_CCloth_process_FUN_00440610
              ((CCloth *)&this_ptr->field_0x83c6c,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar4);
    core_skeleton_cpp_FUN_0056ae70(pCVar4);
    puVar14 = auStack_1b4;
    puVar16 = &uStack_1cc;
    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + (uint)bVar18 * -2 + 1;
      puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
    }
    puVar3 = &(this_ptr->base).base.field_0x2788;
    if ((uint *)puVar3 != &uStack_1cc) {
      *(uint *)puVar3 = uStack_1cc;
      *(uint *)&(this_ptr->base).base.field_0x278c = uStack_1c8;
      *(uint *)&(this_ptr->base).base.field_0x2790 = uStack_1c4;
    }
    puVar3 = &(this_ptr->base).base.field_0x2794;
    if ((uint *)puVar3 != &uStack_1c0) {
      *(uint *)puVar3 = uStack_1c0;
      *(uint *)&(this_ptr->base).base.field_0x2798 = uStack_1bc;
      *(uint *)&(this_ptr->base).base.field_0x279c = uStack_1b8;
    }
    core_skeleton_cpp_FUN_0056ae70(&this_ptr->model);
    pfVar15 = afStack_28c;
    pCVar17 = &CStack_22c;
    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
      pCVar17->x = *pfVar15;
      pfVar15 = pfVar15 + (uint)bVar18 * -2 + 1;
      pCVar17 = (CVector3f *)((int)pCVar17 + ((uint)bVar18 * -2 + 1) * 4);
    }
    puVar3 = &(this_ptr->base).base.field_0x2788;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500((CBoundingBox3D *)puVar3,&CStack_22c);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500((CBoundingBox3D *)puVar3,&CStack_220);
    (this_ptr->base).base.base.location.position.y =
         (this_ptr->base).base.base.location.position.y + delta_time;
    goto LAB_005a5b9f;
  }
  if (iVar9 == 3) {
    fStack_5c = delta_time / _DAT_006077ac;
    fStack_60 = this_ptr->morph_t;
    this_ptr->morph_t = fStack_60 - fStack_5c;
    pCVar7 = 0x01C51D80;
    if (0.0 < fStack_60 - fStack_5c) {
      fVar25 = (fStack_5c / fStack_60) *
               ((this_ptr->base).base.closest_distance_threshold -
               (this_ptr->base).base.base.location.position.y) +
               (this_ptr->base).base.base.location.position.y;
    }
    else {
      this_ptr->form = 0;
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(pCVar7,"backToHuman");
      fVar25 = (this_ptr->base).base.closest_distance_threshold;
      this_ptr->morph_t = 0.0;
    }
    (this_ptr->base).base.base.location.position.y = fVar25;
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_005a6a00(this_ptr,delta_time);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
              (&this_ptr->model);
    core_cloth_cpp_CCloth_process_FUN_00440610
              ((CCloth *)&this_ptr->field_0xe60c,&(this_ptr->base).base.base.location.position,
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
              ((CCloth *)&this_ptr->field_0x4913c,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar4);
    core_cloth_cpp_CCloth_process_FUN_00440610
              ((CCloth *)&this_ptr->field_0x83c6c,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar4);
    core_skeleton_cpp_FUN_0056ae70(pCVar4);
    puVar14 = auStack_19c;
    puVar16 = &uStack_274;
    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + (uint)bVar18 * -2 + 1;
      puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
    }
    puVar3 = &(this_ptr->base).base.field_0x2788;
    if ((uint *)puVar3 != &uStack_274) {
      *(uint *)puVar3 = uStack_274;
      *(uint *)&(this_ptr->base).base.field_0x278c = uStack_270;
      *(uint *)&(this_ptr->base).base.field_0x2790 = uStack_26c;
    }
    puVar3 = &(this_ptr->base).base.field_0x2794;
    if ((uint *)puVar3 != &uStack_268) {
      *(uint *)puVar3 = uStack_268;
      *(uint *)&(this_ptr->base).base.field_0x2798 = uStack_264;
      *(uint *)&(this_ptr->base).base.field_0x279c = uStack_260;
    }
    core_skeleton_cpp_FUN_0056ae70(&this_ptr->model);
    pfVar15 = afStack_214;
    pCVar17 = &CStack_1fc;
    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
      pCVar17->x = *pfVar15;
      pfVar15 = pfVar15 + (uint)bVar18 * -2 + 1;
      pCVar17 = (CVector3f *)((int)pCVar17 + ((uint)bVar18 * -2 + 1) * 4);
    }
    puVar3 = &(this_ptr->base).base.field_0x2788;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500((CBoundingBox3D *)puVar3,&CStack_1fc);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500((CBoundingBox3D *)puVar3,&CStack_1f0);
    goto LAB_005a5b9f;
  }
  pCStack_20 = &(this_ptr->base).base.model.base;
  fStack_6c = delta_time;
  while (0.0 < fStack_6c) {
    uVar11 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_20,&fStack_6c);
    if (uVar11 < 2) {
      if (uVar11 == 1) {
        core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_005a7160(this_ptr);
LAB_005a6148:
        this_ptr->action_timer = 1.0;
      }
    }
    else {
      if (uVar11 < 3) {
        core_vampboss_cpp_CVampireBoss_summonFireEmitters_FUN_005a71e0(this_ptr);
        goto LAB_005a6148;
      }
      if (uVar11 < 4) {
        core_vampboss_cpp_CVampireBoss_summonBats_FUN_005a70f0(this_ptr);
        goto LAB_005a6148;
      }
      if (uVar11 == 0x29a) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
        uStack_168 = 0x41a00000;
        uStack_164 = 0x41a00000;
        fStack_16c = 0.0;
        core_actor_cpp_FUN_00408ac0(this_ptr,afStack_180 + 5);
        iVar9 = 0;
        pCVar17 = aCStack_b8;
        fVar25 = -1.0;
        aCStack_b8[0].x = afStack_180[2];
        *(float *)((int)aCStack_b8 + (uint)bVar18 * -8 + 4) = afStack_180[(uint)bVar18 * -2 + 3];
        pCVar13 = this_ptr;
        *(float *)((int)aCStack_b8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
             afStack_180[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
        core_charactr_cpp_CCharacter_dismember_FUN_00430d90
                  ((CCharacter *)pCVar13,pCVar17,fVar25,iVar9);
        iStack_1c = 0;
        iVar9 = 0;
        while (iStack_1c < g_CDemonSetPtr->enemy_count) {
          iVar12 = core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(uint *)((int)g_CDemonSetPtr->enemies + iVar9),
                              g_CTVBatClassInfo.name_hash);
          if ((iVar12 == 0) || (*(int *)(iVar12 + 0xc410) == 0)) {
            iStack_1c = iStack_1c + 1;
            iVar9 = iVar9 + 4;
          }
          else {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_31c);
            uStack_318 = 0x4479c000;
            (**(code **)(*(int *)(iVar12 + 0x154) + 0x108))(iVar12,aSStack_31c);
            iStack_1c = iStack_1c + 1;
            iVar9 = iVar9 + 4;
          }
        }
      }
    }
  }
  core_skeleton_cpp_FUN_0056ae70(pCStack_20);
  puVar14 = auStack_25c;
  puVar16 = &uStack_2a4;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar16 = *puVar14;
    puVar14 = puVar14 + (uint)bVar18 * -2 + 1;
    puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
  }
  puVar3 = &(this_ptr->base).base.field_0x2788;
  if ((uint *)puVar3 != &uStack_2a4) {
    *(uint *)puVar3 = uStack_2a4;
    *(uint *)&(this_ptr->base).base.field_0x278c = uStack_2a0;
    *(uint *)&(this_ptr->base).base.field_0x2790 = uStack_29c;
  }
  puVar3 = &(this_ptr->base).base.field_0x2794;
  if ((uint *)puVar3 != &uStack_298) {
    *(uint *)puVar3 = uStack_298;
    *(uint *)&(this_ptr->base).base.field_0x2798 = uStack_294;
    *(uint *)&(this_ptr->base).base.field_0x279c = uStack_290;
  }
  pCVar4 = &(this_ptr->base).base.model;
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar4->base);
  pCVar8 = g_CGamePtr;
  iStack_64 = *(int *)(pSVar10 + 0x24);
  switch(*(int *)(pSVar10 + 0x24)) {
  case 0:
    *(float *)&(this_ptr->base).base.field_0x2528 = _DAT_006077b4 * delta_time;
    pCVar7 = 0x01C51D80;
    if (*(int *)&pCVar8->field_0x244 == 0) {
      iVar9 = this_ptr->waypoint_index;
      *(float *)&(this_ptr->base).base.field_0x2524 = _DAT_006077b0 * delta_time;
      core_charactr_cpp_FUN_00431cc0
                (this_ptr,(&this_ptr->way_point_0)[iVar9],0x3e4ccccd,0x497423f0,
                 &this_ptr->follow_result);
      switch(this_ptr->follow_result) {
      default:
        fVar25 = ((this_ptr->base).base.max_hit_points * delta_time) / _DAT_006077b8 +
                 (this_ptr->base).base.hit_points;
        (this_ptr->base).base.hit_points = fVar25;
        if ((float)_DAT_005f8de8 < fVar25) goto LAB_005a6245;
        pCVar2 = &(this_ptr->base).base.base.location;
        iVar9 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ea6f0(pCVar2,0x41400000);
        if (iVar9 == 0) {
          iVar9 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          fStack_160 = *(float *)(iVar9 + 0x20) - (pCVar2->position).x;
          afStack_15c[0] = *(float *)(iVar9 + 0x24) - (this_ptr->base).base.base.location.position.y
          ;
          afStack_15c[1] = *(float *)(iVar9 + 0x28) - (this_ptr->base).base.base.location.position.z
          ;
          afStack_e4[2] = fStack_160;
          afStack_e4[(uint)bVar18 * -2 + 3] = afStack_15c[(uint)bVar18 * -2];
          afStack_e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
               afStack_15c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_e4 + 2);
          uStack_d0 = afStack_15c[2];
          afStack_e4[(uint)bVar18 * -2 + 6] = afStack_15c[(uint)bVar18 * -2 + 3];
          afStack_e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
               afStack_15c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
          pCStack_14 = (CVector3f *)
                       core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                 (fStack_cc - (this_ptr->base).base.base.orient.vec.y);
          (this_ptr->base).base.turn_angle_accumulator = (float)pCStack_14;
          fStack_2c = (this_ptr->base).base.turn_angle_accumulator;
          fStack_4c = *(float *)&(this_ptr->base).base.field_0x2528;
          pCStack_14 = (CVector3f *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_2c);
          fStack_2c = (float)pCStack_14;
          fStack_38 = -fStack_4c;
          fStack_50 = fStack_38;
          if ((fStack_38 <= (float)pCStack_14) &&
             (fStack_38 = (float)pCStack_14, fStack_4c < (float)pCStack_14)) {
            fStack_38 = fStack_4c;
          }
          fVar25 = this_ptr->action_timer - delta_time;
          (this_ptr->base).base.turn_angle_accumulator = fStack_38;
          this_ptr->action_timer = fVar25;
          if (fVar25 <= 0.0) {
            this_ptr->action_timer = 0.0;
            iVar9 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
            pCVar4 = &(this_ptr->base).base.model;
            if (iVar9 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar4->base,4,1);
            }
            else if (iVar9 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar4->base,5,1);
            }
            else if (iVar9 == 2) {
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
      iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(pCVar7,"morphToBat")
      ;
      if (iVar9 == 0) {
        iVar9 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        fStack_13c = *(float *)(iVar9 + 0x20) - (this_ptr->base).base.base.location.position.x;
        afStack_138[0] = *(float *)(iVar9 + 0x24) - (this_ptr->base).base.base.location.position.y;
        afStack_138[1] = *(float *)(iVar9 + 0x28) - (this_ptr->base).base.base.location.position.z;
        afStack_c4[0] = fStack_13c;
        afStack_e4[(uint)bVar18 * -2 + 9] = afStack_138[(uint)bVar18 * -2];
        afStack_e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10] =
             afStack_138[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_e4 + 8);
        uStack_10c = uStack_100;
        afStack_138[(uint)bVar18 * -2 + 0xc] = afStack_138[(uint)bVar18 * -2 + 0xf];
        afStack_138[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd] =
             afStack_138[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10];
        pCStack_14 = (CVector3f *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                               (fStack_108 - (this_ptr->base).base.base.orient.vec.y);
        (this_ptr->base).base.turn_angle_accumulator = (float)pCStack_14;
        fStack_24 = (this_ptr->base).base.turn_angle_accumulator;
        fStack_44 = *(float *)&(this_ptr->base).base.field_0x2528;
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
    iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(0x01C51D80,"flyout")
    ;
    if (iVar9 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar4->base,0,1);
    }
  }
  if ((*(int *)&g_CGamePtr->field_0x244 == 0) && (iStack_64 != 2)) {
    fStack_118 = (this_ptr->base).base.position_delta.x +
                 (this_ptr->base).base.model.accumulated_root_motion.x;
    fStack_114 = (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_110 = (this_ptr->base).base.position_delta.z +
                 (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_f4.x = fStack_118;
    *(float *)((int)&CStack_f4 + (uint)bVar18 * -8 + 4) = afStack_138[(uint)bVar18 * -2 + 9];
    *(float *)((int)&CStack_f4 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
         afStack_138[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10];
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
            ((CCloth *)&this_ptr->field_0x4913c,pCStack_14,&pUVar1->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar4);
  core_cloth_cpp_CCloth_process_FUN_00440610
            ((CCloth *)&this_ptr->field_0x83c6c,pCStack_14,&pUVar1->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar4);
LAB_005a5b9f:
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                      (&(this_ptr->base).base.model.base);
  if ((*(int *)(pSVar10 + 0x24) != 2) && (*(int *)&g_CGamePtr->field_0x244 == 0)) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004d6340
              (g_CGamePtr,(this_ptr->base).base.descriptive_name,
               (this_ptr->base).base.hit_points / (this_ptr->base).base.max_hit_points,0.5);
    return;
  }
  return;
}
