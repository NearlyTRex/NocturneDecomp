// Name: core_moon.cpp_FUN_00502450
// Address: 00502450
// Address Range: [[00502450, 0050249e]]
// Convention: unknown
// Signature: void core_moon_cpp_FUN_00502450(int *param_1)

#include "nocturne.h"

void core_moon_cpp_FUN_00502450(int *param_1)

{
  CAlphaBitmap *this_ptr;
  
  if (*param_1 == 0) {
    return;
  }
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01d1c7b8);
  this_ptr = CAlphaBitmap_ARRAY_01d1c7cc;
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01d1cda8);
  do {
    engine_alphabit_cpp_FUN_0040d540(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != &CAlphaBitmap_01d1cda8);
  *param_1 = 0;
  return;
}
