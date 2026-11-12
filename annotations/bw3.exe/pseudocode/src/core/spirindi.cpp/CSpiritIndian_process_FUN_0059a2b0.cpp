// Name: core_spirindi.cpp_CSpiritIndian_process_FUN_0059a2b0
// Address: 0059a2b0
// Address Range: [[0059a2b0, 0059a723]]
// Convention: __cdecl
// Signature: void __cdecl core_spirindi_cpp_CSpiritIndian_process_FUN_0059a2b0(CSpiritIndian *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_spirindi_cpp_CSpiritIndian_process_FUN_0059a2b0(CSpiritIndian *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  float fVar5;
  EWalkState EVar6;
  CPryeMorph *pCVar7;
  CDemonMission *pCVar8;
  EDeathState EVar9;
  int iVar10;
  CMotionList *this_ptr_00;
  SMotion *pSVar11;
  byte bVar12;
  float afStackY_1094 [1014];
  CGore *this_ptr_01;
  CVector3f *pCVar13;
  char *pcVar14;
  float *pfVar15;
  EBloodType blood_type;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [4];
  float fStack_74;
  CVector3f CStack_70;
  float fStack_64;
  float afStack_60 [5];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float afStack_40 [3];
  uint uStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_14;
  
  bVar12 = 0;
  core_charactr_cpp_FUN_00433c60(this_ptr,delta_time);
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_b0 = delta_time * this_ptr->speed;
  uStack_14 = 1;
  pCVar2 = &(this_ptr->base).base.model;
  while (0.0 < fStack_b0) {
    iVar10 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar2->base,&stack0xffffff50);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar10);
  }
  EVar9 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if ((((1 < (int)EVar9) && ((this_ptr->base).base.base.lifecycle_state == ACTOR_CREATED)) &&
      (this_ptr->pool_me == 0)) &&
     ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
    core_skeleton_cpp_FUN_0054dbd0(pCVar2,0);
    pfVar15 = afStack_60 + 8;
    afStack_40[0] = (float)uStack_34;
    afStack_60[(uint)bVar12 * -2 + 9] = afStack_60[(uint)bVar12 * -2 + 0xc];
    afStack_60[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
         afStack_60[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar15);
    blood_type = BLOOD_TYPE_RED;
    pCVar13 = &CStack_70;
    CStack_70.x = fStack_a0;
    *(uint *)((int)&CStack_70 + (uint)bVar12 * -8 + 4) =
         *(uint *)(&stack0xffffff64 + (uint)bVar12 * -8);
    this_ptr_01 = g_CGorePtr;
    *(uint *)((int)&CStack_70 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         *(uint *)(&stack0xffffff68 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
    core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_01,pCVar13,blood_type);
    this_ptr->pool_me = 1;
    uStack_14 = 1;
  }
  fVar4 = this_ptr->speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * fVar4);
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                     ((CCharacter *)this_ptr,delta_time);
  pCVar2 = &(this_ptr->base).base.model;
  if (iVar10 == 0) {
    if (1.0 <= this_ptr->morph_time) {
      return;
    }
    pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base);
    iVar10 = pSVar11->state_index;
    this_ptr->current_motion_type = iVar10;
    if (((iVar10 == 0x91) || (iVar10 == 0x92)) &&
       ((this_ptr->current_motion_type == 0x92 &&
        ((fVar4 = delta_time * (float)_DAT_005d9ab9 + this_ptr->morph_time,
         this_ptr->morph_time = fVar4, 1.0 <= fVar4 && (this_ptr->morph_actor != (CPryeMorph *)0x0))
        )))) {
      core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
                (0x01D81080,(CDemonActor *)this_ptr->morph_actor);
      pCVar8 = 0x01D81080;
      this_ptr->morph_actor = (CPryeMorph *)0x0;
      core_mission_cpp_FUN_004f6f10(pCVar8,this_ptr,1);
    }
    if (this_ptr->current_motion_type != 0) {
      core_actor_cpp_FUN_00408b00(this_ptr,&(this_ptr->base).base.model.accumulated_root_motion);
      pCVar1 = &(this_ptr->base).base.base.location;
      afStack_84[2] = afStack_60[2];
      afStack_84[(uint)bVar12 * -2 + 3] = afStack_60[(uint)bVar12 * -2 + 3];
      afStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           afStack_60[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      fVar4 = (this_ptr->base).base.base.location.position.y;
      fVar5 = (this_ptr->base).base.base.location.position.z;
      (pCVar1->position).x = (pCVar1->position).x + afStack_84[2];
      (this_ptr->base).base.base.location.position.y = fVar4 + afStack_84[3];
      (this_ptr->base).base.base.location.position.z = fVar5 + fStack_74;
      pCVar7 = this_ptr->morph_actor;
      if (pCVar7 != (CPryeMorph *)0x0) {
        (pCVar7->base).base.base.location.position.x = (pCVar1->position).x;
        (pCVar7->base).base.base.location.position.y =
             (this_ptr->base).base.base.location.position.y;
        (pCVar7->base).base.base.location.position.z =
             (this_ptr->base).base.base.location.position.z;
        (pCVar7->base).base.base.location.area_id = (this_ptr->base).base.base.location.area_id;
      }
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
    goto LAB_0059a433;
  }
  EVar6 = (this_ptr->base).base.walk_state;
  if (EVar6 < 2) {
    if (EVar6 == WALK_STATE_WALKING) {
LAB_0059a405:
      pcVar14 = &DAT_005d9aac;
    }
    else {
LAB_0059a5da:
      pcVar14 = "STAND";
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              (&(this_ptr->base).base.model.base,pcVar14,1);
  }
  else if (EVar6 < WALK_STATE_NO_PATH) {
    iVar10 = 0;
    pcVar14 = &DAT_005d9aa8;
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(&pCVar2->base);
    iVar10 = core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50(this_ptr_00,pcVar14,iVar10);
    if (iVar10 < 0) goto LAB_0059a405;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,iVar10,1);
  }
  else {
    if (EVar6 != WALK_STATE_NO_PATH) goto LAB_0059a5da;
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              (&pCVar2->base,"STAND",1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_0059a433:
  core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
  fStack_88 = (this_ptr->base).base.velocity.x * delta_time;
  afStack_84[0] = (this_ptr->base).base.velocity.y * delta_time;
  afStack_84[1] = (this_ptr->base).base.velocity.z * delta_time;
  fStack_ac = fStack_88;
  *(float *)((int)&stack0xffffff58 + (uint)bVar12 * -8) = afStack_84[(uint)bVar12 * -2];
  *(float *)((int)&stack0xffffff5c + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
       afStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
  pCVar13 = &(this_ptr->base).base.position_delta;
  fStack_4c = fStack_ac + pCVar13->x;
  fStack_48 = fStack_a8 + (this_ptr->base).base.position_delta.y;
  fStack_44 = fStack_a4 + (this_ptr->base).base.position_delta.z;
  fStack_28 = fStack_4c;
  afStack_60[(uint)bVar12 * -2 + 0xf] = afStack_60[(uint)bVar12 * -2 + 6];
  afStack_60[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
       afStack_60[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
  pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
  fStack_64 = fStack_28 + pCVar3->x;
  afStack_60[0] = fStack_24 + (this_ptr->base).base.model.accumulated_root_motion.y;
  afStack_60[1] = fStack_20 + (this_ptr->base).base.model.accumulated_root_motion.z;
  CStack_94.x = fStack_64;
  *(float *)((int)&CStack_94 + (uint)bVar12 * -8 + 4) = afStack_60[(uint)bVar12 * -2];
  *(float *)((int)&CStack_94 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
       afStack_60[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
  (this_ptr->base).base.position_delta.z = 0.0;
  (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
  pCVar13->x = (this_ptr->base).base.position_delta.y;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar3->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_94);
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_FUN_00432330(this_ptr,delta_time,uStack_14);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
