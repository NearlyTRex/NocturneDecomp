// Name: core_xform.cpp_matrixToEulerAnglesZYX_FUN_00583fb0
// Address: 00583fb0
// Address Range: [[00583fb0, 00584447]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_xform_cpp_matrixToEulerAnglesZYX_FUN_00583fb0(CMatrix3x4f *matrix_ptr,CVector3f *euler_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_xform_cpp_matrixToEulerAnglesZYX_FUN_00583fb0(CMatrix3x4f *matrix_ptr,CVector3f *euler_out)

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
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint local_18;
  
  bVar5 = 0;
  fVar1 = matrix_ptr->m[0].x;
  fVar2 = matrix_ptr->m[0].w;
  fVar3 = matrix_ptr->m[0].y;
  local_20 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < local_20) {
    local_20 = 1.0 / local_20;
  }
  fVar1 = matrix_ptr->m[1].w;
  fVar2 = matrix_ptr->m[1].x;
  fVar3 = matrix_ptr->m[1].y;
  local_28 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < local_28) {
    local_28 = 1.0 / local_28;
  }
  fVar1 = matrix_ptr->m[2].w;
  fVar2 = matrix_ptr->m[2].x;
  fVar3 = matrix_ptr->m[2].y;
  local_24 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < local_24) {
    local_24 = 1.0 / local_24;
  }
  fVar1 = -matrix_ptr->m[2].x * local_24;
  if (_DAT_005d811f <= fVar1) {
    if (fVar1 <= _DAT_005d8123) {
      fVar6 = (float10)fVar1;
      fVar7 = asin(fVar6);
      afStack_1044[0x3fb] = (float)fVar7;
      local_34 = (float)SQRT((float10)1 - fVar6 * fVar6);
      if (fVar7 < (float10)_DAT_005d8127) {
        afStack_1044[0x3fb] = (float)fVar7 + _DAT_005d812b;
      }
      if (_DAT_005d812f <= local_34) {
        local_30 = 1.0 / local_34;
        afStack_1044[0x3fe] = matrix_ptr->m[2].w * local_28 * local_30;
        local_40 = matrix_ptr->m[2].y * local_28 * local_30;
        if ((_DAT_005d8133 <= afStack_1044[0x3fe]) || (afStack_1044[0x3fe] <= _DAT_005d8137)) {
          if (_DAT_005d813b < local_40) {
            if ((int)local_40 < 0x3f800000) {
              dVar8 = acos((double)local_40);
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
          if (local_44 < 0.0) {
            local_1c = _DAT_005d813f - (float)fVar6;
          }
        }
        if (local_1c < _DAT_005d8127) {
          local_1c = local_1c + _DAT_005d812b;
        }
        if (_DAT_005d813f < local_1c) {
          local_1c = local_1c + _DAT_005d8143;
        }
        local_40 = matrix_ptr->m[1].x * local_30 * local_34;
        local_48 = matrix_ptr->m[0].x * local_28 * local_34;
        afStack_1044[0x3fb] = local_1c;
        if ((_DAT_005d8133 <= local_48) || (local_48 <= _DAT_005d8137)) {
          if (_DAT_005d813b < local_40) {
            if ((int)local_40 < 0x3f800000) {
              dVar8 = acos((double)local_40);
              local_28 = (float)dVar8;
            }
            else {
              local_24 = 0.0;
            }
          }
          else {
            local_24 = 3.1415927;
          }
          if (local_48 < 0.0) {
            local_24 = -local_24;
          }
        }
        else {
          fVar6 = asin((float10)local_48);
          local_28 = (float)fVar6;
          if (local_44 < 0.0) {
            local_28 = _DAT_005d813f - (float)fVar6;
          }
        }
        if (local_24 < _DAT_005d8127) {
          local_24 = local_24 + _DAT_005d812b;
        }
        if (_DAT_005d813f < local_24) {
          local_24 = local_24 + _DAT_005d8143;
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
  local_38 = matrix_ptr->m[0].w * local_24;
  local_48 = -matrix_ptr->m[0].y * local_24;
  afStack_1044[0x3fd] = 0.0;
  if ((_DAT_005d8133 <= local_48) || (local_48 <= _DAT_005d8137)) {
    if (_DAT_005d813b < local_38) {
      if ((int)local_38 < 0x3f800000) {
        dVar8 = acos((double)local_38);
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
    if (local_3c < 0.0) {
      local_20 = _DAT_005d813f - (float)fVar6;
    }
  }
  if (local_1c < _DAT_005d8127) {
    local_1c = local_1c + _DAT_005d812b;
  }
  if (_DAT_005d813f < local_1c) {
    local_1c = local_1c + _DAT_005d8143;
  }
  afStack_1044[0x3fc] = local_1c;
  pfVar4 = (float *)((int)unaff_ESI + (uint)bVar5 * -8 + 4);
  unaff_ESI->x = afStack_1044[0x3fb];
  *pfVar4 = afStack_1044[(uint)bVar5 * -2 + 0x3fc];
  pfVar4[(uint)bVar5 * -2 + 1] = afStack_1044[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3fd];
  return unaff_ESI;
}
