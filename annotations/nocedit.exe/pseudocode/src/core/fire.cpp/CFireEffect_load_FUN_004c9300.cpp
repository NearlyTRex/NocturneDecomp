// Name: core_fire.cpp_CFireEffect_load_FUN_004c9300
// Address: 004c9300
// Address Range: [[004c9300, 004c9377]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_load_FUN_004c9300(CFireEffect *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_load_FUN_004c9300(CFireEffect *this_ptr,_FILE *file_handle)

{
  CCrater *this_ptr_00;
  char local_110 [256];
  uint local_10;
  
  local_10 = 0;
  core_fire_cpp_CFireEffect_init_FUN_004c6c80(this_ptr);
  _fgets(local_110,0xff,file_handle);
  this_ptr_00 = g_CraterPool;
  _fscanf(file_handle,"%d\n",&local_10);
  do {
    core_fire_cpp_CCrater_load_FUN_004c4880(this_ptr_00,file_handle);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != g_CraterPool + sizeof(g_CraterPool) / sizeof(g_CraterPool[0]));
  return;
}
