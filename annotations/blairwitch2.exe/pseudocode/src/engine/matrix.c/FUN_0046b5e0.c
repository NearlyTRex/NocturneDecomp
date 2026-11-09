// Name: engine_matrix.c_FUN_0046b5e0
// Address: 0046b5e0
// Address Range: [[0046b5e0, 0046b643]]
// Convention: unknown
// Signature: void engine_matrix_c_FUN_0046b5e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_matrix_c_FUN_0046b5e0(void)

{
  float fVar1;
  float *unaff_ESI;
  byte bVar2;
  float afStack_1004 [1015];
  int local_28;
  int local_24;
  int local_20;
  float local_18 [3];
  
  bVar2 = 0;
  engine_matrix_c_FUN_004ea3b0();
  fVar1 = (float)_DAT_005d15cb;
  local_18[0] = (float)local_24 * fVar1;
  local_18[1] = (float)local_20 * fVar1;
  *unaff_ESI = (float)local_28 * fVar1;
  unaff_ESI[(uint)bVar2 * -2 + 1] = local_18[(uint)bVar2 * -2];
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       local_18[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  return;
}
