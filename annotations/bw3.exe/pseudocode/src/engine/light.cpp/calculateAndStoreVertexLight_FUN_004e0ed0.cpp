// Name: engine_light.cpp_calculateAndStoreVertexLight_FUN_004e0ed0
// Address: 004e0ed0
// Address Range: [[004e0ed0, 004e0f01]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_calculateAndStoreVertexLight_FUN_004e0ed0(int vertex_index,CVector3i *vertex_position)

#include "nocturne.h"

void __cdecl engine_light_cpp_calculateAndStoreVertexLight_FUN_004e0ed0(int vertex_index,CVector3i *vertex_position)

{
  int iVar1;
  
  iVar1 = engine_light_cpp_calculatePhongLighting_FUN_004e0bb0
                    (vertex_position->x,vertex_position->y,vertex_position->z);
  (&DAT_0060b034)[vertex_index * 0xc] = iVar1;
  return;
}
