// Name: core_dcamera.cpp_staticInit_FUN_0043aee0
// Address: 0043aee0
// Address Range: [[0043aee0, 0043af18]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_staticInit_FUN_0043aee0(void)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_staticInit_FUN_0043aee0(void)

{
  __arrinit((void *)0xa005d4,0x12d40,&g_CVectorTypeInfo);
  support_codec_cpp_CLZWDecompress_ctor_FUN_00434990(&g_CLZWDecompressInstance,0x10000,6);
  _atexit(&g_CLZWDecompressDestructorNode);
  return;
}
