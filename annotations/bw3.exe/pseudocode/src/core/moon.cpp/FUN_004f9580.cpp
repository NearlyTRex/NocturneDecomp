// Name: core_moon.cpp_FUN_004f9580
// Address: 004f9580
// Address Range: [[004f9580, 004f95f6]]
// Convention: unknown
// Signature: void core_moon_cpp_FUN_004f9580(int *param_1)

#include "nocturne.h"

void core_moon_cpp_FUN_004f9580(int *param_1)

{
  CAlphaBitmap *this_ptr;
  
  if (*param_1 != 0) {
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d883a8);
    this_ptr = g_MoonAnimTextures;
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d88614);
    do {
      engine_alphabit_cpp_FUN_0040d400(this_ptr);
      this_ptr = this_ptr + 1;
    } while (this_ptr != &CAlphaBitmap_01d88614);
    *param_1 = 0;
  }
  core_dmodel_cpp_FUN_00460e10(param_1 + 2);
  core_dmodel_cpp_FUN_00460e10(param_1 + 0xe8);
  core_dmodel_cpp_FUN_00460e10(param_1 + 0x1ce);
  return;
}
