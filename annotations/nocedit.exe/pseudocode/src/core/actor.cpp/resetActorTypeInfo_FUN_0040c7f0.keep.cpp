// Name: core_actor.cpp_resetActorTypeInfo_FUN_0040c7f0
// Address: 0040c7f0
// MANUAL RECONSTRUCTION
// Address Range: [[0040c7f0, 0040c827]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_resetActorTypeInfo_FUN_0040c7f0(void)

#include "nocturne.h"

void __cdecl core_actor_cpp_resetActorTypeInfo_FUN_0040c7f0(void)

{
  int iVar3;

  for (iVar3 = 0; iVar3 < g_NumActorClassTypes; iVar3 = iVar3 + 1) {
    *(int *)g_ActorClassRegistrations[iVar3]->type_info = 1;
  }
  return;
}
