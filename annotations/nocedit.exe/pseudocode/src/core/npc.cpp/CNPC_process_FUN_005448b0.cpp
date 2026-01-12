// Name: core_npc.cpp_CNPC_process_FUN_005448b0
// Address: 005448b0
// Address Range: [[005448b0, 00544b6d]]
// Convention: __cdecl
// Signature: void core_npc.cpp_CNPC_process_FUN_005448b0(CNPC * this_ptr)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_process_FUN_005448b0(CNPC *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CVector3f *input_local_point;
  CMotionList *this_ptr_00;
  BADSPACEBASE *in_ESP;
  SCollisionInfo *in_stack_00000008;
  char *pcVar6;
  SCollisionInfo *collision_info;
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CVector3f CStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  iVar5 = core_charactr_cpp_CCharacter_FUN_00429870(&this_ptr->base_character);
  if (iVar5 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_FUN_0042ea40(&this_ptr->base_character);
  (this_ptr->base_character).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base_character).model.accumulated_root_motion.y =
       (this_ptr->base_character).model.accumulated_root_motion.z;
  (this_ptr->base_character).model.accumulated_root_motion.x =
       (this_ptr->base_character).model.accumulated_root_motion.y;
  pCVar1 = &(this_ptr->base_character).model;
  collision_info = in_stack_00000008;
  while (0.0 < (float)collision_info) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40(&this_ptr->base_character);
  }
  iVar5 = (*(this_ptr->base_character).base_actor.vtable[1].hasCollision)
                    ((CDemonActor *)this_ptr,collision_info);
  if ((((1 < iVar5) && ((this_ptr->base_character).base_actor.was_created == 1)) &&
      (this_ptr->pool_me == 0)) && ((this_ptr->base_character).base_actor.field11_0xdc == 0)) {
    input_local_point =
         core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                   (pCVar1,&CStack_48,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_30,input_local_point);
    core_gore_cpp_FUN_004ede30();
    this_ptr->pool_me = 1;
  }
  fVar4 = (float)3.1415926535000001;
  fVar3 = (float)0.5;
  *(float *)((this_ptr->base_character).field2_0x240c + 0x28) =
       (this_ptr->base_character).model.accumulated_root_motion.z;
  *(float *)((this_ptr->base_character).field2_0x240c + 0x2c) =
       (float)in_stack_00000008 * fVar4 * fVar3;
  iVar5 = core_charactr_cpp_CCharacter_FUN_0042ca70(&this_ptr->base_character);
  if (iVar5 == 0) goto LAB_00544a0c;
  uVar2 = *(uint *)((this_ptr->base_character).field11_0x25a0 + 0x10);
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_005449de:
      pcVar6 = "WALK";
    }
    else {
LAB_00544b62:
      pcVar6 = "STAND";
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
              (&(this_ptr->base_character).model.motion_controller,pcVar6,1);
  }
  else {
    pCVar1 = &(this_ptr->base_character).model;
    if (uVar2 < 3) {
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&pCVar1->motion_controller);
      iVar5 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00);
      if (iVar5 < 0) goto LAB_005449de;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&pCVar1->motion_controller,iVar5,1);
    }
    else {
      if (uVar2 != 3) goto LAB_00544b62;
      core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
                (&pCVar1->motion_controller,"STAND",1);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
  }
  (this_ptr->base_character).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base_character).model.accumulated_root_motion.y =
       (this_ptr->base_character).model.accumulated_root_motion.z;
  (this_ptr->base_character).model.accumulated_root_motion.x =
       (this_ptr->base_character).model.accumulated_root_motion.y;
LAB_00544a0c:
  *(float *)((this_ptr->base_character).field2_0x240c + 0x20) =
       *(float *)((this_ptr->base_character).field2_0x240c + 0x20) -
       (float)in_stack_00000008 * (float)32;
  fStack_3c = *(float *)((this_ptr->base_character).field2_0x240c + 0x1c) * (float)in_stack_00000008
  ;
  fStack_38 = *(float *)((this_ptr->base_character).field2_0x240c + 0x20) * (float)in_stack_00000008
  ;
  pcVar6 = (this_ptr->base_character).field2_0x240c + 0x10;
  fStack_34 = *(float *)((this_ptr->base_character).field2_0x240c + 0x24) * (float)in_stack_00000008
  ;
  fStack_24 = fStack_3c + *(float *)pcVar6;
  fStack_20 = fStack_38 + *(float *)((this_ptr->base_character).field2_0x240c + 0x14);
  fStack_1c = fStack_34 + *(float *)((this_ptr->base_character).field2_0x240c + 0x18);
  (this_ptr->base_character).field2_0x240c[0x18] = '\0';
  (this_ptr->base_character).field2_0x240c[0x19] = '\0';
  (this_ptr->base_character).field2_0x240c[0x1a] = '\0';
  (this_ptr->base_character).field2_0x240c[0x1b] = '\0';
  *(uint *)((this_ptr->base_character).field2_0x240c + 0x14) =
       *(uint *)((this_ptr->base_character).field2_0x240c + 0x18);
  *(float *)pcVar6 = *(float *)((this_ptr->base_character).field2_0x240c + 0x14);
  (this_ptr->base_character).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base_character).model.accumulated_root_motion.y =
       (this_ptr->base_character).model.accumulated_root_motion.z;
  (this_ptr->base_character).model.accumulated_root_motion.x =
       (this_ptr->base_character).model.accumulated_root_motion.y;
  core_charactr_cpp_CCharacter_FUN_00428f40(&this_ptr->base_character);
  core_charactr_cpp_CCharacter_FUN_00429820(&this_ptr->base_character);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base_character).model);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&this_ptr->base_character);
  return;
}
