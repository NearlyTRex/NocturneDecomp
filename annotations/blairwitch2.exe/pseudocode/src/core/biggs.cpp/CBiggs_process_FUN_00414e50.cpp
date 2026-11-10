// Name: core_biggs.cpp_CBiggs_process_FUN_00414e50
// Address: 00414e50
// Address Range: [[00414e50, 00415114]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_process_FUN_00414e50(CBiggs *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_biggs_cpp_CBiggs_process_FUN_00414e50(CBiggs *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  byte *puVar1;
  byte *puVar2;
  EWalkState EVar3;
  float fVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1044 [1014];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [3];
  
  bVar6 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
  fStack_60 = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < fStack_60) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)this_ptr_00,&stack0xffffffa0);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar5);
  }
  *(uint *)&(this_ptr->base).base.field_0x2594 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time);
  core_motion_cpp_FUN_005035c0(this_ptr_00);
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) goto LAB_00414f21;
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_00414ef6:
      iVar5 = 1;
    }
    else {
LAB_004150fa:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,iVar5,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_00414ef6;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_004150fa;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr_00,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
LAB_00414f21:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_50 = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
    fStack_4c = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
    fStack_48 = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
    fStack_38 = fStack_50;
    *(uint *)((int)&stack0xffffffcc + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    puVar1 = &(this_ptr->base).base.field_0x257c;
    fStack_5c = fStack_38 + *(float *)puVar1;
    fStack_58 = fStack_34 + *(float *)&(this_ptr->base).base.field_0x2580;
    fStack_54 = fStack_30 + *(float *)&(this_ptr->base).base.field_0x2584;
    fStack_20 = fStack_5c;
    afStack_1c[(uint)bVar6 * -2] = *(float *)((int)&stack0xffffffa8 + (uint)bVar6 * -8);
    afStack_1c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         *(float *)((int)&stack0xffffffac + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    puVar2 = &(this_ptr->base).base.model.field_0x2254;
    fStack_44 = fStack_20 + *(float *)puVar2;
    fStack_40 = afStack_1c[0] + *(float *)&(this_ptr->base).base.model.field_0x2258;
    fStack_3c = afStack_1c[1] + *(float *)&(this_ptr->base).base.model.field_0x225c;
    CStack_2c.x = fStack_44;
    *(uint *)((int)&CStack_2c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8);
    *(uint *)((int)&CStack_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
    *(uint *)&(this_ptr->base).base.field_0x2580 =
         *(uint *)&(this_ptr->base).base.field_0x2584;
    *(uint *)puVar1 = *(uint *)&(this_ptr->base).base.field_0x2580;
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)puVar2 = *(uint *)&(this_ptr->base).base.model.field_0x2258;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_2c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,this_ptr->morph_event);
  if (iVar5 != 0) {
    this_ptr->morph_timer = 0.0;
    this_ptr->morphing = 1;
  }
  if ((this_ptr->morphing != 0) &&
     (fVar4 = this_ptr->morph_timer + delta_time, this_ptr->morph_timer = fVar4,
     0x40800000 < fVar4)) {
    this_ptr->morph_timer = 0x40800000;
    return;
  }
  return;
}
