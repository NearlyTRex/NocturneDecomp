// Name: engine_matrix.c_calculate3DDistance_FUN_0050d830
// Address: 0050d830
// Address Range: [[0050d830, 0050d889]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_calculate3DDistance_FUN_0050d830(int x1,int y1,int z1,int x2,int y2,int z2)

#include "nocturne.h"

int __cdecl
engine_matrix_c_calculate3DDistance_FUN_0050d830(int x1,int y1,int z1,int x2,int y2,int z2)

{
  double dVar1;
  
  dVar1 = round
                    (SQRT((double)(z1 - z2) * (double)(z1 - z2) +
                          (double)(y1 - y2) * (double)(y1 - y2) +
                          (double)(x1 - x2) * (double)(x1 - x2)));
  return (int)ROUND(dVar1);
}
