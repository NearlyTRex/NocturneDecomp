// Name: engine_matrix.c_transformToCache_FUN_004e8e60
// Address: 004e8e60
// Address Range: [[004e8e60, 004e8e85]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_transformToCache_FUN_004e8e60(int cacheIndex,CVector3i *inputPoint)

#include "nocturne.h"

void __cdecl engine_matrix_c_transformToCache_FUN_004e8e60(int cacheIndex,CVector3i *inputPoint)

{
  engine_special_cpp_FUN_0055d723((SProjectedVertex *)(&DAT_00622014 + cacheIndex * 0xc),inputPoint)
  ;
  return;
}
