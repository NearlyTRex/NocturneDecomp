// Name: core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0
// Address: 004551d0
// Address Range: [[004551d0, 0045524d]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0(CDemonCubeTriangle * this_ptr, FILE * file_handle, CVector3f * vertex_buffer_base)
// Cross-references:
//   core_dcube.cpp_CDemonCube_load_FUN_00457530 (00457530) at 004575b1 [UNCONDITIONAL_CALL]
// Globals:
//   uint[3] g_TempTriangleIndices
//   undefined4 g_TempTriangleIndices[1]
//   undefined4 g_TempTriangleIndices[2]
// Function calls:
//   crt_stdio.c_fread_FUN_005fd990

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0
          (CDemonCubeTriangle *this_ptr,FILE *file_handle,CVector3f *vertex_buffer_base)

{
  crt_stdio_c_fread_FUN_005fd990(g_TempTriangleIndices,3,4,file_handle);
  this_ptr->vertices[0] = vertex_buffer_base + g_TempTriangleIndices[0];
  this_ptr->vertices[1] = vertex_buffer_base + g_TempTriangleIndices[1];
  this_ptr->vertices[2] = vertex_buffer_base + g_TempTriangleIndices[2];
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->normal,0x14,1,(FILE *)vertex_buffer_base);
  return;
}


// Assembly code:
// 004551d0: PUSH EBX
//   Label: core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0
// 004551d1: PUSH ESI
// 004551d2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004551d6: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004551da: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004551de: PUSH EDX
// 004551df: PUSH 0x4
// 004551e1: PUSH 0x3
// 004551e3: PUSH 0x15c4824
//   XREF to: 015c4824 (DATA)
// 004551e8: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004551ed: MOV EDX,dword ptr [0x015c4824]
//   XREF to: 015c4824 (READ)
// 004551f3: LEA EAX,[EDX*0x4 + 0x0]
// 004551fa: SUB EAX,EDX
// 004551fc: SHL EAX,0x2
// 004551ff: LEA EDX,[ESI + EAX*0x1]
// 00455202: MOV dword ptr [EBX],EDX
// 00455204: MOV EDX,dword ptr [0x015c4828]
//   XREF to: 015c4828 (READ)
// 0045520a: LEA EAX,[EDX*0x4 + 0x0]
// 00455211: SUB EAX,EDX
// 00455213: SHL EAX,0x2
// 00455216: LEA EDX,[ESI + EAX*0x1]
// 00455219: ADD ESP,0x10
// 0045521c: MOV dword ptr [EBX + 0x4],EDX
// 0045521f: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00455223: MOV EDX,dword ptr [0x015c482c]
//   XREF to: 015c482c (READ)
// 00455229: PUSH ECX
// 0045522a: LEA EAX,[EDX*0x4 + 0x0]
// 00455231: PUSH 0x1
// 00455233: SUB EAX,EDX
// 00455235: PUSH 0x14
// 00455237: SHL EAX,0x2
// 0045523a: ADD EBX,0xc
// 0045523d: ADD ESI,EAX
// 0045523f: PUSH EBX
// 00455240: MOV dword ptr [EBX + -0x4],ESI
// 00455243: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00455248: ADD ESP,0x10
// 0045524b: POP ESI
// 0045524c: POP EBX
// 0045524d: RET
