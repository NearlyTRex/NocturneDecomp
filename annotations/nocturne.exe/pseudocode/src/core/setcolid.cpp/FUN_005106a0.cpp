// Name: core_setcolid.cpp_FUN_005106a0
// Address: 005106a0
// Address Range: [[005106a0, 00510702]]
// Convention: unknown
// Signature: void core_setcolid_cpp_FUN_005106a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void core_setcolid_cpp_FUN_005106a0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  byte local_48 [56];
  
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(local_48,param_2,param_3,param_4);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(local_48,param_1);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(local_48,param_2,param_4,param_5);
  core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(local_48,param_1);
  return;
}
