// Name: engine_drender.cpp_FUN_0046b5e0
// Address: 0046b5e0
// Address Range: [[0046b5e0, 0046b643]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0046b5e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_FUN_0046b5e0(void)

{
  float fVar1;
  float *unaff_ESI;
  byte bVar2;
  float afStack_1004 [1015];
  CVector3i local_28;
  float local_1c;
  float local_18 [2];
  int local_10;
  
  bVar2 = 0;
  engine_matrix_c_getCameraOrigin_FUN_004ea3b0(&local_28);
  fVar1 = (float)_DAT_005d15cb;
  local_10 = local_28.z;
  local_1c = (float)local_28.x * fVar1;
  local_18[0] = (float)local_28.y * fVar1;
  local_18[1] = (float)local_28.z * fVar1;
  *unaff_ESI = (float)local_28.x * fVar1;
  unaff_ESI[(uint)bVar2 * -2 + 1] = local_18[(uint)bVar2 * -2];
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       local_18[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  return;
}
