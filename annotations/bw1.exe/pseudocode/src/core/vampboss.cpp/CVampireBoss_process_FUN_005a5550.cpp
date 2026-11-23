// Name: core_vampboss.cpp_CVampireBoss_process_FUN_005a5550
// Address: 005a5550
// Address Range: [[005a5550, 005a68ca]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_005a5550(CVampireBoss *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_005a5550(CVampireBoss *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *pCVar2;
  CHero *pCVar3;
  float fVar4;
  CEventList *pCVar5;
  CGame *pCVar6;
  int iVar7;
  SMotion *pSVar8;
  uint uVar9;
  CCharacter *this_ptr_00;
  CLocation *pCVar10;
  CVampireBoss *pCVar11;
  float *pfVar12;
  CBoundingBox3D *pCVar13;
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
  SDamageInfo SStack_31c;
  SDamageInfo SStack_2e0;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  CBoundingBox3D CStack_28c;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  CBoundingBox3D CStack_25c;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  CVector3f CStack_22c;
  CVector3f CStack_220;
  CBoundingBox3D CStack_214;
  CVector3f CStack_1fc;
  byte auStack_1f0 [36];
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  CBoundingBox3D CStack_1b4;
  CBoundingBox3D CStack_19c;
  float fStack_184;
  float afStack_180 [2];
  CVector3f CStack_178;
  CVector3f CStack_16c;
  float fStack_160;
  float afStack_15c [2];
  CVector3f CStack_154;
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
  float fStack_10c;
  float fStack_108;
  CVector3f CStack_100;
  CVector3f CStack_f4;
  float fStack_e8;
  float afStack_e4 [2];
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [2];
  CVector3f CStack_c4;
  CVector3f aCStack_b8 [6];
  float fStack_6c;
  float fStack_68;
  int iStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  CVector3f *pCStack_54;
  CVector3f *pCStack_50;
  CVector3f *pCStack_4c;
  uint uStack_48;
  CVector3f *pCStack_44;
  CVector3f *pCStack_40;
  float fStack_3c;
  CVector3f *pCStack_38;
  float fStack_30;
  CVector3f *pCStack_2c;
  CVector3f *pCStack_24;
  CDeformableModelInstance *pCStack_20;
  float fStack_1c;
  float fStack_18;
  CVector3f *pCStack_14;
  
  bVar16 = 0;
  pCVar11 = this_ptr;
  do {
    if (pCVar11->way_point_0 == (CDemonActor *)0x0) {
      g_CurrentFilename = "..\\core\\vampboss.cpp";
      g_CurrentLineNumber = 207;
      core_main_c_displayErrorAndQuit_FUN_005030e0("CVampireBoss::process - Need 4 waypoints");
    }
    pCVar11 = (CVampireBoss *)((pCVar11->base).base.base.actor_name + 4);
  } while (pCVar11 != (CVampireBoss *)((this_ptr->base).base.base.actor_name + 0x10));
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
    if ((this_ptr->base).base.hit_points < (float)25) {
      iVar7 = this_ptr->bat_ai_state;
      (this_ptr->base).base.hit_points = 24.999;
      if ((iVar7 != 2) && (iVar7 != 3)) {
        core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005a72e0(this_ptr);
        this_ptr->bat_ai_state = 2;
        this_ptr->flee_timer = 5.0;
      }
    }
    if ((this_ptr->bat_ai_state != 2) && (this_ptr->bat_ai_state != 3)) {
      pCVar3 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
      fStack_124 = (this_ptr->base).base.base.location.position.x -
                   (pCVar3->base).base.location.position.x;
      fStack_120 = (this_ptr->base).base.base.location.position.y -
                   (pCVar3->base).base.location.position.y;
      fStack_11c = (this_ptr->base).base.base.location.position.z -
                   (pCVar3->base).base.location.position.z;
      fStack_e8 = fStack_124;
      afStack_e4[(uint)bVar16 * -2] = afStack_138[(uint)bVar16 * -2 + 6];
      afStack_e4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
           afStack_138[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
      fStack_324 = SQRT(fStack_e8 * fStack_e8 + afStack_e4[1] * afStack_e4[1]);
      if (fStack_324 < (float)5) {
        this_ptr->bat_ai_state = 1;
        pCStack_14 = (CVector3f *)(uint)(afStack_e4[0] < (float)10);
        if ((float10)0 != ABS((float10)(int)pCStack_14)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_2e0);
          SStack_2e0.damage_amount = 10.0;
          SStack_2e0.attacker = (CDemonActor *)this_ptr;
          SStack_2e0.wielder = (CDemonActor *)this_ptr;
          (*(((g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.vtable._uc)->_uc).
            processDamage)(&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base,&SStack_2e0);
        }
      }
      if ((float)40 < fStack_324) {
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
      pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         (&(this_ptr->model).base);
      if ((((pSVar8->state_index == 0) && (this_ptr->bat_ai_state == 0)) &&
          (fStack_324 < (float)24)) && (this_ptr->has_attacked == 0)) {
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
    pCVar3 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
    pCVar10 = &(pCVar3->base).base.location;
    if ((CLocation *)&fStack_148 != pCVar10) {
      fStack_148 = (pCVar10->position).x;
      fStack_144 = (pCVar3->base).base.location.position.y;
      fStack_140 = (pCVar3->base).base.location.position.z;
    }
    if (this_ptr->bat_ai_state == 2) {
      this_ptr->flee_timer = this_ptr->flee_timer - delta_time;
      iVar7 = *(int *)((int)this_ptr + (4 - this_ptr->waypoint_index) * 4 + 0xbf3e4);
      if (&fStack_148 != (float *)(iVar7 + 0x20)) {
        fStack_148 = *(float *)(iVar7 + 0x20);
        fStack_144 = *(float *)(iVar7 + 0x24);
        fStack_140 = *(float *)(iVar7 + 0x28);
      }
      if ((this_ptr->flee_timer <= 0.0) ||
         (fVar23 = fStack_148 - (this_ptr->base).base.base.location.position.x,
         fVar4 = fStack_140 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar4 * fVar4 + fVar23 * fVar23) < (float)6)) {
        this_ptr->flee_timer = 5.0;
        this_ptr->bat_ai_state = 3;
      }
    }
    else if (this_ptr->bat_ai_state == 3) {
      fVar23 = *(float *)((int)(&this_ptr->morph + 1) + (this_ptr->waypoint_index + 7) * 4);
      if (&fStack_148 != (float *)((int)fVar23 + 0x20)) {
        fStack_148 = *(float *)((int)fVar23 + 0x20);
        fStack_144 = *(float *)((int)fVar23 + 0x24);
        fStack_140 = *(float *)((int)fVar23 + 0x28);
      }
      fVar23 = this_ptr->flee_timer - delta_time;
      this_ptr->flee_timer = fVar23;
      if ((fVar23 <= 0.0) ||
         (fVar23 = fStack_148 - (this_ptr->base).base.base.location.position.x,
         fVar4 = fStack_140 - (this_ptr->base).base.base.location.position.z,
         SQRT(fVar4 * fVar4 + fVar23 * fVar23) < (float)4)) {
        core_vampboss_cpp_CVampireBoss_transformToHuman_FUN_005a7290(this_ptr);
      }
    }
    uStack_58 = 0x3f99999a;
    fStack_144 = fStack_144 + 4.0f;
    uStack_48 = 0x41a00000;
    afStack_138[2] = fStack_148 - (this_ptr->base).base.base.location.position.x;
    fStack_128 = fStack_140 - (this_ptr->base).base.base.location.position.z;
    afStack_138[3] = fStack_144 - (this_ptr->base).base.base.location.position.y;
    fStack_184 = afStack_138[2];
    afStack_180[(uint)bVar16 * -2] = afStack_138[(uint)bVar16 * -2 + 3];
    afStack_180[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         afStack_138[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
    atan2((float10)fStack_184,(float10)afStack_180[1]);
    fVar17 = SQRT((float10)CStack_19c.max.z * (float10)CStack_19c.max.z +
                  (float10)afStack_180[0] * (float10)afStack_180[0]);
    fVar18 = atan2((float10)fStack_184,fVar17);
    pCStack_38 = (CVector3f *)(float)fVar17;
    fStack_30 = (float)-fVar18;
    if (this_ptr->bat_ai_state == 1) {
      pCStack_38 = (CVector3f *)-(float)pCStack_38;
      fStack_30 = -fStack_30;
    }
    fStack_328 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                           ((float)pCStack_38 - (this_ptr->base).base.base.orient.vec.y);
    fVar23 = fStack_328 * delta_time * fStack_60;
    if (ABS(fVar23) <= ABS(fStack_328)) {
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fVar23;
    }
    else {
      (this_ptr->base).base.base.orient.vec.y = (float)pCStack_38;
    }
    fStack_1c = fStack_328;
    fStack_30 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                          (fStack_30 - (this_ptr->base).base.base.orient.vec.x);
    fVar23 = (this_ptr->base).base.hit_points;
    pCStack_44 = (CVector3f *)0xbec90fdb;
    fStack_3c = 0.3926991;
    (this_ptr->base).base.base.orient.vec.x =
         fStack_30 * delta_time * fStack_60 + (this_ptr->base).base.base.orient.vec.x;
    if ((fVar23 < (float)25) && (this_ptr->bat_ai_state == 0)) {
      fStack_3c = 1.5707964;
      pCStack_44 = (CVector3f *)0xbfc90fdb;
    }
    if ((this_ptr->base).base.base.orient.vec.x < (float)pCStack_44) {
      (this_ptr->base).base.base.orient.vec.x = (float)pCStack_44;
    }
    if (fStack_3c < (this_ptr->base).base.base.orient.vec.x) {
      (this_ptr->base).base.base.orient.vec.x = fStack_3c;
    }
    fVar17 = (float10)(this_ptr->base).base.base.orient.vec.x;
    fVar18 = (float10)fsin(fVar17);
    fVar19 = (float10)(this_ptr->base).base.base.orient.vec.y;
    fVar20 = (float10)fsin(fVar19);
    fVar17 = (float10)fcos(fVar17);
    fVar19 = (float10)fcos(fVar19);
    fVar21 = (float10)(float)pCStack_50;
    fVar22 = (float10)delta_time;
    fVar18 = -fVar18 * fVar21 * fVar22 + (float10)(this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.y = (float)fVar18;
    fVar23 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.x =
         (float)(fVar20 * fVar17 * fVar21 * fVar22 +
                (float10)(this_ptr->base).base.base.location.position.x);
    (this_ptr->base).base.base.location.position.z =
         (float)(fVar19 * fVar17 * fVar21 * fVar22 + (float10)fVar23);
    if (fVar18 < (float10)CStack_154.z) {
      (this_ptr->base).base.base.location.position.y = CStack_154.z;
    }
    fStack_1c = fStack_30;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70
              (&this_ptr->model,(CBoundingBox3D *)(auStack_1f0 + 4));
    pfVar12 = (float *)(auStack_1f0 + 4);
    pfVar14 = &CStack_25c.max.y;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar14 = *pfVar12;
      pfVar12 = pfVar12 + (uint)bVar16 * -2 + 1;
      pfVar14 = pfVar14 + (uint)bVar16 * -2 + 1;
    }
    pCVar13 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar13 != (CBoundingBox3D *)&CStack_25c.max.y) {
      (pCVar13->min).x = CStack_25c.max.y;
      (this_ptr->base).base.cached_bounding_box.min.y = CStack_25c.max.z;
      (this_ptr->base).base.cached_bounding_box.min.z = fStack_244;
    }
    pCVar15 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar15 != (CVector3f *)&fStack_240) {
      pCVar15->x = fStack_240;
      (this_ptr->base).base.cached_bounding_box.max.y = fStack_23c;
      (this_ptr->base).base.cached_bounding_box.max.z = fStack_238;
    }
    goto LAB_005a5b9f;
  }
  if (iVar7 == 1) {
    fVar23 = delta_time / 5.0f + this_ptr->morph_t;
    this_ptr->morph_t = fVar23;
    pCVar5 = g_CEventListPtr;
    if (1.0 <= fVar23) {
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
    pCVar2 = &(this_ptr->base).base.model;
    fStack_68 = delta_time;
    while (0.0 < fStack_68) {
      core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar2->base,&fStack_68);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(pCVar2);
    pUVar1 = &(this_ptr->base).base.base.orient;
    pCStack_14 = &(this_ptr->base).base.base.location.position;
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->cape_cloth,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar2);
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->skirt_cloth,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar2);
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70
              (pCVar2,&CStack_1b4);
    pCVar13 = &CStack_1b4;
    pfVar12 = &fStack_1cc;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar12 = (pCVar13->min).x;
      pCVar13 = (CBoundingBox3D *)((int)pCVar13 + ((uint)bVar16 * -2 + 1) * 4);
      pfVar12 = pfVar12 + (uint)bVar16 * -2 + 1;
    }
    pCVar13 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar13 != (CBoundingBox3D *)&fStack_1cc) {
      (pCVar13->min).x = fStack_1cc;
      (this_ptr->base).base.cached_bounding_box.min.y = fStack_1c8;
      (this_ptr->base).base.cached_bounding_box.min.z = fStack_1c4;
    }
    pCVar15 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar15 != (CVector3f *)&fStack_1c0) {
      pCVar15->x = fStack_1c0;
      (this_ptr->base).base.cached_bounding_box.max.y = fStack_1bc;
      (this_ptr->base).base.cached_bounding_box.max.z = fStack_1b8;
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70
              (&this_ptr->model,&CStack_28c);
    pCVar13 = &CStack_28c;
    pCVar15 = &CStack_22c;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      pCVar15->x = (pCVar13->min).x;
      pCVar13 = (CBoundingBox3D *)((int)pCVar13 + ((uint)bVar16 * -2 + 1) * 4);
      pCVar15 = (CVector3f *)((int)pCVar15 + ((uint)bVar16 * -2 + 1) * 4);
    }
    pCVar13 = &(this_ptr->base).base.cached_bounding_box;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500(pCVar13,&CStack_22c);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500(pCVar13,&CStack_220);
    (this_ptr->base).base.base.location.position.y =
         (this_ptr->base).base.base.location.position.y + delta_time;
    goto LAB_005a5b9f;
  }
  if (iVar7 == 3) {
    fStack_5c = delta_time / 5.0f;
    fStack_60 = this_ptr->morph_t;
    this_ptr->morph_t = fStack_60 - fStack_5c;
    pCVar5 = g_CEventListPtr;
    if (0.0 < fStack_60 - fStack_5c) {
      fVar23 = (fStack_5c / fStack_60) *
               ((this_ptr->base).base.closest_distance_threshold -
               (this_ptr->base).base.base.location.position.y) +
               (this_ptr->base).base.base.location.position.y;
    }
    else {
      this_ptr->form = 0;
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(pCVar5,"backToHuman");
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
    pCVar2 = &(this_ptr->base).base.model;
    fStack_18 = delta_time;
    while (0.0 < fStack_18) {
      core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar2->base,&fStack_18);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(pCVar2);
    pUVar1 = &(this_ptr->base).base.base.orient;
    pCStack_14 = &(this_ptr->base).base.base.location.position;
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->cape_cloth,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar2);
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->skirt_cloth,pCStack_14,&pUVar1->vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,pCVar2);
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70
              (pCVar2,&CStack_19c);
    pCVar13 = &CStack_19c;
    pfVar12 = &fStack_274;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar12 = (pCVar13->min).x;
      pCVar13 = (CBoundingBox3D *)((int)pCVar13 + ((uint)bVar16 * -2 + 1) * 4);
      pfVar12 = pfVar12 + (uint)bVar16 * -2 + 1;
    }
    pCVar13 = &(this_ptr->base).base.cached_bounding_box;
    if (pCVar13 != (CBoundingBox3D *)&fStack_274) {
      (pCVar13->min).x = fStack_274;
      (this_ptr->base).base.cached_bounding_box.min.y = fStack_270;
      (this_ptr->base).base.cached_bounding_box.min.z = fStack_26c;
    }
    pCVar15 = &(this_ptr->base).base.cached_bounding_box.max;
    if (pCVar15 != (CVector3f *)&fStack_268) {
      pCVar15->x = fStack_268;
      (this_ptr->base).base.cached_bounding_box.max.y = fStack_264;
      (this_ptr->base).base.cached_bounding_box.max.z = fStack_260;
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70
              (&this_ptr->model,&CStack_214);
    pCVar13 = &CStack_214;
    pCVar15 = &CStack_1fc;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      pCVar15->x = (pCVar13->min).x;
      pCVar13 = (CBoundingBox3D *)((int)pCVar13 + ((uint)bVar16 * -2 + 1) * 4);
      pCVar15 = (CVector3f *)((int)pCVar15 + ((uint)bVar16 * -2 + 1) * 4);
    }
    pCVar13 = &(this_ptr->base).base.cached_bounding_box;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500(pCVar13,&CStack_1fc);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500(pCVar13,(CVector3f *)auStack_1f0);
    goto LAB_005a5b9f;
  }
  pCStack_20 = &(this_ptr->base).base.model;
  fStack_6c = delta_time;
  while (0.0 < fStack_6c) {
    uVar9 = core_motion_cpp_CMotionController_advance_FUN_00524270(&pCStack_20->base,&fStack_6c);
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
        CStack_16c.y = 20.0;
        CStack_16c.z = 20.0;
        CStack_16c.x = 0.0;
        core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                  ((CDemonActor *)this_ptr,&CStack_16c,&CStack_178);
        iVar7 = 0;
        pCVar15 = aCStack_b8;
        fVar23 = -1.0;
        aCStack_b8[0].x = CStack_178.x;
        *(uint *)((int)aCStack_b8 + (uint)bVar16 * -8 + 4) =
             *(uint *)((int)&CStack_178 + (uint)bVar16 * -8 + 4);
        pCVar11 = this_ptr;
        *(uint *)((int)aCStack_b8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             *(uint *)((int)&CStack_178 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        core_charactr_cpp_CCharacter_dismember_FUN_00430d90
                  ((CCharacter *)pCVar11,pCVar15,fVar23,iVar7);
        fStack_1c = 0.0;
        iVar7 = 0;
        while ((int)fStack_1c < g_CDemonSetPtr->enemy_count) {
          this_ptr_00 = (CCharacter *)
                        core_actor_cpp_castToClassHash_FUN_0040c600
                                  (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar7),
                                   g_CTVBatClassInfo.name_hash);
          if ((this_ptr_00 == (CCharacter *)0x0) ||
             (this_ptr_00[1].model.bone_origins[0xc].x == 0.0)) {
            fStack_1c = (float)((int)fStack_1c + 1);
            iVar7 = iVar7 + 4;
          }
          else {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_31c);
            SStack_31c.damage_amount = 999.0;
            (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)(this_ptr_00,&SStack_31c);
            fStack_1c = (float)((int)fStack_1c + 1);
            iVar7 = iVar7 + 4;
          }
        }
      }
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70
            (pCStack_20,&CStack_25c);
  pCVar13 = &CStack_25c;
  pfVar12 = &fStack_2a4;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar12 = (pCVar13->min).x;
    pCVar13 = (CBoundingBox3D *)((int)pCVar13 + ((uint)bVar16 * -2 + 1) * 4);
    pfVar12 = pfVar12 + (uint)bVar16 * -2 + 1;
  }
  pCVar13 = &(this_ptr->base).base.cached_bounding_box;
  if (pCVar13 != (CBoundingBox3D *)&fStack_2a4) {
    (pCVar13->min).x = fStack_2a4;
    (this_ptr->base).base.cached_bounding_box.min.y = fStack_2a0;
    (this_ptr->base).base.cached_bounding_box.min.z = fStack_29c;
  }
  pCVar15 = &(this_ptr->base).base.cached_bounding_box.max;
  if (pCVar15 != (CVector3f *)&fStack_298) {
    pCVar15->x = fStack_298;
    (this_ptr->base).base.cached_bounding_box.max.y = fStack_294;
    (this_ptr->base).base.cached_bounding_box.max.z = fStack_290;
  }
  pCVar2 = &(this_ptr->base).base.model;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar2->base);
  pCVar6 = g_CGamePtr;
  iStack_64 = pSVar8->state_index;
  switch(pSVar8->state_index) {
  case 0:
    (this_ptr->base).base.turn_speed = 3.141593f * delta_time;
    pCVar5 = g_CEventListPtr;
    if (pCVar6->letterbox_mode == 0) {
      iVar7 = this_ptr->waypoint_index;
      (this_ptr->base).base.walk_step_speed = 10.0f * delta_time;
      core_charactr_cpp_CCharacter_followActor_FUN_00431cc0
                ((CCharacter *)this_ptr,
                 *(CDemonActor **)((int)(&this_ptr->morph + 1) + (iVar7 + 7) * 4),0.2,999999.0,
                 &this_ptr->follow_result);
      switch(this_ptr->follow_result) {
      default:
        fVar23 = ((this_ptr->base).base.max_hit_points * delta_time) / 120.0f +
                 (this_ptr->base).base.hit_points;
        (this_ptr->base).base.hit_points = fVar23;
        if ((float)50 < fVar23) goto LAB_005a6245;
        pCVar10 = &(this_ptr->base).base.base.location;
        iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ea6f0(&pCVar10->position,12.0);
        if (iVar7 == 0) {
          pCVar3 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
          fStack_160 = (pCVar3->base).base.location.position.x - (pCVar10->position).x;
          afStack_15c[0] =
               (pCVar3->base).base.location.position.y -
               (this_ptr->base).base.base.location.position.y;
          afStack_15c[1] =
               (pCVar3->base).base.location.position.z -
               (this_ptr->base).base.base.location.position.z;
          CStack_dc.x = fStack_160;
          *(float *)((int)&CStack_dc + (uint)bVar16 * -8 + 4) = afStack_15c[(uint)bVar16 * -2];
          *(float *)((int)&CStack_dc + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
               afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_dc,&CStack_154);
          fStack_d0 = CStack_154.x;
          afStack_cc[(uint)bVar16 * -2] = *(float *)((int)&CStack_154 + (uint)bVar16 * -8 + 4);
          afStack_cc[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
               *(float *)((int)&CStack_154 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
          pCStack_14 = (CVector3f *)
                       core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                 (afStack_cc[0] - (this_ptr->base).base.base.orient.vec.y);
          (this_ptr->base).base.turn_angle_accumulator = (float)pCStack_14;
          pCStack_2c = (CVector3f *)(this_ptr->base).base.turn_angle_accumulator;
          pCStack_4c = (CVector3f *)(this_ptr->base).base.turn_speed;
          pCStack_14 = (CVector3f *)
                       core_actor_cpp_normalizeAngleToPi_FUN_0040cd60((float)pCStack_2c);
          pCStack_2c = pCStack_14;
          pCStack_38 = (CVector3f *)-(float)pCStack_4c;
          pCStack_50 = pCStack_38;
          if (((float)pCStack_38 <= (float)pCStack_14) &&
             (pCStack_38 = pCStack_14, (float)pCStack_4c < (float)pCStack_14)) {
            pCStack_38 = pCStack_4c;
          }
          fVar23 = this_ptr->action_timer - delta_time;
          (this_ptr->base).base.turn_angle_accumulator = (float)pCStack_38;
          this_ptr->action_timer = fVar23;
          if (fVar23 <= 0.0) {
            this_ptr->action_timer = 0.0;
            iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
            pCVar2 = &(this_ptr->base).base.model;
            if (iVar7 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,4,1);
            }
            else if (iVar7 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,5,1);
            }
            else if (iVar7 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,6,1);
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
        pCVar3 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
        fStack_13c = (pCVar3->base).base.location.position.x -
                     (this_ptr->base).base.base.location.position.x;
        afStack_138[0] =
             (pCVar3->base).base.location.position.y -
             (this_ptr->base).base.base.location.position.y;
        afStack_138[1] =
             (pCVar3->base).base.location.position.z -
             (this_ptr->base).base.base.location.position.z;
        CStack_c4.x = fStack_13c;
        *(float *)((int)aCStack_b8 + (uint)bVar16 * -8 + -8) = afStack_138[(uint)bVar16 * -2];
        *(float *)((int)aCStack_b8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + -4) =
             afStack_138[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_c4,&CStack_100);
        fStack_10c = CStack_100.x;
        afStack_138[(uint)bVar16 * -2 + 0xc] = *(float *)((int)&CStack_100 + (uint)bVar16 * -8 + 4);
        afStack_138[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
             *(float *)((int)&CStack_100 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        pCStack_14 = (CVector3f *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                               (fStack_108 - (this_ptr->base).base.base.orient.vec.y);
        (this_ptr->base).base.turn_angle_accumulator = (float)pCStack_14;
        pCStack_24 = (CVector3f *)(this_ptr->base).base.turn_angle_accumulator;
        pCStack_44 = (CVector3f *)(this_ptr->base).base.turn_speed;
        pCStack_14 = (CVector3f *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60((float)pCStack_24);
        pCStack_24 = pCStack_14;
        pCStack_40 = (CVector3f *)-(float)pCStack_44;
        pCStack_54 = pCStack_40;
        if (((float)pCStack_40 <= (float)pCStack_14) &&
           (pCStack_40 = pCStack_14, (float)pCStack_44 < (float)pCStack_14)) {
          pCStack_40 = pCStack_44;
        }
        (this_ptr->base).base.turn_angle_accumulator = (float)pCStack_40;
      }
      else {
LAB_005a6245:
        core_vampboss_cpp_CVampireBoss_transformToBat_FUN_005a7250(this_ptr);
      }
    }
    break;
  case 2:
    iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (g_CEventListPtr,"flyout");
    if (iVar7 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0,1);
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
    CStack_f4.y = CStack_f4.y - delta_time * (float)3;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042d750((CCharacter *)this_ptr,&CStack_f4);
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
  pCVar2 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar2);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  pUVar1 = &(this_ptr->base).base.base.orient;
  pCStack_14 = &(this_ptr->base).base.base.location.position;
  core_cloth_cpp_CCloth_process_FUN_00440610
            (&this_ptr->cape_cloth,pCStack_14,&pUVar1->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar2);
  core_cloth_cpp_CCloth_process_FUN_00440610
            (&this_ptr->skirt_cloth,pCStack_14,&pUVar1->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar2);
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
