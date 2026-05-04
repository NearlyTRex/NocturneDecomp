// Name: core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
// Address: 005f5bd0
// Address Range: [[005f5bd0, 005f610a]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(CMatrix3x4f *matrix_ptr,CVector3f *euler_out)

#include "nocturne.h"

CVector3f * __cdecl core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(CMatrix3x4f *matrix_ptr,CVector3f *euler_out)

{
  float fVar4;
  float fVar7;
  float fVar8;
  double dVar9;
  float10 fVar5;
  float10 fVar6;
  float10 fVar10;
  double dVar11;
  double dVar7;
  uint local_b0;
  double local_a0;
  double local_8c;
  double local_84;
  double local_68;
  double local_40;
  double local_34;
  float local_20;
  float local_18;
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  fVar1 = matrix_ptr->m[0].x;
  fVar2 = matrix_ptr->m[0].w;
  fVar3 = matrix_ptr->m[0].y;
  dVar11 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < dVar11) {
    dVar11 = 1.0 / dVar11;
  }
  local_84._0_4_ = (uint)((ulonglong)dVar11 >> 0x20);
  local_8c._4_4_ = SUB84(__BITCAST_UINT64(dVar11),0);
  fVar4 = matrix_ptr->m[2].w;
  fVar7 = matrix_ptr->m[2].x;
  fVar8 = matrix_ptr->m[2].y;
  dVar11 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar4 * fVar4);
  if (0.0 < dVar11) {
    dVar11 = 1.0 / dVar11;
  }
  local_84._4_4_ = SUB84(__BITCAST_UINT64(dVar11),0);
  fVar4 = -matrix_ptr->m[2].x * (float)dVar11;
  if ((float)-1 < fVar4) {
    if ((double)fVar4 < 1.0) {
      fVar5 = (float10)fVar4;
      fVar6 = asin(fVar5);
      euler_out->x = (float)fVar6;
      dVar11 = (double)SQRT((float10)1 - fVar5 * fVar5);
      if (fVar6 < (float10)-3.1415926535900001) {
        euler_out->x = euler_out->x + 6.283185f;
      }
      if (0.0 < dVar11) {
        dVar11 = 1.0 / dVar11;
        local_40._4_4_ = SUB84(__BITCAST_UINT64(dVar11),0);
        dVar9 = (double)matrix_ptr->m[2].w * __BITCAST_DOUBLE(CONCAT44(local_84._4_4_,local_84._0_4_)) *
                dVar11;
        dVar11 = (double)matrix_ptr->m[2].y * __BITCAST_DOUBLE(CONCAT44(local_84._4_4_,local_84._0_4_)) *
                 dVar11;
        local_34._0_4_ = SUB84(__BITCAST_UINT64(dVar9),0);
        local_34._4_4_ = (uint)((ulonglong)dVar9 >> 0x20);
        local_68._4_4_ = SUB84(__BITCAST_UINT64(dVar11),0);
        if ((0.70699999999999996 <= dVar9) ||
           (dVar9 <= -0.70699999999999996)) {
          if ((-1 < dVar11) && (dVar11 < 1.0)) {
            dVar11 = acos(dVar11);
            local_18 = (float)dVar11;
          }
          if (__BITCAST_DOUBLE(CONCAT44(local_34._0_4_,local_34._4_4_)) < 0.0) {
            local_18 = -local_18;
          }
        }
        else {
          fVar10 = asin((float10)dVar9);
          local_18 = (float)fVar10;
          if (__BITCAST_DOUBLE(CONCAT44(local_68._4_4_,local_68._0_4_)) < 0.0) {
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
        fVar4 = matrix_ptr->m[0].x * fVar4 * (float)__BITCAST_DOUBLE(CONCAT44(local_40._4_4_,local_40._0_4_));
        dVar11 = (double)fVar4;
        local_b0 = SUB84(__BITCAST_UINT64(dVar11),0);
        dVar9 = (double)(matrix_ptr->m[1].x * (float)__BITCAST_DOUBLE(CONCAT44(local_a0._4_4_,local_a0._0_4_))
                        * (float)__BITCAST_DOUBLE(CONCAT44(local_40._4_4_,local_40._0_4_)));
        if ((0.70699999999999996 <= dVar11) ||
           (dVar11 <= -0.70699999999999996)) {
          if (-1 < dVar9) {
            if (dVar9 < 1.0) {
              dVar7 = acos(dVar9);
              dVar11 = __BITCAST_DOUBLE(CONCAT44((float)dVar7,local_b0));
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
          asin((float10)fVar4);
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
  local_8c._0_4_ = (uint)((ulonglong)(double)fVar4 >> 0x20);
  euler_out->z = 0.0;
  fVar4 = -matrix_ptr->m[0].y * (float)__BITCAST_DOUBLE(CONCAT44(local_8c._4_4_,local_8c._0_4_));
  dVar11 = (double)fVar4;
  dVar4 = (double)(matrix_ptr->m[0].w * (float)__BITCAST_DOUBLE(CONCAT44(local_8c._4_4_,local_8c._0_4_)));
  if ((0.70699999999999996 <= dVar11) || (dVar11 <= -0.70699999999999996))
  {
    if (-1 < dVar4) {
      if (dVar4 < 1.0) {
        acos(dVar4);
      }
      else {
        local_18 = 0.0;
      }
    }
    else {
      local_18 = 3.1415927;
    }
    if (dVar11 < 0.0) {
      local_18 = -local_18;
    }
  }
  else {
    asin((float10)fVar4);
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
