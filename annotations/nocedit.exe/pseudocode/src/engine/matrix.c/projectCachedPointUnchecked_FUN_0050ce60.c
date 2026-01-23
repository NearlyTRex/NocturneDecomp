// Name: engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60
// Address: 0050ce60
// Address Range: [[0050ce60, 0050ced6]]
// Convention: __cdecl
// Signature: void engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60(int cache_index)

#include "nocturne.h"

void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(int cache_index)

{
  g_RenderVertexBuffer[cache_index].projected_vertex.inv_z =
       (int)(0x7fffffff / (longlong)g_RenderVertexBuffer[cache_index].projected_vertex.transformed_z
            );
  g_RenderVertexBuffer[cache_index].projected_vertex.screen_x =
       (int)(((longlong)g_RenderVertexBuffer[cache_index].projected_vertex.transformed_x *
             (longlong)g_ViewportCenterXFixed) /
            (longlong)g_RenderVertexBuffer[cache_index].projected_vertex.transformed_z) +
       g_ViewportRightFixed;
  g_RenderVertexBuffer[cache_index].projected_vertex.screen_y =
       (int)(((longlong)g_RenderVertexBuffer[cache_index].projected_vertex.transformed_y *
             (longlong)g_ViewportCenterYFixed) /
            (longlong)g_RenderVertexBuffer[cache_index].projected_vertex.transformed_z) +
       g_ViewportBottomFixed;
  return;
}
