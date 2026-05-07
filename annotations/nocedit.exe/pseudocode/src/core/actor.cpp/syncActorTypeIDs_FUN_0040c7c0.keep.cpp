// Name: core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
// Address: 0040c7c0
// MANUAL RECONSTRUCTION
// Address Range: [[0040c7c0, 0040c7ee]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0(void)

#include "nocturne.h"

void __cdecl core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0(void)

{
  int iVar2;

  for (iVar2 = 0; iVar2 < g_NumActorClassTypes; iVar2 = iVar2 + 1) {
    *(int *)g_ActorClassRegistrations[iVar2]->type_info =
         g_ActorClassRegistrations[iVar2]->type_id;
  }
  return;
}
