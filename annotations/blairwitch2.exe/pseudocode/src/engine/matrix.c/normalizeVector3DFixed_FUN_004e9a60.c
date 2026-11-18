// Name: engine_matrix.c_normalizeVector3DFixed_FUN_004e9a60
// Address: 004e9a60
// Address Range: [[004e9a60, 004e9ad5]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi engine_matrix_c_normalizeVector3DFixed_FUN_004e9a60(CVector3i *input_vector,CVector3i *output_vector)

#include "nocturne.h"

CVector3i * __stack_esi engine_matrix_c_normalizeVector3DFixed_FUN_004e9a60(CVector3i *input_vector,CVector3i *output_vector)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  int aiStackY_ffc [1016];
  int iStack_14;
  int iStack_10;
  
  bVar3 = 0;
  iVar1 = engine_matrix_c_integerSquareRoot_FUN_004e9980
                    (input_vector->y * input_vector->y + input_vector->x * input_vector->x +
                     input_vector->z * input_vector->z);
  iStack_14 = (int)(((longlong)input_vector->x * 0x7fff) / (longlong)iVar1) * 2;
  iStack_10 = (int)(((longlong)input_vector->y * 0x7fff) / (longlong)iVar1) * 2;
  puVar2 = (uint *)((int)output_vector + (uint)bVar3 * -8 + 4);
  output_vector->x = iStack_14;
  *puVar2 = *(uint *)((int)&stack0xfffffff0 + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)(&stack0xfffffff4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  return output_vector;
}
