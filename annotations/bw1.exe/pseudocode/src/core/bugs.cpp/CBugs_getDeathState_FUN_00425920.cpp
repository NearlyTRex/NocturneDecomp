// Name: core_bugs.cpp_CBugs_getDeathState_FUN_00425920
// Address: 00425920
// Address Range: [[00425920, 0042593d]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_bugs_cpp_CBugs_getDeathState_FUN_00425920(CBugs *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_bugs_cpp_CBugs_getDeathState_FUN_00425920(CBugs *this_ptr)

{
  if ((this_ptr->base).base.base.lifecycle_state == ACTOR_DESTROYED) {
    return DEATH_STATE_DEAD;
  }
  if (this_ptr->state == BUGS_STATE_DEAD) {
    return DEATH_STATE_DEAD;
  }
  return DEATH_STATE_ALIVE;
}
