// Name: core_tawiscar.cpp_CTawiscara_getDeathState_FUN_005962d0
// Address: 005962d0
// Address Range: [[005962d0, 0059630a]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_tawiscar_cpp_CTawiscara_getDeathState_FUN_005962d0(CTawiscara *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_tawiscar_cpp_CTawiscara_getDeathState_FUN_005962d0(CTawiscara *this_ptr)

{
  uint uVar1;
  SMotion *pSVar2;
  
  if ((this_ptr->base).base.base.lifecycle_state == ACTOR_DESTROYED) {
    return DEATH_STATE_DEAD;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(this_ptr->base).base.model.base);
  uVar1 = pSVar2->state_index;
  if (0xb < uVar1) {
    if (uVar1 < 0xd) {
      return DEATH_STATE_DYING;
    }
    if (uVar1 == 0xd) {
      return DEATH_STATE_DEAD;
    }
  }
  return DEATH_STATE_ALIVE;
}
