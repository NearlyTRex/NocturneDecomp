// Name: engine_matrix.c_transformToCache_FUN_004e5540
// Address: 004e5540
// Address Range: [[004e5540, 004e5565]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_transformToCache_FUN_004e5540(int cacheIndex,CVector3i *inputPoint)

#include "nocturne.h"

void __cdecl engine_matrix_c_transformToCache_FUN_004e5540(int cacheIndex,CVector3i *inputPoint)

{
  engine_special_cpp_FUN_005632a3((SProjectedVertex *)(&DAT_0060b014 + cacheIndex * 0xc),inputPoint)
  ;
  return;
}
