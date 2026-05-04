// Name: core_xform.cpp_matrixToEulerAngles_FUN_005f5690
// Address: 005f5690
// Address Range: [[005f5690, 005f5bca]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x4f *matrix_in,CVector3f *euler_out)

#include "nocturne.h"

CVector3f * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x4f *matrix_in,CVector3f *euler_out)

{
  float fVar5;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float10 fVar6;
  float10 fVar7;
  float10 fVar12;
  double dVar8;
  double dVar9;
  uint local_b0;
  double local_9c;
  double local_8c;
  double uStack_64;
  double uStack_3c;
  double local_34;
  float local_20;
  float local_18;
  double dVar5;
  float fVar3;
  float fVar4;
  float fVar1;
  float fVar2;
  
  fVar1 = matrix_in->m[0].x;
  fVar2 = matrix_in->m[0].w;
  fVar3 = matrix_in->m[0].y;
  dVar10 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < dVar10) {
    dVar10 = 1.0 / dVar10;
  }
  local_9c._4_4_ = SUB84(__BITCAST_UINT64(dVar10),0);
  fVar5 = matrix_in->m[1].w;
  fVar8 = matrix_in->m[1].x;
  fVar9 = matrix_in->m[1].y;
  fVar5 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar5 * fVar5);
  if (0.0 < fVar5) {
    fVar5 = 1.0 / fVar5;
  }
  fVar8 = matrix_in->m[2].w;
  fVar9 = matrix_in->m[2].x;
  fVar4 = matrix_in->m[2].y;
  dVar10 = (double)SQRT(fVar4 * fVar4 + fVar9 * fVar9 + fVar8 * fVar8);
  if (0.0 < dVar10) {
    dVar10 = 1.0 / dVar10;
  }
  local_8c._4_4_ = SUB84(__BITCAST_UINT64(dVar10),0);
  fVar5 = -matrix_in->m[1].y * fVar5;
  local_8c._0_4_ = (uint)((ulonglong)(double)fVar5 >> 0x20);
  if ((float)-1 < fVar5) {
    if ((double)fVar5 < 1.0) {
      fVar6 = (float10)fVar5;
      fVar7 = asin(fVar6);
      euler_out->x = (float)fVar7;
      dVar11 = (double)SQRT((float10)1 - fVar6 * fVar6);
      if (fVar7 < (float10)-3.1415926535900001) {
        euler_out->x = euler_out->x + 6.283185f;
      }
      if (0.0 < dVar11) {
        dVar11 = 1.0 / dVar11;
        uStack_3c._4_4_ = SUB84(__BITCAST_UINT64(dVar11),0);
        fVar5 = matrix_in->m[0].y * (float)__BITCAST_DOUBLE(CONCAT44(local_9c._4_4_,local_9c._0_4_)) *
                (float)dVar11;
        dVar5 = (double)fVar5;
        local_34._0_4_ = SUB84(__BITCAST_UINT64(dVar5),0);
        local_34._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
        dVar11 = (double)(matrix_in->m[2].y * (float)__BITCAST_DOUBLE(CONCAT44(local_8c._4_4_,local_8c._0_4_))
                         * (float)dVar11);
        uStack_64._4_4_ = SUB84(__BITCAST_UINT64(dVar11),0);
        if ((0.70699999999999996 <= dVar5) ||
           (dVar5 <= -0.70699999999999996)) {
          if ((-1 < dVar11) && (dVar11 < 1.0)) {
            dVar8 = acos(dVar11);
            local_18 = (float)dVar8;
          }
          if (__BITCAST_DOUBLE(CONCAT44(local_34._0_4_,local_34._4_4_)) < 0.0) {
            local_18 = -local_18;
          }
        }
        else {
          fVar12 = asin((float10)fVar5);
          local_18 = (float)fVar12;
          if (__BITCAST_DOUBLE(CONCAT44(uStack_64._4_4_,uStack_64._0_4_)) < 0.0) {
            local_18 = (float)3.1415926535900001 - local_18;
          }
        }
        if (local_18 < (float)-3.1415926535900001) {
          local_18 = local_18 + 6.283185f;
        }
        if ((float)3.1415926535900001 < local_18) {
          local_18 = local_18 + -6.283185f;
        }
        euler_out->y = local_18;
        dVar11 = (double)matrix_in->m[1].w * dVar10 *
                 __BITCAST_DOUBLE(CONCAT44(uStack_3c._4_4_,uStack_3c._0_4_));
        dVar10 = (double)matrix_in->m[1].x * dVar10 *
                 __BITCAST_DOUBLE(CONCAT44(uStack_3c._4_4_,uStack_3c._0_4_));
        local_b0 = SUB84(__BITCAST_UINT64(dVar11),0);
        if ((0.70699999999999996 <= dVar11) ||
           (dVar11 <= -0.70699999999999996)) {
          if (-1 < dVar10) {
            if (dVar10 < 1.0) {
              dVar9 = acos(dVar10);
              dVar11 = __BITCAST_DOUBLE(CONCAT44((float)dVar9,local_b0));
            }
            else {
              local_20 = 0.0;
            }
          }
          else {
            local_20 = 3.1415927;
          }
          if (dVar11 < 0.0) {
            local_20 = -local_20;
          }
        }
        else {
          asin((float10)dVar11);
        }
        if (local_20 < (float)-3.1415926535900001) {
          local_20 = local_20 + 6.283185f;
        }
        if ((float)3.1415926535900001 < local_20) {
          local_20 = local_20 + -6.283185f;
        }
        euler_out->z = local_20;
        return euler_out;
      }
    }
    else {
      euler_out->x = 1.5707964;
    }
  }
  else {
    euler_out->x = -1.5707964;
  }
  euler_out->z = 0.0;
  fVar5 = -matrix_in->m[2].w * (float)__BITCAST_DOUBLE(CONCAT44(local_8c._4_4_,local_8c._0_4_));
  dVar10 = (double)fVar5;
  dVar11 = (double)(matrix_in->m[0].w * (float)__BITCAST_DOUBLE(CONCAT44(local_9c._4_4_,local_9c._0_4_)));
  if ((0.70699999999999996 <= dVar10) ||
     (dVar10 <= -0.70699999999999996)) {
    if (-1 < dVar11) {
      if (dVar11 < 1.0) {
        acos(dVar11);
      }
      else {
        local_18 = 0.0;
      }
    }
    else {
      local_18 = 3.1415927;
    }
    if (dVar10 < 0.0) {
      local_18 = -local_18;
    }
  }
  else {
    asin((float10)fVar5);
  }
  if (local_18 < (float)-3.1415926535900001) {
    local_18 = local_18 + 6.283185f;
  }
  if ((float)3.1415926535900001 < local_18) {
    local_18 = local_18 + -6.283185f;
  }
  euler_out->y = local_18;
  return euler_out;
}
