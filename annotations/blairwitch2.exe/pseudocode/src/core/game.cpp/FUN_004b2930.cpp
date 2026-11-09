// Name: core_game.cpp_FUN_004b2930
// Address: 004b2930
// Address Range: [[004b2930, 004b2967]]
// Convention: unknown
// Signature: undefined4 core_game_cpp_FUN_004b2930(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_game_cpp_FUN_004b2930(void)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),g_CDocClassInfo.name_hash);
  if ((iVar1 != 0) && (0.0 < *(float *)(iVar1 + 0x259b0))) {
    return 1;
  }
  return 0;
}
