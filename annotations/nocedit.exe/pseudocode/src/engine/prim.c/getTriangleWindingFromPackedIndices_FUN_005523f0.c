// Name: engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0
// Address: 005523f0
// Address Range: [[005523f0, 005524e7]]
// Convention: __cdecl
// Signature: int engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0(STrianglePackedIndices * triangle)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0 (0048d8a0) at 0048d9cf [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 (0048d170) at 0048d384 [UNCONDITIONAL_CALL]
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
//   int g_CullingMode

#include "nocturne.h"

int __cdecl
engine_prim_c_getTriangleWindingFromPackedIndices_FUN_005523f0(STrianglePackedIndices *triangle)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  uVar1 = triangle->vertex_index_0;
  uVar2 = triangle->vertex_index_1;
  uVar3 = triangle->vertex_index_2;
  if (g_CullingMode == 1) {
    local_24 = g_RenderVertexBuffer[uVar2].projected_vertex.screen_x -
               g_RenderVertexBuffer[uVar1].projected_vertex.screen_x;
    local_20 = g_RenderVertexBuffer[uVar2].projected_vertex.screen_y -
               g_RenderVertexBuffer[uVar1].projected_vertex.screen_y;
    local_1c = g_RenderVertexBuffer[uVar3].projected_vertex.screen_x -
               g_RenderVertexBuffer[uVar2].projected_vertex.screen_x;
    local_18 = g_RenderVertexBuffer[uVar3].projected_vertex.screen_y -
               g_RenderVertexBuffer[uVar2].projected_vertex.screen_y;
  }
  else {
    local_1c = g_RenderVertexBuffer[uVar2].projected_vertex.screen_x -
               g_RenderVertexBuffer[uVar1].projected_vertex.screen_x;
    local_18 = g_RenderVertexBuffer[uVar2].projected_vertex.screen_y -
               g_RenderVertexBuffer[uVar1].projected_vertex.screen_y;
    local_24 = g_RenderVertexBuffer[uVar3].projected_vertex.screen_x -
               g_RenderVertexBuffer[uVar2].projected_vertex.screen_x;
    local_20 = g_RenderVertexBuffer[uVar3].projected_vertex.screen_y -
               g_RenderVertexBuffer[uVar2].projected_vertex.screen_y;
  }
  iVar6 = (int)((ulonglong)((longlong)local_24 * (longlong)local_18) >> 0x20);
  iVar7 = (int)((ulonglong)((longlong)local_20 * (longlong)local_1c) >> 0x20);
  uVar4 = (uint)((uint)((longlong)local_20 * (longlong)local_1c) <
                (uint)((longlong)local_24 * (longlong)local_18));
  iVar5 = iVar7 - iVar6;
  return (uint)((SBORROW4(iVar7,iVar6) != SBORROW4(iVar5,uVar4)) != (int)(iVar5 - uVar4) < 0);
}


