// Name: core_werewolf.cpp_CWerewolf_getDeathState_FUN_005f1db0
// Address: 005f1db0
// Address Range: [[005f1db0, 005f1dea]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_werewolf_cpp_CWerewolf_getDeathState_FUN_005f1db0(CWerewolf *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_werewolf_cpp_CWerewolf_getDeathState_FUN_005f1db0(CWerewolf *this_ptr)

{
  uint uVar1;
  SMotion *pSVar2;
  
  if ((this_ptr->base).base.base.lifecycle_state == ACTOR_DESTROYED) {
    return DEATH_STATE_DEAD;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->base).base.model.motion_controller);
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
