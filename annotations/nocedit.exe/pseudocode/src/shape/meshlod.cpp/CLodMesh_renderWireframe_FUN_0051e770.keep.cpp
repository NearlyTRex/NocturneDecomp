// Name: shape_meshlod.cpp_CLodMesh_renderWireframe_FUN_0051e770
// Address: 0051e770
// MANUAL RECONSTRUCTION
// Address Range: [[0051e770, 0051e826] [0060de5d, 0060df10]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_renderWireframe_FUN_0051e770(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_renderWireframe_FUN_0051e770(CLodMesh *this_ptr)

{
  CLodFace *tri;
  SRenderVertex *vb;
  int i;

  for (i = 0; i < this_ptr->tri_count; i++) {
    tri = &this_ptr->tri_data[i];
    if (tri->processed_flag != 0) continue;
    vb = g_CDemonRendererPtr2->vertex_buffer_ptr;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vb[tri->vertex_idx_0], vb[tri->vertex_idx_1]);
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vb[tri->vertex_idx_1], vb[tri->vertex_idx_2]);
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vb[tri->vertex_idx_2], vb[tri->vertex_idx_0]);
  }
  return;
}
