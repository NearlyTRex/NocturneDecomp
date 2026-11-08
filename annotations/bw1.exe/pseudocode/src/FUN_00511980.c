// Name: FUN_00511980
// Address: 00511980
// Address Range: [[00511980, 00511a01]]
// Convention: unknown
// Signature: void FUN_00511980(float *param_1,float *param_2,float *param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00511980(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = _DAT_01d224d8;
  fVar2 = _DAT_01d224d4;
  fVar1 = _DAT_01d224d0;
  if (_DAT_01d25f14 != 0) {
    *param_1 = _DAT_01d224cc;
    *param_2 = fVar1;
    *param_3 = fVar2;
    *param_4 = fVar3;
    return;
  }
  fVar1 = 1.0 / _DAT_01d22544;
  fVar2 = _DAT_01d224d0 * fVar1;
  fVar3 = _DAT_01d224d4 * fVar1;
  fVar4 = _DAT_01d224d8 * fVar1;
  *param_1 = _DAT_01d224cc * fVar1;
  *param_2 = fVar2;
  *param_3 = fVar3;
  *param_4 = fVar4;
  return;
}
