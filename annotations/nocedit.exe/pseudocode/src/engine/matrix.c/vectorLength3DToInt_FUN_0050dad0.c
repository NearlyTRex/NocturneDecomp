// Name: engine_matrix.c_vectorLength3DToInt_FUN_0050dad0
// Address: 0050dad0
// Address Range: [[0050dad0, 0050dafb]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_0050dad0(CVector3i *vector_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_0050dad0(CVector3i *vector_ptr)

{
  return (int)ROUND(ROUND(SQRT((float10)vector_ptr->z * (float10)vector_ptr->z +
                               (float10)vector_ptr->y * (float10)vector_ptr->y +
                               (float10)vector_ptr->x * (float10)vector_ptr->x)));
}
