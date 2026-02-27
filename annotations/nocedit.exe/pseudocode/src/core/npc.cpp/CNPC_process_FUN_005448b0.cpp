// Name: core_npc.cpp_CNPC_process_FUN_005448b0
// Address: 005448b0
// Address Range: [[005448b0, 00544b6d]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_process_FUN_005448b0(CNPC *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_process_FUN_005448b0(CNPC *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  CVector3f *pCVar7;
  CMotionList *this_ptr_00;
  char *state_name;
  float fVar8;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CVector3f CStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
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
  pCVar1 = &(this_ptr->base).model;
  fVar8 = delta_time;
  while (0.0 < fVar8) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40(&this_ptr->base,iVar6);
  }
  iVar6 = (*(((this_ptr->base).base.vtable._uc)->_uc).getDeathState)(&this_ptr->base);
  if ((((1 < iVar6) && ((this_ptr->base).base.was_created == 1)) && (this_ptr->pool_me == 0)) &&
     ((this_ptr->base).base.standing_platform == (CPlatform *)0x0)) {
    pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                       (pCVar1,&CStack_48,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_30,pCVar7);
    core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&CStack_30,0);
    this_ptr->pool_me = 1;
  }
  fVar5 = (float)3.1415926535000001;
  fVar4 = (float)0.5;
  (this_ptr->base).walk_step_speed = (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).turn_speed = delta_time * fVar5 * fVar4;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70(&this_ptr->base,delta_time);
  if (iVar6 == 0) goto LAB_00544a0c;
  uVar3 = (this_ptr->base).is_walking;
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_005449de:
      state_name = "WALK";
    }
    else {
LAB_00544b62:
      state_name = "STAND";
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
              (&(this_ptr->base).model.motion_controller,state_name,1);
  }
  else {
    pCVar1 = &(this_ptr->base).model;
    if (uVar3 < 3) {
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&pCVar1->motion_controller);
      iVar6 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00);
      if (iVar6 < 0) goto LAB_005449de;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&pCVar1->motion_controller,iVar6,1);
    }
    else {
      if (uVar3 != 3) goto LAB_00544b62;
      core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
                (&pCVar1->motion_controller,"STAND",1);
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
  fStack_3c = (this_ptr->base).velocity.x * delta_time;
  fStack_38 = (this_ptr->base).velocity.y * delta_time;
  pCVar7 = &(this_ptr->base).position_delta;
  fStack_34 = (this_ptr->base).velocity.z * delta_time;
  pCVar2 = &(this_ptr->base).model.accumulated_root_motion;
  fStack_24 = fStack_3c + pCVar7->x;
  fStack_20 = fStack_38 + (this_ptr->base).position_delta.y;
  fStack_1c = fStack_34 + (this_ptr->base).position_delta.z;
  CStack_54.x = fStack_24 + pCVar2->x;
  CStack_54.y = fStack_20 + (this_ptr->base).model.accumulated_root_motion.y;
  CStack_54.z = fStack_1c + (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).position_delta.z = 0.0;
  (this_ptr->base).position_delta.y = (this_ptr->base).position_delta.z;
  pCVar7->x = (this_ptr->base).position_delta.y;
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  pCVar2->x = (this_ptr->base).model.accumulated_root_motion.y;
  core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40(&this_ptr->base,&CStack_54);
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&(this_ptr->base).model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(&this_ptr->base,delta_time,fVar8);
  return;
}
