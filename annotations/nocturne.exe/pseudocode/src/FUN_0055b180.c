// Name: FUN_0055b180
// Address: 0055b180
// Address Range: [[0055b180, 0055b6ba]]
// Convention: unknown
// Signature: float * FUN_0055b180(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_0055b180(float *param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *extraout_ECX;
  float *extraout_ECX_00;
  float *extraout_ECX_01;
  float *extraout_ECX_02;
  float *extraout_ECX_03;
  float *extraout_ECX_04;
  float *pfVar7;
  float *extraout_ECX_05;
  float *extraout_EDX;
  float *extraout_EDX_00;
  float *pfVar8;
  float *extraout_EDX_01;
  float10 fVar9;
  float10 fVar10;
  double local_80;
  float local_18;
  float local_14;
  float local_10;
  
  fVar4 = SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  if (0.0 < fVar4) {
    fVar4 = 1.0 / fVar4;
  }
  local_80 = (double)SQRT(param_1[6] * param_1[6] +
                          param_1[5] * param_1[5] + param_1[4] * param_1[4]);
  if (0.0 < local_80) {
    local_80 = 1.0 / local_80;
  }
  fVar5 = SQRT(param_1[10] * param_1[10] + param_1[9] * param_1[9] + param_1[8] * param_1[8]);
  if (0.0 < fVar5) {
    fVar5 = 1.0 / fVar5;
  }
  fVar6 = -param_1[6] * (float)local_80;
  if ((float)_DAT_0059828e < fVar6) {
    if (fVar6 < 1.0) {
      fVar10 = (float10)fVar6;
      fVar9 = fVar10;
      FUN_00565c76();
      *extraout_ECX_00 = (float)fVar10;
      dVar1 = (double)SQRT((float10)1 - fVar9 * fVar9);
      if (fVar10 < (float10)_DAT_00598296) {
        *extraout_ECX_00 = *extraout_ECX_00 + _DAT_0059829e;
      }
      param_2 = extraout_ECX_00;
      param_1 = extraout_EDX;
      if (0.0 < dVar1) {
        dVar1 = 1.0 / dVar1;
        fVar6 = extraout_EDX[2] * fVar4 * (float)dVar1;
        fVar4 = extraout_EDX[10] * fVar5 * (float)dVar1;
        dVar2 = (double)fVar6;
        dVar3 = (double)fVar4;
        if ((_DAT_005982a6 <= dVar2) || (dVar2 <= _DAT_005982ae)) {
          pfVar7 = extraout_ECX_00;
          pfVar8 = extraout_EDX;
          if (_DAT_0059828e < dVar3) {
            if (dVar3 < 1.0) {
              fVar9 = (float10)fVar4;
              FUN_00565ca4();
              local_10 = (float)fVar9;
              pfVar7 = extraout_ECX_04;
              pfVar8 = extraout_EDX_01;
            }
            else {
              local_10 = 0.0;
            }
          }
          else {
            local_10 = 3.1415927;
          }
          if (dVar2 < 0.0) {
            local_10 = -local_10;
          }
        }
        else {
          fVar9 = (float10)fVar6;
          FUN_00565c76();
          local_10 = (float)fVar9;
          pfVar7 = extraout_ECX_01;
          pfVar8 = extraout_EDX_00;
          if (dVar3 < 0.0) {
            local_10 = (float)_DAT_005982b6 - local_10;
          }
        }
        if (local_10 < (float)_DAT_00598296) {
          local_10 = local_10 + _DAT_0059829e;
        }
        if ((float)_DAT_005982b6 < local_10) {
          local_10 = local_10 + _DAT_005982be;
        }
        pfVar7[1] = local_10;
        dVar2 = (double)pfVar8[4] * local_80 * dVar1;
        dVar1 = (double)pfVar8[5] * local_80 * dVar1;
        if ((_DAT_005982a6 <= dVar2) || (dVar2 <= _DAT_005982ae)) {
          if (_DAT_0059828e < dVar1) {
            if (dVar1 < 1.0) {
              fVar9 = (float10)dVar1;
              FUN_00565ca4();
              local_18 = (float)fVar9;
              pfVar7 = extraout_ECX_05;
            }
            else {
              local_18 = 0.0;
            }
          }
          else {
            local_18 = 3.1415927;
          }
          if (dVar2 < 0.0) {
            local_18 = -local_18;
          }
        }
        else {
          fVar9 = (float10)dVar2;
          FUN_00565c76();
          local_18 = (float)fVar9;
          pfVar7 = extraout_ECX_02;
          if (dVar1 < 0.0) {
            local_18 = (float)_DAT_005982b6 - local_18;
          }
        }
        if (local_18 < (float)_DAT_00598296) {
          local_18 = local_18 + _DAT_0059829e;
        }
        if ((float)_DAT_005982b6 < local_18) {
          local_18 = local_18 + _DAT_005982be;
        }
        pfVar7[2] = local_18;
        return pfVar7;
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
  dVar1 = (double)(-param_1[8] * fVar5);
  dVar2 = (double)(*param_1 * fVar4);
  if ((_DAT_005982a6 <= dVar1) || (dVar1 <= _DAT_005982ae)) {
    if (_DAT_0059828e < dVar2) {
      if (dVar2 < 1.0) {
        fVar9 = (float10)(*param_1 * fVar4);
        FUN_00565ca4();
        local_14 = (float)fVar9;
        param_2 = extraout_ECX_03;
      }
      else {
        local_14 = 0.0;
      }
    }
    else {
      local_14 = 3.1415927;
    }
    if (dVar1 < 0.0) {
      local_14 = -local_14;
    }
  }
  else {
    fVar9 = (float10)(-param_1[8] * fVar5);
    FUN_00565c76();
    local_14 = (float)fVar9;
    param_2 = extraout_ECX;
    if (dVar2 < 0.0) {
      local_14 = (float)_DAT_005982b6 - local_14;
    }
  }
  if (local_14 < (float)_DAT_00598296) {
    local_14 = local_14 + _DAT_0059829e;
  }
  if ((float)_DAT_005982b6 < local_14) {
    local_14 = local_14 + _DAT_005982be;
  }
  param_2[1] = local_14;
  return param_2;
}
