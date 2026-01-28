// Name: core_fire.cpp_CFireEffect_save_FUN_004c9380
// Address: 004c9380
// Address Range: [[004c9380, 004c93c2]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_save_FUN_004c9380(CFireEffect *this_ptr,FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_save_FUN_004c9380(CFireEffect *this_ptr,FILE *file_handle)

{
  CCrater *this_ptr_00;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"Fire state\n");
  this_ptr_00 = g_CraterPool;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"1\n");
  do {
    core_fire_cpp_CCrater_save_FUN_004c49c0(this_ptr_00,file_handle);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CCrater *)&g_CraterActiveListHead);
  return;
}
