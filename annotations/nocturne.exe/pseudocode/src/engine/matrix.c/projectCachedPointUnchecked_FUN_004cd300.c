// Name: engine_matrix.c_projectCachedPointUnchecked_FUN_004cd300
// Address: 004cd300
// Address Range: [[004cd300, 004cd376]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004cd300(int cache_index)

#include "nocturne.h"

void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004cd300(int cache_index)

{
  g_SRenderVertex_ARRAY_005c5014[cache_index].projected_vertex.inv_z =
       (int)(0x7fffffff /
            (longlong)g_SRenderVertex_ARRAY_005c5014[cache_index].projected_vertex.transformed_z);
  g_SRenderVertex_ARRAY_005c5014[cache_index].projected_vertex.screen_x =
       (int)(((longlong)g_SRenderVertex_ARRAY_005c5014[cache_index].projected_vertex.transformed_x *
             (longlong)g_Projection.half_width_fixed) /
            (longlong)g_SRenderVertex_ARRAY_005c5014[cache_index].projected_vertex.transformed_z) +
       g_Projection.center_x_fixed;
  g_SRenderVertex_ARRAY_005c5014[cache_index].projected_vertex.screen_y =
       (int)(((longlong)g_SRenderVertex_ARRAY_005c5014[cache_index].projected_vertex.transformed_y *
             (longlong)g_Projection.neg_half_height_fixed) /
            (longlong)g_SRenderVertex_ARRAY_005c5014[cache_index].projected_vertex.transformed_z) +
       g_Projection.center_y_fixed;
  return;
}
