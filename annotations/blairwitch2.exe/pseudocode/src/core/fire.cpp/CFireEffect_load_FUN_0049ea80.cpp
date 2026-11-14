// Name: core_fire.cpp_CFireEffect_load_FUN_0049ea80
// Address: 0049ea80
// Address Range: [[0049ea80, 0049eaf7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_load_FUN_0049ea80(CFireEffect *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_load_FUN_0049ea80(CFireEffect *this_ptr,_FILE *file_handle)

{
  CCrater *this_ptr_00;
  char local_110 [256];
  uint local_10;
  
  local_10 = 0;
  core_fire_cpp_CFireEffect_init_FUN_0049c190(this_ptr);
  _fgets(local_110,0xff,file_handle);
  this_ptr_00 = (CCrater *)0x1c9c4d4;
  _fscanf(file_handle,&DAT_005d5832);
  do {
    core_fire_cpp_CCrater_load_FUN_00499c60(this_ptr_00,file_handle);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CCrater *)&DAT_01c9cd94);
  return;
}
