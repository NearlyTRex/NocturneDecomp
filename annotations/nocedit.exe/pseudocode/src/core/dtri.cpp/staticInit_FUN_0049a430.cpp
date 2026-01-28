// Name: core_dtri.cpp_staticInit_FUN_0049a430
// Address: 0049a430
// Address Range: [[0049a430, 0049a4d0]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_staticInit_FUN_0049a430(void)

#include "nocturne.h"

void __cdecl core_dtri_cpp_staticInit_FUN_0049a430(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClipInputVertices,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClipBuffer1Vertices,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClipBuffer2Vertices,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClipBuffer3Vertices,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClipBuffer4Vertices,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClipBuffer5Vertices,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClipOutputVertices,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClippedTriangleBuffer,8,&g_CDemonTriangleTypeInfo);
  return;
}
