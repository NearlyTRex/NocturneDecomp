// Name: core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
// Address: 0055aa00
// Address Range: [[0055aa00, 0055aba8]]
// Convention: unknown
// Signature: void core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(float *param_1,float *param_2)

#include "nocturne.h"

void core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(float *param_1,float *param_2)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_38[0] = param_2[2] * param_1[8] + *param_2 * *param_1 + param_2[1] * param_1[4];
  local_38[1] = param_2[2] * param_1[9] + *param_2 * param_1[1] + param_2[1] * param_1[5];
  local_38[2] = param_2[2] * param_1[10] + *param_2 * param_1[2] + param_2[1] * param_1[6];
  local_28 = param_2[6] * param_1[8] + param_2[4] * *param_1 + param_2[5] * param_1[4];
  local_24 = param_2[6] * param_1[9] + param_2[5] * param_1[5] + param_2[4] * param_1[1];
  local_20 = param_2[6] * param_1[10] + param_2[5] * param_1[6] + param_2[4] * param_1[2];
  local_18 = param_2[10] * param_1[8] + param_2[8] * *param_1 + param_2[9] * param_1[4];
  local_14 = param_2[10] * param_1[9] + param_2[9] * param_1[5] + param_2[8] * param_1[1];
  local_10 = param_2[10] * param_1[10] + param_2[9] * param_1[6] + param_2[8] * param_1[2];
  local_38[3] = param_2[2] * param_1[0xb] + *param_2 * param_1[3] + param_2[1] * param_1[7] +
                param_2[3];
  local_1c = param_2[6] * param_1[0xb] + param_2[5] * param_1[7] + param_2[4] * param_1[3] +
             param_2[7];
  local_c = param_2[10] * param_1[0xb] + param_2[9] * param_1[7] + param_2[8] * param_1[3] +
            param_2[0xb];
  pfVar2 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
