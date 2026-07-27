// Name: core_dirmat.cpp_FUN_0044dfb0
// Address: 0044dfb0
// Address Range: [[0044dfb0, 0044e0e4]]
// Convention: unknown
// Signature: void core_dirmat_cpp_FUN_0044dfb0(float *param_1,float *param_2)

#include "nocturne.h"

void core_dirmat_cpp_FUN_0044dfb0(float *param_1,float *param_2)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  local_30[1] = param_1[2] * param_2[7] + *param_1 * param_2[1] + param_1[1] * param_2[4];
  local_30[2] = param_1[2] * param_2[8] + *param_1 * param_2[2] + param_1[1] * param_2[5];
  local_30[3] = param_1[5] * param_2[6] + param_1[3] * *param_2 + param_1[4] * param_2[3];
  local_20 = param_1[5] * param_2[7] + param_1[4] * param_2[4] + param_1[3] * param_2[1];
  local_1c = param_1[5] * param_2[8] + param_1[4] * param_2[5] + param_1[3] * param_2[2];
  local_18 = param_1[8] * param_2[6] + param_1[6] * *param_2 + param_1[7] * param_2[3];
  local_14 = param_1[8] * param_2[7] + param_1[7] * param_2[4] + param_1[6] * param_2[1];
  local_10 = param_1[8] * param_2[8] + param_1[7] * param_2[5] + param_1[6] * param_2[2];
  local_30[0] = param_1[2] * param_2[6] + *param_1 * *param_2 + param_1[1] * param_2[3];
  pfVar2 = local_30;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
