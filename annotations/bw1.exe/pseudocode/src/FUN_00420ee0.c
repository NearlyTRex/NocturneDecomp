// Name: FUN_00420ee0
// Address: 00420ee0
// Address Range: [[00420ee0, 00421323]]
// Convention: unknown
// Signature: float FUN_00420ee0(float *param_1,float *param_2,float *param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004212ef) */

float FUN_00420ee0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float local_68 [11];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_14;
  
  bVar3 = true;
  if (*param_2 < *param_1) {
    if (*param_3 < *param_1 - *param_2) {
      return -1.0;
    }
    local_38 = (*param_1 - *param_2) / *param_3;
    local_28 = -1.0;
LAB_00420f37:
    bVar3 = false;
  }
  else {
    if (param_1[3] < *param_2) {
      if (param_1[3] - *param_2 < *param_3) {
        return -1.0;
      }
      local_38 = (param_1[3] - *param_2) / *param_3;
      local_28 = 1.0;
      goto LAB_00420f37;
    }
    local_38 = -1.0;
  }
  if (param_1[1] <= param_2[1]) {
    if (param_2[1] <= param_1[4]) {
      local_34 = -1.0;
      goto LAB_00420f7c;
    }
    if (param_1[4] - param_2[1] < param_3[1]) {
      return -1.0;
    }
    local_34 = (param_1[4] - param_2[1]) / param_3[1];
    local_14 = 1.0;
  }
  else {
    if (param_3[1] < param_1[1] - param_2[1]) {
      return -1.0;
    }
    local_34 = (param_1[1] - param_2[1]) / param_3[1];
    local_14 = -1.0;
  }
  bVar3 = false;
LAB_00420f7c:
  if (param_1[2] <= param_2[2]) {
    if (param_1[5] < param_2[2]) {
      if (param_1[5] - param_2[2] < param_3[2]) {
        return -1.0;
      }
      local_24 = (param_1[5] - param_2[2]) / param_3[2];
      local_3c = 1.0;
    }
    else {
      local_24 = -1.0;
      if (bVar3) {
        if (param_4 != (float *)0x0) {
          fVar1 = param_3[1];
          fVar2 = param_3[2];
          if (param_4 != local_68) {
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
    local_24 = (param_1[2] - param_2[2]) / param_3[2];
    local_3c = -1.0;
  }
  local_30 = local_38;
  if (local_38 < local_34) {
    local_30 = local_34;
  }
  bVar3 = local_38 < local_34;
  if (local_24 <= local_30) {
    if (!bVar3) {
      fVar1 = param_3[1] * local_30 + param_2[1];
      if (fVar1 < param_1[1]) {
        return -1.0;
      }
      if (param_1[4] < fVar1) {
        return -1.0;
      }
      fVar1 = param_3[2] * local_30 + param_2[2];
      if (fVar1 < param_1[2]) {
        return -1.0;
      }
      if (fVar1 <= param_1[5]) {
        if (param_4 == (float *)0x0) {
          return local_30;
        }
        param_4[1] = 0.0;
        param_4[2] = 0.0;
        *param_4 = local_28;
        return local_30;
      }
      return -1.0;
    }
    if (bVar3 < 2) {
      fVar1 = *param_3 * local_30 + *param_2;
      if (fVar1 < *param_1) {
        return -1.0;
      }
      if (param_1[3] < fVar1) {
        return -1.0;
      }
      fVar1 = param_3[2] * local_30 + param_2[2];
      if (fVar1 < param_1[2]) {
        return -1.0;
      }
      if (param_1[5] < fVar1) {
        return -1.0;
      }
      if (param_4 == (float *)0x0) {
        return local_30;
      }
      param_4[2] = 0.0;
      *param_4 = 0.0;
      param_4[1] = local_14;
      return local_30;
    }
    if (bVar3 != true) {
      return local_30;
    }
  }
  else {
    local_30 = local_24;
  }
  fVar1 = *param_3 * local_30 + *param_2;
  if ((((*param_1 <= fVar1) && (fVar1 <= param_1[3])) &&
      (fVar1 = param_3[1] * local_30 + param_2[1], param_1[1] <= fVar1)) && (fVar1 <= param_1[4])) {
    if (param_4 != (float *)0x0) {
      param_4[1] = 0.0;
      *param_4 = 0.0;
      param_4[2] = local_3c;
    }
    return local_30;
  }
  return -1.0;
}
