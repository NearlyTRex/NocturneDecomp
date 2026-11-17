// Name: core_xform.cpp_matrixToEulerAngles_FUN_00583b10
// Address: 00583b10
// Address Range: [[00583b10, 00583fa5]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_00583b10(CMatrix3x4f *matrix_in,CVector3f *euler_out)

#include "nocturne.h"

CVector3f * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_00583b10(CMatrix3x4f *matrix_in,CVector3f *euler_out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *unaff_ESI;
  float *pfVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  float afStack_1044 [1023];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint local_18;
  
  bVar5 = 0;
  fVar1 = matrix_in->m[0].x;
  fVar2 = matrix_in->m[0].w;
  fVar3 = matrix_in->m[0].y;
  local_28 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < local_28) {
    local_28 = 1.0 / local_28;
  }
  fVar1 = matrix_in->m[1].w;
  fVar2 = matrix_in->m[1].x;
  fVar3 = matrix_in->m[1].y;
  local_20 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < local_20) {
    local_20 = 1.0 / local_20;
  }
  fVar1 = matrix_in->m[2].w;
  fVar2 = matrix_in->m[2].x;
  fVar3 = matrix_in->m[2].y;
  local_24 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < local_24) {
    local_24 = 1.0 / local_24;
  }
  fVar1 = -matrix_in->m[1].y * local_20;
  if (-0.99999f <= fVar1) {
    if (fVar1 <= 0.99999f) {
      fVar6 = (float10)fVar1;
      fVar7 = asin(fVar6);
      afStack_1044[0x3fb] = (float)fVar7;
      local_38 = (float)SQRT((float10)1 - fVar6 * fVar6);
      if (fVar7 < (float10)-3.141593f) {
        afStack_1044[0x3fb] = (float)fVar7 + 6.283185f;
      }
      if (1e-07f <= local_38) {
        local_34 = 1.0 / local_38;
        afStack_1044[0x3fe] = matrix_in->m[0].y * local_2c * local_34;
        local_44 = matrix_in->m[2].y * local_28 * local_34;
        if ((0.707f <= afStack_1044[0x3fe]) || (afStack_1044[0x3fe] <= -0.707f))
        {
          if (-1.0f < local_44) {
            if ((int)local_44 < 0x3f800000) {
              dVar8 = acos((double)local_44);
              local_1c = (float)dVar8;
            }
            else {
              local_18 = 0;
            }
          }
          else {
            local_18 = 0x40490fdb;
          }
          if (afStack_1044[0x3fd] < 0.0) {
            local_1c = -local_1c;
          }
        }
        else {
          fVar6 = asin((float10)afStack_1044[0x3fe]);
          local_1c = (float)fVar6;
          if (local_48 < 0.0) {
            local_1c = 3.141593f - (float)fVar6;
          }
        }
        if (local_1c < -3.141593f) {
          local_1c = local_1c + 6.283185f;
        }
        if (3.141593f < local_1c) {
          local_1c = local_1c + -6.283185f;
        }
        local_44 = matrix_in->m[1].x * local_28 * local_38;
        local_34 = matrix_in->m[1].w * local_28 * local_38;
        afStack_1044[0x3fb] = local_1c;
        if ((0.707f <= local_34) || (local_34 <= -0.707f)) {
          if (-1.0f < local_44) {
            if ((int)local_44 < 0x3f800000) {
              dVar8 = acos((double)local_44);
              local_28 = (float)dVar8;
            }
            else {
              local_24 = 0.0;
            }
          }
          else {
            local_24 = 3.1415927;
          }
          if (local_34 < 0.0) {
            local_24 = -local_24;
          }
        }
        else {
          fVar6 = asin((float10)local_34);
          local_28 = (float)fVar6;
          if (local_48 < 0.0) {
            local_28 = 3.141593f - (float)fVar6;
          }
        }
        if (local_24 < -3.141593f) {
          local_24 = local_24 + 6.283185f;
        }
        if (3.141593f < local_24) {
          local_24 = local_24 + -6.283185f;
        }
        afStack_1044[0x3fc] = local_24;
        pfVar4 = (float *)((int)unaff_ESI + (uint)bVar5 * -8 + 4);
        unaff_ESI->x = afStack_1044[0x3fa];
        *pfVar4 = afStack_1044[(uint)bVar5 * -2 + 0x3fb];
        pfVar4[(uint)bVar5 * -2 + 1] = afStack_1044[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3fc];
        return unaff_ESI;
      }
    }
    else {
      afStack_1044[0x3fc] = 1.5707964;
    }
  }
  else {
    afStack_1044[0x3fc] = -1.5707964;
  }
  local_3c = matrix_in->m[0].w * local_2c;
  local_48 = -matrix_in->m[2].w * local_28;
  afStack_1044[0x3fd] = 0.0;
  if ((0.707f <= local_48) || (local_48 <= -0.707f)) {
    if (-1.0f < local_3c) {
      if ((int)local_3c < 0x3f800000) {
        dVar8 = acos((double)local_3c);
        local_20 = (float)dVar8;
      }
      else {
        local_1c = 0.0;
      }
    }
    else {
      local_1c = 3.1415927;
    }
    if (local_48 < 0.0) {
      local_1c = -local_1c;
    }
  }
  else {
    fVar6 = asin((float10)local_48);
    local_20 = (float)fVar6;
    if (local_40 < 0.0) {
      local_20 = 3.141593f - (float)fVar6;
    }
  }
  if (local_1c < -3.141593f) {
    local_1c = local_1c + 6.283185f;
  }
  if (3.141593f < local_1c) {
    local_1c = local_1c + -6.283185f;
  }
  afStack_1044[0x3fc] = local_1c;
  pfVar4 = (float *)((int)unaff_ESI + (uint)bVar5 * -8 + 4);
  unaff_ESI->x = afStack_1044[0x3fb];
  *pfVar4 = afStack_1044[(uint)bVar5 * -2 + 0x3fc];
  pfVar4[(uint)bVar5 * -2 + 1] = afStack_1044[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3fd];
  return unaff_ESI;
}
