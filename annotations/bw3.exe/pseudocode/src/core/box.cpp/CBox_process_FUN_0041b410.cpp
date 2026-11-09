// Name: core_box.cpp_CBox_process_FUN_0041b410
// Address: 0041b410
// Address Range: [[0041b410, 0041b46a]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_process_FUN_0041b410(CBox *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_CBox_process_FUN_0041b410(CBox *this_ptr,float delta_time)

{
  float fVar1;
  
  if ((float)_DAT_005b7381 < delta_time) {
    fVar1 = (float)_DAT_005b7389;
    core_box_cpp_CBox_process_FUN_0041b410(this_ptr,delta_time * fVar1);
    core_box_cpp_CBox_process_FUN_0041b410(this_ptr,delta_time * fVar1);
    return;
  }
  core_box_cpp_CBox_processPhysics_FUN_0041b470(this_ptr,delta_time);
  return;
}
