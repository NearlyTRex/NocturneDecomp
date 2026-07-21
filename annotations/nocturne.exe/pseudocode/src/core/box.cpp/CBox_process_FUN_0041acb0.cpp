// Name: core_box.cpp_CBox_process_FUN_0041acb0
// Address: 0041acb0
// Address Range: [[0041acb0, 0041ad0a]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_process_FUN_0041acb0(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_CBox_process_FUN_0041acb0(uint param_1,float param_2)

{
  float fVar1;
  
  if ((float)_DAT_0057969d < param_2) {
    fVar1 = (float)_DAT_005796a5;
    core_box_cpp_CBox_process_FUN_0041acb0(param_1,param_2 * fVar1);
    core_box_cpp_CBox_process_FUN_0041acb0(param_1,param_2 * fVar1);
    return;
  }
  core_box_cpp_CBox_processPhysics_FUN_0041ad10(param_1,param_2);
  return;
}
