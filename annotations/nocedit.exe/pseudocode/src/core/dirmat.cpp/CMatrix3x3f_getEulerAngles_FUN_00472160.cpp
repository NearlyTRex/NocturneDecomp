// Name: core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
// Address: 00472160
// Address Range: [[00472160, 00472536]]
// Convention: __cdecl
// Signature: CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles)

#include "nocturne.h"

CVector3f * __cdecl
core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
          (CMatrix3x3f *this_ptr,CVector3f *euler_angles)

{
  double dVar1;
  float fVar2;
  float fVar3;
  CMatrix3x3f *extraout_ECX;
  CMatrix3x3f *extraout_ECX_00;
  CMatrix3x3f *pCVar4;
  CMatrix3x3f *extraout_ECX_01;
  CVector3f *extraout_EDX;
  CVector3f *extraout_EDX_00;
  CVector3f *extraout_EDX_01;
  CVector3f *extraout_EDX_02;
  CVector3f *extraout_EDX_03;
  CVector3f *extraout_EDX_04;
  CVector3f *pCVar5;
  CVector3f *extraout_EDX_05;
  float10 fVar6;
  float10 fVar7;
  float10 extraout_ST1;
  double dVar8;
  float fStack_24;
  float local_20;
  float local_1c;
  
  fVar3 = -this_ptr->m[1].z;
  if (fVar3 <= (float)-1) {
    euler_angles->x = -1.5707964;
  }
  else if ((double)fVar3 < 1.0) {
    fVar6 = crt_math_c_asin_FUN_00600b94((float10)fVar3);
    fVar7 = SQRT((float10)1 - extraout_ST1 * extraout_ST1);
    extraout_EDX_00->x = (float)fVar6;
    this_ptr = extraout_ECX;
    euler_angles = extraout_EDX_00;
    if (0.0 < (double)fVar7) {
      fVar3 = extraout_ECX->m[0].z * (1.0 / (float)fVar7);
      dVar1 = (double)fVar3;
      dVar8 = (double)(extraout_ECX->m[2].z * (1.0 / (float)fVar7));
      if ((0.70699999999999996 <= dVar1) || (dVar1 <= -0.70699999999999996)) {
        pCVar4 = extraout_ECX;
        pCVar5 = extraout_EDX_00;
        if (-1 < dVar8) {
          if (dVar8 < 1.0) {
            dVar8 = crt_math_c_acos_FUN_00600162(dVar8);
            local_20 = (float)dVar8;
            pCVar4 = extraout_ECX_01;
            pCVar5 = extraout_EDX_04;
          }
          else {
            local_1c = 0.0;
          }
        }
        else {
          local_1c = 3.1415927;
        }
        if (dVar1 < 0.0) {
          local_1c = -local_1c;
        }
      }
      else {
        fVar6 = crt_math_c_asin_FUN_00600b94((float10)fVar3);
        local_1c = (float)fVar6;
        pCVar4 = extraout_ECX_00;
        pCVar5 = extraout_EDX_01;
        if (dVar8 < 0.0) {
          local_1c = (float)3.1415926535900001 - local_1c;
        }
      }
      if (local_1c < (float)-3.1415926535900001) {
        local_1c = local_1c + 6.283185f;
      }
      if ((float)3.1415926535900001 < local_1c) {
        local_1c = local_1c + -6.283185f;
      }
      pCVar5->y = local_1c;
      fVar3 = pCVar4->m[1].x * (1.0 / (float)fVar7);
      dVar1 = (double)fVar3;
      dVar8 = (double)(pCVar4->m[1].y * (1.0 / (float)fVar7));
      if ((0.70699999999999996 <= dVar1) || (dVar1 <= -0.70699999999999996)) {
        if (-1 < dVar8) {
          if (dVar8 < 1.0) {
            crt_math_c_acos_FUN_00600162(dVar8);
            pCVar5 = extraout_EDX_05;
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
        fVar6 = crt_math_c_asin_FUN_00600b94((float10)fVar3);
        local_20 = (float)fVar6;
        pCVar5 = extraout_EDX_02;
        if (dVar8 < 0.0) {
          local_20 = (float)3.1415926535900001 - local_20;
        }
      }
      if (local_20 < (float)-3.1415926535900001) {
        local_20 = local_20 + 6.283185f;
      }
      if ((float)3.1415926535900001 < local_20) {
        local_20 = local_20 + -6.283185f;
      }
      pCVar5->z = local_20;
      return pCVar5;
    }
  }
  else {
    euler_angles->x = 1.5707964;
  }
  euler_angles->z = 0.0;
  fVar2 = -this_ptr->m[2].x;
  dVar1 = (double)fVar2;
  dVar8 = (double)this_ptr->m[0].x;
  if ((0.70699999999999996 <= dVar1) || (dVar1 <= -0.70699999999999996)) {
    if (-1 < dVar8) {
      if (dVar8 < 1.0) {
        crt_math_c_acos_FUN_00600162(dVar8);
        fStack_24 = (float)((ulonglong)(double)fVar3 >> 0x20);
        euler_angles = extraout_EDX_03;
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
    fVar6 = crt_math_c_asin_FUN_00600b94((float10)fVar2);
    fStack_24 = (float)fVar6;
    euler_angles = extraout_EDX;
    if (dVar8 < 0.0) {
      fStack_24 = (float)3.1415926535900001 - fStack_24;
    }
  }
  if (fStack_24 < (float)-3.1415926535900001) {
    fStack_24 = fStack_24 + 6.283185f;
  }
  if ((float)3.1415926535900001 < fStack_24) {
    fStack_24 = fStack_24 + -6.283185f;
  }
  euler_angles->y = fStack_24;
  return euler_angles;
}
