// Name: core_set.cpp_CDemonSet_computeLighting_FUN_00552a70
// Address: 00552a70
// Address Range: [[00552a70, 00552ad3]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_00552a70(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_00552a70(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)

{
  int iVar1;
  
  core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
            (this_ptr,world_position,surface_normal,start_vertex_index,0);
  iVar1 = start_vertex_index * 0x30 + 0x629044;
  while (vertex_count = vertex_count + -1, 0 < vertex_count) {
    *(int *)(iVar1 + 0x20) = g_SRenderVertex_ARRAY_00629014[start_vertex_index].r;
    *(int *)(iVar1 + 0x24) = g_SRenderVertex_ARRAY_00629014[start_vertex_index].g;
    *(int *)(iVar1 + 0x28) = g_SRenderVertex_ARRAY_00629014[start_vertex_index].b;
    iVar1 = iVar1 + 0x30;
  }
  return;
}
