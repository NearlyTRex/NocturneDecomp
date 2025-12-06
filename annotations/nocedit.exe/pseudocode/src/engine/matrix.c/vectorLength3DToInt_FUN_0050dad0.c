// Name: engine_matrix.c_vectorLength3DToInt_FUN_0050dad0
// Address: 0050dad0
// Address Range: [[0050dad0, 0050dafb]]
// Convention: __cdecl
// Signature: int engine_matrix.c_vectorLength3DToInt_FUN_0050dad0(CVector3i * vector_ptr)

#include "nocturne.h"

int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_0050dad0(CVector3i *vector_ptr)

{
  uint in_EDX;
  float10 fVar1;
  
  fVar1 = SQRT((float10)vector_ptr->z * (float10)vector_ptr->z +
               (float10)vector_ptr->y * (float10)vector_ptr->y +
               (float10)vector_ptr->x * (float10)vector_ptr->x);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,vector_ptr));
  return (int)ROUND(fVar1);
}
