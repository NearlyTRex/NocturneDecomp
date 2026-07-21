// Name: core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
// Address: 0046c5b0
// Address Range: [[0046c5b0, 0046c611]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  if (param_1 + 3 != param_3) {
    param_1[3] = *param_3;
    param_1[4] = param_3[1];
    param_1[5] = param_3[2];
  }
  if (param_1 + 6 != param_4) {
    param_1[6] = *param_4;
    param_1[7] = param_4[1];
    param_1[8] = param_4[2];
  }
  core_dtri_cpp_CDemonTriangle_calculateData_FUN_0046c460(param_1);
  return;
}