// Assembly code:
// 005523f0: PUSH EBX
//   Label: engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0
// 005523f1: PUSH ESI
// 005523f2: PUSH EDI
// 005523f3: PUSH EBP
// 005523f4: MOV EBP,ESP
// 005523f6: SUB ESP,0x14
// 005523f9: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005523fc: XOR EDX,EDX
// 005523fe: MOV DX,word ptr [EBX]
// 00552401: LEA EAX,[EDX*0x4 + 0x0]
// 00552408: MOV ECX,0x688014
//   XREF to: 00688014 (DATA)
// 0055240d: SUB EAX,EDX
// 0055240f: XOR EDX,EDX
// 00552411: SHL EAX,0x4
// 00552414: MOV DX,word ptr [EBX + 0x2]
// 00552418: ADD ECX,EAX
// 0055241a: LEA EAX,[EDX*0x4 + 0x0]
// 00552421: SUB EAX,EDX
// 00552423: SHL EAX,0x4
// 00552426: MOV BX,word ptr [EBX + 0x4]
// 0055242a: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 0055242f: AND EBX,0xffff
// 00552435: LEA EDX,[EBX*0x4 + 0x0]
// 0055243c: SUB EDX,EBX
// 0055243e: SHL EDX,0x4
// 00552441: MOV EBX,dword ptr [0x00772a7c]
//   XREF to: 00772a7c (READ)
// 00552447: ADD EDX,0x688014
//   XREF to: 00688014 (DATA)
// 0055244d: CMP EBX,0x1
// 00552450: JNZ 0x005524ba
//   XREF to: 005524ba (CONDITIONAL_JUMP)
// 00552452: MOV EDI,dword ptr [ECX + 0x10]
//   XREF to: 00688024 (DATA)
// 00552455: MOV EBX,dword ptr [EAX + 0x10]
//   XREF to: 00688024 (DATA)
// 00552458: SUB EBX,EDI
// 0055245a: MOV dword ptr [EBP + -0x14],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0055245d: MOV EBX,dword ptr [EAX + 0x14]
//   XREF to: 00688028 (DATA)
// 00552460: MOV ESI,dword ptr [ECX + 0x14]
//   XREF to: 00688028 (DATA)
// 00552463: SUB EBX,ESI
// 00552465: MOV dword ptr [EBP + -0x10],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00552468: MOV ECX,dword ptr [EDX + 0x10]
//   XREF to: 00688024 (DATA)
// 0055246b: MOV EDI,dword ptr [EAX + 0x10]
//   XREF to: 00688024 (DATA)
// 0055246e: SUB ECX,EDI
// 00552470: MOV dword ptr [EBP + -0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00552473: MOV EDX,dword ptr [EDX + 0x14]
//   XREF to: 00688028 (DATA)
// 00552476: MOV ECX,dword ptr [EAX + 0x14]
//   XREF to: 00688028 (DATA)
// 00552479: SUB EDX,ECX
// 0055247b: MOV dword ptr [EBP + -0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0055247e: MOV EAX,dword ptr [EBP + 0xffffffec]
//   Label: LAB_0055247e
//   XREF to: Stack[-0x24] (READ)
// 00552484: IMUL dword ptr [EBP + 0xfffffff8]
//   XREF to: Stack[-0x18] (READ)
// 0055248a: MOV EBX,EAX
// 0055248c: MOV ECX,EDX
// 0055248e: MOV EAX,dword ptr [EBP + 0xfffffff0]
//   XREF to: Stack[-0x20] (READ)
// 00552494: IMUL dword ptr [EBP + 0xfffffff4]
//   XREF to: Stack[-0x1c] (READ)
// 0055249a: SUB EAX,EBX
// 0055249c: SBB EDX,ECX
// 0055249e: MOV EAX,0x0
// 005524a3: JGE 0x005524aa
//   XREF to: 005524aa (CONDITIONAL_JUMP)
// 005524a5: MOV EAX,0x1
// 005524aa: MOV dword ptr [EBP + 0xfffffffc],EAX
//   Label: LAB_005524aa
//   XREF to: Stack[-0x14] (WRITE)
// 005524b0: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005524b3: MOV ESP,EBP
// 005524b5: POP EBP
// 005524b6: POP EDI
// 005524b7: POP ESI
// 005524b8: POP EBX
// 005524b9: RET
// 005524ba: MOV ESI,dword ptr [ECX + 0x10]
//   Label: LAB_005524ba
//   XREF to: 00688024 (DATA)
// 005524bd: MOV EBX,dword ptr [EAX + 0x10]
//   XREF to: 00688024 (DATA)
// 005524c0: SUB EBX,ESI
// 005524c2: MOV dword ptr [EBP + -0xc],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005524c5: MOV EBX,dword ptr [EAX + 0x14]
//   XREF to: 00688028 (DATA)
// 005524c8: MOV EDI,dword ptr [ECX + 0x14]
//   XREF to: 00688028 (DATA)
// 005524cb: SUB EBX,EDI
// 005524cd: MOV dword ptr [EBP + -0x8],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 005524d0: MOV ECX,dword ptr [EDX + 0x10]
//   XREF to: 00688024 (DATA)
// 005524d3: MOV EBX,dword ptr [EAX + 0x10]
//   XREF to: 00688024 (DATA)
// 005524d6: SUB ECX,EBX
// 005524d8: MOV dword ptr [EBP + -0x14],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005524db: MOV EDX,dword ptr [EDX + 0x14]
//   XREF to: 00688028 (DATA)
// 005524de: MOV ESI,dword ptr [EAX + 0x14]
//   XREF to: 00688028 (DATA)
// 005524e1: SUB EDX,ESI
// 005524e3: MOV dword ptr [EBP + -0x10],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005524e6: JMP 0x0055247e
//   XREF to: 0055247e (UNCONDITIONAL_JUMP)
