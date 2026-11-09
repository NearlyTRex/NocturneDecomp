// Name: engine_matrix.c_vectorLength3DToInt_FUN_004e9bc0
// Address: 004e9bc0
// Address Range: [[004e9bc0, 004e9beb]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_004e9bc0(CVector3i *vector_ptr)

#include "nocturne.h"

int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_004e9bc0(CVector3i *vector_ptr)

{
  float10 fVar1;
  
  fVar1 = SQRT((float10)*(int *)(vector_ptr + 8) * (float10)*(int *)(vector_ptr + 8) +
               (float10)*(int *)(vector_ptr + 4) * (float10)*(int *)(vector_ptr + 4) +
               (float10)*(int *)vector_ptr * (float10)*(int *)vector_ptr);
  round();
  return (int)ROUND(fVar1);
}
