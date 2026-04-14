// Name: shape_meshlod.cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830
// Address: 0051e830
// MANUAL RECONSTRUCTION
// Address Range: [[0051e830, 0051e983] [0060df11, 0060dfc0]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830(CLodMesh *this_ptr,int backface_culling_enabled)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830(CLodMesh *this_ptr,int backface_culling_enabled)

{
  CLodEdge *edge;
  CLodFace *tri;
  SRenderVertex *vb;
  int i;
  int k;
  int winding;
  int all_backface;

  for (i = 0; i < this_ptr->edge_count; i++) {
    edge = &this_ptr->edges_ptr[i];
    if (edge->deletion_flag != 0) continue;

    if (backface_culling_enabled != 0) {
      all_backface = 1;
      for (k = 0; k < edge->adjacent_tri_count; k++) {
        tri = &this_ptr->tri_data[edge->adjacent_tri_indices[k]];
        vb = g_CDemonRendererPtr2->vertex_buffer_ptr;
        winding = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                            (vb + tri->vertex_idx_0,
                             vb + tri->vertex_idx_1,
                             vb + tri->vertex_idx_2);
        if (winding == 0) {
          all_backface = 0;
          break;
        }
      }
      if (all_backface) continue;
    }

    if (edge->collapse_viability == 0) {
      g_ActiveRenderColor = (edge->collapse_curvature == 0) ? 2 : 0xfa;
    }
    else if (edge->collapse_viability == 1) {
      g_ActiveRenderColor = (edge->collapse_curvature == 0) ? 3 : 0xfb;
    }
    else {
      g_ActiveRenderColor = (edge->collapse_curvature == 0) ? 1 : 0xf9;
    }

    vb = g_CDemonRendererPtr2->vertex_buffer_ptr;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vb[edge->vertex_idx_1], vb[edge->vertex_idx_2]);
  }
  return;
}
