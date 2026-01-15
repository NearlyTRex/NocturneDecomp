// Name: engine_matrix.c_normalizeVector3DFixed_FUN_0050d970
// Address: 0050d970
// Address Range: [[0050d970, 0050d9e5]]
// Convention: __cdecl
// Signature: void engine_matrix.c_normalizeVector3DFixed_FUN_0050d970(CVector3i vector)

#include "nocturne.h"

void __cdecl engine_matrix_c_normalizeVector3DFixed_FUN_0050d970(CVector3i vector)

{
  int iVar1;
  int *unaff_ESI;
  byte bVar2;
  int aiStackY_1000 [1017];
  int local_18;
  int local_14;
  int local_10;
  
  bVar2 = 0;
  iVar1 = engine_matrix_c_integerSquareRoot_FUN_0050d890
                    (*(int *)(vector.x + 4) * *(int *)(vector.x + 4) +
                     *(int *)vector.x * *(int *)vector.x +
                     *(int *)(vector.x + 8) * *(int *)(vector.x + 8));
  local_18 = (int)(((longlong)*(int *)vector.x * 0x7fff) / (longlong)iVar1) * 2;
  local_14 = (int)(((longlong)*(int *)(vector.x + 4) * 0x7fff) / (longlong)iVar1) * 2;
  local_10 = (int)(((longlong)*(int *)(vector.x + 8) * 0x7fff) / (longlong)iVar1) * 2;
  *unaff_ESI = local_18;
  unaff_ESI[(uint)bVar2 * -2 + 1] = *(int *)((int)&stack0xffffffec + (uint)bVar2 * -8);
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       *(int *)((int)&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  return;
}
