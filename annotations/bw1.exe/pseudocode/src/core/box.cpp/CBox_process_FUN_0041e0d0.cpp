// Name: core_box.cpp_CBox_process_FUN_0041e0d0
// Address: 0041e0d0
// Address Range: [[0041e0d0, 0041e12a]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_process_FUN_0041e0d0(CBox *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_CBox_process_FUN_0041e0d0(CBox *this_ptr,float delta_time)

{
  float fVar1;
  
  if ((float)_DAT_005d4a98 < delta_time) {
    fVar1 = (float)_DAT_005d4aa0;
    core_box_cpp_CBox_process_FUN_0041e0d0(this_ptr,delta_time * fVar1);
    core_box_cpp_CBox_process_FUN_0041e0d0(this_ptr,delta_time * fVar1);
    return;
  }
  core_box_cpp_CBox_processPhysics_FUN_0041e130(this_ptr,delta_time);
  return;
}
