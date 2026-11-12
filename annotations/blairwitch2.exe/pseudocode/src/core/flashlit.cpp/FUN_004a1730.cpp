// Name: core_flashlit.cpp_FUN_004a1730
// Address: 004a1730
// Address Range: [[004a1730, 004a17ed]]
// Convention: unknown
// Signature: void core_flashlit_cpp_FUN_004a1730(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flashlit_cpp_FUN_004a1730(void)

{
  CAlphaBitmap *this_ptr;
  
  this_ptr = CAlphaBitmap_ARRAY_01caf128;
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf114);
  do {
    engine_alphabit_cpp_FUN_0040d540(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != &CAlphaBitmap_01caf1a0);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf1a0);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf1b4);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf1c8);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf1dc);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf1f0);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf204);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf218);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf22c);
  DAT_00616040 = 0xffffffff;
  DAT_00616010 = 1;
  _DAT_01caf488 = 0;
  DAT_01caf4a0 = 0;
  _DAT_01caf568 = 0;
  return;
}
