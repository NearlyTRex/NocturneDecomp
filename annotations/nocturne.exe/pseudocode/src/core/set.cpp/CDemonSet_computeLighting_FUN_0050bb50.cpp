// Name: core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50
// Address: 0050bb50
// Address Range: [[0050bb50, 0050bbb3]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)

{
  int iVar1;
  
  core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
            (this_ptr,world_position,surface_normal,start_vertex_index,0);
  iVar1 = start_vertex_index * 0x30 + 0x5c5044;
  while (vertex_count = vertex_count + -1, 0 < vertex_count) {
    *(int *)(iVar1 + 0x20) = g_SRenderVertex_ARRAY_005c5014[start_vertex_index].r;
    *(int *)(iVar1 + 0x24) = g_SRenderVertex_ARRAY_005c5014[start_vertex_index].g;
    *(int *)(iVar1 + 0x28) = g_SRenderVertex_ARRAY_005c5014[start_vertex_index].b;
    iVar1 = iVar1 + 0x30;
  }
  return;
}
