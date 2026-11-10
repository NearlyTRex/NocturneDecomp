// Name: core_armour.cpp_CArmour_process_FUN_0040ef00
// Address: 0040ef00
// Address Range: [[0040ef00, 0040f03f]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_CArmour_process_FUN_0040ef00(CArmour *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_process_FUN_0040ef00(CArmour *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  float fStack_20;
  CVector3f CStack_1c;
  
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 != 0) {
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)&(this_ptr->base).base.model.field_0x2254 =
         *(uint *)&(this_ptr->base).base.model.field_0x2258;
    fStack_20 = delta_time * (this_ptr->base).speed;
    this_ptr_00 = &(this_ptr->base).base.model;
    while (0.0 < fStack_20) {
      core_motion_cpp_CMotionController_advance_FUN_005030c0
                ((CMotionController *)this_ptr_00,&fStack_20);
    }
    fVar1 = (this_ptr->base).speed;
    *(uint *)&(this_ptr->base).base.field_0x2594 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar1);
    core_motion_cpp_FUN_005035c0(this_ptr_00);
    iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                      ((CCharacter *)this_ptr,delta_time);
    if (iVar2 != 0) {
      *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
      *(uint *)&(this_ptr->base).base.model.field_0x2258 =
           *(uint *)&(this_ptr->base).base.model.field_0x225c;
      *(uint *)&(this_ptr->base).base.model.field_0x2254 =
           *(uint *)&(this_ptr->base).base.model.field_0x2258;
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&this_ptr->field_0x10af8);
    if (iVar2 != 0) {
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"armour.wav");
      CStack_1c.x = 0.0;
      CStack_1c.y = 0.0;
      CStack_1c.z = 5.0;
      core_charactr_cpp_CCharacter_dismember_FUN_00427360((CCharacter *)this_ptr,&CStack_1c,-1.0,1);
      return;
    }
  }
  return;
}
