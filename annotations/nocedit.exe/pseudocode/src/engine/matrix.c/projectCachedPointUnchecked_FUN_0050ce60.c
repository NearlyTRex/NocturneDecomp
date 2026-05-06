// Name: engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60
// Address: 0050ce60
// Address Range: [[0050ce60, 0050ced6]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(int cache_index)

#include "nocturne.h"

void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(int cache_index)

{
  g_RenderVertexBuffer[cache_index].projected_vertex.inv_z =
       (int)(0x7fffffff / (longlong)g_RenderVertexBuffer[cache_index].projected_vertex.transformed_z
            );
  g_RenderVertexBuffer[cache_index].projected_vertex.screen_x =
       (int)(((longlong)g_RenderVertexBuffer[cache_index].projected_vertex.transformed_x *
             (longlong)g_Projection.half_width_fixed) /
            (longlong)g_RenderVertexBuffer[cache_index].projected_vertex.transformed_z) +
       g_Projection.center_x_fixed;
  g_RenderVertexBuffer[cache_index].projected_vertex.screen_y =
       (int)(((longlong)g_RenderVertexBuffer[cache_index].projected_vertex.transformed_y *
             (longlong)g_Projection.neg_half_height_fixed) /
            (longlong)g_RenderVertexBuffer[cache_index].projected_vertex.transformed_z) +
       g_Projection.center_y_fixed;
  return;
}
