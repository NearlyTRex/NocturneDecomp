// Name: engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630
// Address: 004e5630
// Address Range: [[004e5630, 004e56a6]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004e5630(int cache_index)

#include "nocturne.h"

void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004e5630(int cache_index)

{
  g_SRenderVertex_ARRAY_0060b014[cache_index].projected_vertex.inv_z =
       (int)(0x7fffffff /
            (longlong)g_SRenderVertex_ARRAY_0060b014[cache_index].projected_vertex.transformed_z);
  g_SRenderVertex_ARRAY_0060b014[cache_index].projected_vertex.screen_x =
       (int)(((longlong)g_SRenderVertex_ARRAY_0060b014[cache_index].projected_vertex.transformed_x *
             (longlong)g_INT_01c6b598) /
            (longlong)g_SRenderVertex_ARRAY_0060b014[cache_index].projected_vertex.transformed_z) +
       g_INT_01c6b5a0;
  g_SRenderVertex_ARRAY_0060b014[cache_index].projected_vertex.screen_y =
       (int)(((longlong)g_SRenderVertex_ARRAY_0060b014[cache_index].projected_vertex.transformed_y *
             (longlong)g_INT_01c6b59c) /
            (longlong)g_SRenderVertex_ARRAY_0060b014[cache_index].projected_vertex.transformed_z) +
       g_INT_01c6b5a4;
  return;
}
