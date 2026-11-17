// Name: core_fire.cpp_CFireEffect_save_FUN_004a40b0
// Address: 004a40b0
// Address Range: [[004a40b0, 004a40f2]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_save_FUN_004a40b0(CFireEffect *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_save_FUN_004a40b0(CFireEffect *this_ptr,_FILE *file_handle)

{
  CCrater *this_ptr_00;
  
  _fprintf(file_handle,"Fire state\n");
  this_ptr_00 = g_CCrater_ARRAY_01cfaff8;
  _fprintf(file_handle,"1\n");
  do {
    core_fire_cpp_CCrater_save_FUN_0049dd20(this_ptr_00,file_handle);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != g_CCrater_ARRAY_01cfaff8 + sizeof(g_CCrater_ARRAY_01cfaff8) / sizeof(g_CCrater_ARRAY_01cfaff8[0]));
  return;
}
