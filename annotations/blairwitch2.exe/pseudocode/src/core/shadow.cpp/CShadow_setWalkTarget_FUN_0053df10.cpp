// Name: core_shadow.cpp_CShadow_setWalkTarget_FUN_0053df10
// Address: 0053df10
// Address Range: [[0053df10, 0053df3c]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_setWalkTarget_FUN_0053df10(CShadow *this_ptr,CDemonActor *target,float min_distance,float max_distance)

#include "nocturne.h"

void __cdecl core_shadow_cpp_CShadow_setWalkTarget_FUN_0053df10(CShadow *this_ptr,CDemonActor *target,float min_distance,float max_distance)

{
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&(this_ptr->base).base.model.base)
  ;
  core_charactr_cpp_CCharacter_setWalkTarget_FUN_004285f0
            ((CCharacter *)this_ptr,target,min_distance,max_distance);
  return;
}
