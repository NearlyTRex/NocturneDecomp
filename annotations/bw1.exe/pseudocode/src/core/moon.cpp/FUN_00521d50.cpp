// Name: core_moon.cpp_FUN_00521d50
// Address: 00521d50
// Address Range: [[00521d50, 00521dc6]]
// Convention: unknown
// Signature: void core_moon_cpp_FUN_00521d50(int *param_1)

#include "nocturne.h"

void core_moon_cpp_FUN_00521d50(int *param_1)

{
  CAlphaBitmap *this_ptr;
  
  if (*param_1 != 0) {
    engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01d33ce4);
    this_ptr = g_MoonAnimTextures;
    engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01d33f50);
    do {
      engine_alphabit_cpp_FUN_0040d1c0(this_ptr);
      this_ptr = this_ptr + 1;
    } while (this_ptr != &CAlphaBitmap_01d33f50);
    *param_1 = 0;
  }
  core_dmodel_cpp_FUN_00467160(param_1 + 2);
  core_dmodel_cpp_FUN_00467160(param_1 + 0xe8);
  core_dmodel_cpp_FUN_00467160(param_1 + 0x1ce);
  return;
}
