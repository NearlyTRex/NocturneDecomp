// Name: FUN_0044dbd0
// Address: 0044dbd0
// Address Range: [[0044dbd0, 0044dfa6]]
// Convention: unknown
// Signature: float * FUN_0044dbd0(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_0044dbd0(float *param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float *extraout_ECX;
  float *extraout_ECX_00;
  float *pfVar5;
  float *extraout_ECX_01;
  float *extraout_EDX;
  float *extraout_EDX_00;
  float *extraout_EDX_01;
  float *extraout_EDX_02;
  float *extraout_EDX_03;
  float *extraout_EDX_04;
  float *pfVar6;
  float *extraout_EDX_05;
  float10 fVar7;
  float10 fVar8;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar3 = -param_1[5];
  if (fVar3 <= (float)_DAT_0057c50e) {
    *param_2 = -1.5707964;
  }
  else if (fVar3 < 1.0) {
    fVar8 = (float10)fVar3;
    fVar7 = fVar8;
    FUN_00565c76();
    fVar7 = SQRT((float10)1 - fVar7 * fVar7);
    *extraout_EDX_00 = (float)fVar8;
    param_1 = extraout_ECX;
    param_2 = extraout_EDX_00;
    if (0.0 < (double)fVar7) {
      fVar4 = extraout_ECX[2] * (1.0 / (float)fVar7);
      fVar3 = extraout_ECX[8] * (1.0 / (float)fVar7);
      dVar1 = (double)fVar4;
      dVar2 = (double)fVar3;
      if ((_DAT_0057c516 <= dVar1) || (dVar1 <= _DAT_0057c51e)) {
        pfVar5 = extraout_ECX;
        pfVar6 = extraout_EDX_00;
        if (_DAT_0057c50e < dVar2) {
          if (dVar2 < 1.0) {
            fVar8 = (float10)fVar3;
            FUN_00565ca4();
            local_18 = (float)fVar8;
            pfVar5 = extraout_ECX_01;
            pfVar6 = extraout_EDX_04;
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
        fVar8 = (float10)fVar4;
        FUN_00565c76();
        local_18 = (float)fVar8;
        pfVar5 = extraout_ECX_00;
        pfVar6 = extraout_EDX_01;
        if (dVar2 < 0.0) {
          local_18 = (float)_DAT_0057c526 - local_18;
        }
      }
      if (local_18 < (float)_DAT_0057c52e) {
        local_18 = local_18 + _DAT_0057c536;
      }
      if ((float)_DAT_0057c526 < local_18) {
        local_18 = local_18 + _DAT_0057c53a;
      }
      pfVar6[1] = local_18;
      fVar4 = pfVar5[3] * (1.0 / (float)fVar7);
      fVar3 = pfVar5[4] * (1.0 / (float)fVar7);
      dVar1 = (double)fVar4;
      dVar2 = (double)fVar3;
      if ((_DAT_0057c516 <= dVar1) || (dVar1 <= _DAT_0057c51e)) {
        if (_DAT_0057c50e < dVar2) {
          if (dVar2 < 1.0) {
            fVar7 = (float10)fVar3;
            FUN_00565ca4();
            local_1c = (float)fVar7;
            pfVar6 = extraout_EDX_05;
          }
          else {
            local_1c = 0.0;
          }
        }
        else {
          local_1c = 3.1415927;
        }
        if (dVar1 < 0.0) {
          local_1c = -local_1c;
        }
      }
      else {
        fVar7 = (float10)fVar4;
        FUN_00565c76();
        local_1c = (float)fVar7;
        pfVar6 = extraout_EDX_02;
        if (dVar2 < 0.0) {
          local_1c = (float)_DAT_0057c526 - local_1c;
        }
      }
      if (local_1c < (float)_DAT_0057c52e) {
        local_1c = local_1c + _DAT_0057c536;
      }
      if ((float)_DAT_0057c526 < local_1c) {
        local_1c = local_1c + _DAT_0057c53a;
      }
      pfVar6[2] = local_1c;
      return pfVar6;
    }
  }
  else {
    *param_2 = 1.5707964;
  }
  param_2[2] = 0.0;
  dVar1 = (double)-param_1[6];
  dVar2 = (double)*param_1;
  if ((_DAT_0057c516 <= dVar1) || (dVar1 <= _DAT_0057c51e)) {
    if (_DAT_0057c50e < dVar2) {
      if (dVar2 < 1.0) {
        fVar7 = (float10)*param_1;
        FUN_00565ca4();
        local_20 = (float)fVar7;
        param_2 = extraout_EDX_03;
      }
      else {
        local_20 = 0.0;
      }
    }
    else {
      local_20 = 3.1415927;
    }
    if (dVar1 < 0.0) {
      local_20 = -local_20;
    }
  }
  else {
    fVar7 = (float10)-param_1[6];
    FUN_00565c76();
    local_20 = (float)fVar7;
    param_2 = extraout_EDX;
    if (dVar2 < 0.0) {
      local_20 = (float)_DAT_0057c526 - local_20;
    }
  }
  if (local_20 < (float)_DAT_0057c52e) {
    local_20 = local_20 + _DAT_0057c536;
  }
  if ((float)_DAT_0057c526 < local_20) {
    local_20 = local_20 + _DAT_0057c53a;
  }
  param_2[1] = local_20;
  return param_2;
}
