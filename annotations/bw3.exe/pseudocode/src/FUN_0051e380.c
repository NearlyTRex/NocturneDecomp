// Name: FUN_0051e380
// Address: 0051e380
// Address Range: [[0051e380, 0051e68b]]
// Convention: unknown
// Signature: void FUN_0051e380(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051e380(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_2c;
  
  *(uint *)(param_1 + 0x20c74) = 0;
  *(uint *)(param_1 + 0x20c70) = *(uint *)(param_1 + 0x20c74);
  *(uint *)(param_1 + 0x20c6c) = *(uint *)(param_1 + 0x20c70);
  fVar3 = (float)FUN_004fc350(param_1 + 0x158,0);
  if ((fVar3 <= 0.0) || (1.0 <= *(float *)(param_1 + 0x20c48))) {
    *(uint *)(param_1 + 0x20c44) = 0;
    *(uint *)(param_1 + 0x20c78) = 0xffffffff;
    *(uint *)(param_1 + 0x20c4c) = 0;
    *(uint *)(param_1 + 0x20c50) = 0;
    *(uint *)(param_1 + 0x20c48) = 0;
    return;
  }
  if (fVar3 < 1.0) {
    fVar3 = (1.0 - fVar3) * param_2 * (float)_DAT_005cd3cf;
    if (fVar3 <= ABS(*(float *)(param_1 + 0x20c44))) {
      if (0.0 <= *(float *)(param_1 + 0x20c44)) {
        *(float *)(param_1 + 0x20c44) = *(float *)(param_1 + 0x20c44) - fVar3;
      }
      else {
        *(float *)(param_1 + 0x20c44) = *(float *)(param_1 + 0x20c44) + fVar3;
      }
    }
    else {
      *(uint *)(param_1 + 0x20c44) = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x20c78);
  *(uint *)(param_1 + 0x20c78) = _DAT_01ed373c;
  if (*(float *)(param_1 + 0x20c44) < 0.0) {
    *(uint *)(param_1 + 0x20c78) = _DAT_01ed3740;
  }
  if (*(float *)(param_1 + 0x20c48) <= (float)_DAT_005cd3d7) {
    *(uint *)(param_1 + 0x20c50) = 0;
  }
  else {
    *(float *)(param_1 + 0x20c50) = *(float *)(param_1 + 0x20c50) + param_2;
  }
  if ((*(float *)(param_1 + 0x20c4c) <= 0.0) &&
     (((float)_DAT_005cd3df <= *(float *)(param_1 + 0x20c48) ||
      (1.0 < *(float *)(param_1 + 0x20c50))))) {
    *(float *)(param_1 + 0x20c4c) = (1.0 - *(float *)(param_1 + 0x20c48)) * 1.6;
  }
  if (*(float *)(param_1 + 0x20c4c) <= 0.0) {
    local_2c = ABS(*(float *)(param_1 + 0x20c44) * _DAT_005cd3e7);
    if (iVar1 != *(int *)(param_1 + 0x20c78)) {
      local_2c = 0.0;
    }
    if (1.0 < local_2c) {
      local_2c = 1.0;
    }
    fVar3 = (local_2c - *(float *)(param_1 + 0x20c48)) + *(float *)(param_1 + 0x20c48);
    *(float *)(param_1 + 0x20c48) = fVar3;
    if ((float)_DAT_005cd3ef < fVar3) {
      *(int *)(param_1 + 0x20c78) = iVar1;
      return;
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x20c4c);
    fVar2 = fVar3 - param_2;
    *(float *)(param_1 + 0x20c4c) = fVar2;
    if (0.0 < fVar2) {
      param_2 = param_2 / fVar3;
    }
    else {
      param_2 = 1.0 - *(float *)(param_1 + 0x20c48);
      *(uint *)(param_1 + 0x20c4c) = 0;
    }
    fVar3 = *(float *)(param_1 + 0x20c48);
    fVar2 = fVar3 + param_2;
    *(float *)(param_1 + 0x20c48) = fVar2;
    if (fVar2 < 1.0) {
      *(float *)(param_1 + 0x20c44) =
           *(float *)(param_1 + 0x20c44) - (*(float *)(param_1 + 0x20c44) * param_2) / (1.0 - fVar3)
      ;
      return;
    }
    *(uint *)(param_1 + 0x20c44) = 0;
    *(uint *)(param_1 + 0x20c4c) = 0;
    *(uint *)(param_1 + 0x20c50) = 0;
    *(uint *)(param_1 + 0x20c48) = 0x3f800000;
  }
  return;
}
