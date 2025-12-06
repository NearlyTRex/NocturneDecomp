// Name: core_stone.cpp_FUN_005bad70
// Address: 005bad70
// Address Range: [[005bad70, 005badc8]]
// Convention: unknown
// Signature: undefined core_stone.cpp_FUN_005bad70()

#include "nocturne.h"

/* Signature: byte actors_other_stone.cpp_FUN_005bad70(uint param_1, uint param_2)
    */

uint core_stone_cpp_FUN_005bad70(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  int in_stack_00000004;
  CDemonActor *in_stack_0000000c;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (*(CDemonActor **)(in_stack_00000004 + 0x66c),
                      g_CActorDestinationClassInfo.name_hash);
  if ((pCVar1 != (CDemonActor *)0x0) && (pCVar1[1].location.area_id != 0)) {
    return 0;
  }
  if (*(int *)(in_stack_00000004 + 0x314) != 3) {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_0000000c,"CHero");
    if (iVar2 == 0) {
      return 0;
    }
  }
  return *(uint *)(in_stack_00000004 + 0x314);
}
