// Name: core_moon.cpp_CMoon_free_FUN_004f9580
// Address: 004f9580
// Address Range: [[004f9580, 004f95f6]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_free_FUN_004f9580(CMoon *this_ptr)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_free_FUN_004f9580(CMoon *this_ptr)

{
  CAlphaBitmap *this_ptr_00;
  
  if (this_ptr->is_loaded != 0) {
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d883a8);
    this_ptr_00 = g_MoonAnimTextures;
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d88614);
    do {
      engine_alphabit_cpp_FUN_0040d400(this_ptr_00);
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != &CAlphaBitmap_01d88614);
    this_ptr->is_loaded = 0;
  }
  core_dmodel_cpp_FUN_00460e10(this_ptr->models);
  core_dmodel_cpp_FUN_00460e10(this_ptr->models + 1);
  core_dmodel_cpp_FUN_00460e10(this_ptr->models + 2);
  return;
}
