// Name: engine_matrix.c_transformToCache_FUN_004cd210
// Address: 004cd210
// Address Range: [[004cd210, 004cd235]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_transformToCache_FUN_004cd210(int cacheIndex,CVector3i *inputPoint)

#include "nocturne.h"

void __cdecl engine_matrix_c_transformToCache_FUN_004cd210(int cacheIndex,CVector3i *inputPoint)

{
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            ((SProjectedVertex *)(&DAT_005c5014 + cacheIndex * 0xc),inputPoint);
  return;
}
