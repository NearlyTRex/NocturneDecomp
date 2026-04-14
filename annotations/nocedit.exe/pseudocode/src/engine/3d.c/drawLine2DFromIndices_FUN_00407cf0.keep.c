// Name: engine_3d.c_drawLine2DFromIndices_FUN_00407cf0
// Address: 00407cf0
// MANUAL RECONSTRUCTION
// Address Range: [[00407cf0, 00407d62] [0060e850, 0060e901]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00407cf0(int vertex_index1,int vertex_index2)

#include "nocturne.h"

void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00407cf0(int vertex_index1,int vertex_index2)

{
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(g_RenderVertexBuffer[vertex_index1],
                                             g_RenderVertexBuffer[vertex_index2]);
  return;
}
