// Name: engine_drender.cpp_FUN_0046d230
// Address: 0046d230
// Address Range: [[0046d230, 0046d24c]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0046d230(void)

#include "nocturne.h"

void engine_drender_cpp_FUN_0046d230(void)

{
  uint *unaff_ESI;
  byte bVar1;
  uint auStack_ffc [1021];
  
  bVar1 = 0;
  engine_matrix_c_getCameraRotation_FUN_004e6ac0();
  *unaff_ESI = auStack_ffc[0x3fa];
  unaff_ESI[(uint)bVar1 * -2 + 1] = auStack_ffc[(uint)bVar1 * -2 + 0x3fb];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       auStack_ffc[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3fc];
  return;
}
