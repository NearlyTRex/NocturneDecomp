// Name: engine_light.cpp_calculateAndStoreVertexLight_FUN_004ffe10
// Address: 004ffe10
// Address Range: [[004ffe10, 004ffe41]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_calculateAndStoreVertexLight_FUN_004ffe10(int vertex_index,CVector3i *vertex_position)

#include "nocturne.h"

void __cdecl engine_light_cpp_calculateAndStoreVertexLight_FUN_004ffe10(int vertex_index,CVector3i *vertex_position)

{
  int iVar1;
  
  iVar1 = engine_light_cpp_calculatePhongLighting_FUN_004ffaf0
                    (vertex_position->x,vertex_position->y,vertex_position->z);
  g_SRenderVertex_ARRAY_00629014[vertex_index].r = iVar1;
  return;
}
