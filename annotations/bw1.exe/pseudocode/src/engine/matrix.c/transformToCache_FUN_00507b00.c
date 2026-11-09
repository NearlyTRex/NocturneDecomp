// Name: engine_matrix.c_transformToCache_FUN_00507b00
// Address: 00507b00
// Address Range: [[00507b00, 00507b25]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_transformToCache_FUN_00507b00(int cacheIndex,CVector3i *inputPoint)

#include "nocturne.h"

void __cdecl engine_matrix_c_transformToCache_FUN_00507b00(int cacheIndex,CVector3i *inputPoint)

{
  engine_special_cpp_FUN_00580173((SProjectedVertex *)(&DAT_00629014 + cacheIndex * 0xc),inputPoint)
  ;
  return;
}
