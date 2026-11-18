// Name: engine_matrix.c_projectCachedPointUnchecked_FUN_004e8f50
// Address: 004e8f50
// Address Range: [[004e8f50, 004e8fc6]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004e8f50(int cache_index)

#include "nocturne.h"

void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004e8f50(int cache_index)

{
  g_SRenderVertex_ARRAY_00622014[cache_index].projected_vertex.inv_z =
       (int)(0x7fffffff /
            (longlong)g_SRenderVertex_ARRAY_00622014[cache_index].projected_vertex.transformed_z);
  g_SRenderVertex_ARRAY_00622014[cache_index].projected_vertex.screen_x =
       (int)(((longlong)g_SRenderVertex_ARRAY_00622014[cache_index].projected_vertex.transformed_x *
             (longlong)g_INT_01c35e38) /
            (longlong)g_SRenderVertex_ARRAY_00622014[cache_index].projected_vertex.transformed_z) +
       g_INT_01c35e40;
  g_SRenderVertex_ARRAY_00622014[cache_index].projected_vertex.screen_y =
       (int)(((longlong)g_SRenderVertex_ARRAY_00622014[cache_index].projected_vertex.transformed_y *
             (longlong)g_INT_01c35e3c) /
            (longlong)g_SRenderVertex_ARRAY_00622014[cache_index].projected_vertex.transformed_z) +
       g_INT_01c35e44;
  return;
}
