// Name: engine_matrix.c_FUN_00483b50
// Address: 00483b50
// Address Range: [[00483b50, 00483b6c]]
// Convention: unknown
// Signature: void engine_matrix_c_FUN_00483b50(void)

#include "nocturne.h"

void engine_matrix_c_FUN_00483b50(void)

{
  uint *unaff_ESI;
  byte bVar1;
  uint auStack_ffc [1021];
  
  bVar1 = 0;
  engine_matrix_c_getCameraRotation_FUN_00509080();
  *unaff_ESI = auStack_ffc[0x3fa];
  unaff_ESI[(uint)bVar1 * -2 + 1] = auStack_ffc[(uint)bVar1 * -2 + 0x3fb];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       auStack_ffc[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3fc];
  return;
}
