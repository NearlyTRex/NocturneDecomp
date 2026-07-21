// Name: core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70
// Address: 0041cc70
// Address Range: [[0041cc70, 0041ccd8]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(undefined4 *param_1,undefined4 *param_2,uint param_3)

#include "nocturne.h"

uint * __cdecl core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_3 & 1) == 0) {
    uVar1 = *param_1;
  }
  else {
    uVar1 = param_1[3];
  }
  *param_2 = uVar1;
  if ((param_3 & 2) == 0) {
    uVar1 = param_1[1];
  }
  else {
    uVar1 = param_1[4];
  }
  param_2[1] = uVar1;
  if ((param_3 & 4) != 0) {
    param_2[2] = param_1[5];
    return param_2;
  }
  param_2[2] = param_1[2];
  return param_2;
}
