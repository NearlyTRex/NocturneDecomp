// Name: engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850
// Address: 00505850
// Address Range: [[00505850, 00505881]]
// Convention: __cdecl
// Signature: void engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850(int vertex_index, CVector3i * vertex_position)
// Cross-references:
//   engine_3d.c_processVertexLighting_FUN_00403a20 (00403a20) at 00403a47 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_calculateVertexLight_FUN_0048c740 (0048c740) at 0048c74a [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_RenderVertexBuffer[0].light
// Function calls:
//   engine_light.cpp_calculatePhongLighting_FUN_00505530

#include "nocturne.h"

void __cdecl
engine_light_cpp_calculateAndStoreVertexLight_FUN_00505850
          (int vertex_index,CVector3i *vertex_position)

{
  float fVar1;
  
  fVar1 = (float)engine_light_cpp_calculatePhongLighting_FUN_00505530
                           (vertex_position->x,vertex_position->y,vertex_position->z);
  g_RenderVertexBuffer[(int)vertex_position].light = fVar1;
  return;
}


// Assembly code:
// 00505850: PUSH EBX
//   Label: engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850
// 00505851: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00505855: MOV EDX,dword ptr [EAX + 0x8]
// 00505858: PUSH EDX
// 00505859: MOV ECX,dword ptr [EAX + 0x4]
// 0050585c: PUSH ECX
// 0050585d: MOV EBX,dword ptr [EAX]
// 0050585f: PUSH EBX
// 00505860: CALL engine_light.cpp_calculatePhongLighting_FUN_00505530
//   XREF to: 00505530 (UNCONDITIONAL_CALL)
// 00505865: ADD ESP,0xc
// 00505868: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050586c: MOV ECX,EAX
// 0050586e: LEA EAX,[EDX*0x4 + 0x0]
// 00505875: SUB EAX,EDX
// 00505877: SHL EAX,0x4
// 0050587a: MOV dword ptr [EAX + 0x688034],ECX
//   XREF to: 00688034 (DATA)
// 00505880: POP EBX
// 00505881: RET
