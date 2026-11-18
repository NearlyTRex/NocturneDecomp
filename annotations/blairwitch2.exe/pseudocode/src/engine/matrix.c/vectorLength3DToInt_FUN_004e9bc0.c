// Name: engine_matrix.c_vectorLength3DToInt_FUN_004e9bc0
// Address: 004e9bc0
// Address Range: [[004e9bc0, 004e9beb]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_004e9bc0(CVector3i *vector_ptr)

#include "nocturne.h"

int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_004e9bc0(CVector3i *vector_ptr)

{
  double dVar1;
  
  dVar1 = round
                    (SQRT((double)vector_ptr->z * (double)vector_ptr->z +
                          (double)vector_ptr->y * (double)vector_ptr->y +
                          (double)vector_ptr->x * (double)vector_ptr->x));
  return (int)ROUND(dVar1);
}
