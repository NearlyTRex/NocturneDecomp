// Name: core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
// Address: 005f5bd0
// Address Range: [[005f5bd0, 005f610a]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(CVector3f * euler_out, CMatrix3x3f * matrix_ptr)

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(CVector3f *euler_out,CMatrix3x3f *matrix_ptr)

{
  double dVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
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
  
  dVar5 = (double)SQRT(euler_out->z * euler_out->z +
                       euler_out->x * euler_out->x + euler_out->y * euler_out->y);
  if (0.0 < dVar5) {
    dVar5 = 1.0 / dVar5;
  }
  uStack_84 = (uint)((ulonglong)dVar5 >> 0x20);
  local_88 = SUB84 /* extract 2-byte value */(dVar5,0);
  dVar5 = (double)SQRT(euler_out[3].y * euler_out[3].y +
                       euler_out[3].x * euler_out[3].x + euler_out[2].z * euler_out[2].z);
  if (0.0 < dVar5) {
    dVar5 = 1.0 / dVar5;
  }
  local_80 = SUB84 /* extract 2-byte value */(dVar5,0);
  fVar2 = -euler_out[3].x * (float)dVar5;
  if ((float)-1 < fVar2) {
    if ((double)fVar2 < 1.0) {
      fVar3 = (float10)fVar2;
      fVar4 = crt_math_c_asin_FUN_00600b94(fVar3);
      matrix_ptr->m[0].x = (float)fVar4;
      dVar5 = (double)SQRT((float10)1 - fVar3 * fVar3);
      if (fVar4 < (float10)-3.1415926535900001) {
        matrix_ptr->m[0].x = matrix_ptr->m[0].x + 6.283185f;
      }
      if (0.0 < dVar5) {
        dVar5 = 1.0 / dVar5;
        uStack_3c = SUB84 /* extract 2-byte value */(dVar5,0);
        dVar1 = (double)euler_out[2].z * (double)CONCAT44 /* combine 2-byte values */(local_80,uStack_84) * dVar5;
        dVar5 = (double)euler_out[3].y * (double)CONCAT44 /* combine 2-byte values */(local_80,uStack_84) * dVar5;
        uStack_34 = SUB84 /* extract 2-byte value */(dVar1,0);
        local_30 = (uint)((ulonglong)dVar1 >> 0x20);
        uStack_64 = SUB84 /* extract 2-byte value */(dVar5,0);
        if ((0.70699999999999996 <= dVar1) ||
           (dVar1 <= -0.70699999999999996)) {
          if ((-1 < dVar5) && (dVar5 < 1.0)) {
            dVar5 = crt_math_c_acos_FUN_00600162(dVar5);
            local_18 = (float)dVar5;
          }
          if ((double)CONCAT44 /* combine 2-byte values */(uStack_34,local_30) < 0.0) {
            local_18 = -local_18;
          }
        }
        else {
          fVar3 = crt_math_c_asin_FUN_00600b94((float10)dVar1);
          local_18 = (float)fVar3;
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
        matrix_ptr->m[0].y = local_18;
        fVar2 = euler_out->y * fVar2 * (float)(double)CONCAT44 /* combine 2-byte values */(uStack_3c,local_40);
        dVar5 = (double)fVar2;
        local_b0 = SUB84 /* extract 2-byte value */(dVar5,0);
        dVar1 = (double)(euler_out[1].z * (float)(double)CONCAT44 /* combine 2-byte values */(uStack_9c,local_a0) *
                        (float)(double)CONCAT44 /* combine 2-byte values */(uStack_3c,local_40));
        if ((0.70699999999999996 <= dVar5) ||
           (dVar5 <= -0.70699999999999996)) {
          if (-1 < dVar1) {
            if (dVar1 < 1.0) {
              dVar5 = crt_math_c_acos_FUN_00600162(dVar1);
              dVar5 = (double)CONCAT44 /* combine 2-byte values */((float)dVar5,local_b0);
            }
            else {
              local_20 = 0.0;
            }
          }
          else {
            local_20 = 3.1415927;
          }
          if (dVar5 < 0.0) {
            local_20 = -local_20;
          }
        }
        else {
          crt_math_c_asin_FUN_00600b94((float10)fVar2);
        }
        if (local_20 < (float)-3.1415926535900001) {
          local_20 = local_20 + 6.283185f;
        }
        if ((float)3.1415926535900001 < local_20) {
          local_20 = local_20 + -6.283185f;
        }
        matrix_ptr->m[0].z = local_20;
        return matrix_ptr->m;
      }
    }
    else {
      matrix_ptr->m[0].x = 1.5707964;
    }
  }
  else {
    matrix_ptr->m[0].x = -1.5707964;
  }
  uStack_8c = (uint)((ulonglong)(double)fVar2 >> 0x20);
  matrix_ptr->m[0].z = 0.0;
  fVar2 = -euler_out->z * (float)(double)CONCAT44 /* combine 2-byte values */(local_88,uStack_8c);
  dVar5 = (double)fVar2;
  dVar1 = (double)(euler_out->x * (float)(double)CONCAT44 /* combine 2-byte values */(local_88,uStack_8c));
  if ((0.70699999999999996 <= dVar5) || (dVar5 <= -0.70699999999999996)) {
    if (-1 < dVar1) {
      if (dVar1 < 1.0) {
        crt_math_c_acos_FUN_00600162(dVar1);
      }
      else {
        local_18 = 0.0;
      }
    }
    else {
      local_18 = 3.1415927;
    }
    if (dVar5 < 0.0) {
      local_18 = -local_18;
    }
  }
  else {
    crt_math_c_asin_FUN_00600b94((float10)fVar2);
  }
  if (local_18 < (float)-3.1415926535900001) {
    local_18 = local_18 + 6.283185f;
  }
  if ((float)3.1415926535900001 < local_18) {
    local_18 = local_18 + -6.283185f;
  }
  matrix_ptr->m[0].y = local_18;
  return matrix_ptr->m;
}
