// Name: core_flashlit.cpp_FUN_004a7c30
// Address: 004a7c30
// Address Range: [[004a7c30, 004a7ced]]
// Convention: unknown
// Signature: void core_flashlit_cpp_FUN_004a7c30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flashlit_cpp_FUN_004a7c30(void)

{
  CAlphaBitmap *this_ptr;
  
  this_ptr = CAlphaBitmap_ARRAY_01d19bc0;
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19bac);
  do {
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != &CAlphaBitmap_01d19c38);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c38);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c4c);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c60);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c74);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c9c);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cb0);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cc4);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cd8);
  DAT_005fe3a8 = 0xffffffff;
  DAT_005fe370 = 1;
  _DAT_01d19f78 = 0;
  DAT_01d19f90 = 0;
  _DAT_01d1a058 = 0;
  return;
}
