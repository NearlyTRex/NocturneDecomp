// Name: core_gabriela.cpp_FUN_004d5c10
// Address: 004d5c10
// Address Range: [[004d5c10, 004d5c50]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d5c10()

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d5c10(uint param_1) */

void core_gabriela_cpp_FUN_004d5c10(void)

{
  CDemonActor *pCVar1;
  int in_stack_00000004;
  
  if (*(CDemonActor **)(in_stack_00000004 + 0x1fba0) == (CDemonActor *)0x0) {
    return;
  }
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (*(CDemonActor **)(in_stack_00000004 + 0x1fba0),g_CAmmoBoxClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    core_ammobox_cpp_AllocateMemoryMaybe_FUN_00411700();
  }
  *(uint *)(in_stack_00000004 + 0x1fba0) = 0;
  return;
}
