// Name: engine_matrix.c_vectorLength3DToInt_FUN_004e62a0
// Address: 004e62a0
// Address Range: [[004e62a0, 004e62cb]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_004e62a0(CVector3i *vector_ptr)

#include "nocturne.h"

int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_004e62a0(CVector3i *vector_ptr)

{
  float10 fVar1;
  
  fVar1 = SQRT((float10)vector_ptr->z * (float10)vector_ptr->z +
               (float10)vector_ptr->y * (float10)vector_ptr->y +
               (float10)vector_ptr->x * (float10)vector_ptr->x);
  round();
  return (int)ROUND(fVar1);
}
