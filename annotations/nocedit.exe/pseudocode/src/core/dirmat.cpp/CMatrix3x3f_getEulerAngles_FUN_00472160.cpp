// Name: core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
// Address: 00472160
// Address Range: [[00472160, 00472536]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

CVector3f * __cdecl core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f *this_ptr,CVector3f *euler_angles)

{
  double dVar2;
  double dVar3;
  float fVar6;
  float fVar7;
  float10 fVar4;
  float10 fVar5;
  float10 fVar8;
  double dVar6;
  uint local_98;
  uint uStack_94;
  uint uStack_84;
  uint local_80;
  uint local_68;
  uint uStack_5c;
  float fStack_24;
  float local_20;
  double dVar1;
  float fVar2;
  float fVar3;
  
  fVar6 = -this_ptr->m[1].z;
  fStack_24 = (float)((ulonglong)(double)fVar6 >> 0x20);
  if (fVar6 <= (float)-1) {
    euler_angles->x = -1.5707964;
  }
  else if ((double)fVar6 < 1.0) {
    fVar4 = (float10)fVar6;
    fVar5 = asin(fVar4);
    fVar8 = SQRT((float10)1 - fVar4 * fVar4);
    euler_angles->x = (float)fVar5;
    dVar2 = (double)fVar8;
    uStack_94 = SUB84(__BITCAST_UINT64(dVar2),0);
    if (0.0 < dVar2) {
      fVar3 = 1.0 / (float)fVar8;
      fVar6 = this_ptr->m[0].z * fVar3;
      dVar2 = (double)fVar6;
      uStack_84 = SUB84(__BITCAST_UINT64(dVar2),0);
      local_80 = (uint)((ulonglong)dVar2 >> 0x20);
      dVar3 = (double)(this_ptr->m[2].z * fVar3);
      uStack_5c = SUB84(__BITCAST_UINT64(dVar3),0);
      if ((0.70699999999999996 <= dVar2) || (dVar2 <= -0.70699999999999996)) {
        if ((-1 < dVar3) && (dVar3 < 1.0)) {
          local_98 = 0x4724df;
          dVar6 = acos(dVar3);
          local_20 = (float)dVar6;
        }
        if (__BITCAST_DOUBLE(CONCAT44(uStack_84,local_68)) < 0.0) {
          local_20 = -local_20;
        }
      }
      else {
        local_98 = 0x47230f;
        fVar8 = asin((float10)fVar6);
        local_20 = (float)fVar8;
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
      euler_angles->y = local_20;
      fVar7 = 1.0 / (float)__BITCAST_DOUBLE(CONCAT44(uStack_94,local_98));
      fVar6 = this_ptr->m[1].x * fVar7;
      dVar2 = (double)fVar6;
      dVar3 = (double)(this_ptr->m[1].y * fVar7);
      if ((0.70699999999999996 <= dVar2) || (dVar2 <= -0.70699999999999996)) {
        if (-1 < dVar3) {
          if (dVar3 < 1.0) {
            acos(dVar3);
          }
          else {
            fStack_24 = 0.0;
          }
        }
        else {
          fStack_24 = 3.1415927;
        }
        if (dVar2 < 0.0) {
          fStack_24 = -fStack_24;
        }
      }
      else {
        asin((float10)fVar6);
      }
      if (fStack_24 < (float)-3.1415926535900001) {
        fStack_24 = fStack_24 + 6.283185f;
      }
      if ((float)3.1415926535900001 < fStack_24) {
        fStack_24 = fStack_24 + -6.283185f;
      }
      euler_angles->z = fStack_24;
      return euler_angles;
    }
  }
  else {
    euler_angles->x = 1.5707964;
  }
  euler_angles->z = 0.0;
  fVar2 = -this_ptr->m[2].x;
  dVar2 = (double)fVar2;
  dVar1 = (double)this_ptr->m[0].x;
  if ((0.70699999999999996 <= dVar2) || (dVar2 <= -0.70699999999999996)) {
    if (-1 < dVar1) {
      if (dVar1 < 1.0) {
        acos(dVar1);
      }
      else {
        fStack_24 = 0.0;
      }
    }
    else {
      fStack_24 = 3.1415927;
    }
    if (dVar2 < 0.0) {
      fStack_24 = -fStack_24;
    }
  }
  else {
    asin((float10)fVar2);
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
