// Name: engine_light.cpp_calculateVertexLighting_FUN_004c6d70
// Address: 004c6d70
// Address Range: [[004c6d70, 004c6d89]]
// Convention: __cdecl
// Signature: int __cdecl engine_light_cpp_calculateVertexLighting_FUN_004c6d70(int unused_param,CVector3i *vertex_position)

#include "nocturne.h"

int __cdecl engine_light_cpp_calculateVertexLighting_FUN_004c6d70(int unused_param,CVector3i *vertex_position)

{
  int iVar1;
  
  iVar1 = engine_light_cpp_calculatePhongLighting_FUN_004c6a70
                    (vertex_position->x,vertex_position->y,vertex_position->z);
  return iVar1;
}
