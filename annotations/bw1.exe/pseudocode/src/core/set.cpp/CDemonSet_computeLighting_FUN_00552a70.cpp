// Name: core_set.cpp_CDemonSet_computeLighting_FUN_00552a70
// Address: 00552a70
// Address Range: [[00552a70, 00552ad3]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_00552a70(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_00552a70(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)

{
  uint *puVar1;
  
  core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
            (this_ptr,world_position,surface_normal,start_vertex_index,0);
  puVar1 = &DAT_00629044 + start_vertex_index * 0xc;
  while (vertex_count = vertex_count + -1, 0 < vertex_count) {
    puVar1[8] = (&DAT_00629034)[start_vertex_index * 0xc];
    puVar1[9] = (&DAT_00629038)[start_vertex_index * 0xc];
    puVar1[10] = (&DAT_0062903c)[start_vertex_index * 0xc];
    puVar1 = puVar1 + 0xc;
  }
  return;
}
