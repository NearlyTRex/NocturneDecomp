// Name: FUN_00583b10
// Address: 00583b10
// Address Range: [[00583b10, 00583fa5]]
// Convention: unknown
// Signature: float * FUN_00583b10(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_00583b10(float *param_1)

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
  local_28 = SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  if (0.0 < local_28) {
    local_28 = 1.0 / local_28;
  }
  local_20 = SQRT(param_1[6] * param_1[6] + param_1[5] * param_1[5] + param_1[4] * param_1[4]);
  if (0.0 < local_20) {
    local_20 = 1.0 / local_20;
  }
  local_24 = SQRT(param_1[10] * param_1[10] + param_1[9] * param_1[9] + param_1[8] * param_1[8]);
  if (0.0 < local_24) {
    local_24 = 1.0 / local_24;
  }
  fVar1 = -param_1[6] * local_20;
  if (_DAT_005d80f7 <= fVar1) {
    if (fVar1 <= _DAT_005d80fb) {
      fVar6 = (float10)fVar1;
      fVar5 = fVar6;
      FUN_005a4b46();
      afStack_103c[0x3fa] = (float)fVar6;
      local_34 = (float)SQRT((float10)1 - fVar5 * fVar5);
      if (fVar6 < (float10)_DAT_005d80ff) {
        afStack_103c[0x3fa] = afStack_103c[0x3fa] + _DAT_005d8103;
      }
      unaff_ESI = extraout_ECX_00;
      param_1 = extraout_EDX;
      if (_DAT_005d8107 <= local_34) {
        local_30 = 1.0 / local_34;
        afStack_103c[0x3fd] = extraout_EDX[2] * local_28 * local_30;
        local_40 = extraout_EDX[10] * local_24 * local_30;
        if ((_DAT_005d810b <= afStack_103c[0x3fd]) || (afStack_103c[0x3fd] <= _DAT_005d810f)) {
          pfVar2 = extraout_ECX_00;
          pfVar3 = extraout_EDX;
          if (_DAT_005d8113 < local_40) {
            if ((int)local_40 < 0x3f800000) {
              fVar5 = (float10)local_40;
              FUN_005a4b74();
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
          FUN_005a4b46();
          local_14 = (float)fVar5;
          pfVar2 = extraout_ECX_01;
          pfVar3 = extraout_EDX_00;
          if (local_40 < 0.0) {
            local_14 = _DAT_005d8117 - (float)fVar5;
          }
        }
        if (local_14 < _DAT_005d80ff) {
          local_14 = local_14 + _DAT_005d8103;
        }
        if (_DAT_005d8117 < local_14) {
          local_14 = local_14 + _DAT_005d811b;
        }
        local_3c = pfVar3[5] * local_20 * local_30;
        local_2c = pfVar3[4] * local_20 * local_30;
        afStack_103c[0x3fb] = local_14;
        if ((_DAT_005d810b <= local_2c) || (local_2c <= _DAT_005d810f)) {
          if (_DAT_005d8113 < local_3c) {
            if ((int)local_3c < 0x3f800000) {
              fVar5 = (float10)local_3c;
              FUN_005a4b74();
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
          if (local_2c < 0.0) {
            local_1c = -local_1c;
          }
        }
        else {
          fVar5 = (float10)local_2c;
          FUN_005a4b46();
          local_1c = (float)fVar5;
          pfVar2 = extraout_ECX_02;
          if (local_3c < 0.0) {
            local_1c = _DAT_005d8117 - (float)fVar5;
          }
        }
        if (local_1c < _DAT_005d80ff) {
          local_1c = local_1c + _DAT_005d8103;
        }
        if (_DAT_005d8117 < local_1c) {
          local_1c = local_1c + _DAT_005d811b;
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
  local_38 = *param_1 * local_28;
  local_44 = -param_1[8] * local_24;
  afStack_103c[0x3fc] = 0.0;
  if ((_DAT_005d810b <= local_44) || (local_44 <= _DAT_005d810f)) {
    if (_DAT_005d8113 < local_38) {
      if ((int)local_38 < 0x3f800000) {
        fVar5 = (float10)local_38;
        FUN_005a4b74();
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
    FUN_005a4b46();
    local_18 = (float)fVar5;
    unaff_ESI = extraout_ECX;
    if (local_38 < 0.0) {
      local_18 = _DAT_005d8117 - (float)fVar5;
    }
  }
  if (local_18 < _DAT_005d80ff) {
    local_18 = local_18 + _DAT_005d8103;
  }
  if (_DAT_005d8117 < local_18) {
    local_18 = local_18 + _DAT_005d811b;
  }
  afStack_103c[0x3fb] = local_18;
  *unaff_ESI = afStack_103c[0x3fa];
  unaff_ESI[(uint)bVar4 * -2 + 1] = afStack_103c[(uint)bVar4 * -2 + 0x3fb];
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       afStack_103c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x3fc];
  return unaff_ESI;
}
