// Name: core_xform.cpp_matrixToEulerAnglesZYX_FUN_0055b6c0
// Address: 0055b6c0
// Address Range: [[0055b6c0, 0055bbfa]]
// Convention: __cdecl
// Signature: float * __cdecl core_xform_cpp_matrixToEulerAnglesZYX_FUN_0055b6c0(float *param_1,float *param_2)

#include "nocturne.h"

float * __cdecl core_xform_cpp_matrixToEulerAnglesZYX_FUN_0055b6c0(float *param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  uint uStack_b0;
  uint local_a0;
  uint uStack_9c;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint local_80;
  uint local_68;
  uint uStack_64;
  uint local_40;
  uint uStack_3c;
  uint uStack_34;
  uint local_30;
  float local_20;
  float local_18;
  
  dVar1 = (double)SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  if (0.0 < dVar1) {
    dVar1 = 1.0 / dVar1;
  }
  uStack_84 = (uint)((ulonglong)dVar1 >> 0x20);
  local_88 = SUB84(__BITCAST_UINT64(dVar1),0);
  dVar1 = (double)SQRT(param_1[10] * param_1[10] + param_1[9] * param_1[9] + param_1[8] * param_1[8]
                      );
  if (0.0 < dVar1) {
    dVar1 = 1.0 / dVar1;
  }
  local_80 = SUB84(__BITCAST_UINT64(dVar1),0);
  fVar3 = -param_1[9] * (float)dVar1;
  if ((float)-1 < fVar3) {
    if ((double)fVar3 < 1.0) {
      fVar5 = (float10)fVar3;
      fVar6 = (float10)asin(fVar5);
      *param_2 = (float)fVar6;
      dVar1 = (double)SQRT((float10)1 - fVar5 * fVar5);
      if (fVar6 < (float10)-3.1415926535900001) {
        *param_2 = *param_2 + 5.3700914947311079e-315._0_4_;
      }
      if (0.0 < dVar1) {
        dVar1 = 1.0 / dVar1;
        uStack_3c = SUB84(__BITCAST_UINT64(dVar1),0);
        dVar2 = (double)param_1[8] * __BITCAST_DOUBLE(CONCAT44(local_80,uStack_84)) * dVar1;
        dVar1 = (double)param_1[10] * __BITCAST_DOUBLE(CONCAT44(local_80,uStack_84)) * dVar1;
        uStack_34 = SUB84(__BITCAST_UINT64(dVar2),0);
        local_30 = (uint)((ulonglong)dVar2 >> 0x20);
        uStack_64 = SUB84(__BITCAST_UINT64(dVar1),0);
        if ((0.70699999999999996 <= dVar2) || (dVar2 <= -0.70699999999999996)) {
          if ((-1 < dVar1) && (dVar1 < 1.0)) {
            fVar5 = (float10)acos((float10)dVar1);
            local_18 = (float)fVar5;
          }
          if (__BITCAST_DOUBLE(CONCAT44(uStack_34,local_30)) < 0.0) {
            local_18 = -local_18;
          }
        }
        else {
          fVar5 = (float10)asin((float10)dVar2);
          local_18 = (float)fVar5;
          if (__BITCAST_DOUBLE(CONCAT44(uStack_64,local_68)) < 0.0) {
            local_18 = (float)3.1415926535900001 - local_18;
          }
        }
        if (local_18 < (float)-3.1415926535900001) {
          local_18 = local_18 + 5.3700914947311079e-315._0_4_;
        }
        if ((float)3.1415926535900001 < local_18) {
          local_18 = local_18 + -6.283185f;
        }
        param_2[1] = local_18;
        fVar3 = param_1[1] * fVar3 * (float)__BITCAST_DOUBLE(CONCAT44(uStack_3c,local_40));
        fVar4 = param_1[5] * (float)__BITCAST_DOUBLE(CONCAT44(uStack_9c,local_a0)) *
                (float)__BITCAST_DOUBLE(CONCAT44(uStack_3c,local_40));
        dVar1 = (double)fVar3;
        uStack_b0 = SUB84(__BITCAST_UINT64(dVar1),0);
        dVar2 = (double)fVar4;
        if ((0.70699999999999996 <= dVar1) || (dVar1 <= -0.70699999999999996)) {
          if (-1 < dVar2) {
            if (dVar2 < 1.0) {
              fVar5 = (float10)acos((float10)fVar4);
              dVar1 = __BITCAST_DOUBLE(CONCAT44((float)fVar5,uStack_b0));
            }
            else {
              local_20 = 0.0;
            }
          }
          else {
            local_20 = 3.1415927;
          }
          if (dVar1 < 0.0) {
            local_20 = -local_20;
          }
        }
        else {
          asin((float10)fVar3);
        }
        if (local_20 < (float)-3.1415926535900001) {
          local_20 = local_20 + 5.3700914947311079e-315._0_4_;
        }
        if ((float)3.1415926535900001 < local_20) {
          local_20 = local_20 + -6.283185f;
        }
        param_2[2] = local_20;
        return param_2;
      }
    }
    else {
      *param_2 = 1.5707964;
    }
  }
  else {
    *param_2 = -1.5707964;
  }
  uStack_8c = (uint)((ulonglong)(double)fVar3 >> 0x20);
  param_2[2] = 0.0;
  fVar3 = -param_1[2] * (float)__BITCAST_DOUBLE(CONCAT44(local_88,uStack_8c));
  fVar4 = *param_1 * (float)__BITCAST_DOUBLE(CONCAT44(local_88,uStack_8c));
  dVar1 = (double)fVar3;
  dVar2 = (double)fVar4;
  if ((0.70699999999999996 <= dVar1) || (dVar1 <= -0.70699999999999996)) {
    if (-1 < dVar2) {
      if (dVar2 < 1.0) {
        acos((float10)fVar4);
      }
      else {
        local_18 = 0.0;
      }
    }
    else {
      local_18 = 3.1415927;
    }
    if (dVar1 < 0.0) {
      local_18 = -local_18;
    }
  }
  else {
    asin((float10)fVar3);
  }
  if (local_18 < (float)-3.1415926535900001) {
    local_18 = local_18 + 5.3700914947311079e-315._0_4_;
  }
  if ((float)3.1415926535900001 < local_18) {
    local_18 = local_18 + -6.283185f;
  }
  param_2[1] = local_18;
  return param_2;
}
