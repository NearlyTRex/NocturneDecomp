// Name: core_actor.cpp_syncActorTypeIDs_FUN_0040d8c0
// Address: 0040d8c0
// Address Range: [[0040d8c0, 0040d8ee]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_syncActorTypeIDs_FUN_0040d8c0(void)

#include "nocturne.h"

void __cdecl core_actor_cpp_syncActorTypeIDs_FUN_0040d8c0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < g_NumActorClassTypes) {
    iVar3 = 0;
    do {
      piVar1 = (int *)((int)g_ActorClassRegistrations + iVar3);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      **(uint **)(*piVar1 + 0x30) = *(uint *)(*piVar1 + 0x34);
    } while (iVar2 < g_NumActorClassTypes);
  }
  return;
}
