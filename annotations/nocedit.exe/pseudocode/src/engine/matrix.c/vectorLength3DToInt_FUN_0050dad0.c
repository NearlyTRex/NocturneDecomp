// Name: engine_matrix.c_vectorLength3DToInt_FUN_0050dad0
// Address: 0050dad0
// Address Range: [[0050dad0, 0050dafb]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_0050dad0(CVector3i *vector_ptr)

#include "nocturne.h"

int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_0050dad0(CVector3i *vector_ptr)

{
  double dVar1;
  
  dVar1 = crt_math_c_round_FUN_005fe6b0
                    (SQRT((double)vector_ptr->z * (double)vector_ptr->z +
                          (double)vector_ptr->y * (double)vector_ptr->y +
                          (double)vector_ptr->x * (double)vector_ptr->x));
  return (int)ROUND(dVar1);
}
