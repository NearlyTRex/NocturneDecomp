// Name: engine_matrix.c_transformToCache_FUN_0050cd70
// Address: 0050cd70
// Address Range: [[0050cd70, 0050cd95]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_transformToCache_FUN_0050cd70(int cacheIndex,CVector3i *inputPoint)

#include "nocturne.h"

void __cdecl engine_matrix_c_transformToCache_FUN_0050cd70(int cacheIndex,CVector3i *inputPoint)

{
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_RenderVertexBuffer[cacheIndex].projected_vertex,inputPoint);
  return;
}
