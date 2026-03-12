// Name: core_npc.cpp_CNPC_process_FUN_005448b0
// Address: 005448b0
// Address Range: [[005448b0, 00544b6d]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_process_FUN_005448b0(CNPC *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_process_FUN_005448b0(CNPC *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar3;
  CVector3f *pCVar4;
  int iVar6;
  int iVar5;
  EDeathState EVar7;
  CVector3f *pCVar8;
  CMotionList *this_ptr_00;
  char *state_name;
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
  float fVar5;
  char *pcVar9;
  float fVar4;
  uint uVar3;
  CVector3f *pCVar2;
  CDeformableModelInstance *pCVar1;
  
  iVar6 = core_charactr_cpp_CCharacter_process_FUN_00429870(&this_ptr->base,delta_time);
  if (iVar6 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042ea40(&this_ptr->base,delta_time);
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
  pCVar3 = &(this_ptr->base).model;
  local_58 = delta_time;
  while (0.0 < local_58) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&pCVar3->motion_controller,&local_58);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40(&this_ptr->base,iVar5);
  }
  EVar7 = (*(((this_ptr->base).base.vtable._uc)->_uc).getDeathState)(&this_ptr->base);
  if ((((1 < (int)EVar7) && ((this_ptr->base).base.lifecycle_state == ACTOR_CREATED)) &&
      (this_ptr->pool_me == 0)) && ((this_ptr->base).base.standing_platform == (CPlatform *)0x0)) {
    pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                       (pCVar3,&CStack_48,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_30,pCVar8);
    core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&CStack_30,0);
    this_ptr->pool_me = 1;
  }
  fVar5 = (float)3.1415926535000001;
  fVar4 = (float)0.5;
  (this_ptr->base).walk_step_speed = (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).turn_speed = delta_time * fVar5 * fVar4;
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70(&this_ptr->base,delta_time);
  if (iVar5 == 0) goto LAB_00544a0c;
  uVar3 = (this_ptr->base).is_walking;
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_005449de:
      pcVar9 = "WALK";
    }
    else {
LAB_00544b62:
      pcVar9 = "STAND";
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
              (&(this_ptr->base).model.motion_controller,pcVar9,1);
  }
  else {
    pCVar3 = &(this_ptr->base).model;
    if (uVar3 < 3) {
      iVar5 = 0;
      state_name = "RUN";
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&pCVar3->motion_controller);
      iVar5 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00,state_name,iVar5);
      if (iVar5 < 0) goto LAB_005449de;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&pCVar3->motion_controller,iVar5,1);
    }
    else {
      if (uVar3 != 3) goto LAB_00544b62;
      core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
                (&pCVar3->motion_controller,"STAND",1);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
  }
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
LAB_00544a0c:
  (this_ptr->base).velocity.y = (this_ptr->base).velocity.y - delta_time * (float)32;
  pCVar4 = &(this_ptr->base).position_delta;
  pCVar2 = &(this_ptr->base).model.accumulated_root_motion;
  CStack_54.x = (this_ptr->base).velocity.x * delta_time + pCVar4->x + pCVar2->x;
  CStack_54.y = (this_ptr->base).velocity.y * delta_time + (this_ptr->base).position_delta.y +
                (this_ptr->base).model.accumulated_root_motion.y;
  CStack_54.z = (this_ptr->base).velocity.z * delta_time + (this_ptr->base).position_delta.z +
                (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).position_delta.z = 0.0;
  (this_ptr->base).position_delta.y = (this_ptr->base).position_delta.z;
  pCVar4->x = (this_ptr->base).position_delta.y;
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  pCVar2->x = (this_ptr->base).model.accumulated_root_motion.y;
  core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40(&this_ptr->base,&CStack_54);
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&(this_ptr->base).model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(&this_ptr->base,delta_time);
  return;
}
