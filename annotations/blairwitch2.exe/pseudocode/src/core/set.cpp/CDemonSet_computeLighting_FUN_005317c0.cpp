// Name: core_set.cpp_CDemonSet_computeLighting_FUN_005317c0
// Address: 005317c0
// Address Range: [[005317c0, 00531823]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_005317c0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_005317c0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)

{
  uint *puVar1;
  
  core_set_cpp_CDemonSet_lightVertexColor_FUN_00531460
            (this_ptr,world_position,surface_normal,start_vertex_index,0);
  puVar1 = &DAT_00622044 + start_vertex_index * 0xc;
  while (vertex_count = vertex_count + -1, 0 < vertex_count) {
    puVar1[8] = (&DAT_00622034)[start_vertex_index * 0xc];
    puVar1[9] = (&DAT_00622038)[start_vertex_index * 0xc];
    puVar1[10] = (&DAT_0062203c)[start_vertex_index * 0xc];
    puVar1 = puVar1 + 0xc;
  }
  return;
}
