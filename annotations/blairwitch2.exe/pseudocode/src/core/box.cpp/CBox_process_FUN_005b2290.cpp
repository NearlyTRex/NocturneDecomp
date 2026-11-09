// Name: core_box.cpp_CBox_process_FUN_005b2290
// Address: 005b2290
// Address Range: [[005b2290, 005b22ea]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_process_FUN_005b2290(CBox *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_CBox_process_FUN_005b2290(CBox *this_ptr,float delta_time)

{
  float fVar1;
  
  if ((float)_DAT_005f12d8 < delta_time) {
    fVar1 = (float)_DAT_005f12e0;
    core_box_cpp_CBox_process_FUN_005b2290(this_ptr,delta_time * fVar1);
    core_box_cpp_CBox_process_FUN_005b2290(this_ptr,delta_time * fVar1);
    return;
  }
  core_box_cpp_CBox_processPhysics_FUN_005b22f0(this_ptr,delta_time);
  return;
}
