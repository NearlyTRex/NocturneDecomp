// Name: core_stranger.cpp_FUN_005baf20
// Address: 005baf20
// Address Range: [[005baf20, 005baf3c] [005baf40, 005baf6f]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_FUN_005baf20(void)

#include "nocturne.h"

int __cdecl core_stranger_cpp_FUN_005baf20(void)

{
  uint uVar1;
  CDemonActor *pCVar2;
  CDemonActor *in_stack_00000004;
  
  if (in_stack_00000004 == (CDemonActor *)0x0) {
    return 0;
  }
  uVar1 = *(uint *)&in_stack_00000004[2].orient;
  if (uVar1 < 7) {
    if (uVar1 == 0) {
      return 1;
    }
  }
  else if ((uVar1 < 8) || (uVar1 == 8)) {
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (in_stack_00000004,g_CMeleeClassInfo.name_hash);
    if (pCVar2 == (CDemonActor *)0x0) {
      return 0;
    }
    if (pCVar2[4].location.position.z == 0.0) {
      return 0;
    }
    return 3;
  }
  return 3;
}
