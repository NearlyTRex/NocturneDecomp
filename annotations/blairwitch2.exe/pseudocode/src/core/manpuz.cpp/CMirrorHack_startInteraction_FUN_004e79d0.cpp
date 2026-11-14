// Name: core_manpuz.cpp_CMirrorHack_startInteraction_FUN_004e79d0
// Address: 004e79d0
// Address Range: [[004e79d0, 004e79ef]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMirrorHack_startInteraction_FUN_004e79d0(CMirrorHack *this_ptr,CDemonActor *user)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMirrorHack_startInteraction_FUN_004e79d0(CMirrorHack *this_ptr,CDemonActor *user)

{
  if (this_ptr->interacting_actor != (CDemonActor *)0x0) {
    return 0;
  }
  this_ptr->interacting_actor = user;
  return 1;
}
