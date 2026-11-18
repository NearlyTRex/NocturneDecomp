// Name: core_set.cpp_CDemonSet_computeLighting_FUN_005317c0
// Address: 005317c0
// Address Range: [[005317c0, 00531823]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_005317c0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_005317c0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)

{
  int iVar1;
  
  core_set_cpp_CDemonSet_lightVertexColor_FUN_00531460
            (this_ptr,world_position,surface_normal,start_vertex_index,0);
  iVar1 = start_vertex_index * 0x30 + 0x622044;
  while (vertex_count = vertex_count + -1, 0 < vertex_count) {
    *(int *)(iVar1 + 0x20) = g_SRenderVertex_ARRAY_00622014[start_vertex_index].r;
    *(int *)(iVar1 + 0x24) = g_SRenderVertex_ARRAY_00622014[start_vertex_index].g;
    *(int *)(iVar1 + 0x28) = g_SRenderVertex_ARRAY_00622014[start_vertex_index].b;
    iVar1 = iVar1 + 0x30;
  }
  return;
}
