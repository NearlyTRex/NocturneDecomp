// Name: core_dracbrid.cpp_CDraculaBride_isDamageable_FUN_00486320
// Address: 00486320
// Address Range: [[00486320, 0048635e]]
// Convention: __cdecl
// Signature: int __cdecl core_dracbrid_cpp_CDraculaBride_isDamageable_FUN_00486320(CDraculaBride *this_ptr)

#include "nocturne.h"

int __cdecl core_dracbrid_cpp_CDraculaBride_isDamageable_FUN_00486320(CDraculaBride *this_ptr)

{
  SMotion *pSVar1;
  
  if ((this_ptr->base).base.base.was_created == 2) {
    return 2;
  }
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->base).base.model.motion_controller);
  switch(pSVar1->state_index) {
  case 7:
  case 10:
    return 1;
  default:
    return 0;
  case 0x10:
  case 0x11:
    return 2;
  }
}
