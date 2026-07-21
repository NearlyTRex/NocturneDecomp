// Name: core_xform.cpp_matrixToEulerAngles_FUN_0055b180
// Address: 0055b180
// Address Range: [[0055b180, 0055b6ba]]
// Convention: __cdecl
// Signature: float * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_0055b180(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_0055b180(float *param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  uint uStack_b0;
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
  
  dVar1 = (double)SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  if (0.0 < dVar1) {
    dVar1 = 1.0 / dVar1;
  }
  local_98 = SUB84(__BITCAST_UINT64(dVar1),0);
  fVar4 = SQRT(param_1[6] * param_1[6] + param_1[5] * param_1[5] + param_1[4] * param_1[4]);
  if (0.0 < fVar4) {
    fVar4 = 1.0 / fVar4;
  }
  dVar1 = (double)SQRT(param_1[10] * param_1[10] + param_1[9] * param_1[9] + param_1[8] * param_1[8]
                      );
  if (0.0 < dVar1) {
    dVar1 = 1.0 / dVar1;
  }
  local_88 = SUB84(__BITCAST_UINT64(dVar1),0);
  fVar4 = -param_1[6] * fVar4;
  uStack_8c = (uint)((ulonglong)(double)fVar4 >> 0x20);
  if ((float)_DAT_0059828e < fVar4) {
    if ((double)fVar4 < 1.0) {
      fVar6 = (float10)fVar4;
      fVar7 = (float10)asin(fVar6);
      *param_2 = (float)fVar7;
      dVar2 = (double)SQRT((float10)1 - fVar6 * fVar6);
      if (fVar7 < (float10)_DAT_00598296) {
        *param_2 = *param_2 + _DAT_0059829e;
      }
      if (0.0 < dVar2) {
        dVar2 = 1.0 / dVar2;
        uStack_3c = SUB84(__BITCAST_UINT64(dVar2),0);
        fVar5 = param_1[2] * (float)__BITCAST_DOUBLE(CONCAT44(local_98,uStack_9c)) * (float)dVar2;
        fVar4 = param_1[10] * (float)__BITCAST_DOUBLE(CONCAT44(local_88,uStack_8c)) * (float)dVar2;
        dVar2 = (double)fVar5;
        uStack_34 = SUB84(__BITCAST_UINT64(dVar2),0);
        local_30 = (uint)((ulonglong)dVar2 >> 0x20);
        dVar3 = (double)fVar4;
        uStack_64 = SUB84(__BITCAST_UINT64(dVar3),0);
        if ((_DAT_005982a6 <= dVar2) || (dVar2 <= _DAT_005982ae)) {
          if ((_DAT_0059828e < dVar3) && (dVar3 < 1.0)) {
            fVar6 = (float10)acos((float10)fVar4);
            local_18 = (float)fVar6;
          }
          if (__BITCAST_DOUBLE(CONCAT44(uStack_34,local_30)) < 0.0) {
            local_18 = -local_18;
          }
        }
        else {
          fVar6 = (float10)asin((float10)fVar5);
          local_18 = (float)fVar6;
          if (__BITCAST_DOUBLE(CONCAT44(uStack_64,local_68)) < 0.0) {
            local_18 = (float)_DAT_005982b6 - local_18;
          }
        }
        if (local_18 < (float)_DAT_00598296) {
          local_18 = local_18 + _DAT_0059829e;
        }
        if ((float)_DAT_005982b6 < local_18) {
          local_18 = local_18 + _DAT_005982be;
        }
        param_2[1] = local_18;
        dVar2 = (double)param_1[4] * dVar1 * __BITCAST_DOUBLE(CONCAT44(uStack_3c,local_40));
        dVar1 = (double)param_1[5] * dVar1 * __BITCAST_DOUBLE(CONCAT44(uStack_3c,local_40));
        uStack_b0 = SUB84(__BITCAST_UINT64(dVar2),0);
        if ((_DAT_005982a6 <= dVar2) || (dVar2 <= _DAT_005982ae)) {
          if (_DAT_0059828e < dVar1) {
            if (dVar1 < 1.0) {
              fVar6 = (float10)acos((float10)dVar1);
              dVar2 = __BITCAST_DOUBLE(CONCAT44((float)fVar6,uStack_b0));
            }
            else {
              local_20 = 0.0;
            }
          }
          else {
            local_20 = 3.1415927;
          }
          if (dVar2 < 0.0) {
            local_20 = -local_20;
          }
        }
        else {
          asin((float10)dVar2);
        }
        if (local_20 < (float)_DAT_00598296) {
          local_20 = local_20 + _DAT_0059829e;
        }
        if ((float)_DAT_005982b6 < local_20) {
          local_20 = local_20 + _DAT_005982be;
        }
        param_2[2] = local_20;
        return param_2;
      }
    }
    else {
      *param_2 = 1.5707964;
    }
  }
  else {
    *param_2 = -1.5707964;
  }
  param_2[2] = 0.0;
  fVar4 = -param_1[8] * (float)__BITCAST_DOUBLE(CONCAT44(local_88,uStack_8c));
  fVar5 = *param_1 * (float)__BITCAST_DOUBLE(CONCAT44(local_98,uStack_9c));
  dVar1 = (double)fVar4;
  dVar2 = (double)fVar5;
  if ((_DAT_005982a6 <= dVar1) || (dVar1 <= _DAT_005982ae)) {
    if (_DAT_0059828e < dVar2) {
      if (dVar2 < 1.0) {
        acos((float10)fVar5);
      }
      else {
        local_18 = 0.0;
      }
    }
    else {
      local_18 = 3.1415927;
    }
    if (dVar1 < 0.0) {
      local_18 = -local_18;
    }
  }
  else {
    asin((float10)fVar4);
  }
  if (local_18 < (float)_DAT_00598296) {
    local_18 = local_18 + _DAT_0059829e;
  }
  if ((float)_DAT_005982b6 < local_18) {
    local_18 = local_18 + _DAT_005982be;
  }
  param_2[1] = local_18;
  return param_2;
}
