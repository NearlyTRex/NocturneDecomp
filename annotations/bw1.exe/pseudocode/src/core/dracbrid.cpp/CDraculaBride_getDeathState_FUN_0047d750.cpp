// Name: core_dracbrid.cpp_CDraculaBride_getDeathState_FUN_0047d750
// Address: 0047d750
// Address Range: [[0047d750, 0047d78e]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_dracbrid_cpp_CDraculaBride_getDeathState_FUN_0047d750(CDraculaBride *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_dracbrid_cpp_CDraculaBride_getDeathState_FUN_0047d750(CDraculaBride *this_ptr)

{
  SMotion *pSVar1;
  
  if ((this_ptr->base).base.base.lifecycle_state == ACTOR_DESTROYED) {
    return DEATH_STATE_DEAD;
  }
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     (&(this_ptr->base).base.model.base);
  switch(*(uint *)(pSVar1 + 0x24)) {
  case 7:
  case 10:
    return DEATH_STATE_DYING;
  default:
    return DEATH_STATE_ALIVE;
  case 0x10:
  case 0x11:
    return DEATH_STATE_DEAD;
  }
}
