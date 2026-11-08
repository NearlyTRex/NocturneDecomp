// Name: FUN_004f8ca0
// Address: 004f8ca0
// Address Range: [[004f8ca0, 004f8d32]]
// Convention: unknown
// Signature: void FUN_004f8ca0(float param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f8ca0(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  ulonglong uVar4;
  
  fVar1 = (float10)_DAT_005ddfe4;
  fVar2 = (float10)param_1 * fVar1;
  fVar3 = (float10)param_2 * fVar1;
  fVar1 = (float10)param_3 * fVar1;
  _DAT_01d0d2d8 = param_1;
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0();
  _DAT_01d0d2dc = param_2;
  _DAT_01d0d2e0 = param_3;
  uVar4 = FUN_005b7ff0((int)ROUND(fVar2),(int)ROUND(fVar3));
  _DAT_01d0d2e4 = (int)ROUND(fVar1) | (int)uVar4 << 8 | (uint)((ulonglong)uVar4 >> 0x20);
  return;
}
