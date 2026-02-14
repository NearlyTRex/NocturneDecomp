// Name: engine_matrix.c_normalizeVector3DFixed_FUN_0050d970
// Address: 0050d970
// Address Range: [[0050d970, 0050d9e5]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi engine_matrix_c_normalizeVector3DFixed_FUN_0050d970(CVector3i *input_vector,CVector3i *output_vector)

#include "nocturne.h"

CVector3i * __stack_esi engine_matrix_c_normalizeVector3DFixed_FUN_0050d970(CVector3i *input_vector,CVector3i *output_vector)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  int aiStackY_1000 [1017];
  int local_18;
  int local_14;
  int local_10;
  
  bVar3 = 0;
  iVar1 = engine_matrix_c_integerSquareRoot_FUN_0050d890
                    (input_vector->y * input_vector->y + input_vector->x * input_vector->x +
                     input_vector->z * input_vector->z);
  local_18 = (int)(((longlong)input_vector->x * 0x7fff) / (longlong)iVar1) * 2;
  local_14 = (int)(((longlong)input_vector->y * 0x7fff) / (longlong)iVar1) * 2;
  local_10 = (int)(((longlong)input_vector->z * 0x7fff) / (longlong)iVar1) * 2;
  puVar2 = (uint *)((int)output_vector + (uint)bVar3 * -8 + 4);
  output_vector->x = local_18;
  *puVar2 = *(uint *)((int)&stack0xffffffec + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  return output_vector;
}
