// Name: engine_prim.c_getTriangleWindingFromIndices_FUN_00552210
// Address: 00552210
// Address Range: [[00552210, 005522fb]]
// Convention: __cdecl
// Signature: int engine_prim.c_getTriangleWindingFromIndices_FUN_00552210(STriangleIndices * triangle)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00 (0048cf00) at 0048d0de [UNCONDITIONAL_CALL]
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
//   int g_CullingMode

#include "nocturne.h"

int __cdecl engine_prim_c_getTriangleWindingFromIndices_FUN_00552210(STriangleIndices *triangle)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = triangle->vertex_index_0;
  iVar3 = triangle->vertex_index_1;
  iVar4 = triangle->vertex_index_2;
  if (g_CullingMode == 1) {
    local_24 = g_RenderVertexBuffer[iVar3].projected_vertex.screen_x -
               g_RenderVertexBuffer[iVar1].projected_vertex.screen_x;
    local_20 = g_RenderVertexBuffer[iVar3].projected_vertex.screen_y -
               g_RenderVertexBuffer[iVar1].projected_vertex.screen_y;
    local_1c = g_RenderVertexBuffer[iVar4].projected_vertex.screen_x -
               g_RenderVertexBuffer[iVar3].projected_vertex.screen_x;
    local_18 = g_RenderVertexBuffer[iVar4].projected_vertex.screen_y -
               g_RenderVertexBuffer[iVar3].projected_vertex.screen_y;
  }
  else {
    local_1c = g_RenderVertexBuffer[iVar3].projected_vertex.screen_x -
               g_RenderVertexBuffer[iVar1].projected_vertex.screen_x;
    local_18 = g_RenderVertexBuffer[iVar3].projected_vertex.screen_y -
               g_RenderVertexBuffer[iVar1].projected_vertex.screen_y;
    local_24 = g_RenderVertexBuffer[iVar4].projected_vertex.screen_x -
               g_RenderVertexBuffer[iVar3].projected_vertex.screen_x;
    local_20 = g_RenderVertexBuffer[iVar4].projected_vertex.screen_y -
               g_RenderVertexBuffer[iVar3].projected_vertex.screen_y;
  }
  iVar3 = (int)((ulonglong)((longlong)local_24 * (longlong)local_18) >> 0x20);
  iVar4 = (int)((ulonglong)((longlong)local_20 * (longlong)local_1c) >> 0x20);
  uVar2 = (uint)((uint)((longlong)local_20 * (longlong)local_1c) <
                (uint)((longlong)local_24 * (longlong)local_18));
  iVar1 = iVar4 - iVar3;
  return (uint)((SBORROW4(iVar4,iVar3) != SBORROW4(iVar1,uVar2)) != (int)(iVar1 - uVar2) < 0);
}


