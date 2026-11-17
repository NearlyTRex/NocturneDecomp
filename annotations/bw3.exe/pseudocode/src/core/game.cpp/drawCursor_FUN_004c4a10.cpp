// Name: core_game.cpp_drawCursor_FUN_004c4a10
// Address: 004c4a10
// Address Range: [[004c4a10, 004c4a55]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawCursor_FUN_004c4a10(void)

#include "nocturne.h"

void __cdecl core_game_cpp_drawCursor_FUN_004c4a10(void)

{
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
            (CAlphaBitmap_ARRAY_01d22b4c + g_INT_01d22b48,
             g_INT_01c5fadc - g_INT_ARRAY_01d22bec[g_INT_01d22b48],
             g_INT_01c5fae0 - g_INT_ARRAY_01d22bec[g_INT_01d22b48 + 8],0xffff);
  return;
}
