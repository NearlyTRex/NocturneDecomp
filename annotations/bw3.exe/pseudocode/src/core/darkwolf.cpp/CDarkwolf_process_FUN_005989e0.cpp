// Name: core_darkwolf.cpp_CDarkwolf_process_FUN_005989e0
// Address: 005989e0
// Address Range: [[005989e0, 00598df6]]
// Convention: __cdecl
// Signature: void __cdecl core_darkwolf_cpp_CDarkwolf_process_FUN_005989e0(CDarkwolf *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_darkwolf_cpp_CDarkwolf_process_FUN_005989e0(CDarkwolf *this_ptr,float delta_time)

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
  uint uVar11;
  byte bVar12;
  float afStackY_106c [1014];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_1c;
  float fStack_18;
  
  bVar12 = 0;
  if ((1.0 <= this_ptr->morph_time) ||
     (iVar9 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base),
     iVar9 == 0)) {
    return;
  }
  core_charactr_cpp_FUN_00433c60(this_ptr,delta_time);
  core_charactr_cpp_FUN_00432330(this_ptr,delta_time,0);
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_88 = delta_time * (this_ptr->base).speed;
  pCVar2 = &(this_ptr->base).base.model;
  while (0.0 < fStack_88) {
    iVar9 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar2->base,&stack0xffffff78);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar9);
  }
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base);
  fVar5 = (this_ptr->base).speed;
  iVar9 = pSVar10->state_index;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * fVar5);
  if (iVar9 == 2) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)_DAT_005d9872;
  }
  iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  pCVar2 = &(this_ptr->base).base.model;
  if (iVar9 == 0) {
    if (1.0 <= this_ptr->morph_time) {
      return;
    }
    pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base);
    iStack_1c = pSVar10->state_index;
    if ((((iStack_1c == 6) || (iStack_1c == 7)) && (iStack_1c == 7)) &&
       ((fVar5 = delta_time * (float)_DAT_005d987a + this_ptr->morph_time,
        this_ptr->morph_time = fVar5, 1.0 <= fVar5 && (this_ptr->morph_target != (CDemonActor *)0x0)
        ))) {
      core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
                (0x01D81080,this_ptr->morph_target);
      this_ptr_00 = 0x01D81080;
      this_ptr->morph_target = (CDemonActor *)0x0;
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_004f6f10(this_ptr_00,this_ptr,1);
    }
    if (iStack_1c != 0) {
      core_actor_cpp_FUN_00408b00(this_ptr,&(this_ptr->base).base.model.accumulated_root_motion);
      pCVar1 = &(this_ptr->base).base.base.location;
      fStack_78 = fStack_3c;
      *(float *)((int)&stack0xffffff8c + (uint)bVar12 * -8) = afStack_5c[(uint)bVar12 * -2 + 9];
      *(float *)((int)&stack0xffffff90 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
           afStack_5c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
      fVar5 = (this_ptr->base).base.base.location.position.y;
      fVar6 = (this_ptr->base).base.base.location.position.z;
      (pCVar1->position).x = (pCVar1->position).x + fStack_78;
      (this_ptr->base).base.base.location.position.y = fVar5 + fStack_74;
      (this_ptr->base).base.base.location.position.z = fVar6 + fStack_70;
      pCVar8 = this_ptr->morph_target;
      if (pCVar8 != (CDemonActor *)0x0) {
        (pCVar8->location).position.x = (pCVar1->position).x;
        (pCVar8->location).position.y = (this_ptr->base).base.base.location.position.y;
        (pCVar8->location).position.z = (this_ptr->base).base.base.location.position.z;
        (pCVar8->location).area_id = (this_ptr->base).base.base.location.area_id;
      }
    }
    if (((iStack_1c == 3) &&
        (fStack_18 = core_motion_cpp_FUN_004fc930(&(this_ptr->base).base.model.base),
        fStack_18 < (float)_DAT_005d9882)) &&
       (iVar9 = sound_sndmain_cpp_FUN_00556700(this_ptr->sfx_handle), iVar9 == 0)) {
      uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                         ((CDemonActor *)this_ptr,"dog_howl.wav");
      this_ptr->sfx_handle = uVar11;
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
    goto LAB_00598b24;
  }
  EVar7 = (this_ptr->base).base.walk_state;
  if (EVar7 < 2) {
    if (EVar7 == WALK_STATE_WALKING) {
      iVar9 = 1;
    }
    else {
LAB_00598c63:
      iVar9 = 0;
    }
LAB_00598b04:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar9,1);
  }
  else {
    if (EVar7 < WALK_STATE_NO_PATH) {
      iVar9 = 2;
      goto LAB_00598b04;
    }
    if (EVar7 != WALK_STATE_NO_PATH) goto LAB_00598c63;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_00598b24:
  core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
  fStack_48 = (this_ptr->base).base.velocity.x * delta_time;
  fStack_44 = (this_ptr->base).base.velocity.y * delta_time;
  fStack_40 = (this_ptr->base).base.velocity.z * delta_time;
  fStack_30 = fStack_48;
  afStack_5c[(uint)bVar12 * -2 + 0xc] = afStack_5c[(uint)bVar12 * -2 + 6];
  afStack_5c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
       afStack_5c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
  pCVar3 = &(this_ptr->base).base.position_delta;
  fStack_84 = fStack_30 + pCVar3->x;
  fStack_80 = fStack_2c + (this_ptr->base).base.position_delta.y;
  fStack_7c = fStack_28 + (this_ptr->base).base.position_delta.z;
  fStack_60 = fStack_84;
  afStack_5c[(uint)bVar12 * -2] = *(float *)((int)&stack0xffffff80 + (uint)bVar12 * -8);
  afStack_5c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
       *(float *)((int)&stack0xffffff84 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
  pCVar4 = &(this_ptr->base).base.model.accumulated_root_motion;
  afStack_5c[2] = fStack_60 + pCVar4->x;
  afStack_5c[3] = afStack_5c[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_4c = afStack_5c[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
  CStack_6c.x = afStack_5c[2];
  *(float *)((int)&CStack_6c + (uint)bVar12 * -8 + 4) = afStack_5c[(uint)bVar12 * -2 + 3];
  *(float *)((int)&CStack_6c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
       afStack_5c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
  (this_ptr->base).base.position_delta.z = 0.0;
  (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
  pCVar3->x = (this_ptr->base).base.position_delta.y;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  fVar5 = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.y = fVar5;
  pCVar4->x = fVar5;
  core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_6c);
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
