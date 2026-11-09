// Name: core_fire.cpp_CFireEffect_load_FUN_004b7370
// Address: 004b7370
// Address Range: [[004b7370, 004b73e7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_load_FUN_004b7370(CFireEffect *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_load_FUN_004b7370(CFireEffect *this_ptr,_FILE *file_handle)

{
  CCrater *this_ptr_00;
  byte local_110 [256];
  uint local_10;
  
  local_10 = 0;
  core_fire_cpp_CFireEffect_init_FUN_004b4b30(this_ptr);
  _fgets(local_110,0xff,file_handle);
  this_ptr_00 = (CCrater *)0x1cb4f60;
  _fscanf(file_handle,&DAT_005df674,&local_10);
  do {
    core_fire_cpp_CCrater_load_FUN_004b2600(this_ptr_00,file_handle);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CCrater *)&DAT_01cb5820);
  return;
}
