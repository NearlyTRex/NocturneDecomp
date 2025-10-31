// Name: core_dtri.cpp_staticInit_FUN_0049a430
// Address: 0049a430
// Address Range: [[0049a430, 0049a4d0]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_staticInit_FUN_0049a430(void)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
//   WatcomTypeInfo g_CDemonTriangleTypeInfo
//   CVector3f[16] g_ClipInputVertices
//   CVector3f[16] g_ClipBuffer1Vertices
//   CVector3f[16] g_ClipBuffer2Vertices
//   CVector3f[16] g_ClipBuffer3Vertices
//   CVector3f[16] g_ClipBuffer4Vertices
//   CVector3f[16] g_ClipBuffer5Vertices
//   CVector3f[16] g_ClipOutputVertices
//   CDemonTriangle[8] g_ClippedTriangleBuffer
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

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


// Assembly code:
// 0049a430: PUSH 0x6598c0
//   Label: core_dtri.cpp_staticInit_FUN_0049a430
//   XREF to: 006598c0 (DATA)
// 0049a435: PUSH 0x10
// 0049a437: PUSH 0x2cee5d0
//   XREF to: 02cee5d0 (DATA)
// 0049a43c: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0049a441: ADD ESP,0xc
// 0049a444: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0049a449: PUSH 0x10
// 0049a44b: PUSH 0x2cee694
//   XREF to: 02cee694 (DATA)
// 0049a450: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0049a455: ADD ESP,0xc
// 0049a458: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0049a45d: PUSH 0x10
// 0049a45f: PUSH 0x2cee758
//   XREF to: 02cee758 (DATA)
// 0049a464: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0049a469: ADD ESP,0xc
// 0049a46c: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0049a471: PUSH 0x10
// 0049a473: PUSH 0x2cee81c
//   XREF to: 02cee81c (DATA)
// 0049a478: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0049a47d: ADD ESP,0xc
// 0049a480: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0049a485: PUSH 0x10
// 0049a487: PUSH 0x2cee8e0
//   XREF to: 02cee8e0 (DATA)
// 0049a48c: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0049a491: ADD ESP,0xc
// 0049a494: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0049a499: PUSH 0x10
// 0049a49b: PUSH 0x2cee9a4
//   XREF to: 02cee9a4 (DATA)
// 0049a4a0: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0049a4a5: ADD ESP,0xc
// 0049a4a8: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0049a4ad: PUSH 0x10
// 0049a4af: PUSH 0x2ceea68
//   XREF to: 02ceea68 (DATA)
// 0049a4b4: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0049a4b9: ADD ESP,0xc
// 0049a4bc: PUSH 0x65c990
//   XREF to: 0065c990 (DATA)
// 0049a4c1: PUSH 0x8
// 0049a4c3: PUSH 0x2ceeb28
//   XREF to: 02ceeb28 (DATA)
// 0049a4c8: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0049a4cd: ADD ESP,0xc
// 0049a4d0: RET
