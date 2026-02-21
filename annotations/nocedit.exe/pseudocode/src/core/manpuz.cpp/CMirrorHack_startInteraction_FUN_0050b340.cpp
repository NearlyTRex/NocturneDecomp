// Name: core_manpuz.cpp_CMirrorHack_startInteraction_FUN_0050b340
// Address: 0050b340
// Address Range: [[0050b340, 0050b35f]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMirrorHack_startInteraction_FUN_0050b340(CMirrorHack *this_ptr,CDemonActor *user)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMirrorHack_startInteraction_FUN_0050b340(CMirrorHack *this_ptr,CDemonActor *user)

{
  if (this_ptr->interacting_actor != (CDemonActor *)0x0) {
    return 0;
  }
  this_ptr->interacting_actor = user;
  return 1;
}
