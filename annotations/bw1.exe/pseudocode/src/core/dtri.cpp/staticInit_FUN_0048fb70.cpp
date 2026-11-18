// Name: core_dtri.cpp_staticInit_FUN_0048fb70
// Address: 0048fb70
// Address Range: [[0048fb70, 0048fc10]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_staticInit_FUN_0048fb70(void)

#include "nocturne.h"

void __cdecl core_dtri_cpp_staticInit_FUN_0048fb70(void)

{
  __arrinit(&g_FLOAT_01c3d444,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClipBuffer1Vertices,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClipBuffer2Vertices,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClipBuffer3Vertices,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClipBuffer4Vertices,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClipBuffer5Vertices,0x10,&g_CVectorTypeInfo);
  __arrinit(&g_FLOAT_01c3d8dc,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClippedTriangleBuffer,8,&g_CDemonTriangleTypeInfo);
  return;
}
