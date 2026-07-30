// Name: core_moon.cpp_CMoon_free_FUN_004dea60
// Address: 004dea60
// Address Range: [[004dea60, 004dead0]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_free_FUN_004dea60(CMoon *this_ptr)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_free_FUN_004dea60(CMoon *this_ptr)

{
  CCourse *this_ptr_00;
  CAlphaBitmap *this_ptr_01;
  
  if (this_ptr->is_loaded != 0) {
    this_ptr_01 = (CAlphaBitmap *)&DAT_01ccdc64;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360((CAlphaBitmap *)&DAT_01ccdc50);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360(this_ptr_01);
      this_ptr_01 = this_ptr_01 + 1;
    } while (this_ptr_01 != (CAlphaBitmap *)&DAT_01ccdebc);
    this_ptr->is_loaded = 0;
  }
  this_ptr_00 = (CCourse *)&DAT_01ccdec8;
  do {
    core_course_cpp_CCourse_free_FUN_0043b7c0(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CCourse *)0x1ccdeec);
  core_dmodel_cpp_FUN_00452f10(&this_ptr->moon);
  core_dmodel_cpp_FUN_00452f10(&DAT_01cce1bc);
  return;
}
