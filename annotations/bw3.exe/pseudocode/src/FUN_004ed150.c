// Name: FUN_004ed150
// Address: 004ed150
// Address Range: [[004ed150, 004ed1d1]]
// Convention: unknown
// Signature: void FUN_004ed150(float *param_1,float *param_2,float *param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ed150(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = _DAT_01d76c58;
  fVar2 = _DAT_01d76c54;
  fVar1 = _DAT_01d76c50;
  if (_DAT_01d7a694 != 0) {
    *param_1 = _DAT_01d76c4c;
    *param_2 = fVar1;
    *param_3 = fVar2;
    *param_4 = fVar3;
    return;
  }
  fVar1 = 1.0 / _DAT_01d76cc4;
  fVar2 = _DAT_01d76c50 * fVar1;
  fVar3 = _DAT_01d76c54 * fVar1;
  fVar4 = _DAT_01d76c58 * fVar1;
  *param_1 = _DAT_01d76c4c * fVar1;
  *param_2 = fVar2;
  *param_3 = fVar3;
  *param_4 = fVar4;
  return;
}
