// Name: core_shadow.cpp_CShadow_setWalkTarget_FUN_00544fd0
// Address: 00544fd0
// Address Range: [[00544fd0, 00544ffc]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_setWalkTarget_FUN_00544fd0(CShadow *this_ptr,CDemonActor *target,float min_distance,float max_distance)

#include "nocturne.h"

void __cdecl core_shadow_cpp_CShadow_setWalkTarget_FUN_00544fd0(CShadow *this_ptr,CDemonActor *target,float min_distance,float max_distance)

{
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&(this_ptr->base).base.model.base)
  ;
  core_charactr_cpp_CCharacter_setWalkTarget_FUN_00431470
            ((CCharacter *)this_ptr,target,min_distance,max_distance);
  return;
}
