// Name: FUN_00455270
// Address: 00455270
// Address Range: [[00455270, 0045557b]]
// Convention: unknown
// Signature: void FUN_00455270(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00455270(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_2c;
  
  *(uint *)(param_1 + 0x256e8) = 0;
  *(uint *)(param_1 + 0x256e4) = *(uint *)(param_1 + 0x256e8);
  *(uint *)(param_1 + 0x256e0) = *(uint *)(param_1 + 0x256e4);
  fVar3 = (float)FUN_005038a0(param_1 + 0x2b4,0);
  if ((fVar3 <= 0.0) || (1.0 <= *(float *)(param_1 + 0x256bc))) {
    *(uint *)(param_1 + 0x256b8) = 0;
    *(uint *)(param_1 + 0x256ec) = 0xffffffff;
    *(uint *)(param_1 + 0x256c0) = 0;
    *(uint *)(param_1 + 0x256c4) = 0;
    *(uint *)(param_1 + 0x256bc) = 0;
    return;
  }
  if (fVar3 < 1.0) {
    fVar3 = (1.0 - fVar3) * param_2 * (float)_DAT_005d01df;
    if (fVar3 <= ABS(*(float *)(param_1 + 0x256b8))) {
      if (0.0 <= *(float *)(param_1 + 0x256b8)) {
        *(float *)(param_1 + 0x256b8) = *(float *)(param_1 + 0x256b8) - fVar3;
      }
      else {
        *(float *)(param_1 + 0x256b8) = *(float *)(param_1 + 0x256b8) + fVar3;
      }
    }
    else {
      *(uint *)(param_1 + 0x256b8) = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x256ec);
  *(uint *)(param_1 + 0x256ec) = _DAT_01b4d2a8;
  if (*(float *)(param_1 + 0x256b8) < 0.0) {
    *(uint *)(param_1 + 0x256ec) = _DAT_01b4d2ac;
  }
  if (*(float *)(param_1 + 0x256bc) <= (float)_DAT_005d01e7) {
    *(uint *)(param_1 + 0x256c4) = 0;
  }
  else {
    *(float *)(param_1 + 0x256c4) = *(float *)(param_1 + 0x256c4) + param_2;
  }
  if ((*(float *)(param_1 + 0x256c0) <= 0.0) &&
     (((float)_DAT_005d01ef <= *(float *)(param_1 + 0x256bc) ||
      (1.0 < *(float *)(param_1 + 0x256c4))))) {
    *(float *)(param_1 + 0x256c0) = (1.0 - *(float *)(param_1 + 0x256bc)) * 1.6;
  }
  if (*(float *)(param_1 + 0x256c0) <= 0.0) {
    local_2c = ABS(*(float *)(param_1 + 0x256b8) * _DAT_005d01f7);
    if (iVar1 != *(int *)(param_1 + 0x256ec)) {
      local_2c = 0.0;
    }
    if (1.0 < local_2c) {
      local_2c = 1.0;
    }
    fVar3 = (local_2c - *(float *)(param_1 + 0x256bc)) + *(float *)(param_1 + 0x256bc);
    *(float *)(param_1 + 0x256bc) = fVar3;
    if ((float)_DAT_005d01ff < fVar3) {
      *(int *)(param_1 + 0x256ec) = iVar1;
      return;
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x256c0);
    fVar2 = fVar3 - param_2;
    *(float *)(param_1 + 0x256c0) = fVar2;
    if (0.0 < fVar2) {
      param_2 = param_2 / fVar3;
    }
    else {
      param_2 = 1.0 - *(float *)(param_1 + 0x256bc);
      *(uint *)(param_1 + 0x256c0) = 0;
    }
    fVar3 = *(float *)(param_1 + 0x256bc);
    fVar2 = fVar3 + param_2;
    *(float *)(param_1 + 0x256bc) = fVar2;
    if (fVar2 < 1.0) {
      *(float *)(param_1 + 0x256b8) =
           *(float *)(param_1 + 0x256b8) - (*(float *)(param_1 + 0x256b8) * param_2) / (1.0 - fVar3)
      ;
      return;
    }
    *(uint *)(param_1 + 0x256b8) = 0;
    *(uint *)(param_1 + 0x256c0) = 0;
    *(uint *)(param_1 + 0x256c4) = 0;
    *(uint *)(param_1 + 0x256bc) = 0x3f800000;
  }
  return;
}
