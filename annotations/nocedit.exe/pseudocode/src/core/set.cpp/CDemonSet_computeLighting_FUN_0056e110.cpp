// Name: core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
// Address: 0056e110
// Address Range: [[0056e110, 0056e173]]
// Convention: __cdecl
// Signature: int core_set.cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, int vertex_count)

#include "nocturne.h"

int __cdecl
core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
          (CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,
          int start_vertex_index,int vertex_count)

{
  int iVar1;
  int iVar2;
  
  core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
            (this_ptr,world_position,surface_normal,start_vertex_index,0);
  iVar2 = vertex_count * 0x30 + 0x688044;
  iVar1 = vertex_count;
  while (iVar1 = iVar1 + -1, 0 < iVar1) {
    *(float *)(iVar2 + 0x20) = g_RenderVertexBuffer[vertex_count].light;
    *(int *)(iVar2 + 0x24) = g_RenderVertexBuffer[vertex_count].color;
    *(float *)(iVar2 + 0x28) = g_RenderVertexBuffer[vertex_count].fog;
    iVar2 = iVar2 + 0x30;
  }
  return iVar2;
}
