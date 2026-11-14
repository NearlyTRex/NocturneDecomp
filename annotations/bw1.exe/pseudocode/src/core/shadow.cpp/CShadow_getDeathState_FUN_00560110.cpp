// Name: core_shadow.cpp_CShadow_getDeathState_FUN_00560110
// Address: 00560110
// Address Range: [[00560110, 0056014d]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_shadow_cpp_CShadow_getDeathState_FUN_00560110(CShadow *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_shadow_cpp_CShadow_getDeathState_FUN_00560110(CShadow *this_ptr)

{
  SMotion *pSVar1;
  
  if ((this_ptr->base).base.base.lifecycle_state != ACTOR_DESTROYED) {
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       (&(this_ptr->base).base.model.base);
    switch(pSVar1->state_index) {
    case 0xf:
    case 0x10:
      return DEATH_STATE_DYING;
    case 0x11:
    case 0x12:
      return DEATH_STATE_DEAD;
    default:
      return DEATH_STATE_ALIVE;
    }
  }
  return DEATH_STATE_DEAD;
}
