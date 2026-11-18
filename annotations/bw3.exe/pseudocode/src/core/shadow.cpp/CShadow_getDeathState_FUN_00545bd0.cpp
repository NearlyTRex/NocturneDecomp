// Name: core_shadow.cpp_CShadow_getDeathState_FUN_00545bd0
// Address: 00545bd0
// Address Range: [[00545bd0, 00545c0d]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_shadow_cpp_CShadow_getDeathState_FUN_00545bd0(CShadow *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_shadow_cpp_CShadow_getDeathState_FUN_00545bd0(CShadow *this_ptr)

{
  SMotion *pSVar1;
  
  if ((this_ptr->base).base.base.lifecycle_state != ACTOR_DESTROYED) {
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       (&(this_ptr->base).base.model.base);
    switch(pSVar1->state_index) {
    case 0xd:
    case 0xe:
      return DEATH_STATE_DYING;
    case 0xf:
    case 0x10:
      return DEATH_STATE_DEAD;
    default:
      return DEATH_STATE_ALIVE;
    }
  }
  return DEATH_STATE_DEAD;
}
