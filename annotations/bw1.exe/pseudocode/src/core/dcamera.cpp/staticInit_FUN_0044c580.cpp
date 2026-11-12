// Name: core_dcamera.cpp_staticInit_FUN_0044c580
// Address: 0044c580
// Address Range: [[0044c580, 0044c5b8]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_staticInit_FUN_0044c580(void)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_staticInit_FUN_0044c580(void)

{
  __arrinit((void *)0xa1bad8,0x12d40,&g_CVectorTypeInfo);
  support_codec_cpp_CLZWDecompress_ctor_FUN_004436b0(&g_CLZWDecompressInstance,0x10000,6);
  _atexit(&g_CLZWDecompressDestructorNode);
  return;
}
