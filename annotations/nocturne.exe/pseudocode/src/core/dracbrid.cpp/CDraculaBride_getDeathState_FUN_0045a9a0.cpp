// Name: core_dracbrid.cpp_CDraculaBride_getDeathState_FUN_0045a9a0
// Address: 0045a9a0
// Address Range: [[0045a9a0, 0045a9de]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_dracbrid_cpp_CDraculaBride_getDeathState_FUN_0045a9a0(CDraculaBride *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_dracbrid_cpp_CDraculaBride_getDeathState_FUN_0045a9a0(CDraculaBride *this_ptr)

{
  SMotion *pSVar1;
  
  if ((this_ptr->base).base.base.lifecycle_state == ACTOR_DESTROYED) {
    return DEATH_STATE_DEAD;
  }
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(this_ptr->base).base.model.motion_controller);
  switch(pSVar1->state_index) {
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
