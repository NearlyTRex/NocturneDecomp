// Name: FUN_00572340
// Address: 00572340
// Address Range: [[00572340, 0057238a]]
// Convention: unknown
// Signature: int FUN_00572340(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00572340(int param_1)

{
  float fVar1;
  float fVar2;
  
  FUN_005bfb70(param_1,0,0x150);
  fVar1 = _DAT_02c745e0 * _DAT_00623308;
  fVar2 = _DAT_00605b0c * _DAT_00623308;
  *(float *)(param_1 + 0x114) = _DAT_00605b08 * _DAT_00623308;
  *(float *)(param_1 + 0x118) = fVar1;
  *(float *)(param_1 + 0x11c) = fVar2;
  return param_1;
}
