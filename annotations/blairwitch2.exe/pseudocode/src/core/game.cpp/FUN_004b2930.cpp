// Name: core_game.cpp_FUN_004b2930
// Address: 004b2930
// Address Range: [[004b2930, 004b2967]]
// Convention: unknown
// Signature: undefined4 core_game_cpp_FUN_004b2930(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_game_cpp_FUN_004b2930(void)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                     (*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4),g_CDocClassInfo.name_hash);
  if ((pCVar1 != (CDemonActor *)0x0) && (0.0 < pCVar1[0xde].particle_systems[1].position.x)) {
    return 1;
  }
  return 0;
}
