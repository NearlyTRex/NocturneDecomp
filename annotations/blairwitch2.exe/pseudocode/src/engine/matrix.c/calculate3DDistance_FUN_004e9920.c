// Name: engine_matrix.c_calculate3DDistance_FUN_004e9920
// Address: 004e9920
// Address Range: [[004e9920, 004e9979]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_calculate3DDistance_FUN_004e9920(int x1,int y1,int z1,int x2,int y2,int z2)

#include "nocturne.h"

int __cdecl engine_matrix_c_calculate3DDistance_FUN_004e9920(int x1,int y1,int z1,int x2,int y2,int z2)

{
  double dVar1;
  
  dVar1 = round
                    (SQRT((double)(z1 - z2) * (double)(z1 - z2) +
                          (double)(y1 - y2) * (double)(y1 - y2) +
                          (double)(x1 - x2) * (double)(x1 - x2)));
  return (int)ROUND(dVar1);
}
