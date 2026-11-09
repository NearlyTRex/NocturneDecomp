// Name: core_xform.cpp_FUN_005b5dd0
// Address: 005b5dd0
// Address Range: [[005b5dd0, 005b6267]]
// Convention: unknown
// Signature: float * core_xform_cpp_FUN_005b5dd0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_xform_cpp_FUN_005b5dd0(float *param_1)

{
  float fVar1;
  float *extraout_ECX;
  float *extraout_ECX_00;
  float *extraout_ECX_01;
  float *extraout_ECX_02;
  float *extraout_ECX_03;
  float *extraout_ECX_04;
  float *pfVar2;
  float *extraout_ECX_05;
  float *extraout_EDX;
  float *extraout_EDX_00;
  float *pfVar3;
  float *extraout_EDX_01;
  float *unaff_ESI;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float afStack_103c [1022];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar4 = 0;
  local_20 = SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  if (0.0 < local_20) {
    local_20 = 1.0 / local_20;
  }
  local_28 = SQRT(param_1[6] * param_1[6] + param_1[5] * param_1[5] + param_1[4] * param_1[4]);
  if (0.0 < local_28) {
    local_28 = 1.0 / local_28;
  }
  local_24 = SQRT(param_1[10] * param_1[10] + param_1[9] * param_1[9] + param_1[8] * param_1[8]);
  if (0.0 < local_24) {
    local_24 = 1.0 / local_24;
  }
  fVar1 = -param_1[9] * local_24;
  if (_DAT_005fa0f4 <= fVar1) {
    if (fVar1 <= _DAT_005fa0f8) {
      fVar6 = (float10)fVar1;
      fVar5 = fVar6;
      asin();
      afStack_103c[0x3fa] = (float)fVar6;
      local_30 = (float)SQRT((float10)1 - fVar5 * fVar5);
      if (fVar6 < (float10)_DAT_005fa0fc) {
        afStack_103c[0x3fa] = afStack_103c[0x3fa] + _DAT_005fa100;
      }
      unaff_ESI = extraout_ECX_00;
      param_1 = extraout_EDX;
      if (_DAT_005fa104 <= local_30) {
        local_2c = 1.0 / local_30;
        afStack_103c[0x3fd] = extraout_EDX[8] * local_24 * local_2c;
        local_3c = extraout_EDX[10] * local_24 * local_2c;
        if ((_DAT_005fa108 <= afStack_103c[0x3fd]) || (afStack_103c[0x3fd] <= _DAT_005fa10c)) {
          pfVar2 = extraout_ECX_00;
          pfVar3 = extraout_EDX;
          if (_DAT_005fa110 < local_3c) {
            if ((int)local_3c < 0x3f800000) {
              fVar5 = (float10)local_3c;
              acos();
              local_14 = (float)fVar5;
              pfVar2 = extraout_ECX_04;
              pfVar3 = extraout_EDX_01;
            }
            else {
              local_14 = 0.0;
            }
          }
          else {
            local_14 = 3.1415927;
          }
          if (afStack_103c[0x3fd] < 0.0) {
            local_14 = -local_14;
          }
        }
        else {
          fVar5 = (float10)afStack_103c[0x3fd];
          asin();
          local_14 = (float)fVar5;
          pfVar2 = extraout_ECX_01;
          pfVar3 = extraout_EDX_00;
          if (local_3c < 0.0) {
            local_14 = _DAT_005fa114 - (float)fVar5;
          }
        }
        if (local_14 < _DAT_005fa0fc) {
          local_14 = local_14 + _DAT_005fa100;
        }
        if (_DAT_005fa114 < local_14) {
          local_14 = local_14 + _DAT_005fa118;
        }
        local_38 = pfVar3[5] * local_28 * local_2c;
        local_40 = pfVar3[1] * local_20 * local_2c;
        afStack_103c[0x3fb] = local_14;
        if ((_DAT_005fa108 <= local_40) || (local_40 <= _DAT_005fa10c)) {
          if (_DAT_005fa110 < local_38) {
            if ((int)local_38 < 0x3f800000) {
              fVar5 = (float10)local_38;
              acos();
              local_1c = (float)fVar5;
              pfVar2 = extraout_ECX_05;
            }
            else {
              local_1c = 0.0;
            }
          }
          else {
            local_1c = 3.1415927;
          }
          if (local_40 < 0.0) {
            local_1c = -local_1c;
          }
        }
        else {
          fVar5 = (float10)local_40;
          asin();
          local_1c = (float)fVar5;
          pfVar2 = extraout_ECX_02;
          if (local_38 < 0.0) {
            local_1c = _DAT_005fa114 - (float)fVar5;
          }
        }
        if (local_1c < _DAT_005fa0fc) {
          local_1c = local_1c + _DAT_005fa100;
        }
        if (_DAT_005fa114 < local_1c) {
          local_1c = local_1c + _DAT_005fa118;
        }
        afStack_103c[0x3fc] = local_1c;
        *pfVar2 = afStack_103c[0x3fa];
        pfVar2[(uint)bVar4 * -2 + 1] = afStack_103c[(uint)bVar4 * -2 + 0x3fb];
        (pfVar2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
             afStack_103c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x3fc];
        return pfVar2;
      }
    }
    else {
      afStack_103c[0x3fa] = 1.5707964;
    }
  }
  else {
    afStack_103c[0x3fa] = -1.5707964;
  }
  local_34 = *param_1 * local_20;
  local_44 = -param_1[2] * local_20;
  afStack_103c[0x3fc] = 0.0;
  if ((_DAT_005fa108 <= local_44) || (local_44 <= _DAT_005fa10c)) {
    if (_DAT_005fa110 < local_34) {
      if ((int)local_34 < 0x3f800000) {
        fVar5 = (float10)local_34;
        acos();
        local_18 = (float)fVar5;
        unaff_ESI = extraout_ECX_03;
      }
      else {
        local_18 = 0.0;
      }
    }
    else {
      local_18 = 3.1415927;
    }
    if (local_44 < 0.0) {
      local_18 = -local_18;
    }
  }
  else {
    fVar5 = (float10)local_44;
    asin();
    local_18 = (float)fVar5;
    unaff_ESI = extraout_ECX;
    if (local_34 < 0.0) {
      local_18 = _DAT_005fa114 - (float)fVar5;
    }
  }
  if (local_18 < _DAT_005fa0fc) {
    local_18 = local_18 + _DAT_005fa100;
  }
  if (_DAT_005fa114 < local_18) {
    local_18 = local_18 + _DAT_005fa118;
  }
  afStack_103c[0x3fb] = local_18;
  *unaff_ESI = afStack_103c[0x3fa];
  unaff_ESI[(uint)bVar4 * -2 + 1] = afStack_103c[(uint)bVar4 * -2 + 0x3fb];
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       afStack_103c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x3fc];
  return unaff_ESI;
}
