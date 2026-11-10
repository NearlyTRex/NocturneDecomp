// Name: core_shadow.cpp_CShadow_setWalkTarget_FUN_0055f3d0
// Address: 0055f3d0
// Address Range: [[0055f3d0, 0055f3fc]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_setWalkTarget_FUN_0055f3d0(CShadow *this_ptr,CDemonActor *target,float min_distance,float max_distance)

#include "nocturne.h"

void __cdecl core_shadow_cpp_CShadow_setWalkTarget_FUN_0055f3d0(CShadow *this_ptr,CDemonActor *target,float min_distance,float max_distance)

{
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
            ((CMotionController *)&this_ptr->field_0x158);
  core_charactr_cpp_CCharacter_setWalkTarget_FUN_00432050
            ((CCharacter *)this_ptr,target,min_distance,max_distance);
  return;
}
