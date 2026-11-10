// Name: engine_matrix.c_vectorLength3DToInt_FUN_00508860
// Address: 00508860
// Address Range: [[00508860, 0050888b]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_00508860(CVector3i *vector_ptr)

#include "nocturne.h"

int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_00508860(CVector3i *vector_ptr)

{
  float10 fVar1;
  
  fVar1 = SQRT((float10)vector_ptr->z * (float10)vector_ptr->z +
               (float10)vector_ptr->y * (float10)vector_ptr->y +
               (float10)vector_ptr->x * (float10)vector_ptr->x);
  round();
  return (int)ROUND(fVar1);
}
