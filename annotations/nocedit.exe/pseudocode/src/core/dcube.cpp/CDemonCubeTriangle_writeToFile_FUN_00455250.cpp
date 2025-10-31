// Name: core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00455250
// Address: 00455250
// Address Range: [[00455250, 004552b5]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00455250(CDemonCubeTriangle * this_ptr, FILE * file_handle, CVector3f * vertex_buffer_base)
// Cross-references:
//   core_dcube.cpp_CDemonCube_save_FUN_00457430 (00457430) at 004574c7 [UNCONDITIONAL_CALL]
// Globals:
//   uint[3] g_TempTriangleIndices
//   undefined4 g_TempTriangleIndices[1]
//   undefined4 g_TempTriangleIndices[2]
// Function calls:
//   crt_stdio.c_fwrite_FUN_005fdc00

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00455250
          (CDemonCubeTriangle *this_ptr,FILE *file_handle,CVector3f *vertex_buffer_base)

{
  g_TempTriangleIndices[0] = (uint)((int)this_ptr->vertices[0] - (int)vertex_buffer_base) / 0xc;
  g_TempTriangleIndices[1] = (uint)((int)this_ptr->vertices[1] - (int)vertex_buffer_base) / 0xc;
  g_TempTriangleIndices[2] = (uint)((int)this_ptr->vertices[2] - (int)vertex_buffer_base) / 0xc;
  crt_stdio_c_fwrite_FUN_005fdc00(g_TempTriangleIndices,3,4,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->normal,0x14,1,(FILE *)vertex_buffer_base);
  return;
}


// Assembly code:
// 00455250: PUSH EBX
//   Label: core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00455250
// 00455251: PUSH ESI
// 00455252: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00455256: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0045525a: MOV ECX,0xc
// 0045525f: MOV EAX,dword ptr [EBX]
// 00455261: XOR EDX,EDX
// 00455263: SUB EAX,ESI
// 00455265: DIV ECX
// 00455267: MOV [0x015c4824],EAX
//   XREF to: 015c4824 (WRITE)
// 0045526c: MOV EAX,dword ptr [EBX + 0x4]
// 0045526f: XOR EDX,EDX
// 00455271: SUB EAX,ESI
// 00455273: DIV ECX
// 00455275: MOV [0x015c4828],EAX
//   XREF to: 015c4828 (WRITE)
// 0045527a: MOV EAX,dword ptr [EBX + 0x8]
// 0045527d: XOR EDX,EDX
// 0045527f: SUB EAX,ESI
// 00455281: DIV ECX
// 00455283: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00455287: PUSH EDX
// 00455288: PUSH 0x4
// 0045528a: PUSH 0x3
// 0045528c: PUSH 0x15c4824
//   XREF to: 015c4824 (DATA)
// 00455291: MOV [0x015c482c],EAX
//   XREF to: 015c482c (WRITE)
// 00455296: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045529b: ADD ESP,0x10
// 0045529e: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004552a2: PUSH ECX
// 004552a3: PUSH 0x1
// 004552a5: PUSH 0x14
// 004552a7: ADD EBX,0xc
// 004552aa: PUSH EBX
// 004552ab: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 004552b0: ADD ESP,0x10
// 004552b3: POP ESI
// 004552b4: POP EBX
// 004552b5: RET
