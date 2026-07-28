// Name: engine_drender.cpp_FUN_00460d10
// Address: 00460d10
// Address Range: [[00460d10, 00460d2c]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_00460d10(void)

#include "nocturne.h"

void engine_drender_cpp_FUN_00460d10(void)

{
  uint *unaff_ESI;
  byte bVar1;
  uint auStack_1000 [1019];
  CVector3i CStack_14;
  
  bVar1 = 0;
  engine_matrix_c_getCameraOrigin_FUN_004ce760(&CStack_14);
  *unaff_ESI = 0x460d20;
  unaff_ESI[(uint)bVar1 * -2 + 1] = *(uint *)((int)&CStack_14 + (uint)bVar1 * -8);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(uint *)((int)&CStack_14 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 4);
  return;
}
