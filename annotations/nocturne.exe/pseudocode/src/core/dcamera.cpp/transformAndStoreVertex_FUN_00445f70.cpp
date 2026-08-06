// Name: core_dcamera.cpp_transformAndStoreVertex_FUN_00445f70
// Address: 00445f70
// Address Range: [[00445f70, 00445fde]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_transformAndStoreVertex_FUN_00445f70(int vertex_index,float x,float y,float z)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_transformAndStoreVertex_FUN_00445f70(int vertex_index,float x,float y,float z)

{
  CVector3i local_1c;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = x;
  local_c = y;
  local_8 = z;
  local_1c.x = (int)ROUND(x * 256.0f);
  local_1c.y = (int)ROUND(y * 256.0f);
  local_1c.z = (int)ROUND(z * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[vertex_index].projected_vertex,
             &local_1c);
  return;
}
