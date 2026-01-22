// Name: core_xform.cpp_matrixToEulerAngles_FUN_005f5690
// Address: 005f5690
// Address Range: [[005f5690, 005f5bca]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CVector3f * euler_out, CMatrix3x3f * matrix_ptr)

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_matrixToEulerAngles_FUN_005f5690(CVector3f *euler_out,CMatrix3x3f *matrix_ptr)

{
  double dVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  double dVar6;
  uint local_b0;
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
  
  dVar6 = (double)SQRT(euler_out->z * euler_out->z +
                       euler_out->x * euler_out->x + euler_out->y * euler_out->y);
  if (0.0 < dVar6) {
    dVar6 = 1.0 / dVar6;
  }
  local_98 = SUB84 /* extract 2-byte value */(dVar6,0);
  fVar2 = SQRT(euler_out[2].x * euler_out[2].x +
               euler_out[1].z * euler_out[1].z + euler_out[1].y * euler_out[1].y);
  if (0.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
  }
  dVar6 = (double)SQRT(euler_out[3].y * euler_out[3].y +
                       euler_out[3].x * euler_out[3].x + euler_out[2].z * euler_out[2].z);
  if (0.0 < dVar6) {
    dVar6 = 1.0 / dVar6;
  }
  local_88 = SUB84 /* extract 2-byte value */(dVar6,0);
  fVar2 = -euler_out[2].x * fVar2;
  uStack_8c = (uint)((ulonglong)(double)fVar2 >> 0x20);
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
        fVar2 = euler_out->z * (float)(double)CONCAT44 /* combine 2-byte values */(local_98,uStack_9c) * (float)dVar5;
        dVar1 = (double)fVar2;
        uStack_34 = SUB84 /* extract 2-byte value */(dVar1,0);
        local_30 = (uint)((ulonglong)dVar1 >> 0x20);
        dVar5 = (double)(euler_out[3].y * (float)(double)CONCAT44 /* combine 2-byte values */(local_88,uStack_8c) * (float)dVar5
                        );
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
          fVar3 = crt_math_c_asin_FUN_00600b94((float10)fVar2);
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
        dVar5 = (double)euler_out[1].y * dVar6 * (double)CONCAT44 /* combine 2-byte values */(uStack_3c,local_40);
        dVar6 = (double)euler_out[1].z * dVar6 * (double)CONCAT44 /* combine 2-byte values */(uStack_3c,local_40);
        local_b0 = SUB84 /* extract 2-byte value */(dVar5,0);
        if ((0.70699999999999996 <= dVar5) ||
           (dVar5 <= -0.70699999999999996)) {
          if (-1 < dVar6) {
            if (dVar6 < 1.0) {
              dVar6 = crt_math_c_acos_FUN_00600162(dVar6);
              dVar5 = (double)CONCAT44 /* combine 2-byte values */((float)dVar6,local_b0);
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
          crt_math_c_asin_FUN_00600b94((float10)dVar5);
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
  matrix_ptr->m[0].z = 0.0;
  fVar2 = -euler_out[2].z * (float)(double)CONCAT44 /* combine 2-byte values */(local_88,uStack_8c);
  dVar6 = (double)fVar2;
  dVar5 = (double)(euler_out->x * (float)(double)CONCAT44 /* combine 2-byte values */(local_98,uStack_9c));
  if ((0.70699999999999996 <= dVar6) ||
     (dVar6 <= -0.70699999999999996)) {
    if (-1 < dVar5) {
      if (dVar5 < 1.0) {
        crt_math_c_acos_FUN_00600162(dVar5);
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
