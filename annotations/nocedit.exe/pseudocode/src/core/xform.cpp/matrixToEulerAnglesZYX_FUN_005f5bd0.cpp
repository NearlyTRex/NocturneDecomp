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
  CVector3f *extraout_ECX;
  CVector3f *extraout_ECX_00;
  CVector3f *extraout_ECX_01;
  CVector3f *extraout_ECX_02;
  CVector3f *extraout_ECX_03;
  CVector3f *extraout_ECX_04;
  CVector3f *pCVar3;
  CVector3f *extraout_ECX_05;
  CVector3f *extraout_EDX;
  CVector3f *extraout_EDX_00;
  CVector3f *pCVar4;
  CVector3f *extraout_EDX_01;
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
  
  dVar6 = (double)SQRT(euler_out->z * euler_out->z +
                       euler_out->x * euler_out->x + euler_out->y * euler_out->y);
  if (0.0 < dVar6) {
    dVar6 = 1.0 / dVar6;
  }
  uStack_84 = (uint)((ulonglong)dVar6 >> 0x20);
  local_88 = SUB84 /* extract 2-byte value */(dVar6,0);
  dVar6 = (double)SQRT(euler_out[3].y * euler_out[3].y +
                       euler_out[3].x * euler_out[3].x + euler_out[2].z * euler_out[2].z);
  if (0.0 < dVar6) {
    dVar6 = 1.0 / dVar6;
  }
  local_80 = SUB84 /* extract 2-byte value */(dVar6,0);
  fVar2 = -euler_out[3].x * (float)dVar6;
  if ((float)-1 < fVar2) {
    if ((double)fVar2 < 1.0) {
      fVar5 = crt_math_c_asin_FUN_00600b94((float10)fVar2);
      extraout_ECX_00->x = (float)fVar5;
      dVar6 = (double)SQRT((float10)1 - extraout_ST1 * extraout_ST1);
      if (fVar5 < (float10)-3.1415926535900001) {
        extraout_ECX_00->x = extraout_ECX_00->x + 6.283185f;
      }
      matrix_ptr = (CMatrix3x3f *)extraout_ECX_00;
      euler_out = extraout_EDX;
      if (0.0 < dVar6) {
        dVar6 = 1.0 / dVar6;
        uStack_3c = SUB84 /* extract 2-byte value */(dVar6,0);
        dVar1 = (double)extraout_EDX[2].z * (double)CONCAT44 /* combine 2-byte values */(local_80,uStack_84) * dVar6;
        dVar6 = (double)extraout_EDX[3].y * (double)CONCAT44 /* combine 2-byte values */(local_80,uStack_84) * dVar6;
        uStack_34 = SUB84 /* extract 2-byte value */(dVar1,0);
        local_30 = (uint)((ulonglong)dVar1 >> 0x20);
        uStack_64 = SUB84 /* extract 2-byte value */(dVar6,0);
        if ((0.70699999999999996 <= dVar1) ||
           (dVar1 <= -0.70699999999999996)) {
          pCVar3 = extraout_ECX_00;
          pCVar4 = extraout_EDX;
          if ((-1 < dVar6) && (dVar6 < 1.0)) {
            dVar6 = crt_math_c_acos_FUN_00600162(dVar6);
            local_18 = (float)dVar6;
            pCVar3 = extraout_ECX_04;
            pCVar4 = extraout_EDX_01;
          }
          if ((double)CONCAT44 /* combine 2-byte values */(uStack_34,local_30) < 0.0) {
            local_18 = -local_18;
          }
        }
        else {
          fVar5 = crt_math_c_asin_FUN_00600b94((float10)dVar1);
          local_18 = (float)fVar5;
          pCVar3 = extraout_ECX_01;
          pCVar4 = extraout_EDX_00;
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
        pCVar3->y = local_18;
        fVar2 = pCVar4->y * fVar2 * (float)(double)CONCAT44 /* combine 2-byte values */(uStack_3c,local_40);
        dVar6 = (double)fVar2;
        local_b0 = SUB84 /* extract 2-byte value */(dVar6,0);
        dVar1 = (double)(pCVar4[1].z * (float)(double)CONCAT44 /* combine 2-byte values */(uStack_9c,local_a0) *
                        (float)(double)CONCAT44 /* combine 2-byte values */(uStack_3c,local_40));
        if ((0.70699999999999996 <= dVar6) ||
           (dVar6 <= -0.70699999999999996)) {
          if (-1 < dVar1) {
            if (dVar1 < 1.0) {
              dVar6 = crt_math_c_acos_FUN_00600162(dVar1);
              dVar6 = (double)CONCAT44 /* combine 2-byte values */((float)dVar6,local_b0);
              pCVar3 = extraout_ECX_05;
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
          crt_math_c_asin_FUN_00600b94((float10)fVar2);
          pCVar3 = extraout_ECX_02;
        }
        if (local_20 < (float)-3.1415926535900001) {
          local_20 = local_20 + 6.283185f;
        }
        if ((float)3.1415926535900001 < local_20) {
          local_20 = local_20 + -6.283185f;
        }
        pCVar3->z = local_20;
        return pCVar3;
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
  dVar6 = (double)fVar2;
  dVar1 = (double)(euler_out->x * (float)(double)CONCAT44 /* combine 2-byte values */(local_88,uStack_8c));
  if ((0.70699999999999996 <= dVar6) || (dVar6 <= -0.70699999999999996)) {
    if (-1 < dVar1) {
      if (dVar1 < 1.0) {
        crt_math_c_acos_FUN_00600162(dVar1);
        matrix_ptr = (CMatrix3x3f *)extraout_ECX_03;
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
    matrix_ptr = (CMatrix3x3f *)extraout_ECX;
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
