// Name: engine_matrix.c_projectCachedPoint_FUN_0050cda0
// Address: 0050cda0
// Address Range: [[0050cda0, 0050cdbe]]
// Convention: __cdecl
// Signature: void engine_matrix.c_projectCachedPoint_FUN_0050cda0(int cacheIndex)
// Cross-references:
//   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310 (00522310) at 0052252f [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0 (004ce2d0) at 004ce5c5 [UNCONDITIONAL_CALL]
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer
// Function calls:
//   engine_matrix.c_projectTransformedPoint_FUN_0050cdc0

#include "nocturne.h"

void __cdecl engine_matrix_c_projectCachedPoint_FUN_0050cda0(int cacheIndex)

{
  engine_matrix_c_projectTransformedPoint_FUN_0050cdc0
            (&g_RenderVertexBuffer[cacheIndex].projected_vertex);
  return;
}


// Assembly code:
// 0050cda0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: engine_matrix.c_projectCachedPoint_FUN_0050cda0
//   XREF to: Stack[0x4] (READ)
// 0050cda4: LEA EAX,[EDX*0x4 + 0x0]
// 0050cdab: SUB EAX,EDX
// 0050cdad: SHL EAX,0x4
// 0050cdb0: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 0050cdb5: PUSH EAX
// 0050cdb6: CALL engine_matrix.c_projectTransformedPoint_FUN_0050cdc0
//   XREF to: 0050cdc0 (UNCONDITIONAL_CALL)
// 0050cdbb: ADD ESP,0x4
// 0050cdbe: RET
