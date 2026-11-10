// Name: core_tawiscar.cpp_CTawiscara_setWalkTarget_FUN_005956d0
// Address: 005956d0
// Address Range: [[005956d0, 00595705]]
// Convention: __cdecl
// Signature: void __cdecl core_tawiscar_cpp_CTawiscara_setWalkTarget_FUN_005956d0(CTawiscara *this_ptr,CDemonActor *target,float min_distance,float max_distance)

#include "nocturne.h"

void __cdecl core_tawiscar_cpp_CTawiscara_setWalkTarget_FUN_005956d0(CTawiscara *this_ptr,CDemonActor *target,float min_distance,float max_distance)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&this_ptr->field_0x158);
  if (*(int *)(pSVar1 + 0x24) == 0x13) {
    return;
  }
  core_charactr_cpp_CCharacter_setWalkTarget_FUN_00431470
            ((CCharacter *)this_ptr,target,min_distance,max_distance);
  return;
}
