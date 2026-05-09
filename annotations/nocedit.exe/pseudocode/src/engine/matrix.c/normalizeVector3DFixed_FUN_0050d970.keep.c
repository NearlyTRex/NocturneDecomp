// Name: engine_matrix.c_normalizeVector3DFixed_FUN_0050d970
// Address: 0050d970
// MANUAL RECONSTRUCTION
// Address Range: [[0050d970, 0050d9e5] [00608c6b, 00608c87]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi engine_matrix_c_normalizeVector3DFixed_FUN_0050d970(CVector3i *input_vector,CVector3i *output_vector)

#include "nocturne.h"

CVector3i * __stack_esi engine_matrix_c_normalizeVector3DFixed_FUN_0050d970(CVector3i *input_vector,CVector3i *output_vector)

{
  int iVar2;
  int iVar3;
  int iVar1;
  
  iVar1 = engine_matrix_c_integerSquareRoot_FUN_0050d890
                    (input_vector->y * input_vector->y + input_vector->x * input_vector->x +
                     input_vector->z * input_vector->z);
  iVar2 = input_vector->y;
  iVar3 = input_vector->z;
  output_vector->x = (int)(((longlong)input_vector->x * 0x7fff) / (longlong)iVar1) * 2;
  output_vector->y = (int)(((longlong)iVar2 * 0x7fff) / (longlong)iVar1) * 2;
  output_vector->z = (int)(((longlong)iVar3 * 0x7fff) / (longlong)iVar1) * 2;
  return output_vector;
}
