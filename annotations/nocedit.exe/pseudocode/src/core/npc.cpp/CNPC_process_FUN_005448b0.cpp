// Name: core_npc.cpp_CNPC_process_FUN_005448b0
// Address: 005448b0
// Address Range: [[005448b0, 00544b6d]]
// Convention: __cdecl
// Signature: void core_npc.cpp_CNPC_process_FUN_005448b0(CNPC * this_ptr, float delta_time)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_process_FUN_005448b0(CNPC *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  CVector3f *input_local_point;
  CMotionList *this_ptr_00;
  char *pcVar5;
  float fVar6;
  CVector3f CStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  iVar4 = core_charactr_cpp_CCharacter_FUN_00429870(&this_ptr->base);
  if (iVar4 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_FUN_0042ea40(&this_ptr->base);
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
  pCVar1 = &(this_ptr->base).model;
  fVar6 = delta_time;
  while (0.0 < fVar6) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40(&this_ptr->base);
  }
  iVar4 = (*(((this_ptr->base).base.vtable._uc)->_uc).isDamageable)(&this_ptr->base);
  if ((((1 < iVar4) && ((this_ptr->base).base.was_created == 1)) && (this_ptr->pool_me == 0)) &&
     ((this_ptr->base).base.unk2 == 0)) {
    input_local_point =
         core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                   (pCVar1,&CStack_44,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_2c,input_local_point);
    core_gore_cpp_FUN_004ede30();
    this_ptr->pool_me = 1;
  }
  fVar3 = (float)3.1415926535000001;
  fVar6 = (float)0.5;
  *(float *)((this_ptr->base).unk1 + 0x28) = (this_ptr->base).model.accumulated_root_motion.z;
  *(float *)((this_ptr->base).unk1 + 0x2c) = delta_time * fVar3 * fVar6;
  iVar4 = core_charactr_cpp_CCharacter_FUN_0042ca70(&this_ptr->base);
  if (iVar4 == 0) goto LAB_00544a0c;
  uVar2 = *(uint *)((this_ptr->base).unk2 + 0x10);
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_005449de:
      pcVar5 = "WALK";
    }
    else {
LAB_00544b62:
      pcVar5 = "STAND";
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
              (&(this_ptr->base).model.motion_controller,pcVar5,1);
  }
  else {
    pCVar1 = &(this_ptr->base).model;
    if (uVar2 < 3) {
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&pCVar1->motion_controller);
      iVar4 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00);
      if (iVar4 < 0) goto LAB_005449de;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&pCVar1->motion_controller,iVar4,1);
    }
    else {
      if (uVar2 != 3) goto LAB_00544b62;
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
  *(float *)((this_ptr->base).unk1 + 0x20) =
       *(float *)((this_ptr->base).unk1 + 0x20) - delta_time * (float)32;
  fStack_38 = *(float *)((this_ptr->base).unk1 + 0x1c) * delta_time;
  fStack_34 = *(float *)((this_ptr->base).unk1 + 0x20) * delta_time;
  pcVar5 = (this_ptr->base).unk1 + 0x10;
  fStack_30 = *(float *)((this_ptr->base).unk1 + 0x24) * delta_time;
  fStack_20 = fStack_38 + *(float *)pcVar5;
  fStack_1c = fStack_34 + *(float *)((this_ptr->base).unk1 + 0x14);
  fStack_18 = fStack_30 + *(float *)((this_ptr->base).unk1 + 0x18);
  (this_ptr->base).unk1[0x18] = '\0';
  (this_ptr->base).unk1[0x19] = '\0';
  (this_ptr->base).unk1[0x1a] = '\0';
  (this_ptr->base).unk1[0x1b] = '\0';
  *(uint *)((this_ptr->base).unk1 + 0x14) = *(uint *)((this_ptr->base).unk1 + 0x18);
  *(float *)pcVar5 = *(float *)((this_ptr->base).unk1 + 0x14);
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
  core_charactr_cpp_CCharacter_FUN_00428f40(&this_ptr->base);
  core_charactr_cpp_CCharacter_FUN_00429820(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&(this_ptr->base).model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(&this_ptr->base);
  return;
}
