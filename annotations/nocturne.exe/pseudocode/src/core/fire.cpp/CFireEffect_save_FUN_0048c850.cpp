// Name: core_fire.cpp_CFireEffect_save_FUN_0048c850
// Address: 0048c850
// Address Range: [[0048c850, 0048c892]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_save_FUN_0048c850(CFireEffect *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_save_FUN_0048c850(CFireEffect *this_ptr,_FILE *file_handle)

{
  CCrater *this_ptr_00;
  
  _fprintf(file_handle,"Fire state\n");
  this_ptr_00 = (CCrater *)0x1c625f8;
  _fprintf(file_handle,&CHAR_1_0058153c);
  do {
    core_fire_cpp_CCrater_save_FUN_00487e90(this_ptr_00,file_handle);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CCrater *)&DAT_01c62eb8);
  return;
}
