// Name: core_tvbat.cpp_CTVBat_getDeathState_FUN_005e5100
// Address: 005e5100
// Address Range: [[005e5100, 005e512e]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_tvbat_cpp_CTVBat_getDeathState_FUN_005e5100(CTVBat *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_tvbat_cpp_CTVBat_getDeathState_FUN_005e5100(CTVBat *this_ptr)

{
  EDeathState EVar1;
  
  if ((this_ptr->base).base.base.lifecycle_state == ACTOR_DESTROYED) {
    return DEATH_STATE_DEAD;
  }
  EVar1 = this_ptr->state;
  if (EVar1 != DEATH_STATE_ALIVE) {
    if ((EVar1 != DEATH_STATE_DYING) && (EVar1 != DEATH_STATE_DEAD)) {
      return DEATH_STATE_DEAD;
    }
    return EVar1;
  }
  return DEATH_STATE_ALIVE;
}
