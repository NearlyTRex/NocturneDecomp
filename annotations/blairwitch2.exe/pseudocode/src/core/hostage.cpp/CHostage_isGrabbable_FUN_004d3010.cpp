// Name: core_hostage.cpp_CHostage_isGrabbable_FUN_004d3010
// Address: 004d3010
// Address Range: [[004d3010, 004d304f]]
// Convention: __cdecl
// Signature: int __cdecl core_hostage_cpp_CHostage_isGrabbable_FUN_004d3010(CHostage *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_hostage_cpp_CHostage_isGrabbable_FUN_004d3010(CHostage *this_ptr,CDemonActor *grabber)

{
  SMotion *pSVar1;
  
  if (((this_ptr->hostage_type != 0) && (this_ptr->hostage_state != 3)) &&
     (this_ptr->hostage_state != 4)) {
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                       (&(this_ptr->base).base.model.base);
    if (pSVar1->state_index != 10) {
      return 1;
    }
  }
  return 0;
}
