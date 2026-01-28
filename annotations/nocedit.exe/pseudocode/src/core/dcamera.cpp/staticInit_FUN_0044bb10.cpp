// Name: core_dcamera.cpp_staticInit_FUN_0044bb10
// Address: 0044bb10
// Address Range: [[0044bb10, 0044bb48]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_staticInit_FUN_0044bb10(void)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_staticInit_FUN_0044bb10(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_PrecomputedSurfaceNormals,0x12d40,&g_CVectorTypeInfo);
  support_codec_cpp_CLZWDecompress_ctor_FUN_0043f490(&g_CLZWDecompressInstance,0x10000,6);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CLZWDecompressDestructorNode);
  return;
}
