// Name: FUN_0043b3c0
// Address: 0043b3c0
// Address Range: [[0043b3c0, 0043b413]]
// Convention: unknown
// Signature: void FUN_0043b3c0(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043b3c0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x720);
  fVar2 = (float)_DAT_0057b21a;
  param_2[1] = -0.1;
  *param_2 = -fVar1 * fVar2;
  param_2[2] = -*(float *)(param_1 + 0x728) * fVar2;
  param_2[3] = *(float *)(param_1 + 0x720) * fVar2;
  param_2[4] = *(float *)(param_1 + 0x724) + (float)_DAT_0057b222;
  param_2[5] = fVar2 * *(float *)(param_1 + 0x728);
  return;
}
