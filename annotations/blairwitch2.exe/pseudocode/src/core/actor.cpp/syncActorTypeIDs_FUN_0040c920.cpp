// Name: core_actor.cpp_syncActorTypeIDs_FUN_0040c920
// Address: 0040c920
// Address Range: [[0040c920, 0040c94e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_syncActorTypeIDs_FUN_0040c920(void)

#include "nocturne.h"

void __cdecl core_actor_cpp_syncActorTypeIDs_FUN_0040c920(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < DAT_007bc044) {
    iVar3 = 0;
    do {
      piVar1 = (int *)((int)&DAT_007bc048 + iVar3);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      **(uint **)(*piVar1 + 0x30) = *(uint *)(*piVar1 + 0x34);
    } while (iVar2 < DAT_007bc044);
  }
  return;
}