// Assembly code:
// 00552210: PUSH EBX
//   Label: engine_prim.c_getTriangleWindingFromIndices_FUN_00552210
// 00552211: PUSH ESI
// 00552212: PUSH EDI
// 00552213: PUSH EBP
// 00552214: MOV EBP,ESP
// 00552216: SUB ESP,0x14
// 00552219: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0055221c: MOV EDX,dword ptr [EBX + 0x18]
// 0055221f: LEA EAX,[EDX*0x4 + 0x0]
// 00552226: SUB EAX,EDX
// 00552228: MOV ECX,0x688014
//   XREF to: 00688014 (DATA)
// 0055222d: SHL EAX,0x4
// 00552230: MOV EDX,dword ptr [EBX + 0x24]
// 00552233: ADD ECX,EAX
// 00552235: LEA EAX,[EDX*0x4 + 0x0]
// 0055223c: MOV EBX,dword ptr [EBX + 0x30]
// 0055223f: SUB EAX,EDX
// 00552241: LEA EDX,[EBX*0x4 + 0x0]
// 00552248: SHL EAX,0x4
// 0055224b: SUB EDX,EBX
// 0055224d: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00552252: SHL EDX,0x4
// 00552255: MOV EBX,dword ptr [0x00772a7c]
//   XREF to: 00772a7c (READ)
// 0055225b: ADD EDX,0x688014
//   XREF to: 00688014 (DATA)
// 00552261: CMP EBX,0x1
// 00552264: JNZ 0x005522ce
//   XREF to: 005522ce (CONDITIONAL_JUMP)
// 00552266: MOV EDI,dword ptr [ECX + 0x10]
//   XREF to: 00688024 (DATA)
// 00552269: MOV EBX,dword ptr [EAX + 0x10]
//   XREF to: 00688024 (DATA)
// 0055226c: SUB EBX,EDI
// 0055226e: MOV dword ptr [EBP + -0x14],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 00552271: MOV EBX,dword ptr [EAX + 0x14]
//   XREF to: 00688028 (DATA)
// 00552274: MOV ESI,dword ptr [ECX + 0x14]
//   XREF to: 00688028 (DATA)
// 00552277: SUB EBX,ESI
// 00552279: MOV dword ptr [EBP + -0x10],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0055227c: MOV ECX,dword ptr [EDX + 0x10]
//   XREF to: 00688024 (DATA)
// 0055227f: MOV EDI,dword ptr [EAX + 0x10]
//   XREF to: 00688024 (DATA)
// 00552282: SUB ECX,EDI
// 00552284: MOV dword ptr [EBP + -0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00552287: MOV EDX,dword ptr [EDX + 0x14]
//   XREF to: 00688028 (DATA)
// 0055228a: MOV ECX,dword ptr [EAX + 0x14]
//   XREF to: 00688028 (DATA)
// 0055228d: SUB EDX,ECX
// 0055228f: MOV dword ptr [EBP + -0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00552292: MOV EAX,dword ptr [EBP + 0xffffffec]
//   Label: LAB_00552292
//   XREF to: Stack[-0x24] (READ)
// 00552298: IMUL dword ptr [EBP + 0xfffffff8]
//   XREF to: Stack[-0x18] (READ)
// 0055229e: MOV EBX,EAX
// 005522a0: MOV ECX,EDX
// 005522a2: MOV EAX,dword ptr [EBP + 0xfffffff0]
//   XREF to: Stack[-0x20] (READ)
// 005522a8: IMUL dword ptr [EBP + 0xfffffff4]
//   XREF to: Stack[-0x1c] (READ)
// 005522ae: SUB EAX,EBX
// 005522b0: SBB EDX,ECX
// 005522b2: MOV EAX,0x0
// 005522b7: JGE 0x005522be
//   XREF to: 005522be (CONDITIONAL_JUMP)
// 005522b9: MOV EAX,0x1
// 005522be: MOV dword ptr [EBP + 0xfffffffc],EAX
//   Label: LAB_005522be
//   XREF to: Stack[-0x14] (WRITE)
// 005522c4: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005522c7: MOV ESP,EBP
// 005522c9: POP EBP
// 005522ca: POP EDI
// 005522cb: POP ESI
// 005522cc: POP EBX
// 005522cd: RET
// 005522ce: MOV ESI,dword ptr [ECX + 0x10]
//   Label: LAB_005522ce
//   XREF to: 00688024 (DATA)
// 005522d1: MOV EBX,dword ptr [EAX + 0x10]
//   XREF to: 00688024 (DATA)
// 005522d4: SUB EBX,ESI
// 005522d6: MOV dword ptr [EBP + -0xc],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005522d9: MOV EBX,dword ptr [EAX + 0x14]
//   XREF to: 00688028 (DATA)
// 005522dc: MOV EDI,dword ptr [ECX + 0x14]
//   XREF to: 00688028 (DATA)
// 005522df: SUB EBX,EDI
// 005522e1: MOV dword ptr [EBP + -0x8],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 005522e4: MOV ECX,dword ptr [EDX + 0x10]
//   XREF to: 00688024 (DATA)
// 005522e7: MOV EBX,dword ptr [EAX + 0x10]
//   XREF to: 00688024 (DATA)
// 005522ea: SUB ECX,EBX
// 005522ec: MOV dword ptr [EBP + -0x14],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005522ef: MOV EDX,dword ptr [EDX + 0x14]
//   XREF to: 00688028 (DATA)
// 005522f2: MOV ESI,dword ptr [EAX + 0x14]
//   XREF to: 00688028 (DATA)
// 005522f5: SUB EDX,ESI
// 005522f7: MOV dword ptr [EBP + -0x10],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005522fa: JMP 0x00552292
//   XREF to: 00552292 (UNCONDITIONAL_JUMP)
