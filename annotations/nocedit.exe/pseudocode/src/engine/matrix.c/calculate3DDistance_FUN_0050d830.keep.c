// Name: engine_matrix.c_calculate3DDistance_FUN_0050d830
// Address: 0050d830
// MANUAL RECONSTRUCTION
// Address Range: [[0050d830, 0050d889]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_calculate3DDistance_FUN_0050d830(int x1,int y1,int z1,int x2,int y2,int z2)

#include "nocturne.h"

int __cdecl engine_matrix_c_calculate3DDistance_FUN_0050d830(int x1,int y1,int z1,int x2,int y2,int z2)

{
  return (int)ROUND(ROUND(SQRT((float10)(z1 - z2) * (float10)(z1 - z2) +
                               (float10)(y1 - y2) * (float10)(y1 - y2) +
                               (float10)(x1 - x2) * (float10)(x1 - x2))));
}
