// Name: engine_matrix.c_normalizeVector3DFixed_FUN_004e9a60
// Address: 004e9a60
// Address Range: [[004e9a60, 004e9ad5]]
// Convention: unknown
// Signature: void engine_matrix_c_normalizeVector3DFixed_FUN_004e9a60(int *param_1)

#include "nocturne.h"

void engine_matrix_c_normalizeVector3DFixed_FUN_004e9a60(int *param_1)

{
  int iVar1;
  int *unaff_ESI;
  byte bVar2;
  int aiStackY_ffc [1016];
  int iStack_14;
  int iStack_10;
  
  bVar2 = 0;
  iVar1 = engine_matrix_c_integerSquareRoot_FUN_004e9980
                    (param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2]);
  iStack_14 = (int)(((longlong)*param_1 * 0x7fff) / (longlong)iVar1) * 2;
  iStack_10 = (int)(((longlong)param_1[1] * 0x7fff) / (longlong)iVar1) * 2;
  *unaff_ESI = iStack_14;
  unaff_ESI[(uint)bVar2 * -2 + 1] = *(int *)((int)&stack0xfffffff0 + (uint)bVar2 * -8);
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       *(int *)(&stack0xfffffff4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  return;
}
