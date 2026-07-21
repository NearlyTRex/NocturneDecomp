// Name: core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
// Address: 0041d550
// Address Range: [[0041d550, 0041d979]]
// Convention: unknown
// Signature: float core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550(float *param_1,float *param_2,float *param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0041d945) */

float core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float local_5c [6];
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_20;
  
  bVar3 = true;
  if (*param_2 < *param_1) {
    if (*param_3 < *param_1 - *param_2) {
      return -1.0;
    }
    local_34 = (*param_1 - *param_2) / *param_3;
    local_40 = -1.0;
LAB_0041d5a7:
    bVar3 = false;
  }
  else {
    if (param_1[3] < *param_2) {
      if (param_1[3] - *param_2 < *param_3) {
        return -1.0;
      }
      local_34 = (param_1[3] - *param_2) / *param_3;
      local_40 = 1.0;
      goto LAB_0041d5a7;
    }
    local_34 = -1.0;
  }
  if (param_1[1] <= param_2[1]) {
    if (param_2[1] <= param_1[4]) {
      local_30 = -1.0;
      goto LAB_0041d5ec;
    }
    if (param_1[4] - param_2[1] < param_3[1]) {
      return -1.0;
    }
    local_30 = (param_1[4] - param_2[1]) / param_3[1];
    local_44 = 1.0;
  }
  else {
    if (param_3[1] < param_1[1] - param_2[1]) {
      return -1.0;
    }
    local_30 = (param_1[1] - param_2[1]) / param_3[1];
    local_44 = -1.0;
  }
  bVar3 = false;
LAB_0041d5ec:
  if (param_1[2] <= param_2[2]) {
    if (param_1[5] < param_2[2]) {
      if (param_1[5] - param_2[2] < param_3[2]) {
        return -1.0;
      }
      local_38 = (param_1[5] - param_2[2]) / param_3[2];
      local_20 = 1.0;
    }
    else {
      local_38 = -1.0;
      if (bVar3) {
        if (param_4 != (float *)0x0) {
          fVar1 = param_3[1];
          fVar2 = param_3[2];
          if (param_4 != local_5c) {
            *param_4 = -*param_3;
            param_4[1] = -fVar1;
            param_4[2] = -fVar2;
          }
          fVar1 = SQRT(param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1]);
          if (fVar1 <= 0.0) {
            param_4[2] = 0.0;
            param_4[1] = param_4[2];
            *param_4 = param_4[1];
            return 0.0;
          }
          fVar1 = 1.0 / fVar1;
          *param_4 = *param_4 * fVar1;
          param_4[1] = param_4[1] * fVar1;
          param_4[2] = param_4[2] * fVar1;
        }
        return 0.0;
      }
    }
  }
  else {
    if (param_3[2] < param_1[2] - param_2[2]) {
      return -1.0;
    }
    local_38 = (param_1[2] - param_2[2]) / param_3[2];
    local_20 = -1.0;
  }
  local_2c = local_34;
  if (local_34 < local_30) {
    local_2c = local_30;
  }
  bVar3 = local_34 < local_30;
  if (local_38 <= local_2c) {
    if (!bVar3) {
      fVar1 = param_3[1] * local_2c + param_2[1];
      if (fVar1 < param_1[1]) {
        return -1.0;
      }
      if (param_1[4] < fVar1) {
        return -1.0;
      }
      fVar1 = param_3[2] * local_2c + param_2[2];
      if (fVar1 < param_1[2]) {
        return -1.0;
      }
      if (fVar1 <= param_1[5]) {
        if (param_4 == (float *)0x0) {
          return local_2c;
        }
        param_4[1] = 0.0;
        param_4[2] = 0.0;
        *param_4 = local_40;
        return local_2c;
      }
      return -1.0;
    }
    if (bVar3 < 2) {
      fVar1 = *param_3 * local_2c + *param_2;
      if (fVar1 < *param_1) {
        return -1.0;
      }
      if (param_1[3] < fVar1) {
        return -1.0;
      }
      fVar1 = param_3[2] * local_2c + param_2[2];
      if (fVar1 < param_1[2]) {
        return -1.0;
      }
      if (param_1[5] < fVar1) {
        return -1.0;
      }
      if (param_4 == (float *)0x0) {
        return local_2c;
      }
      param_4[2] = 0.0;
      *param_4 = 0.0;
      param_4[1] = local_44;
      return local_2c;
    }
    if (bVar3 != true) {
      return local_2c;
    }
  }
  else {
    local_2c = local_38;
  }
  fVar1 = *param_3 * local_2c + *param_2;
  if ((((*param_1 <= fVar1) && (fVar1 <= param_1[3])) &&
      (fVar1 = param_3[1] * local_2c + param_2[1], param_1[1] <= fVar1)) && (fVar1 <= param_1[4])) {
    if (param_4 != (float *)0x0) {
      param_4[1] = 0.0;
      *param_4 = 0.0;
      param_4[2] = local_20;
    }
    return local_2c;
  }
  return -1.0;
}
