// Name: core_moon.cpp_CMoon_free_FUN_00502450
// Address: 00502450
// Address Range: [[00502450, 0050249e]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_free_FUN_00502450(CMoon *this_ptr)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_free_FUN_00502450(CMoon *this_ptr)

{
  CAlphaBitmap *this_ptr_00;
  
  if (this_ptr->is_loaded == 0) {
    return;
  }
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01d1c7b8);
  this_ptr_00 = CAlphaBitmap_ARRAY_01d1c7cc;
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01d1cda8);
  do {
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != &CAlphaBitmap_01d1cda8);
  this_ptr->is_loaded = 0;
  return;
}
