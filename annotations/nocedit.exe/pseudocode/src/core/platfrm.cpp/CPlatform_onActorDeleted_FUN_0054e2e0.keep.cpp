// Name: core_platfrm.cpp_CPlatform_onActorDeleted_FUN_0054e2e0
// Address: 0054e2e0
// MANUAL RECONSTRUCTION
// Address Range: [[0054e2e0, 0054e311]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_onActorDeleted_FUN_0054e2e0(CPlatform *this_ptr,CDemonActor *deleted_actor)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_onActorDeleted_FUN_0054e2e0(CPlatform *this_ptr,CDemonActor *deleted_actor)

{
  int i;

  for (i = 0; i < 10; i++) {
    if (deleted_actor == this_ptr->attach_actors[i].actor) {
      this_ptr->attach_actors[i].actor = (CDemonActor *)0x0;
    }
  }
  return;
}
