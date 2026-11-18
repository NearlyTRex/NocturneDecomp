// Name: core_game.cpp_freeCursorBitmaps_FUN_004dc180
// Address: 004dc180
// Address Range: [[004dc180, 004dc19f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_freeCursorBitmaps_FUN_004dc180(void)

#include "nocturne.h"

void __cdecl core_game_cpp_freeCursorBitmaps_FUN_004dc180(void)

{
  CAlphaBitmap *this_ptr;
  
  this_ptr = CAlphaBitmap_ARRAY_01cd0b44;
  do {
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CAlphaBitmap *)g_INT_ARRAY_01cd0be4);
  return;
}
