// Name: core_box.cpp_FUN_0041ee30
// Address: 0041ee30
// Address Range: [[0041ee30, 0041eecc]]
// Convention: unknown
// Signature: void core_box_cpp_FUN_0041ee30(float *param_1,float *param_2)

#include "nocturne.h"

void core_box_cpp_FUN_0041ee30(float *param_1,float *param_2)

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
