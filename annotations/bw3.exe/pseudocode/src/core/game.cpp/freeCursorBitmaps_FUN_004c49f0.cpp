// Name: core_game.cpp_freeCursorBitmaps_FUN_004c49f0
// Address: 004c49f0
// Address Range: [[004c49f0, 004c4a0f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_freeCursorBitmaps_FUN_004c49f0(void)

#include "nocturne.h"

void __cdecl core_game_cpp_freeCursorBitmaps_FUN_004c49f0(void)

{
  CAlphaBitmap *this_ptr;
  
  this_ptr = CAlphaBitmap_ARRAY_01d22b4c;
  do {
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CAlphaBitmap *)g_INT_ARRAY_01d22bec);
  return;
}
