// Name: engine_matrix.c_FUN_004cde10
// Address: 004cde10
// Address Range: [[004cde10, 004cde85]]
// Convention: unknown
// Signature: void engine_matrix_c_FUN_004cde10(int *param_1)

#include "nocturne.h"

void engine_matrix_c_FUN_004cde10(int *param_1)

{
  int iVar1;
  int *unaff_ESI;
  byte bVar2;
  int aiStackY_1000 [1017];
  int local_18;
  int local_14;
  int local_10;
  
  bVar2 = 0;
  iVar1 = engine_matrix_c_FUN_004cdd30
                    (param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2]);
  local_18 = (int)(((longlong)*param_1 * 0x7fff) / (longlong)iVar1) * 2;
  local_14 = (int)(((longlong)param_1[1] * 0x7fff) / (longlong)iVar1) * 2;
  local_10 = (int)(((longlong)param_1[2] * 0x7fff) / (longlong)iVar1) * 2;
  *unaff_ESI = local_18;
  unaff_ESI[(uint)bVar2 * -2 + 1] = *(int *)((int)&stack0xffffffec + (uint)bVar2 * -8);
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       *(int *)((int)&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  return;
}
