// Name: core_game.cpp_FUN_004c49f0
// Address: 004c49f0
// Address Range: [[004c49f0, 004c4a0f]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004c49f0(void)

#include "nocturne.h"

void core_game_cpp_FUN_004c49f0(void)

{
  CAlphaBitmap *this_ptr;
  
  this_ptr = CAlphaBitmap_ARRAY_01d22b4c;
  do {
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CAlphaBitmap *)&DAT_01d22bec);
  return;
}
