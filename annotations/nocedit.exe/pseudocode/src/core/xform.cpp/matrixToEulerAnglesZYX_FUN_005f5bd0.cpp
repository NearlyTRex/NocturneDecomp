// Name: core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
// Address: 005f5bd0
// Address Range: [[005f5bd0, 005f610a]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(CMatrix3x3f * matrix_ptr, CVector3f * euler_out)

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(CMatrix3x3f *matrix_ptr,CVector3f *euler_out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float10 fVar5;
  float10 extraout_ST1;
  double dVar6;
  uint local_b0;
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
  
  fVar1 = matrix_ptr->m[0].y;
  fVar2 = matrix_ptr->m[0].x;
  fVar3 = matrix_ptr->m[0].z;
  dVar6 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < dVar6) {
    dVar6 = 1.0 / dVar6;
  }
  uStack_84 = (uint)((ulonglong)dVar6 >> 0x20);
  local_88 = SUB84 /* extract 2-byte value */(dVar6,0);
  fVar1 = matrix_ptr->m[2].z;
  fVar2 = matrix_ptr[1].m[0].x;
  fVar3 = matrix_ptr[1].m[0].y;
  dVar6 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < dVar6) {
    dVar6 = 1.0 / dVar6;
  }
  local_80 = SUB84 /* extract 2-byte value */(dVar6,0);
  fVar1 = -matrix_ptr[1].m[0].x * (float)dVar6;
  if ((float)-1 < fVar1) {
    if ((double)fVar1 < 1.0) {
      fVar5 = crt_math_c_asin_FUN_00600b94((float10)fVar1);
      euler_out->x = (float)fVar5;
      dVar6 = (double)SQRT((float10)1 - extraout_ST1 * extraout_ST1);
      if (fVar5 < (float10)-3.1415926535900001) {
        euler_out->x = euler_out->x + 6.283185f;
      }
      if (0.0 < dVar6) {
        dVar6 = 1.0 / dVar6;
        uStack_3c = SUB84 /* extract 2-byte value */(dVar6,0);
        dVar4 = (double)matrix_ptr->m[2].z * (double)CONCAT44 /* combine 2-byte values */(local_80,uStack_84) * dVar6;
        dVar6 = (double)matrix_ptr[1].m[0].y * (double)CONCAT44 /* combine 2-byte values */(local_80,uStack_84) * dVar6;
        uStack_34 = SUB84 /* extract 2-byte value */(dVar4,0);
        local_30 = (uint)((ulonglong)dVar4 >> 0x20);
        uStack_64 = SUB84 /* extract 2-byte value */(dVar6,0);
        if ((0.70699999999999996 <= dVar4) ||
           (dVar4 <= -0.70699999999999996)) {
          if ((-1 < dVar6) && (dVar6 < 1.0)) {
            dVar6 = crt_math_c_acos_FUN_00600162(dVar6);
            local_18 = (float)dVar6;
          }
          if ((double)CONCAT44 /* combine 2-byte values */(uStack_34,local_30) < 0.0) {
            local_18 = -local_18;
          }
        }
        else {
          fVar5 = crt_math_c_asin_FUN_00600b94((float10)dVar4);
          local_18 = (float)fVar5;
          if ((double)CONCAT44 /* combine 2-byte values */(uStack_64,local_68) < 0.0) {
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
        fVar1 = matrix_ptr->m[0].y * fVar1 * (float)(double)CONCAT44 /* combine 2-byte values */(uStack_3c,local_40);
        dVar6 = (double)fVar1;
        local_b0 = SUB84 /* extract 2-byte value */(dVar6,0);
        dVar4 = (double)(matrix_ptr->m[1].z * (float)(double)CONCAT44 /* combine 2-byte values */(uStack_9c,local_a0) *
                        (float)(double)CONCAT44 /* combine 2-byte values */(uStack_3c,local_40));
        if ((0.70699999999999996 <= dVar6) ||
           (dVar6 <= -0.70699999999999996)) {
          if (-1 < dVar4) {
            if (dVar4 < 1.0) {
              dVar6 = crt_math_c_acos_FUN_00600162(dVar4);
              dVar6 = (double)CONCAT44 /* combine 2-byte values */((float)dVar6,local_b0);
            }
            else {
              local_20 = 0.0;
            }
          }
          else {
            local_20 = 3.1415927;
          }
          if (dVar6 < 0.0) {
            local_20 = -local_20;
          }
        }
        else {
          crt_math_c_asin_FUN_00600b94((float10)fVar1);
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
  uStack_8c = (uint)((ulonglong)(double)fVar1 >> 0x20);
  euler_out->z = 0.0;
  fVar1 = -matrix_ptr->m[0].z * (float)(double)CONCAT44 /* combine 2-byte values */(local_88,uStack_8c);
  dVar6 = (double)fVar1;
  dVar4 = (double)(matrix_ptr->m[0].x * (float)(double)CONCAT44 /* combine 2-byte values */(local_88,uStack_8c));
  if ((0.70699999999999996 <= dVar6) || (dVar6 <= -0.70699999999999996)) {
    if (-1 < dVar4) {
      if (dVar4 < 1.0) {
        crt_math_c_acos_FUN_00600162(dVar4);
      }
      else {
        local_18 = 0.0;
      }
    }
    else {
      local_18 = 3.1415927;
    }
    if (dVar6 < 0.0) {
      local_18 = -local_18;
    }
  }
  else {
    crt_math_c_asin_FUN_00600b94((float10)fVar1);
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
