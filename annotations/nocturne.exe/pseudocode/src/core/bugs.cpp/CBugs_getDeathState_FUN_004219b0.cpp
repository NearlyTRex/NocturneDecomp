// Name: core_bugs.cpp_CBugs_getDeathState_FUN_004219b0
// Address: 004219b0
// Address Range: [[004219b0, 004219cd]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_bugs_cpp_CBugs_getDeathState_FUN_004219b0(CBugs *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_bugs_cpp_CBugs_getDeathState_FUN_004219b0(CBugs *this_ptr)

{
  if ((this_ptr->base).base.base.lifecycle_state == ACTOR_DESTROYED) {
    return DEATH_STATE_DEAD;
  }
  if (this_ptr->state == BUGS_STATE_DEAD) {
    return DEATH_STATE_DEAD;
  }
  return DEATH_STATE_ALIVE;
}
