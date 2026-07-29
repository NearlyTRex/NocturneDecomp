// Name: engine_light.cpp_calculateAndStoreVertexLight_FUN_004c6d90
// Address: 004c6d90
// Address Range: [[004c6d90, 004c6dc1]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_calculateAndStoreVertexLight_FUN_004c6d90(int vertex_index,CVector3i *vertex_position)

#include "nocturne.h"

void __cdecl engine_light_cpp_calculateAndStoreVertexLight_FUN_004c6d90(int vertex_index,CVector3i *vertex_position)

{
  int iVar1;
  
  iVar1 = engine_light_cpp_calculatePhongLighting_FUN_004c6a70
                    (vertex_position->x,vertex_position->y,vertex_position->z);
  (&DAT_005c5034)[vertex_index * 0xc] = iVar1;
  return;
}
