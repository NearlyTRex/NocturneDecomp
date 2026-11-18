// Name: engine_matrix.c_projectCachedPointUnchecked_FUN_00507bf0
// Address: 00507bf0
// Address Range: [[00507bf0, 00507c66]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_00507bf0(int cache_index)

#include "nocturne.h"

void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_00507bf0(int cache_index)

{
  g_SRenderVertex_ARRAY_00629014[cache_index].projected_vertex.inv_z =
       (int)(0x7fffffff /
            (longlong)g_SRenderVertex_ARRAY_00629014[cache_index].projected_vertex.transformed_z);
  g_SRenderVertex_ARRAY_00629014[cache_index].projected_vertex.screen_x =
       (int)(((longlong)g_SRenderVertex_ARRAY_00629014[cache_index].projected_vertex.transformed_x *
             (longlong)g_INT_01c4eff8) /
            (longlong)g_SRenderVertex_ARRAY_00629014[cache_index].projected_vertex.transformed_z) +
       g_INT_01c4f000;
  g_SRenderVertex_ARRAY_00629014[cache_index].projected_vertex.screen_y =
       (int)(((longlong)g_SRenderVertex_ARRAY_00629014[cache_index].projected_vertex.transformed_y *
             (longlong)g_INT_01c4effc) /
            (longlong)g_SRenderVertex_ARRAY_00629014[cache_index].projected_vertex.transformed_z) +
       g_INT_01c4f004;
  return;
}
