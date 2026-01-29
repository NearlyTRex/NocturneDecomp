// Name: core_dtri.cpp_staticInit_FUN_0049a430
// Address: 0049a430
// Address Range: [[0049a430, 0049a4d0]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_staticInit_FUN_0049a430(void)

#include "nocturne.h"

void __cdecl core_dtri_cpp_staticInit_FUN_0049a430(void)

{
  __arrinit(g_ClipInputVertices,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClipBuffer1Vertices,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClipBuffer2Vertices,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClipBuffer3Vertices,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClipBuffer4Vertices,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClipBuffer5Vertices,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClipOutputVertices,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClippedTriangleBuffer,8,&g_CDemonTriangleTypeInfo);
  return;
}
