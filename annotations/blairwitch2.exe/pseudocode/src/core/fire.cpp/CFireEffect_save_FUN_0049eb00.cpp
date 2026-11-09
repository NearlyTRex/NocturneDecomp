// Name: core_fire.cpp_CFireEffect_save_FUN_0049eb00
// Address: 0049eb00
// Address Range: [[0049eb00, 0049eb42]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_save_FUN_0049eb00(CFireEffect *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_save_FUN_0049eb00(CFireEffect *this_ptr,_FILE *file_handle)

{
  CCrater *this_ptr_00;
  
  FUN_005b8010(file_handle,"Fire state\n");
  this_ptr_00 = (CCrater *)0x1c9c4d4;
  FUN_005b8010(file_handle,&DAT_005d5842);
  do {
    core_fire_cpp_CCrater_save_FUN_00499da0(this_ptr_00,file_handle);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CCrater *)&DAT_01c9cd94);
  return;
}
