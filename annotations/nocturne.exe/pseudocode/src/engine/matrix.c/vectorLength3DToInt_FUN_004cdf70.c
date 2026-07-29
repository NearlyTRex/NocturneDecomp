// Name: engine_matrix.c_vectorLength3DToInt_FUN_004cdf70
// Address: 004cdf70
// Address Range: [[004cdf70, 004cdf9b]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_004cdf70(CVector3i *vector_ptr)

#include "nocturne.h"

int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_004cdf70(CVector3i *vector_ptr)

{
  double dVar1;
  
  dVar1 = round
                    (SQRT((double)vector_ptr->z * (double)vector_ptr->z +
                          (double)vector_ptr->y * (double)vector_ptr->y +
                          (double)vector_ptr->x * (double)vector_ptr->x));
  return (int)ROUND(dVar1);
}
