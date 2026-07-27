// Name: core_setcolid.cpp_FUN_0050eba0
// Address: 0050eba0
// Address Range: [[0050eba0, 0050ec70]]
// Convention: unknown
// Signature: uint core_setcolid_cpp_FUN_0050eba0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,float *param_8)

#include "nocturne.h"

uint core_setcolid_cpp_FUN_0050eba0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,float *param_8)

{
  uint uVar1;
  uint uVar2;
  byte local_54 [36];
  float local_30;
  float local_2c;
  float local_28;
  float local_1c [3];
  
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(local_54,param_4,param_5,param_6);
  uVar1 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110(local_54,param_1,param_2,param_3);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(local_54,param_4,param_6,param_7);
  uVar2 = core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110(local_54,param_1,param_2,param_3);
  uVar1 = uVar1 | uVar2;
  if (uVar1 != 0) {
    if (param_8 != local_1c) {
      *param_8 = -local_30;
      param_8[1] = -local_2c;
      param_8[2] = -local_28;
      return uVar1;
    }
  }
  return uVar1;
}
