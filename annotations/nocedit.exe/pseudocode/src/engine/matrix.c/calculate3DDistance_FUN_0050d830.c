// Name: engine_matrix.c_calculate3DDistance_FUN_0050d830
// Address: 0050d830
// Address Range: [[0050d830, 0050d889]]
// Convention: __cdecl
// Signature: int engine_matrix.c_calculate3DDistance_FUN_0050d830(int x1, int y1, int z1, int x2, int y2, int z2)

#include "nocturne.h"

int __cdecl
engine_matrix_c_calculate3DDistance_FUN_0050d830(int x1,int y1,int z1,int x2,int y2,int z2)

{
  float10 fVar1;
  
  fVar1 = (float10)(z1 - z2);
  fVar1 = SQRT(fVar1 * fVar1 +
               (float10)(y1 - y2) * (float10)(y1 - y2) + (float10)(x1 - x2) * (float10)(x1 - x2));
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(x2,z1 - z2));
  return (int)ROUND(fVar1);
}
