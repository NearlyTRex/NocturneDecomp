// Name: core_dtri.cpp_freeTriangles_FUN_0049cd20
// Address: 0049cd20
// Address Range: [[0049cd20, 0049cd34]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_freeTriangles_FUN_0049cd20(CDemonTriangle * * array)
// Globals:
//   WatcomTypeInfo g_CDemonTriangleTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_dtri_cpp_freeTriangles_FUN_0049cd20(CDemonTriangle **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,8,&g_CDemonTriangleTypeInfo);
  return;
}


// Assembly code:
// 0049cd20: PUSH 0x65c990
//   Label: core_dtri.cpp_freeTriangles_FUN_0049cd20
//   XREF to: 0065c990 (DATA)
// 0049cd25: PUSH 0x8
// 0049cd27: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0049cd2b: PUSH EDX
// 0049cd2c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0049cd31: ADD ESP,0xc
// 0049cd34: RET
