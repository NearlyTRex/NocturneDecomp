// Name: core_actor.cpp_syncActorTypeIDs_FUN_0040c870
// Address: 0040c870
// Address Range: [[0040c870, 0040c89e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_syncActorTypeIDs_FUN_0040c870(void)

#include "nocturne.h"

void __cdecl core_actor_cpp_syncActorTypeIDs_FUN_0040c870(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < g_INT_007df9c4) {
    iVar3 = 0;
    do {
      piVar1 = (int *)((int)g_CDemonActorType_PTR_ARRAY_007df9c8 + iVar3);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      **(uint **)(*piVar1 + 0x30) = *(uint *)(*piVar1 + 0x34);
    } while (iVar2 < g_INT_007df9c4);
  }
  return;
}
