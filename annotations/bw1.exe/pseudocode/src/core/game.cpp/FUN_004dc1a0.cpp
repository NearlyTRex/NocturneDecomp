// Name: core_game.cpp_FUN_004dc1a0
// Address: 004dc1a0
// Address Range: [[004dc1a0, 004dc1e5]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004dc1a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004dc1a0(void)

{
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
            (CAlphaBitmap_ARRAY_01cd0b44 + _DAT_01cd0b40,
             _DAT_01c4353c - *(int *)(&DAT_01cd0be4 + _DAT_01cd0b40 * 4),
             _DAT_01c43540 - *(int *)(&DAT_01cd0c04 + _DAT_01cd0b40 * 4),0xffff);
  return;
}
