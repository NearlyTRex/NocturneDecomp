// Name: core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50
// Address: 0050bb50
// Address Range: [[0050bb50, 0050bbb3]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)

{
  uint *puVar1;
  
  core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
            (this_ptr,world_position,surface_normal,start_vertex_index,0);
  puVar1 = &DAT_005c5044 + start_vertex_index * 0xc;
  while (vertex_count = vertex_count + -1, 0 < vertex_count) {
    puVar1[8] = (&DAT_005c5034)[start_vertex_index * 0xc];
    puVar1[9] = (&DAT_005c5038)[start_vertex_index * 0xc];
    puVar1[10] = (&DAT_005c503c)[start_vertex_index * 0xc];
    puVar1 = puVar1 + 0xc;
  }
  return;
}
