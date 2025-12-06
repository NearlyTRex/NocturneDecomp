// Name: engine_light.cpp_calculateVertexLighting_FUN_00505830
// Address: 00505830
// Address Range: [[00505830, 00505849]]
// Convention: __cdecl
// Signature: int engine_light.cpp_calculateVertexLighting_FUN_00505830(int unused_param, CVector3i * vertex_position)

#include "nocturne.h"

int __cdecl
engine_light_cpp_calculateVertexLighting_FUN_00505830(int unused_param,CVector3i *vertex_position)

{
  int iVar1;
  
  iVar1 = engine_light_cpp_calculatePhongLighting_FUN_00505530
                    (vertex_position->x,vertex_position->y,vertex_position->z);
  return iVar1;
}
