// Name: FUN_00421af0
// Address: 00421af0
// Address Range: [[00421af0, 00421b8c]]
// Convention: unknown
// Signature: void FUN_00421af0(float *param_1,float *param_2)

#include "nocturne.h"

void FUN_00421af0(float *param_1,float *param_2)

{
  float fVar1;
  float *unaff_ESI;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = *param_2;
  local_c = param_2[1];
  local_8 = param_2[2];
  if (local_10 < *param_1) {
    local_10 = *param_1;
  }
  if (param_1[3] < local_10) {
    local_10 = param_1[3];
  }
  if (local_c < param_1[1]) {
    local_c = param_1[1];
  }
  if (param_1[4] < local_c) {
    local_c = param_1[4];
  }
  if (local_8 < param_1[2]) {
    local_8 = param_1[2];
  }
  if (local_8 <= param_1[5]) {
    *unaff_ESI = local_10;
    unaff_ESI[1] = local_c;
    unaff_ESI[2] = local_8;
    return;
  }
  fVar1 = param_1[5];
  *unaff_ESI = local_10;
  unaff_ESI[1] = local_c;
  unaff_ESI[2] = fVar1;
  return;
}
