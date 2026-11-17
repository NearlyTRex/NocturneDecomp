// Name: core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0045b9b0
// Address: 0045b9b0
// Address Range: [[0045b9b0, 0045bdaa]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0045b9b0(CMatrix3x3f *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

CVector3f * __stack_esi core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0045b9b0(CMatrix3x3f *this_ptr,CVector3f *euler_angles)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  float afStack_1014 [1015];
  double local_38;
  float local_30;
  float local_2c;
  float local_28 [7];
  
  bVar5 = 0;
  fVar2 = -this_ptr->m[1].z;
  local_38 = (double)fVar2;
  if (fVar2 <= (float)-1) {
    local_28[1] = -1.5707964;
  }
  else if (local_38 < 1.0) {
    fVar6 = (float10)fVar2;
    fVar7 = asin(fVar6);
    fVar6 = SQRT((float10)1 - fVar6 * fVar6);
    local_28[0] = (float)fVar7;
    dVar8 = (double)fVar6;
    afStack_1014[0x3f2] = SUB84(__BITCAST_UINT64(dVar8),0);
    if (0.0 < dVar8) {
      fVar3 = 1.0 / (float)fVar6;
      fVar2 = this_ptr->m[0].z * fVar3;
      dVar8 = (double)fVar2;
      afStack_1014[0x3de] = SUB84(__BITCAST_UINT64(dVar8),0);
      afStack_1014[0x3df] = (float)((ulonglong)dVar8 >> 0x20);
      dVar1 = (double)(this_ptr->m[2].z * fVar3);
      afStack_1014[0x3ec] = SUB84(__BITCAST_UINT64(dVar1),0);
      afStack_1014[0x3ed] = (float)((ulonglong)dVar1 >> 0x20);
      if ((0.70699999999999996 <= dVar8) || (dVar8 <= -0.70699999999999996)) {
        if (-1 < dVar1) {
          if (dVar1 < 1.0) {
            dVar8 = acos(dVar1);
            local_30 = (float)dVar8;
          }
          else {
            local_2c = 0.0;
          }
        }
        else {
          local_2c = 3.1415927;
        }
        if (__BITCAST_DOUBLE(CONCAT44(afStack_1014[0x3de],afStack_1014[0x3df])) < 0.0) {
          local_30 = -local_30;
        }
      }
      else {
        fVar6 = asin((float10)fVar2);
        local_30 = (float)fVar6;
        if (__BITCAST_DOUBLE(CONCAT44(afStack_1014[0x3ec],afStack_1014[0x3ed])) < 0.0) {
          local_30 = (float)3.1415926535900001 - local_30;
        }
      }
      if (local_30 < (float)-3.1415926535900001) {
        local_30 = local_30 + 6.283185f;
      }
      if ((float)3.1415926535900001 < local_30) {
        local_30 = local_30 + -6.283185f;
      }
      fVar3 = 1.0 / (float)__BITCAST_DOUBLE(CONCAT44(afStack_1014[0x3f2],afStack_1014[0x3f1]));
      fVar2 = this_ptr->m[1].x * fVar3;
      local_28[0] = local_30;
      dVar8 = (double)fVar2;
      dVar1 = (double)(this_ptr->m[1].y * fVar3);
      if ((0.70699999999999996 <= dVar8) || (dVar8 <= -0.70699999999999996)) {
        if (-1 < dVar1) {
          if (dVar1 < 1.0) {
            acos(dVar1);
          }
          else {
            local_38 = 0.0;
          }
        }
        else {
          local_38 = 5.32864626443882e-315;
        }
        if (dVar8 < 0.0) {
          local_38 = (double)((ulonglong)local_38 ^ 0x80000000);
        }
      }
      else {
        asin((float10)fVar2);
      }
      if (local_38._0_4_ < (float)-3.1415926535900001) {
        local_38._0_4_ = local_38._0_4_ + 6.283185f;
      }
      if ((float)3.1415926535900001 < local_38._0_4_) {
        local_38._0_4_ = local_38._0_4_ + -6.283185f;
      }
      local_28[1] = local_38._0_4_;
      pfVar4 = (float *)((int)euler_angles + (uint)bVar5 * -8 + 4);
      euler_angles->x = local_2c;
      *pfVar4 = local_28[(uint)bVar5 * -2];
      pfVar4[(uint)bVar5 * -2 + 1] = local_28[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      return euler_angles;
    }
  }
  else {
    local_28[1] = 1.5707964;
  }
  fVar2 = -this_ptr->m[2].x;
  dVar8 = (double)fVar2;
  dVar1 = (double)this_ptr->m[0].x;
  local_28[2] = 0.0;
  if ((0.70699999999999996 <= dVar8) || (dVar8 < -0.70699999999999996)) {
    if (-1 < dVar1) {
      if (dVar1 < 1.0) {
        acos(dVar1);
      }
      else {
        local_30 = 0.0;
      }
    }
    else {
      local_30 = 3.1415927;
    }
    if (dVar8 < 0.0) {
      local_30 = -local_30;
    }
  }
  else {
    asin((float10)fVar2);
  }
  if (local_30 < (float)-3.1415926535900001) {
    local_30 = local_30 + 6.283185f;
  }
  if ((float)3.1415926535900001 < local_30) {
    local_30 = local_30 + -6.283185f;
  }
  local_28[1] = local_30;
  pfVar4 = (float *)((int)euler_angles + (uint)bVar5 * -8 + 4);
  euler_angles->x = local_28[0];
  *pfVar4 = local_28[(uint)bVar5 * -2 + 1];
  pfVar4[(uint)bVar5 * -2 + 1] = local_28[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2];
  return euler_angles;
}
