// Name: core_asgaya.cpp_CAsgaya_process_FUN_005a0be0
// Address: 005a0be0
// Address Range: [[005a0be0, 005a1729]]
// Convention: __cdecl
// Signature: void __cdecl core_asgaya_cpp_CAsgaya_process_FUN_005a0be0(CAsgaya *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_asgaya_cpp_CAsgaya_process_FUN_005a0be0(CAsgaya *this_ptr,float delta_time)

{
  float fVar1;
  char cVar2;
  EWalkState EVar3;
  int iVar4;
  CExorcism *pCVar5;
  EDeathState EVar6;
  CMotionList *this_ptr_00;
  SMotion *pSVar7;
  int iVar8;
  CLocation *pCVar9;
  CDeformableModelInstance *pCVar10;
  byte bVar11;
  uint unaff_retaddr;
  float afStackY_1154 [996];
  CGore *this_ptr_01;
  CVector3f *position;
  char *pcVar12;
  float *pfVar13;
  EBloodType blood_type;
  double dVar14;
  CDemonActor *grabber;
  float fStack_188;
  CVector3f CStack_174;
  float fStack_168;
  float afStack_164 [4];
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  CVector3f CStack_144;
  float afStack_138 [3];
  CVector3f CStack_12c;
  CVector3f aCStack_120 [2];
  CVector3f CStack_108;
  float afStack_fc [6];
  CVector3f CStack_e4;
  float fStack_d8;
  float afStack_d4 [2];
  CVector3f CStack_cc;
  float fStack_c0;
  float afStack_bc [8];
  CVector3f CStack_9c;
  float afStack_90 [6];
  byte auStack_78 [12];
  float afStack_6c [6];
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f aCStack_30 [2];
  uint uStack_18;
  uint uStack_14;
  
  bVar11 = 0;
  iVar4 = core_charactr_cpp_FUN_0042cd70(this_ptr,delta_time);
  if (iVar4 == 0) {
    return;
  }
  if (this_ptr->bible_spawned == 0) {
    pCVar5 = (CExorcism *)core_actor_cpp_createActorByName_FUN_0040c4f0("CExorcism");
    this_ptr->bible = pCVar5;
    (*((pCVar5->base).base.vtable._ub)->setup)((CDemonActor *)pCVar5);
    pcVar12 = "Bible";
    pCVar5 = this_ptr->bible;
    do {
      cVar2 = *pcVar12;
      (pCVar5->base).base.actor_name[0] = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      (pCVar5->base).base.actor_name[1] = cVar2;
      pCVar5 = (CExorcism *)((pCVar5->base).base.actor_name + 2);
    } while (cVar2 != '\0');
    pCVar5 = this_ptr->bible;
    (pCVar5->base).base.location.position.x = (this_ptr->base).base.base.location.position.x;
    (pCVar5->base).base.location.position.y = (this_ptr->base).base.base.location.position.y;
    (pCVar5->base).base.location.position.z = (this_ptr->base).base.base.location.position.z;
    (pCVar5->base).base.location.area_id = (this_ptr->base).base.base.location.area_id;
    if (this_ptr->bible != (CExorcism *)0x0) {
      (this_ptr->bible->base).base.is_transparent = 1;
      (this_ptr->bible->base).base.is_renderable = 0;
    }
    core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004319d0
              ((CCharacter *)this_ptr,0,(int)this_ptr->bible,0,0);
    core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
              (0x01D81080,(CDemonActor *)this_ptr->bible);
    this_ptr->bible_spawned = 1;
  }
  if (this_ptr->appear_state == 0) {
    core_charactr_cpp_FUN_00433c60(this_ptr,delta_time);
  }
  fStack_188 = delta_time * this_ptr->speed;
  uStack_18 = 1;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  pCVar10 = &(this_ptr->base).base.model;
  fVar1 = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.y = fVar1;
  (this_ptr->base).base.model.accumulated_root_motion.x = fVar1;
  while (0.0 < fStack_188) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar10->base,&stack0xfffffe78);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar4);
  }
  EVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if ((((1 < (int)EVar6) && ((this_ptr->base).base.base.lifecycle_state == ACTOR_CREATED)) &&
      (blood_type = this_ptr->pool_me, blood_type == BLOOD_TYPE_RED)) &&
     ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (pCVar10,0,&CStack_9c);
    pfVar13 = &fStack_d8;
    fStack_d8 = CStack_9c.x;
    afStack_d4[(uint)bVar11 * -2] = afStack_90[(uint)bVar11 * -2 + -2];
    afStack_d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_90[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1];
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar13);
    position = &CStack_12c;
    CStack_12c.x = afStack_90[0];
    *(float *)((int)&CStack_12c + (uint)bVar11 * -8 + 4) = afStack_90[(uint)bVar11 * -2 + 1];
    this_ptr_01 = g_CGorePtr;
    *(float *)((int)&CStack_12c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         afStack_90[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2];
    core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_01,position,blood_type);
    uStack_14 = 1;
    this_ptr->pool_me = 1;
  }
  fVar1 = this_ptr->speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * fVar1);
  iVar4 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  pCVar10 = &(this_ptr->base).base.model;
  if (iVar4 == 0) {
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar10->base);
    iVar4 = pSVar7->state_index;
    fStack_188 = core_motion_cpp_FUN_004fc930(&pCVar10->base);
    pcVar12 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_004fc320(&pCVar10->base);
    iVar8 = _strcmp(pcVar12,"APPEAR");
    if ((iVar8 == 0) && (this_ptr->appear_state < 1)) {
      this_ptr->appear_state = 1;
      (this_ptr->base).base.base.is_transparent = 1;
      (this_ptr->base).base.base.is_renderable = 0;
      this_ptr->fade_timer = (this_ptr->base).fade_time;
    }
    iVar8 = _strcmp(pcVar12,"DISAPPEAR");
    if ((iVar8 == 0) && (this_ptr->appear_state != 0)) {
      this_ptr->appear_state = 0;
      (this_ptr->base).base.base.is_transparent = 1;
      (this_ptr->base).base.base.is_renderable = 0;
      this_ptr->fade_timer = (this_ptr->base).fade_time;
    }
    if (iVar4 == 0x95) {
      dVar14 = (double)fStack_188;
      if ((1.0 < dVar14) && (dVar14 < _DAT_005da5fe)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                  (&(this_ptr->base).base.model,this_ptr->bone_indices[1],&CStack_108);
        pfVar13 = afStack_bc + 2;
        afStack_bc[2] = CStack_108.x;
        afStack_bc[(uint)bVar11 * -2 + 3] = afStack_fc[(uint)bVar11 * -2 + -2];
        afStack_bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
             afStack_fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar13);
        CStack_48.x = afStack_fc[0];
        afStack_6c[(uint)bVar11 * -2 + 10] = afStack_fc[(uint)bVar11 * -2 + 1];
        afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xb] =
             afStack_fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2];
        if (&CStack_174 != (CVector3f *)(afStack_6c + 9)) {
          CStack_174.x = CStack_48.x;
          CStack_174.y = CStack_48.y;
          CStack_174.z = CStack_48.z;
        }
        core_fire_cpp_CFireEffect_createGunFlames_FUN_004a3af0
                  (0x01C73654,&CStack_174,(CVector3f *)&DAT_02cfd900,1,0,4);
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                  (&(this_ptr->base).base.model,this_ptr->bone_indices[0],&CStack_e4);
        pfVar13 = afStack_6c + 3;
        afStack_6c[3] = CStack_e4.x;
        afStack_6c[(uint)bVar11 * -2 + 4] = *(float *)((int)&CStack_e4 + (uint)bVar11 * -8 + 4);
        afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] =
             *(float *)((int)&CStack_e4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar13);
        aCStack_120[0].x = afStack_fc[3];
        *(float *)((int)aCStack_120 + ((uint)bVar11 * -2 + -1) * 4 + 8) =
             afStack_fc[(uint)bVar11 * -2 + 4];
        *(float *)((int)aCStack_120 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
             afStack_fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5];
        if (&CStack_174 != aCStack_120) {
          CStack_174.x = aCStack_120[0].x;
          CStack_174.y = aCStack_120[0].y;
          CStack_174.z = aCStack_120[0].z;
        }
        core_fire_cpp_CFireEffect_createGunFlames_FUN_004a3af0
                  (0x01C73654,&CStack_174,(CVector3f *)&DAT_02cfd900,1,0,4);
      }
      grabber = (CDemonActor *)((ulonglong)dVar14 >> 0x20);
      if ((1.0 < (double)fStack_188) && ((double)fStack_188 < _DAT_005da606)) {
        iVar4 = 1;
        pCVar9 = &(this_ptr->base).base.base.location;
        do {
          if ((CLocation *)&CStack_cc != pCVar9) {
            CStack_cc.x = (pCVar9->position).x;
            CStack_cc.y = (this_ptr->base).base.base.location.position.y;
            CStack_cc.z = (this_ptr->base).base.base.location.position.z;
          }
          if ((CLocation *)&CStack_3c != pCVar9) {
            CStack_3c.x = (pCVar9->position).x;
            CStack_3c.y = (this_ptr->base).base.base.location.position.y;
            CStack_3c.z = (this_ptr->base).base.base.location.position.z;
          }
          fVar1 = (float)iVar4 * (float)_DAT_005da60e;
          iVar4 = iVar4 + 1;
          CStack_3c.y = fVar1 + (float)_DAT_005da62e + CStack_3c.y;
          CStack_cc.y = fVar1 + (float)_DAT_005da60e + CStack_cc.y;
          core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                    (0x01C73654,&CStack_3c,&CStack_cc,0,0.75,0.75,3,0.25,0xffff);
          grabber = (CDemonActor *)((ulonglong)dVar14 >> 0x20);
        } while (iVar4 < 0xb);
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                  (&(this_ptr->base).base.model,this_ptr->bone_indices[1],(CVector3f *)auStack_78);
        pfVar13 = afStack_6c;
        afStack_6c[0] = (float)auStack_78._0_4_;
        afStack_6c[(uint)bVar11 * -2 + 1] = *(float *)(auStack_78 + (uint)bVar11 * -8 + 4);
        afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2] =
             afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar13);
        CStack_54.x = afStack_164[2];
        afStack_6c[(uint)bVar11 * -2 + 7] = afStack_164[(uint)bVar11 * -2 + 3];
        afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 8] =
             afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        if (&CStack_cc != (CVector3f *)(afStack_6c + 6)) {
          CStack_cc.x = CStack_54.x;
          CStack_cc.y = CStack_54.y;
          CStack_cc.z = CStack_54.z;
        }
        pCVar9 = &(this_ptr->base).base.base.location;
        if ((CLocation *)&CStack_3c != pCVar9) {
          CStack_3c.x = (pCVar9->position).x;
          CStack_3c.y = (this_ptr->base).base.base.location.position.y;
          CStack_3c.z = (this_ptr->base).base.base.location.position.z;
        }
        CStack_3c.y = CStack_3c.y + _DAT_005da616;
        core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                  (0x01C73654,&CStack_3c,&CStack_cc,0,0.75,0.75,3,0.25,0xffff);
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                  (&(this_ptr->base).base.model,this_ptr->bone_indices[0],&CStack_144);
        afStack_138[0] = CStack_144.x;
        afStack_138[(uint)bVar11 * -2 + 1] = afStack_138[(uint)bVar11 * -2 + -2];
        afStack_138[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2] =
             afStack_138[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1];
        core_actor_cpp_FUN_00408b80(this_ptr,afStack_138);
        aCStack_30[0].x = fStack_c0;
        *(float *)((int)aCStack_30 + ((uint)bVar11 * -2 + -1) * 4 + 8) =
             afStack_bc[(uint)bVar11 * -2];
        *(float *)((int)aCStack_30 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
             afStack_bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        if (&CStack_cc != aCStack_30) {
          CStack_cc.x = aCStack_30[0].x;
          CStack_cc.y = aCStack_30[0].y;
          CStack_cc.z = aCStack_30[0].z;
        }
        pCVar9 = &(this_ptr->base).base.base.location;
        if ((CLocation *)&CStack_3c != pCVar9) {
          CStack_3c.x = (pCVar9->position).x;
          CStack_3c.y = (this_ptr->base).base.base.location.position.y;
          CStack_3c.z = (this_ptr->base).base.base.location.position.z;
        }
        CStack_3c.y = CStack_3c.y + _DAT_005da616;
        core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                  (0x01C73654,&CStack_3c,&CStack_cc,0,0.75,0.75,3,0.25,0xffff);
      }
      dVar14 = (double)fStack_188;
      if ((((float)_DAT_005da61e < fStack_188) && (dVar14 < _DAT_005da5fe)) &&
         (iVar4 = (*(((((CCharacter *)this_ptr->bible)->base).vtable._uc)->_uc).canBeGrabbed)
                            ((CCharacter *)this_ptr->bible,SUB84(__BITCAST_UINT64(dVar14),0),
                             (int)((ulonglong)dVar14 >> 0x20)), iVar4 != 0)) {
        (*(((((CCharacter *)this_ptr->bible)->base).vtable._uc)->_uc).isGrabbable)
                  ((CCharacter *)this_ptr->bible,grabber);
      }
      if (((float)_DAT_005da626 < CStack_174.x) && (this_ptr->cast_count < 6)) {
        this_ptr->cast_count = this_ptr->cast_count + 1;
        core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0
                  (&(this_ptr->base).base.model.base,"indian_cast",70.0);
      }
    }
    goto LAB_005a0ed4;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_005a0e97:
      pcVar12 = &DAT_005da5d4;
    }
    else {
LAB_005a10e8:
      pcVar12 = "STAND";
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              (&(this_ptr->base).base.model.base,pcVar12,1);
  }
  else if (EVar3 < WALK_STATE_NO_PATH) {
    iVar4 = 0;
    pcVar12 = &DAT_005da5d0;
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(&pCVar10->base);
    iVar4 = core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50(this_ptr_00,pcVar12,iVar4);
    if (iVar4 < 0) goto LAB_005a0e97;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar10->base,iVar4,1);
  }
  else {
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_005a10e8;
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              (&pCVar10->base,"STAND",1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_005a0ed4:
  if (0.0 < this_ptr->fade_timer) {
    this_ptr->fade_timer = this_ptr->fade_timer - delta_time;
  }
  if (this_ptr->fade_timer < 0.0) {
    this_ptr->fade_timer = 0.0;
  }
  core_charactr_cpp_FUN_0042c1e0();
  CStack_108.z = (this_ptr->base).base.velocity.x * delta_time;
  afStack_fc[0] = (this_ptr->base).base.velocity.y * delta_time;
  afStack_fc[1] = (this_ptr->base).base.velocity.z * delta_time;
  CStack_9c.z = CStack_108.z;
  afStack_90[(uint)bVar11 * -2] = afStack_fc[(uint)bVar11 * -2];
  afStack_90[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  CStack_174.z = CStack_9c.z + (this_ptr->base).base.position_delta.x;
  fStack_168 = afStack_90[0] + (this_ptr->base).base.position_delta.y;
  afStack_164[0] = afStack_90[1] + (this_ptr->base).base.position_delta.z;
  fStack_154 = CStack_174.z;
  afStack_164[(uint)bVar11 * -2 + 5] = afStack_164[(uint)bVar11 * -2 + -1];
  afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 6] =
       afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2];
  CStack_144.z = fStack_154 + (this_ptr->base).base.model.accumulated_root_motion.x;
  afStack_138[0] = fStack_150 + (this_ptr->base).base.model.accumulated_root_motion.y;
  afStack_138[1] = fStack_14c + (this_ptr->base).base.model.accumulated_root_motion.z;
  auStack_78._8_4_ = CStack_144.z;
  afStack_6c[(uint)bVar11 * -2] = afStack_138[(uint)bVar11 * -2];
  afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_138[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  (this_ptr->base).base.position_delta.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
  (this_ptr->base).base.position_delta.x = (this_ptr->base).base.position_delta.y;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,(CVector3f *)(auStack_78 + 8));
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_FUN_00432330(this_ptr,delta_time,unaff_retaddr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
