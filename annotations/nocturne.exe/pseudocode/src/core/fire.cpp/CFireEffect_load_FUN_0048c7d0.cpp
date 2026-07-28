// Name: core_fire.cpp_CFireEffect_load_FUN_0048c7d0
// Address: 0048c7d0
// Address Range: [[0048c7d0, 0048c847]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_load_FUN_0048c7d0(CFireEffect *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_load_FUN_0048c7d0(CFireEffect *this_ptr,_FILE *file_handle)

{
  CCrater *this_ptr_00;
  char local_110 [256];
  uint local_10;
  
  local_10 = 0;
  core_fire_cpp_CFireEffect_init_FUN_0048a150(this_ptr);
  _fgets(local_110,0xff,file_handle);
  this_ptr_00 = (CCrater *)0x1c625f8;
  _fscanf(file_handle,"%d\n",&local_10);
  do {
    core_fire_cpp_CCrater_load_FUN_00487d50(this_ptr_00,file_handle);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CCrater *)&DAT_01c62eb8);
  return;
}
