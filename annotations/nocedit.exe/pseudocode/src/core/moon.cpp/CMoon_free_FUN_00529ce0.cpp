// Name: core_moon.cpp_CMoon_free_FUN_00529ce0
// Address: 00529ce0
// Address Range: [[00529ce0, 00529d50]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_free_FUN_00529ce0(CMoon *this_ptr)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_free_FUN_00529ce0(CMoon *this_ptr)

{
  CCourse *this_ptr_00;
  CAlphaBitmap *this_ptr_01;
  
  if (this_ptr->is_loaded != 0) {
    this_ptr_01 = g_MoonAnimTextures;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_MoonCloudTexture);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(this_ptr_01);
      this_ptr_01 = this_ptr_01 + 1;
    } while (this_ptr_01 != g_MoonAnimTextures + 30);
    this_ptr->is_loaded = 0;
  }
  this_ptr_00 = g_MoonBatCourses;
  do {
    core_course_cpp_CCourse_free_FUN_004426c0(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while ((SBat *)this_ptr_00 != g_MoonBats);
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&this_ptr->moon);
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&g_MoonBatModel);
  return;
}
