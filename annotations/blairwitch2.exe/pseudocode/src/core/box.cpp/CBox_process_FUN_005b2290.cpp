// Name: core_box.cpp_CBox_process_FUN_005b2290
// Address: 005b2290
// Address Range: [[005b2290, 005b22ea]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_process_FUN_005b2290(CBox *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_process_FUN_005b2290(CBox *this_ptr,float delta_time)

{
  float fVar1;
  
  if ((float)0.012500000000000001 < delta_time) {
    fVar1 = (float)0.5;
    core_box_cpp_CBox_process_FUN_005b2290(this_ptr,delta_time * fVar1);
    core_box_cpp_CBox_process_FUN_005b2290(this_ptr,delta_time * fVar1);
    return;
  }
  core_box_cpp_CBox_processPhysics_FUN_005b22f0(this_ptr,delta_time);
  return;
}
