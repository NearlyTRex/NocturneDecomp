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
  float fVar3;
  int iVar4;
  uint uVar5;
  CVector3f *pCVar6;
  CMotionList *this_ptr_00;
  char *state_name;
  float fVar7;
  float in_stack_ffffffac;
  CVector3f CStack_50;
  CVector3f CStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  iVar4 = core_charactr_cpp_CCharacter_process_FUN_00429870(&this_ptr->base,delta_time);
  if (iVar4 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042ea40(&this_ptr->base,delta_time);
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
  pCVar1 = &(this_ptr->base).model;
  fVar7 = delta_time;
  while (0.0 < fVar7) {
    uVar5 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40(&this_ptr->base,uVar5);
  }
  iVar4 = (*(((this_ptr->base).base.vtable._uc)->_uc).getDeathState)(&this_ptr->base);
  if ((((1 < iVar4) && ((this_ptr->base).base.was_created == 1)) && (this_ptr->pool_me == 0)) &&
     ((this_ptr->base).base.standing_platform == (CPlatform *)0x0)) {
    pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                       (pCVar1,&CStack_44,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_2c,pCVar6);
    core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
    this_ptr->pool_me = 1;
  }
  fVar3 = (float)3.1415926535000001;
  fVar7 = (float)0.5;
  (this_ptr->base).walk_step_speed = (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).turn_speed = delta_time * fVar3 * fVar7;
  iVar4 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70(&this_ptr->base,delta_time);
  if (iVar4 == 0) goto LAB_00544a0c;
  uVar5 = (this_ptr->base).is_walking;
  if (uVar5 < 2) {
    if (uVar5 == 1) {
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
    if (uVar5 < 3) {
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&pCVar1->motion_controller);
      iVar4 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00);
      if (iVar4 < 0) goto LAB_005449de;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&pCVar1->motion_controller,iVar4,1);
    }
    else {
      if (uVar5 != 3) goto LAB_00544b62;
      core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
                (&pCVar1->motion_controller,"STAND",1);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
    }
  }
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
LAB_00544a0c:
  (this_ptr->base).field7_0x2428.y =
       (this_ptr->base).field7_0x2428.y - delta_time * (float)32;
  fStack_38 = (this_ptr->base).field7_0x2428.x * delta_time;
  fStack_34 = (this_ptr->base).field7_0x2428.y * delta_time;
  pCVar6 = &(this_ptr->base).field6_0x241c;
  fStack_30 = (this_ptr->base).field7_0x2428.z * delta_time;
  pCVar2 = &(this_ptr->base).model.accumulated_root_motion;
  fStack_20 = fStack_38 + pCVar6->x;
  fStack_1c = fStack_34 + (this_ptr->base).field6_0x241c.y;
  fStack_18 = fStack_30 + (this_ptr->base).field6_0x241c.z;
  CStack_50.x = fStack_20 + pCVar2->x;
  CStack_50.y = fStack_1c + (this_ptr->base).model.accumulated_root_motion.y;
  CStack_50.z = fStack_18 + (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).field6_0x241c.z = 0.0;
  (this_ptr->base).field6_0x241c.y = (this_ptr->base).field6_0x241c.z;
  pCVar6->x = (this_ptr->base).field6_0x241c.y;
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  pCVar2->x = (this_ptr->base).model.accumulated_root_motion.y;
  core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40(&this_ptr->base,&CStack_50);
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&(this_ptr->base).model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            (&this_ptr->base,delta_time,in_stack_ffffffac);
  return;
}
