// Name: core_xform.cpp_matrixToEulerAngles_FUN_0055b180
// Address: 0055b180
// Address Range: [[0055b180, 0055b6ba]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f *matrix_in,CVector3f *euler_out)

#include "nocturne.h"

CVector3f * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f *matrix_in,CVector3f *euler_out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  double dVar9;
  uint uStack_b0;
  uint uStack_9c;
  uint local_98;
  uint uStack_8c;
  uint local_88;
  uint local_68;
  uint uStack_64;
  uint local_40;
  uint uStack_3c;
  uint uStack_34;
  uint local_30;
  float local_20;
  float local_18;
  
  fVar1 = matrix_in->m[0].x;
  fVar2 = matrix_in->m[0].w;
  fVar3 = matrix_in->m[0].y;
  dVar9 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < dVar9) {
    dVar9 = 1.0 / dVar9;
  }
  local_98 = SUB84(__BITCAST_UINT64(dVar9),0);
  fVar1 = matrix_in->m[1].w;
  fVar2 = matrix_in->m[1].x;
  fVar3 = matrix_in->m[1].y;
  fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < fVar1) {
    fVar1 = 1.0 / fVar1;
  }
  fVar2 = matrix_in->m[2].w;
  fVar3 = matrix_in->m[2].x;
  fVar4 = matrix_in->m[2].y;
  dVar9 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (0.0 < dVar9) {
    dVar9 = 1.0 / dVar9;
  }
  local_88 = SUB84(__BITCAST_UINT64(dVar9),0);
  fVar1 = -matrix_in->m[1].y * fVar1;
  uStack_8c = (uint)((ulonglong)(double)fVar1 >> 0x20);
  if ((float)-1 < fVar1) {
    if ((double)fVar1 < 1.0) {
      fVar6 = (float10)fVar1;
      fVar7 = asin(fVar6);
      euler_out->x = (float)fVar7;
      dVar8 = (double)SQRT((float10)1 - fVar6 * fVar6);
      if (fVar7 < (float10)-3.1415926535900001) {
        euler_out->x = euler_out->x + 5.3700914947311079e-315._0_4_;
      }
      if (0.0 < dVar8) {
        dVar8 = 1.0 / dVar8;
        uStack_3c = SUB84(__BITCAST_UINT64(dVar8),0);
        fVar1 = matrix_in->m[0].y * (float)__BITCAST_DOUBLE(CONCAT44(local_98,uStack_9c)) * (float)dVar8;
        dVar5 = (double)fVar1;
        uStack_34 = SUB84(__BITCAST_UINT64(dVar5),0);
        local_30 = (uint)((ulonglong)dVar5 >> 0x20);
        dVar8 = (double)(matrix_in->m[2].y * (float)__BITCAST_DOUBLE(CONCAT44(local_88,uStack_8c)) *
                        (float)dVar8);
        uStack_64 = SUB84(__BITCAST_UINT64(dVar8),0);
        if ((0.70699999999999996 <= dVar5) || (dVar5 <= -0.70699999999999996)) {
          if ((-1 < dVar8) && (dVar8 < 1.0)) {
            dVar8 = acos(dVar8);
            local_18 = (float)dVar8;
          }
          if (__BITCAST_DOUBLE(CONCAT44(uStack_34,local_30)) < 0.0) {
            local_18 = -local_18;
          }
        }
        else {
          fVar6 = asin((float10)fVar1);
          local_18 = (float)fVar6;
          if (__BITCAST_DOUBLE(CONCAT44(uStack_64,local_68)) < 0.0) {
            local_18 = (float)3.1415926535900001 - local_18;
          }
        }
        if (local_18 < (float)-3.1415926535900001) {
          local_18 = local_18 + 5.3700914947311079e-315._0_4_;
        }
        if ((float)3.1415926535900001 < local_18) {
          local_18 = local_18 + 1.5980070449557469e-314._0_4_;
        }
        euler_out->y = local_18;
        dVar8 = (double)matrix_in->m[1].w * dVar9 * __BITCAST_DOUBLE(CONCAT44(uStack_3c,local_40));
        dVar9 = (double)matrix_in->m[1].x * dVar9 * __BITCAST_DOUBLE(CONCAT44(uStack_3c,local_40));
        uStack_b0 = SUB84(__BITCAST_UINT64(dVar8),0);
        if ((0.70699999999999996 <= dVar8) || (dVar8 <= -0.70699999999999996)) {
          if (-1 < dVar9) {
            if (dVar9 < 1.0) {
              dVar9 = acos(dVar9);
              dVar8 = __BITCAST_DOUBLE(CONCAT44((float)dVar9,uStack_b0));
            }
            else {
              local_20 = 0.0;
            }
          }
          else {
            local_20 = 3.1415927;
          }
          if (dVar8 < 0.0) {
            local_20 = -local_20;
          }
        }
        else {
          asin((float10)dVar8);
        }
        if (local_20 < (float)-3.1415926535900001) {
          local_20 = local_20 + 5.3700914947311079e-315._0_4_;
        }
        if ((float)3.1415926535900001 < local_20) {
          local_20 = local_20 + 1.5980070449557469e-314._0_4_;
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
  fVar1 = -matrix_in->m[2].w * (float)__BITCAST_DOUBLE(CONCAT44(local_88,uStack_8c));
  dVar9 = (double)fVar1;
  dVar8 = (double)(matrix_in->m[0].w * (float)__BITCAST_DOUBLE(CONCAT44(local_98,uStack_9c)));
  if ((0.70699999999999996 <= dVar9) || (dVar9 <= -0.70699999999999996)) {
    if (-1 < dVar8) {
      if (dVar8 < 1.0) {
        acos(dVar8);
      }
      else {
        local_18 = 0.0;
      }
    }
    else {
      local_18 = 3.1415927;
    }
    if (dVar9 < 0.0) {
      local_18 = -local_18;
    }
  }
  else {
    asin((float10)fVar1);
  }
  if (local_18 < (float)-3.1415926535900001) {
    local_18 = local_18 + 5.3700914947311079e-315._0_4_;
  }
  if ((float)3.1415926535900001 < local_18) {
    local_18 = local_18 + 1.5980070449557469e-314._0_4_;
  }
  euler_out->y = local_18;
  return euler_out;
}
