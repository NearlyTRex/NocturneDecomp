// Name: core_game.cpp_drawCursor_FUN_004dc1a0
// Address: 004dc1a0
// Address Range: [[004dc1a0, 004dc1e5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawCursor_FUN_004dc1a0(void)

#include "nocturne.h"

void __cdecl core_game_cpp_drawCursor_FUN_004dc1a0(void)

{
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
            (CAlphaBitmap_ARRAY_01cd0b44 + g_INT_01cd0b40,
             g_MouseX - g_INT_ARRAY_01cd0be4[g_INT_01cd0b40],
             g_MouseY - g_INT_ARRAY_01cd0be4[g_INT_01cd0b40 + 8],0xffff);
  return;
}
