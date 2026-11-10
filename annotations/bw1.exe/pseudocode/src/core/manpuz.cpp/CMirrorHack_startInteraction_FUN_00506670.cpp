// Name: core_manpuz.cpp_CMirrorHack_startInteraction_FUN_00506670
// Address: 00506670
// Address Range: [[00506670, 0050668f]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMirrorHack_startInteraction_FUN_00506670(CMirrorHack *this_ptr,CDemonActor *user)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMirrorHack_startInteraction_FUN_00506670(CMirrorHack *this_ptr,CDemonActor *user)

{
  if (this_ptr->interacting_actor != (CDemonActor *)0x0) {
    return 0;
  }
  this_ptr->interacting_actor = user;
  return 1;
}
