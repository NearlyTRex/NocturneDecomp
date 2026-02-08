// Name: shape_meshlod.cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0
// Address: 0051ecd0
// Address Range: [[0051ecd0, 0051ed2b]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0(CLodMesh *this_ptr,int vertex_index)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0(CLodMesh *this_ptr,int vertex_index)

{
  SRenderVertex *pSVar1;
  int iVar2;
  int iVar3;
  char local_28 [40];
  
  pSVar1 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  if ((int)(pSVar1[vertex_index].projected_vertex.screen_x & -0x80000000) != 0) {
    return;
  }
  iVar2 = pSVar1[vertex_index].projected_vertex.screen_x;
  iVar3 = pSVar1[vertex_index].projected_vertex.screen_y;
  _sprintf(local_28,"%d",vertex_index);
  engine_2d_c_drawText_FUN_00401fd0(local_28,iVar2 >> 0x10,iVar3 >> 0x10);
  return;
}
