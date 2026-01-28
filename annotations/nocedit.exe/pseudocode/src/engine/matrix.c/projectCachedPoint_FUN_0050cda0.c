// Name: engine_matrix.c_projectCachedPoint_FUN_0050cda0
// Address: 0050cda0
// Address Range: [[0050cda0, 0050cdbe]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_projectCachedPoint_FUN_0050cda0(int cacheIndex)

#include "nocturne.h"

void __cdecl engine_matrix_c_projectCachedPoint_FUN_0050cda0(int cacheIndex)

{
  engine_matrix_c_projectTransformedPoint_FUN_0050cdc0
            (&g_RenderVertexBuffer[cacheIndex].projected_vertex);
  return;
}
