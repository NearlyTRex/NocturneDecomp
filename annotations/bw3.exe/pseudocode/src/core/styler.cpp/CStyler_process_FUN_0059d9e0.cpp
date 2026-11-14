// Name: core_styler.cpp_CStyler_process_FUN_0059d9e0
// Address: 0059d9e0
// Address Range: [[0059d9e0, 0059dda1]]
// Convention: __cdecl
// Signature: void __cdecl core_styler_cpp_CStyler_process_FUN_0059d9e0(CStyler *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_styler_cpp_CStyler_process_FUN_0059d9e0(CStyler *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  float fVar5;
  float fVar6;
  EWalkState EVar7;
  CDemonActor *pCVar8;
  CDemonMission *this_ptr_00;
  int iVar9;
  SMotion *pSVar10;
  byte bVar11;
  float afStackY_1064 [1014];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3f CStack_70;
  float fStack_64;
  float afStack_60 [4];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  bVar11 = 0;
  if (1.0 <= this_ptr->morph_time) {
    return;
  }
  iVar9 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar9 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00433c60(this_ptr,delta_time);
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_80 = delta_time * (this_ptr->base).speed;
  pCVar2 = &(this_ptr->base).base.model;
  while (0.0 < fStack_80) {
    iVar9 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar2->base,&stack0xffffff80);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar9);
  }
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base);
  fVar5 = (this_ptr->base).speed;
  iVar9 = pSVar10->state_index;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * fVar5);
  if (iVar9 == 4) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)_DAT_005d9f19;
  }
  iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  pCVar2 = &(this_ptr->base).base.model;
  if (iVar9 == 0) {
    if (1.0 <= this_ptr->morph_time) {
      return;
    }
    pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base);
    iVar9 = pSVar10->state_index;
    if ((((iVar9 == 0x99) || (iVar9 == 0x9a)) && (iVar9 == 0x9a)) &&
       (((this_ptr->is_morph_partner == 0 &&
         (fVar5 = delta_time * (float)_DAT_005d9f21 + this_ptr->morph_time,
         this_ptr->morph_time = fVar5, 1.0 <= fVar5)) && (this_ptr->demon != (CDemonActor *)0x0))))
    {
      core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(0x01D81080,this_ptr->demon);
      this_ptr_00 = 0x01D81080;
      this_ptr->demon = (CDemonActor *)0x0;
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_004f6f10(this_ptr_00,this_ptr,1);
    }
    if (iVar9 != 0) {
      core_actor_cpp_FUN_00408b00(this_ptr,&(this_ptr->base).base.model.accumulated_root_motion);
      pCVar1 = &(this_ptr->base).base.base.location;
      fStack_40 = fStack_34;
      afStack_60[(uint)bVar11 * -2 + 9] = afStack_60[(uint)bVar11 * -2 + 0xc];
      afStack_60[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
           afStack_60[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
      fVar5 = (this_ptr->base).base.base.location.position.y;
      fVar6 = (this_ptr->base).base.base.location.position.z;
      (pCVar1->position).x = (pCVar1->position).x + fStack_40;
      (this_ptr->base).base.base.location.position.y = fVar5 + fStack_3c;
      (this_ptr->base).base.base.location.position.z = fVar6 + fStack_38;
      pCVar8 = this_ptr->demon;
      if (pCVar8 != (CDemonActor *)0x0) {
        (pCVar8->location).position.x = (pCVar1->position).x;
        (pCVar8->location).position.y = (this_ptr->base).base.base.location.position.y;
        (pCVar8->location).position.z = (this_ptr->base).base.base.location.position.z;
        (pCVar8->location).area_id = (this_ptr->base).base.base.location.area_id;
      }
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
    goto LAB_0059db1e;
  }
  EVar7 = (this_ptr->base).base.walk_state;
  if (EVar7 < 2) {
    if (EVar7 == WALK_STATE_WALKING) {
LAB_0059daf3:
      iVar9 = 1;
    }
    else {
LAB_0059dc5c:
      iVar9 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar9,1);
  }
  else {
    if (EVar7 < WALK_STATE_NO_PATH) goto LAB_0059daf3;
    if (EVar7 != WALK_STATE_NO_PATH) goto LAB_0059dc5c;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_0059db1e:
  core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
  afStack_60[2] = (this_ptr->base).base.velocity.x * delta_time;
  afStack_60[3] = (this_ptr->base).base.velocity.y * delta_time;
  fStack_50 = (this_ptr->base).base.velocity.z * delta_time;
  fStack_64 = afStack_60[2];
  afStack_60[(uint)bVar11 * -2] = afStack_60[(uint)bVar11 * -2 + 3];
  afStack_60[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_60[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  pCVar3 = &(this_ptr->base).base.position_delta;
  fStack_28 = fStack_64 + pCVar3->x;
  fStack_24 = afStack_60[0] + (this_ptr->base).base.position_delta.y;
  fStack_20 = afStack_60[1] + (this_ptr->base).base.position_delta.z;
  fStack_7c = fStack_28;
  *(float *)((int)&stack0xffffff88 + (uint)bVar11 * -8) = afStack_60[(uint)bVar11 * -2 + 0xf];
  *(float *)((int)&stack0xffffff8c + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
       afStack_60[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
  pCVar4 = &(this_ptr->base).base.model.accumulated_root_motion;
  fStack_4c = fStack_7c + pCVar4->x;
  fStack_48 = fStack_78 + (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_44 = fStack_74 + (this_ptr->base).base.model.accumulated_root_motion.z;
  CStack_70.x = fStack_4c;
  *(float *)((int)&CStack_70 + (uint)bVar11 * -8 + 4) = afStack_60[(uint)bVar11 * -2 + 6];
  *(float *)((int)&CStack_70 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
       afStack_60[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
  (this_ptr->base).base.position_delta.z = 0.0;
  (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
  pCVar3->x = (this_ptr->base).base.position_delta.y;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar4->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_70);
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
