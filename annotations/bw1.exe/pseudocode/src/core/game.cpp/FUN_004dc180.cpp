// Name: core_game.cpp_FUN_004dc180
// Address: 004dc180
// Address Range: [[004dc180, 004dc19f]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004dc180(void)

#include "nocturne.h"

void core_game_cpp_FUN_004dc180(void)

{
  CAlphaBitmap *this_ptr;
  
  this_ptr = CAlphaBitmap_ARRAY_01cd0b44;
  do {
    engine_alphabit_cpp_FUN_0040d1c0(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CAlphaBitmap *)&DAT_01cd0be4);
  return;
}
