// Name: FUN_0055b6c0
// Address: 0055b6c0
// Address Range: [[0055b6c0, 0055bbfa]]
// Convention: unknown
// Signature: float * FUN_0055b6c0(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_0055b6c0(float *param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  double dVar5;
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
  
  fVar3 = SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  if (0.0 < fVar3) {
    fVar3 = 1.0 / fVar3;
  }
  fVar4 = SQRT(param_1[6] * param_1[6] + param_1[5] * param_1[5] + param_1[4] * param_1[4]);
  if (0.0 < fVar4) {
    fVar4 = 1.0 / fVar4;
  }
  local_80 = (double)SQRT(param_1[10] * param_1[10] +
                          param_1[9] * param_1[9] + param_1[8] * param_1[8]);
  if (0.0 < local_80) {
    local_80 = 1.0 / local_80;
  }
  fVar6 = -param_1[9] * (float)local_80;
  if ((float)_DAT_005982c6 < fVar6) {
    if (fVar6 < 1.0) {
      fVar10 = (float10)fVar6;
      fVar9 = fVar10;
      FUN_00565c76();
      *extraout_ECX_00 = (float)fVar10;
      dVar1 = (double)SQRT((float10)1 - fVar9 * fVar9);
      if (fVar10 < (float10)_DAT_005982ce) {
        *extraout_ECX_00 = *extraout_ECX_00 + _DAT_005982d6;
      }
      param_2 = extraout_ECX_00;
      param_1 = extraout_EDX;
      if (0.0 < dVar1) {
        dVar1 = 1.0 / dVar1;
        dVar2 = (double)extraout_EDX[8] * local_80 * dVar1;
        dVar5 = (double)extraout_EDX[10] * local_80 * dVar1;
        if ((_DAT_005982de <= dVar2) || (dVar2 <= _DAT_005982e6)) {
          pfVar7 = extraout_ECX_00;
          pfVar8 = extraout_EDX;
          if (_DAT_005982c6 < dVar5) {
            if (dVar5 < 1.0) {
              fVar9 = (float10)dVar5;
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
          fVar9 = (float10)dVar2;
          FUN_00565c76();
          local_10 = (float)fVar9;
          pfVar7 = extraout_ECX_01;
          pfVar8 = extraout_EDX_00;
          if (dVar5 < 0.0) {
            local_10 = (float)_DAT_005982ee - local_10;
          }
        }
        if (local_10 < (float)_DAT_005982ce) {
          local_10 = local_10 + _DAT_005982d6;
        }
        if ((float)_DAT_005982ee < local_10) {
          local_10 = local_10 + _DAT_005982f6;
        }
        pfVar7[1] = local_10;
        fVar3 = pfVar8[1] * fVar3 * (float)dVar1;
        fVar4 = pfVar8[5] * fVar4 * (float)dVar1;
        dVar1 = (double)fVar3;
        dVar2 = (double)fVar4;
        if ((_DAT_005982de <= dVar1) || (dVar1 <= _DAT_005982e6)) {
          if (_DAT_005982c6 < dVar2) {
            if (dVar2 < 1.0) {
              fVar9 = (float10)fVar4;
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
          if (dVar1 < 0.0) {
            local_18 = -local_18;
          }
        }
        else {
          fVar9 = (float10)fVar3;
          FUN_00565c76();
          local_18 = (float)fVar9;
          pfVar7 = extraout_ECX_02;
          if (dVar2 < 0.0) {
            local_18 = (float)_DAT_005982ee - local_18;
          }
        }
        if (local_18 < (float)_DAT_005982ce) {
          local_18 = local_18 + _DAT_005982d6;
        }
        if ((float)_DAT_005982ee < local_18) {
          local_18 = local_18 + _DAT_005982f6;
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
  dVar1 = (double)(-param_1[2] * fVar3);
  dVar2 = (double)(*param_1 * fVar3);
  if ((_DAT_005982de <= dVar1) || (dVar1 <= _DAT_005982e6)) {
    if (_DAT_005982c6 < dVar2) {
      if (dVar2 < 1.0) {
        fVar9 = (float10)(*param_1 * fVar3);
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
    fVar9 = (float10)(-param_1[2] * fVar3);
    FUN_00565c76();
    local_14 = (float)fVar9;
    param_2 = extraout_ECX;
    if (dVar2 < 0.0) {
      local_14 = (float)_DAT_005982ee - local_14;
    }
  }
  if (local_14 < (float)_DAT_005982ce) {
    local_14 = local_14 + _DAT_005982d6;
  }
  if ((float)_DAT_005982ee < local_14) {
    local_14 = local_14 + _DAT_005982f6;
  }
  param_2[1] = local_14;
  return param_2;
}
