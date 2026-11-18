// Name: core_fire.cpp_CFireEffect_save_FUN_004b73f0
// Address: 004b73f0
// Address Range: [[004b73f0, 004b7432]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_save_FUN_004b73f0(CFireEffect *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_save_FUN_004b73f0(CFireEffect *this_ptr,_FILE *file_handle)

{
  CCrater *this_ptr_00;
  
  _fprintf(file_handle,"Fire state\n");
  this_ptr_00 = g_CCrater_ARRAY_01cb4f60;
  _fprintf(file_handle,"1\n");
  do {
    core_fire_cpp_CCrater_save_FUN_004b2740(this_ptr_00,file_handle);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != g_CCrater_ARRAY_01cb4f60 + sizeof(g_CCrater_ARRAY_01cb4f60) / sizeof(g_CCrater_ARRAY_01cb4f60[0]));
  return;
}
