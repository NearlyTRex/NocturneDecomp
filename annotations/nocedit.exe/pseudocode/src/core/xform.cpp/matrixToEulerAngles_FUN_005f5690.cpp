// Name: core_xform.cpp_matrixToEulerAngles_FUN_005f5690
// Address: 005f5690
// Address Range: [[005f5690, 005f5bca]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f *matrix_in,CVector3f *euler_out)

#include "nocturne.h"

CVector3f * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f *matrix_in,CVector3f *euler_out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float10 fVar6;
  float10 extraout_ST1;
  double dVar7;
  double dVar8;
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
  
  fVar1 = matrix_in->m[0].y;
  fVar2 = matrix_in->m[0].x;
  fVar3 = matrix_in->m[0].z;
  dVar8 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < dVar8) {
    dVar8 = 1.0 / dVar8;
  }
  local_98 = SUB84(dVar8,0);
  fVar1 = matrix_in->m[1].y;
  fVar2 = matrix_in->m[1].z;
  fVar3 = matrix_in->m[2].x;
  fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < fVar1) {
    fVar1 = 1.0 / fVar1;
  }
  fVar2 = matrix_in->m[2].z;
  fVar3 = matrix_in[1].m[0].x;
  fVar4 = matrix_in[1].m[0].y;
  dVar8 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (0.0 < dVar8) {
    dVar8 = 1.0 / dVar8;
  }
  local_88 = SUB84(dVar8,0);
  fVar1 = -matrix_in->m[2].x * fVar1;
  uStack_8c = (uint)((ulonglong)(double)fVar1 >> 0x20);
  if ((float)-1 < fVar1) {
    if ((double)fVar1 < 1.0) {
      fVar6 = asin((float10)fVar1);
      euler_out->x = (float)fVar6;
      dVar7 = (double)SQRT((float10)1 - extraout_ST1 * extraout_ST1);
      if (fVar6 < (float10)-3.1415926535900001) {
        euler_out->x = euler_out->x + 6.283185f;
      }
      if (0.0 < dVar7) {
        dVar7 = 1.0 / dVar7;
        uStack_3c = SUB84(dVar7,0);
        fVar1 = matrix_in->m[0].z * (float)(double)CONCAT44(local_98,uStack_9c) * (float)dVar7;
        dVar5 = (double)fVar1;
        uStack_34 = SUB84(dVar5,0);
        local_30 = (uint)((ulonglong)dVar5 >> 0x20);
        dVar7 = (double)(matrix_in[1].m[0].y * (float)(double)CONCAT44(local_88,uStack_8c) *
                        (float)dVar7);
        uStack_64 = SUB84(dVar7,0);
        if ((0.70699999999999996 <= dVar5) ||
           (dVar5 <= -0.70699999999999996)) {
          if ((-1 < dVar7) && (dVar7 < 1.0)) {
            dVar7 = acos(dVar7);
            local_18 = (float)dVar7;
          }
          if ((double)CONCAT44(uStack_34,local_30) < 0.0) {
            local_18 = -local_18;
          }
        }
        else {
          fVar6 = asin((float10)fVar1);
          local_18 = (float)fVar6;
          if ((double)CONCAT44(uStack_64,local_68) < 0.0) {
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
        dVar7 = (double)matrix_in->m[1].y * dVar8 * (double)CONCAT44(uStack_3c,local_40);
        dVar8 = (double)matrix_in->m[1].z * dVar8 * (double)CONCAT44(uStack_3c,local_40);
        local_b0 = SUB84(dVar7,0);
        if ((0.70699999999999996 <= dVar7) ||
           (dVar7 <= -0.70699999999999996)) {
          if (-1 < dVar8) {
            if (dVar8 < 1.0) {
              dVar8 = acos(dVar8);
              dVar7 = (double)CONCAT44((float)dVar8,local_b0);
            }
            else {
              local_20 = 0.0;
            }
          }
          else {
            local_20 = 3.1415927;
          }
          if (dVar7 < 0.0) {
            local_20 = -local_20;
          }
        }
        else {
          asin((float10)dVar7);
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
  fVar1 = -matrix_in->m[2].z * (float)(double)CONCAT44(local_88,uStack_8c);
  dVar8 = (double)fVar1;
  dVar7 = (double)(matrix_in->m[0].x * (float)(double)CONCAT44(local_98,uStack_9c));
  if ((0.70699999999999996 <= dVar8) ||
     (dVar8 <= -0.70699999999999996)) {
    if (-1 < dVar7) {
      if (dVar7 < 1.0) {
        acos(dVar7);
      }
      else {
        local_18 = 0.0;
      }
    }
    else {
      local_18 = 3.1415927;
    }
    if (dVar8 < 0.0) {
      local_18 = -local_18;
    }
  }
  else {
    asin((float10)fVar1);
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
