// Name: core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0
// Address: 0044dbd0
// Address Range: [[0044dbd0, 0044dfa6]]
// Convention: unknown
// Signature: float * core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(float *param_1,float *param_2)

#include "nocturne.h"

float * core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(float *param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  uint uStack_98;
  uint uStack_94;
  uint uStack_84;
  uint local_80;
  uint local_68;
  uint uStack_5c;
  float fStack_24;
  float local_20;
  
  fVar3 = -param_1[5];
  fStack_24 = (float)((ulonglong)(double)fVar3 >> 0x20);
  if (fVar3 <= (float)-1) {
    *param_2 = -1.5707964;
  }
  else if ((double)fVar3 < 1.0) {
    fVar5 = (float10)fVar3;
    fVar6 = (float10)asin(fVar5);
    fVar5 = SQRT((float10)1 - fVar5 * fVar5);
    *param_2 = (float)fVar6;
    dVar1 = (double)fVar5;
    uStack_94 = SUB84(__BITCAST_UINT64(dVar1),0);
    if (0.0 < dVar1) {
      fVar3 = 1.0 / (float)fVar5;
      fVar4 = param_1[2] * fVar3;
      fVar3 = param_1[8] * fVar3;
      dVar1 = (double)fVar4;
      uStack_84 = SUB84(__BITCAST_UINT64(dVar1),0);
      local_80 = (uint)((ulonglong)dVar1 >> 0x20);
      dVar2 = (double)fVar3;
      uStack_5c = SUB84(__BITCAST_UINT64(dVar2),0);
      if ((0.70699999999999996 <= dVar1) || (dVar1 <= -0.70699999999999996)) {
        if ((-1 < dVar2) && (dVar2 < 1.0)) {
          uStack_98 = 0x44df4f;
          fVar5 = (float10)acos((float10)fVar3);
          local_20 = (float)fVar5;
        }
        if (__BITCAST_DOUBLE(CONCAT44(uStack_84,local_68)) < 0.0) {
          local_20 = -local_20;
        }
      }
      else {
        uStack_98 = 0x44dd7f;
        fVar5 = (float10)asin((float10)fVar4);
        local_20 = (float)fVar5;
        if (__BITCAST_DOUBLE(CONCAT44(uStack_5c,local_80)) < 0.0) {
          local_20 = (float)3.1415926535900001 - local_20;
        }
      }
      if (local_20 < (float)-3.1415926535900001) {
        local_20 = local_20 + 6.283185f;
      }
      if ((float)3.1415926535900001 < local_20) {
        local_20 = local_20 + -6.283185f;
      }
      param_2[1] = local_20;
      fVar3 = 1.0 / (float)__BITCAST_DOUBLE(CONCAT44(uStack_94,uStack_98));
      fVar4 = param_1[3] * fVar3;
      fVar3 = param_1[4] * fVar3;
      dVar1 = (double)fVar4;
      dVar2 = (double)fVar3;
      if ((0.70699999999999996 <= dVar1) || (dVar1 <= -0.70699999999999996)) {
        if (-1 < dVar2) {
          if (dVar2 < 1.0) {
            acos((float10)fVar3);
          }
          else {
            fStack_24 = 0.0;
          }
        }
        else {
          fStack_24 = 3.1415927;
        }
        if (dVar1 < 0.0) {
          fStack_24 = -fStack_24;
        }
      }
      else {
        asin((float10)fVar4);
      }
      if (fStack_24 < (float)-3.1415926535900001) {
        fStack_24 = fStack_24 + 6.283185f;
      }
      if ((float)3.1415926535900001 < fStack_24) {
        fStack_24 = fStack_24 + -6.283185f;
      }
      param_2[2] = fStack_24;
      return param_2;
    }
  }
  else {
    *param_2 = 1.5707964;
  }
  param_2[2] = 0.0;
  dVar1 = (double)-param_1[6];
  dVar2 = (double)*param_1;
  if ((0.70699999999999996 <= dVar1) || (dVar1 <= -0.70699999999999996)) {
    if (-1 < dVar2) {
      if (dVar2 < 1.0) {
        acos((float10)*param_1);
      }
      else {
        fStack_24 = 0.0;
      }
    }
    else {
      fStack_24 = 3.1415927;
    }
    if (dVar1 < 0.0) {
      fStack_24 = -fStack_24;
    }
  }
  else {
    asin((float10)-param_1[6]);
  }
  if (fStack_24 < (float)-3.1415926535900001) {
    fStack_24 = fStack_24 + 6.283185f;
  }
  if ((float)3.1415926535900001 < fStack_24) {
    fStack_24 = fStack_24 + -6.283185f;
  }
  param_2[1] = fStack_24;
  return param_2;
}
