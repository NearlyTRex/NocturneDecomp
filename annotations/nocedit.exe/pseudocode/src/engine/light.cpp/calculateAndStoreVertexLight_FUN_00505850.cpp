// Name: engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850
// Address: 00505850
// Address Range: [[00505850, 00505881]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_calculateAndStoreVertexLight_FUN_00505850(int vertex_index,CVector3i *vertex_position)

#include "nocturne.h"

void __cdecl engine_light_cpp_calculateAndStoreVertexLight_FUN_00505850(int vertex_index,CVector3i *vertex_position)

{
  int iVar1;
  
  iVar1 = engine_light_cpp_calculatePhongLighting_FUN_00505530
                    (vertex_position->x,vertex_position->y,vertex_position->z);
  g_RenderVertexBuffer[vertex_index].z = iVar1;
  return;
}
