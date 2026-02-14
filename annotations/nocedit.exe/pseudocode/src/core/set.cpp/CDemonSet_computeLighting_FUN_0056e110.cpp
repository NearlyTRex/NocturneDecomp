// Name: core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
// Address: 0056e110
// Address Range: [[0056e110, 0056e173]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)

{
  int iVar1;
  
  core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
            (this_ptr,world_position,surface_normal,start_vertex_index,0);
  iVar1 = start_vertex_index * 0x30 + 0x688044;
  while (vertex_count = vertex_count + -1, 0 < vertex_count) {
    *(int *)(iVar1 + 0x20) = g_RenderVertexBuffer[start_vertex_index].light;
    *(int *)(iVar1 + 0x24) = g_RenderVertexBuffer[start_vertex_index].color;
    *(int *)(iVar1 + 0x28) = g_RenderVertexBuffer[start_vertex_index].fog;
    iVar1 = iVar1 + 0x30;
  }
  return iVar1;
}
