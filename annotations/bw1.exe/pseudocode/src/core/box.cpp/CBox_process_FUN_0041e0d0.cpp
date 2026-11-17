// Name: core_box.cpp_CBox_process_FUN_0041e0d0
// Address: 0041e0d0
// Address Range: [[0041e0d0, 0041e12a]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_process_FUN_0041e0d0(CBox *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_process_FUN_0041e0d0(CBox *this_ptr,float delta_time)

{
  float fVar1;
  
  if ((float)0.012500000000000001 < delta_time) {
    fVar1 = (float)0.5;
    core_box_cpp_CBox_process_FUN_0041e0d0(this_ptr,delta_time * fVar1);
    core_box_cpp_CBox_process_FUN_0041e0d0(this_ptr,delta_time * fVar1);
    return;
  }
  core_box_cpp_CBox_processPhysics_FUN_0041e130(this_ptr,delta_time);
  return;
}
