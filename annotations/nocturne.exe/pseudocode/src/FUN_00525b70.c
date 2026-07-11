// Name: FUN_00525b70
// Address: 00525b70
// Address Range: [[00525b70, 00525bba]]
// Convention: unknown
// Signature: int FUN_00525b70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00525b70(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FUN_00563cc0(param_1,0,0x128);
  fVar1 = (float)_DAT_005bea88;
  fVar2 = _DAT_02dbd370 * fVar1;
  fVar3 = _DAT_005a2170 * fVar1;
  *(float *)(param_1 + 0x114) = _DAT_005a216c * fVar1;
  *(float *)(param_1 + 0x118) = fVar2;
  *(float *)(param_1 + 0x11c) = fVar3;
  return param_1;
}
