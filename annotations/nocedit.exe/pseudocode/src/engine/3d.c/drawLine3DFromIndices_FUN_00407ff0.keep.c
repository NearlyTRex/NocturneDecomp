// Name: engine_3d.c_drawLine3DFromIndices_FUN_00407ff0
// Address: 00407ff0
// MANUAL RECONSTRUCTION
// Address Range: [[00407ff0, 00408062] [004b1b14, 004b1bc5]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_drawLine3DFromIndices_FUN_00407ff0(int vertex_index1,int vertex_index2)

#include "nocturne.h"

void __cdecl engine_3d_c_drawLine3DFromIndices_FUN_00407ff0(int vertex_index1,int vertex_index2)

{
  engine_3d_c_clipAndDrawLine3D_FUN_00408070(g_RenderVertexBuffer[vertex_index1],
                                             g_RenderVertexBuffer[vertex_index2]);
  return;
}
