// Name: core_moon.cpp_CMoon_free_FUN_00521d50
// Address: 00521d50
// Address Range: [[00521d50, 00521dc6]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_free_FUN_00521d50(CMoon *this_ptr)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_free_FUN_00521d50(CMoon *this_ptr)

{
  CAlphaBitmap *this_ptr_00;
  
  if (this_ptr->is_loaded != 0) {
    engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01d33ce4);
    this_ptr_00 = g_MoonAnimTextures;
    engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01d33f50);
    do {
      engine_alphabit_cpp_FUN_0040d1c0(this_ptr_00);
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != &CAlphaBitmap_01d33f50);
    this_ptr->is_loaded = 0;
  }
  core_dmodel_cpp_FUN_00467160(this_ptr->models);
  core_dmodel_cpp_FUN_00467160(this_ptr->models + 1);
  core_dmodel_cpp_FUN_00467160(this_ptr->models + 2);
  return;
}
