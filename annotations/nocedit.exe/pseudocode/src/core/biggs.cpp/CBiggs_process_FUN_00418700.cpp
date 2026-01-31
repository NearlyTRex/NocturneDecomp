// Name: core_biggs.cpp_CBiggs_process_FUN_00418700
// Address: 00418700
// Address Range: [[00418700, 004189ad]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_process_FUN_00418700(CBiggs *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_biggs_cpp_CBiggs_process_FUN_00418700(CBiggs *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  uint uVar2;
  float fVar3;
  CEnemy *pCVar4;
  int iVar5;
  
  iVar5 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar5 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fVar1 = (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < delta_time * fVar1) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr_00->motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
  }
  fVar1 = (this_ptr->base).speed;
  fVar3 = (float)3.1415926535000001;
  *(float *)((this_ptr->base).base.unk1 + 0x28) =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  *(float *)((this_ptr->base).base.unk1 + 0x2c) = delta_time * fVar3 * fVar1;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(&this_ptr_00->motion_controller);
  iVar5 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar5 == 0) goto LAB_004187db;
  uVar2 = *(uint *)((this_ptr->base).base.unk2 + 0x10);
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_004187b0:
      iVar5 = 1;
    }
    else {
LAB_00418994:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar5,1);
  }
  else {
    if (uVar2 < 3) goto LAB_004187b0;
    if (uVar2 != 3) goto LAB_00418994;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_004187db:
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    *(float *)((this_ptr->base).base.unk1 + 0x20) =
         *(float *)((this_ptr->base).base.unk1 + 0x20) - delta_time * (float)32;
    pCVar4 = &this_ptr->base;
    (pCVar4->base).unk1[0x18] = '\0';
    (pCVar4->base).unk1[0x19] = '\0';
    (pCVar4->base).unk1[0x1a] = '\0';
    (pCVar4->base).unk1[0x1b] = '\0';
    *(uint *)((this_ptr->base).base.unk1 + 0x14) =
         *(uint *)((this_ptr->base).base.unk1 + 0x18);
    *(uint *)((this_ptr->base).base.unk1 + 0x10) =
         *(uint *)((this_ptr->base).base.unk1 + 0x14);
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,this_ptr->unk3 + 0xc2c);
  if (iVar5 != 0) {
    this_ptr->morph_timer = 0.0;
    this_ptr->morphing = 1;
  }
  if ((this_ptr->morphing != 0) &&
     (fVar1 = this_ptr->morph_timer + delta_time, this_ptr->morph_timer = fVar1,
     4.0f < fVar1)) {
    this_ptr->morph_timer = 4.0f;
    return;
  }
  return;
}
