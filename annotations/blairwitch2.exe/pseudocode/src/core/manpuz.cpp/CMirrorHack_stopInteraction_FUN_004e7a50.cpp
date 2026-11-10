// Name: core_manpuz.cpp_CMirrorHack_stopInteraction_FUN_004e7a50
// Address: 004e7a50
// Address Range: [[004e7a50, 004e7a6b]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_stopInteraction_FUN_004e7a50(CMirrorHack *this_ptr,CDemonActor *user)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMirrorHack_stopInteraction_FUN_004e7a50(CMirrorHack *this_ptr,CDemonActor *user)

{
  if (user != this_ptr->interacting_actor) {
    return;
  }
  this_ptr->interacting_actor = (CDemonActor *)0x0;
  return;
}
