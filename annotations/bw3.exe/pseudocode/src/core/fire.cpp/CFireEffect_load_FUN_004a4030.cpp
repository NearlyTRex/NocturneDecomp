// Name: core_fire.cpp_CFireEffect_load_FUN_004a4030
// Address: 004a4030
// Address Range: [[004a4030, 004a40a7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_load_FUN_004a4030(CFireEffect *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_load_FUN_004a4030(CFireEffect *this_ptr,_FILE *file_handle)

{
  CCrater *this_ptr_00;
  char local_110 [256];
  uint local_10;
  
  local_10 = 0;
  core_fire_cpp_CFireEffect_init_FUN_004a1480(this_ptr);
  _fgets(local_110,0xff,file_handle);
  this_ptr_00 = (CCrater *)0x1cfaff8;
  _fscanf(file_handle,&DAT_005c0a50);
  do {
    core_fire_cpp_CCrater_load_FUN_0049dbe0(this_ptr_00,file_handle);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CCrater *)&DAT_01cfb8b8);
  return;
}
