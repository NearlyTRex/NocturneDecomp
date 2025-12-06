// Name: core_box.cpp_CBox_process_FUN_0041e2f0
// Address: 0041e2f0
// Address Range: [[0041e2f0, 0041e34a]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBox_process_FUN_0041e2f0(CBox * this_ptr, float delta_time)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_process_FUN_0041e2f0(CBox *this_ptr,float delta_time)

{
  uint uStack_c;
  
  if ((float)0.012500000000000001 < delta_time) {
    core_box_cpp_CBox_process_FUN_0041e2f0(this_ptr,delta_time * (float)0.5);
    core_box_cpp_CBox_process_FUN_0041e2f0(this_ptr,uStack_c);
    return;
  }
  core_box_cpp_CBox_processPhysics_FUN_0041e350(this_ptr,delta_time);
  return;
}
