// Name: FUN_00567530
// Address: 00567530
// Address Range: [[00567530, 0056783b]]
// Convention: unknown
// Signature: void FUN_00567530(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00567530(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_2c;
  
  *(uint *)(param_1 + 0x256ec) = 0;
  *(uint *)(param_1 + 0x256e8) = *(uint *)(param_1 + 0x256ec);
  *(uint *)(param_1 + 0x256e4) = *(uint *)(param_1 + 0x256e8);
  fVar3 = (float)FUN_005038a0(param_1 + 0x2b4,0);
  if ((fVar3 <= 0.0) || (1.0 <= *(float *)(param_1 + 0x256c0))) {
    *(uint *)(param_1 + 0x256bc) = 0;
    *(uint *)(param_1 + 0x256f0) = 0xffffffff;
    *(uint *)(param_1 + 0x256c4) = 0;
    *(uint *)(param_1 + 0x256c8) = 0;
    *(uint *)(param_1 + 0x256c0) = 0;
    return;
  }
  if (fVar3 < 1.0) {
    fVar3 = (1.0 - fVar3) * param_2 * (float)_DAT_005eb86d;
    if (fVar3 <= ABS(*(float *)(param_1 + 0x256bc))) {
      if (0.0 <= *(float *)(param_1 + 0x256bc)) {
        *(float *)(param_1 + 0x256bc) = *(float *)(param_1 + 0x256bc) - fVar3;
      }
      else {
        *(float *)(param_1 + 0x256bc) = *(float *)(param_1 + 0x256bc) + fVar3;
      }
    }
    else {
      *(uint *)(param_1 + 0x256bc) = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x256f0);
  *(uint *)(param_1 + 0x256f0) = _DAT_0264be80;
  if (*(float *)(param_1 + 0x256bc) < 0.0) {
    *(uint *)(param_1 + 0x256f0) = _DAT_0264be84;
  }
  if (*(float *)(param_1 + 0x256c0) <= (float)_DAT_005eb875) {
    *(uint *)(param_1 + 0x256c8) = 0;
  }
  else {
    *(float *)(param_1 + 0x256c8) = *(float *)(param_1 + 0x256c8) + param_2;
  }
  if ((*(float *)(param_1 + 0x256c4) <= 0.0) &&
     (((float)_DAT_005eb87d <= *(float *)(param_1 + 0x256c0) ||
      (1.0 < *(float *)(param_1 + 0x256c8))))) {
    *(float *)(param_1 + 0x256c4) = (1.0 - *(float *)(param_1 + 0x256c0)) * 1.6;
  }
  if (*(float *)(param_1 + 0x256c4) <= 0.0) {
    local_2c = ABS(*(float *)(param_1 + 0x256bc) * _DAT_005eb885);
    if (iVar1 != *(int *)(param_1 + 0x256f0)) {
      local_2c = 0.0;
    }
    if (1.0 < local_2c) {
      local_2c = 1.0;
    }
    fVar3 = (local_2c - *(float *)(param_1 + 0x256c0)) + *(float *)(param_1 + 0x256c0);
    *(float *)(param_1 + 0x256c0) = fVar3;
    if ((float)_DAT_005eb88d < fVar3) {
      *(int *)(param_1 + 0x256f0) = iVar1;
      return;
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x256c4);
    fVar2 = fVar3 - param_2;
    *(float *)(param_1 + 0x256c4) = fVar2;
    if (0.0 < fVar2) {
      param_2 = param_2 / fVar3;
    }
    else {
      param_2 = 1.0 - *(float *)(param_1 + 0x256c0);
      *(uint *)(param_1 + 0x256c4) = 0;
    }
    fVar3 = *(float *)(param_1 + 0x256c0);
    fVar2 = fVar3 + param_2;
    *(float *)(param_1 + 0x256c0) = fVar2;
    if (fVar2 < 1.0) {
      *(float *)(param_1 + 0x256bc) =
           *(float *)(param_1 + 0x256bc) - (*(float *)(param_1 + 0x256bc) * param_2) / (1.0 - fVar3)
      ;
      return;
    }
    *(uint *)(param_1 + 0x256bc) = 0;
    *(uint *)(param_1 + 0x256c4) = 0;
    *(uint *)(param_1 + 0x256c8) = 0;
    *(uint *)(param_1 + 0x256c0) = 0x3f800000;
  }
  return;
}
