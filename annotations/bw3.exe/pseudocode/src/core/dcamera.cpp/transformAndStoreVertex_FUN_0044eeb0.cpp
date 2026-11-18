// Name: core_dcamera.cpp_transformAndStoreVertex_FUN_0044eeb0
// Address: 0044eeb0
// Address Range: [[0044eeb0, 0044ef1e]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_transformAndStoreVertex_FUN_0044eeb0(int vertex_index,float x,float y,float z)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_transformAndStoreVertex_FUN_0044eeb0(int vertex_index,float x,float y,float z)

{
  CVector3i CStack_1c;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  fStack_10 = x;
  fStack_c = y;
  fStack_8 = z;
  CStack_1c.x = (int)ROUND(x * 256.0f);
  CStack_1c.y = (int)ROUND(y * 256.0f);
  CStack_1c.z = (int)ROUND(z * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_005632a3
            (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[vertex_index].projected_vertex,
             &CStack_1c);
  return;
}
