// Name: core_dcamera.cpp_staticInit_FUN_0044bb10
// Address: 0044bb10
// Address Range: [[0044bb10, 0044bb48]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_staticInit_FUN_0044bb10(void)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
//   WatcomStaticDestructorNode g_CLZWDecompressDestructorNode
//   CVector3f[76800] g_PrecomputedSurfaceNormals
//   CLZWDecompress g_CLZWDecompressInstance
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_atexit_FUN_005ff060
//   support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490

#include "nocturne.h"

void __cdecl core_dcamera_cpp_staticInit_FUN_0044bb10(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_PrecomputedSurfaceNormals,0x12d40,&g_CVectorTypeInfo);
  support_codec_cpp_CLZWDecompress_ctor_FUN_0043f490(&g_CLZWDecompressInstance,0x10000,6);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CLZWDecompressDestructorNode);
  return;
}


// Assembly code:
// 0044bb10: PUSH 0x6598c0
//   Label: core_dcamera.cpp_staticInit_FUN_0044bb10
//   XREF to: 006598c0 (DATA)
// 0044bb15: PUSH 0x12d40
// 0044bb1a: PUSH 0xac6d74
//   XREF to: 00ac6d74 (DATA)
// 0044bb1f: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0044bb24: ADD ESP,0xc
// 0044bb27: PUSH 0x6
// 0044bb29: PUSH 0x10000
// 0044bb2e: PUSH 0x13d9728
//   XREF to: 013d9728 (DATA)
// 0044bb33: CALL support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490
//   XREF to: 0043f490 (UNCONDITIONAL_CALL)
// 0044bb38: ADD ESP,0xc
// 0044bb3b: PUSH 0x66ece8
//   XREF to: 0066ece8 (DATA)
// 0044bb40: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 0044bb45: ADD ESP,0x4
// 0044bb48: RET
