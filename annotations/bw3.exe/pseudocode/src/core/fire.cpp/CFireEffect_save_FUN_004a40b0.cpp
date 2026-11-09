// Name: core_fire.cpp_CFireEffect_save_FUN_004a40b0
// Address: 004a40b0
// Address Range: [[004a40b0, 004a40f2]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_save_FUN_004a40b0(CFireEffect *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_save_FUN_004a40b0(CFireEffect *this_ptr,_FILE *file_handle)

{
  CCrater *this_ptr_00;
  
  FUN_005a3140(file_handle,"Fire state\n");
  this_ptr_00 = (CCrater *)0x1cfaff8;
  FUN_005a3140(file_handle,&DAT_005c0a60);
  do {
    core_fire_cpp_CCrater_save_FUN_0049dd20(this_ptr_00,file_handle);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CCrater *)&DAT_01cfb8b8);
  return;
}
