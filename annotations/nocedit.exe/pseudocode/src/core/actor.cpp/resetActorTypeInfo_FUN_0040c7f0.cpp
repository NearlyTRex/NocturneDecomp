// Name: core_actor.cpp_resetActorTypeInfo_FUN_0040c7f0
// Address: 0040c7f0
// Address Range: [[0040c7f0, 0040c827]]
// Convention: __cdecl
// Signature: void core_actor.cpp_resetActorTypeInfo_FUN_0040c7f0(void)

#include "nocturne.h"

void __cdecl core_actor_cpp_resetActorTypeInfo_FUN_0040c7f0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_NumActorClassTypes) {
    iVar2 = 0;
    do {
      piVar1 = (int *)((int)g_ActorClassRegistrations + iVar2);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      **(uint **)(*piVar1 + 0x30) = 1;
    } while (iVar3 < g_NumActorClassTypes);
  }
  return;
}
