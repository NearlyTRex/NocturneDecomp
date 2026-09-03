// Name: core_npc.cpp_CNPC_process_FUN_004eea20
// Address: 004eea20
// Address Range: [[004eea20, 004eecdd]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_process_FUN_004eea20(CNPC *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_process_FUN_004eea20(CNPC *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  EDeathState EVar7;
  CVector3f *pCVar8;
  CMotionList *this_ptr_00;
  char *pcVar9;
  float local_58;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CVector3f CStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  iVar6 = core_charactr_cpp_CCharacter_process_FUN_004259f0(&this_ptr->base,delta_time);
  if (iVar6 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042abd0(&this_ptr->base,delta_time);
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
  pCVar1 = &(this_ptr->base).model;
  local_58 = delta_time;
  while (0.0 < local_58) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar1->motion_controller,&local_58);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(&this_ptr->base,iVar6);
  }
  EVar7 = (*(((this_ptr->base).base.vtable._uc)->_uc).getDeathState)(&this_ptr->base);
  if ((((1 < (int)EVar7) && ((this_ptr->base).base.lifecycle_state == ACTOR_CREATED)) &&
      (this_ptr->pool_me == 0)) && ((this_ptr->base).base.standing_platform == (CPlatform *)0x0)) {
    pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                       (pCVar1,&CStack_48,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)this_ptr,&CStack_30,pCVar8);
    core_gore_cpp_CGore_createBloodPool_FUN_004b0480(g_CGore_PTR_005b96c4,&CStack_30,0);
    this_ptr->pool_me = 1;
  }
  fVar5 = (float)3.1415926535000001;
  fVar4 = (float)0.5;
  (this_ptr->base).walk_step_speed = (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).turn_speed = delta_time * fVar5 * fVar4;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00428c00(&this_ptr->base,delta_time);
  if (iVar6 == 0) goto LAB_004eeb7c;
  uVar3 = (this_ptr->base).is_walking;
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_004eeb4e:
      pcVar9 = "WALK";
    }
    else {
LAB_004eecd2:
      pcVar9 = "STAND";
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004e1740
              (&(this_ptr->base).model.motion_controller,pcVar9,1);
  }
  else {
    pCVar1 = &(this_ptr->base).model;
    if (uVar3 < 3) {
      iVar6 = 0;
      pcVar9 = "RUN";
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                              (&pCVar1->motion_controller);
      iVar6 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(this_ptr_00,pcVar9,iVar6);
      if (iVar6 < 0) goto LAB_004eeb4e;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&pCVar1->motion_controller,iVar6,1);
    }
    else {
      if (uVar3 != 3) goto LAB_004eecd2;
      core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004e1740
                (&pCVar1->motion_controller,"STAND",1);
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n",this_ptr);
    }
  }
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
LAB_004eeb7c:
  (this_ptr->base).velocity.y = (this_ptr->base).velocity.y - delta_time * (float)32;
  fStack_3c = (this_ptr->base).velocity.x * delta_time;
  fStack_38 = (this_ptr->base).velocity.y * delta_time;
  pCVar8 = &(this_ptr->base).position_delta;
  fStack_34 = (this_ptr->base).velocity.z * delta_time;
  pCVar2 = &(this_ptr->base).model.accumulated_root_motion;
  fStack_24 = fStack_3c + pCVar8->x;
  fStack_20 = fStack_38 + (this_ptr->base).position_delta.y;
  fStack_1c = fStack_34 + (this_ptr->base).position_delta.z;
  CStack_54.x = fStack_24 + pCVar2->x;
  CStack_54.y = fStack_20 + (this_ptr->base).model.accumulated_root_motion.y;
  CStack_54.z = fStack_1c + (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).position_delta.z = 0.0;
  (this_ptr->base).position_delta.y = (this_ptr->base).position_delta.z;
  pCVar8->x = (this_ptr->base).position_delta.y;
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  pCVar2->x = (this_ptr->base).model.accumulated_root_motion.y;
  core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&this_ptr->base,&CStack_54);
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(&(this_ptr->base).model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042a150(&this_ptr->base,delta_time);
  return;
}
