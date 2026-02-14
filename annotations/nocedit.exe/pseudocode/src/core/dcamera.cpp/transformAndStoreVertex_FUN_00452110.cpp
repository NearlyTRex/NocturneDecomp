// Name: core_dcamera.cpp_transformAndStoreVertex_FUN_00452110
// Address: 00452110
// Address Range: [[00452110, 0045217e]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_transformAndStoreVertex_FUN_00452110(int vertex_index,float x,float y,float z)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_transformAndStoreVertex_FUN_00452110(int vertex_index,float x,float y,float z)

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
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[vertex_index].projected_vertex,&local_1c);
  return;
}
