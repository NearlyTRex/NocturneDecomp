// Name: core_dcamera.cpp_staticInit_FUN_004486c0
// Address: 004486c0
// Address Range: [[004486c0, 004486f8]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_staticInit_FUN_004486c0(void)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_staticInit_FUN_004486c0(void)

{
  __arrinit(0xa38388,0x12d40,&g_CVectorTypeInfo);
  support_codec_cpp_CLZWDecompress_ctor_FUN_00441310(&g_CLZWDecompressInstance,0x10000,6);
  _atexit(&g_CLZWDecompressDestructorNode);
  return;
}
