// Name: core_cloth.cpp_drawVertexMarkerAtWorldPos_FUN_0043c820
// Address: 0043c820
// Address Range: [[0043c820, 0043c877]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_drawVertexMarkerAtWorldPos_FUN_0043c820(CVector3f *world_pos)

#include "nocturne.h"

void __cdecl core_cloth_cpp_drawVertexMarkerAtWorldPos_FUN_0043c820(CVector3f *world_pos)

{
  CVector3i local_10;
  
  local_10.x = (int)ROUND(world_pos->x * 256.0f);
  local_10.y = (int)ROUND(world_pos->y * 256.0f);
  local_10.z = (int)ROUND(world_pos->z * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[19999].projected_vertex,&local_10);
  core_cloth_cpp_drawVertexMarker_FUN_0043c6e0(19999);
  return;
}
