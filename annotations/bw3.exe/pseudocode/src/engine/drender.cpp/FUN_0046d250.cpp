// Name: engine_drender.cpp_FUN_0046d250
// Address: 0046d250
// Address Range: [[0046d250, 0046d2c1]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0046d250(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_FUN_0046d250(void)

{
  float fVar1;
  float fVar2;
  float *unaff_ESI;
  byte bVar3;
  float afStack_1004 [1015];
  int local_28;
  int local_24;
  int local_20;
  float local_18 [3];
  
  bVar3 = 0;
  engine_matrix_c_getCameraRotation_FUN_004e6ac0();
  fVar2 = (float)_DAT_005bc563;
  fVar1 = (float)_DAT_005bc56b;
  local_18[1] = (float)local_24 * fVar2 * fVar1;
  local_18[0] = (float)local_20 * fVar2 * fVar1;
  *unaff_ESI = (float)local_28 * fVar2 * fVar1;
  unaff_ESI[(uint)bVar3 * -2 + 1] = local_18[(uint)bVar3 * -2];
  (unaff_ESI + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
       local_18[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  return;
}
