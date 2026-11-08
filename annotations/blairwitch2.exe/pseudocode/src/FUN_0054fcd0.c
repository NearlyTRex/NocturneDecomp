// Name: FUN_0054fcd0
// Address: 0054fcd0
// Address Range: [[0054fcd0, 0054fd1a]]
// Convention: unknown
// Signature: int FUN_0054fcd0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0054fcd0(int param_1)

{
  float fVar1;
  float fVar2;
  
  FUN_005b77c0(param_1,0,0x150);
  fVar1 = _DAT_0263cf10 * _DAT_0061bcb8;
  fVar2 = _DAT_005fbc2c * _DAT_0061bcb8;
  *(float *)(param_1 + 0x114) = _DAT_005fbc28 * _DAT_0061bcb8;
  *(float *)(param_1 + 0x118) = fVar1;
  *(float *)(param_1 + 0x11c) = fVar2;
  return param_1;
}
