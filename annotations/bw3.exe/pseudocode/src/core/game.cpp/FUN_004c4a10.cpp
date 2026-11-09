// Name: core_game.cpp_FUN_004c4a10
// Address: 004c4a10
// Address Range: [[004c4a10, 004c4a55]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004c4a10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004c4a10(void)

{
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
            (CAlphaBitmap_ARRAY_01d22b4c + _DAT_01d22b48,
             _DAT_01c5fadc - *(int *)(&DAT_01d22bec + _DAT_01d22b48 * 4),
             _DAT_01c5fae0 - *(int *)(&DAT_01d22c0c + _DAT_01d22b48 * 4),0xffff);
  return;
}
