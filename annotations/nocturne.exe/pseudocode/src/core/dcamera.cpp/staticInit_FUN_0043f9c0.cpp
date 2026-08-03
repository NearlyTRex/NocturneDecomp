// Name: core_dcamera.cpp_staticInit_FUN_0043f9c0
// Address: 0043f9c0
// Address Range: [[0043f9c0, 0043f9f8]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_staticInit_FUN_0043f9c0(void)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_staticInit_FUN_0043f9c0(void)

{
  __arrinit
            (g_CVector3f_ARRAY_009bb178,0x12d40,&g_CVectorTypeInfo_005993b0);
  support_codec_cpp_CLZWDecompress_ctor_FUN_004399f0(&g_CLZWDecompress_012cdb28,0x10000,6);
  _atexit(&g_WatcomStaticDestructorNode_005ad434);
  return;
}
