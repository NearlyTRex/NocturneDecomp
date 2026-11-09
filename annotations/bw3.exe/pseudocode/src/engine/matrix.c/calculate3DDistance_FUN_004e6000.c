// Name: engine_matrix.c_calculate3DDistance_FUN_004e6000
// Address: 004e6000
// Address Range: [[004e6000, 004e6059]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_calculate3DDistance_FUN_004e6000(int x1,int y1,int z1,int x2,int y2,int z2)

#include "nocturne.h"

int __cdecl engine_matrix_c_calculate3DDistance_FUN_004e6000(int x1,int y1,int z1,int x2,int y2,int z2)

{
  float10 fVar1;
  
  fVar1 = SQRT((float10)(z1 - z2) * (float10)(z1 - z2) +
               (float10)(y1 - y2) * (float10)(y1 - y2) + (float10)(x1 - x2) * (float10)(x1 - x2));
  round();
  return (int)ROUND(fVar1);
}
