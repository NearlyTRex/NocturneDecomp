// Name: core_manpuz.cpp_CMirrorHack_startInteraction_FUN_004cbd30
// Address: 004cbd30
// Address Range: [[004cbd30, 004cbd4f]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMirrorHack_startInteraction_FUN_004cbd30(CMirrorHack *this_ptr,CDemonActor *user)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMirrorHack_startInteraction_FUN_004cbd30(CMirrorHack *this_ptr,CDemonActor *user)

{
  if (this_ptr->interacting_actor != (CDemonActor *)0x0) {
    return 0;
  }
  this_ptr->interacting_actor = user;
  return 1;
}
