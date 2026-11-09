// Name: core_game.cpp_FUN_004bd4cc
// Address: 004bd4cc
// Address Range: [[004bd4cc, 004bd4e9]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004bd4cc(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004bd4cc(void)

{
  if (*(int *)&g_CGamePtr->field_0x228 != 1) {
    return;
  }
  _DAT_01cb8118 = wincore_winrun_cpp_FUN_0058e9e0();
  return;
}
