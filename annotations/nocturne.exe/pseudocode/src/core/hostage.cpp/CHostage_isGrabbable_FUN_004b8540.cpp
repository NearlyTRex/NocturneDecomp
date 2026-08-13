// Name: core_hostage.cpp_CHostage_isGrabbable_FUN_004b8540
// Address: 004b8540
// Address Range: [[004b8540, 004b857f]]
// Convention: __cdecl
// Signature: int __cdecl core_hostage_cpp_CHostage_isGrabbable_FUN_004b8540(CHostage *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_hostage_cpp_CHostage_isGrabbable_FUN_004b8540(CHostage *this_ptr,CDemonActor *grabber)

{
  SMotion *pSVar1;
  
  if (((this_ptr->hostage_type != 0) && (this_ptr->hostage_state != 3)) &&
     (this_ptr->hostage_state != 4)) {
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(this_ptr->base).base.model.motion_controller);
    if (pSVar1->state_index != 10) {
      return 1;
    }
  }
  return 0;
}
