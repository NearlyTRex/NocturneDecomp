// Name: core_beast.cpp_CBeast_process_FUN_00414a80
// Address: 00414a80
// Address Range: [[00414a80, 00414b05]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_CBeast_process_FUN_00414a80(CBeast *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_beast_cpp_CBeast_process_FUN_00414a80(CBeast *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  float fStack_10;
  
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar1 != 0) {
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)&(this_ptr->base).base.model.field_0x2254 =
         *(uint *)&(this_ptr->base).base.model.field_0x2258;
    fStack_10 = delta_time * (this_ptr->base).speed;
    this_ptr_00 = &(this_ptr->base).base.model;
    while (0.0 < fStack_10) {
      core_motion_cpp_CMotionController_advance_FUN_005030c0
                ((CMotionController *)this_ptr_00,&fStack_10);
    }
    core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(this_ptr_00);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  }
  return;
}
