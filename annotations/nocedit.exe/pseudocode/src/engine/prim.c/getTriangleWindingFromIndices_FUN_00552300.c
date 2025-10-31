// Name: engine_prim.c_getTriangleWindingFromIndices_FUN_00552300
// Address: 00552300
// Address Range: [[00552300, 005523eb]]
// Convention: __cdecl
// Signature: int engine_prim.c_getTriangleWindingFromIndices_FUN_00552300(STriangleIndices * triangle_indices)
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
//   int g_CullingMode

#include "nocturne.h"

int __cdecl
engine_prim_c_getTriangleWindingFromIndices_FUN_00552300(STriangleIndices *triangle_indices)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = triangle_indices->vertex_index_0;
  iVar3 = triangle_indices->vertex_index_1;
  iVar4 = triangle_indices->vertex_index_2;
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
// 00552300: PUSH EBX
//   Label: engine_prim.c_getTriangleWindingFromIndices_FUN_00552300
// 00552301: PUSH ESI
// 00552302: PUSH EDI
// 00552303: PUSH EBP
// 00552304: MOV EBP,ESP
// 00552306: SUB ESP,0x14
// 00552309: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0055230c: MOV EDX,dword ptr [EBX + 0x18]
// 0055230f: LEA EAX,[EDX*0x4 + 0x0]
// 00552316: SUB EAX,EDX
// 00552318: MOV ECX,0x688014
//   XREF to: 00688014 (DATA)
// 0055231d: SHL EAX,0x4
// 00552320: MOV EDX,dword ptr [EBX + 0x24]
// 00552323: ADD ECX,EAX
// 00552325: LEA EAX,[EDX*0x4 + 0x0]
// 0055232c: MOV EBX,dword ptr [EBX + 0x30]
// 0055232f: SUB EAX,EDX
// 00552331: LEA EDX,[EBX*0x4 + 0x0]
// 00552338: SHL EAX,0x4
// 0055233b: SUB EDX,EBX
// 0055233d: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00552342: SHL EDX,0x4
// 00552345: MOV EBX,dword ptr [0x00772a7c]
//   XREF to: 00772a7c (READ)
// 0055234b: ADD EDX,0x688014
//   XREF to: 00688014 (DATA)
// 00552351: CMP EBX,0x1
// 00552354: JNZ 0x005523be
//   XREF to: 005523be (CONDITIONAL_JUMP)
// 00552356: MOV EDI,dword ptr [ECX + 0x10]
//   XREF to: 00688024 (DATA)
// 00552359: MOV EBX,dword ptr [EAX + 0x10]
//   XREF to: 00688024 (DATA)
// 0055235c: SUB EBX,EDI
// 0055235e: MOV dword ptr [EBP + -0x14],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 00552361: MOV EBX,dword ptr [EAX + 0x14]
//   XREF to: 00688028 (DATA)
// 00552364: MOV ESI,dword ptr [ECX + 0x14]
//   XREF to: 00688028 (DATA)
// 00552367: SUB EBX,ESI
// 00552369: MOV dword ptr [EBP + -0x10],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0055236c: MOV ECX,dword ptr [EDX + 0x10]
//   XREF to: 00688024 (DATA)
// 0055236f: MOV EDI,dword ptr [EAX + 0x10]
//   XREF to: 00688024 (DATA)
// 00552372: SUB ECX,EDI
// 00552374: MOV dword ptr [EBP + -0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00552377: MOV EDX,dword ptr [EDX + 0x14]
//   XREF to: 00688028 (DATA)
// 0055237a: MOV ECX,dword ptr [EAX + 0x14]
//   XREF to: 00688028 (DATA)
// 0055237d: SUB EDX,ECX
// 0055237f: MOV dword ptr [EBP + -0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00552382: MOV EAX,dword ptr [EBP + 0xffffffec]
//   Label: LAB_00552382
//   XREF to: Stack[-0x24] (READ)
// 00552388: IMUL dword ptr [EBP + 0xfffffff8]
//   XREF to: Stack[-0x18] (READ)
// 0055238e: MOV EBX,EAX
// 00552390: MOV ECX,EDX
// 00552392: MOV EAX,dword ptr [EBP + 0xfffffff0]
//   XREF to: Stack[-0x20] (READ)
// 00552398: IMUL dword ptr [EBP + 0xfffffff4]
//   XREF to: Stack[-0x1c] (READ)
// 0055239e: SUB EAX,EBX
// 005523a0: SBB EDX,ECX
// 005523a2: MOV EAX,0x0
// 005523a7: JGE 0x005523ae
//   XREF to: 005523ae (CONDITIONAL_JUMP)
// 005523a9: MOV EAX,0x1
// 005523ae: MOV dword ptr [EBP + 0xfffffffc],EAX
//   Label: LAB_005523ae
//   XREF to: Stack[-0x14] (WRITE)
// 005523b4: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005523b7: MOV ESP,EBP
// 005523b9: POP EBP
// 005523ba: POP EDI
// 005523bb: POP ESI
// 005523bc: POP EBX
// 005523bd: RET
// 005523be: MOV ESI,dword ptr [ECX + 0x10]
//   Label: LAB_005523be
//   XREF to: 00688024 (DATA)
// 005523c1: MOV EBX,dword ptr [EAX + 0x10]
//   XREF to: 00688024 (DATA)
// 005523c4: SUB EBX,ESI
// 005523c6: MOV dword ptr [EBP + -0xc],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005523c9: MOV EBX,dword ptr [EAX + 0x14]
//   XREF to: 00688028 (DATA)
// 005523cc: MOV EDI,dword ptr [ECX + 0x14]
//   XREF to: 00688028 (DATA)
// 005523cf: SUB EBX,EDI
// 005523d1: MOV dword ptr [EBP + -0x8],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 005523d4: MOV ECX,dword ptr [EDX + 0x10]
//   XREF to: 00688024 (DATA)
// 005523d7: MOV EBX,dword ptr [EAX + 0x10]
//   XREF to: 00688024 (DATA)
// 005523da: SUB ECX,EBX
// 005523dc: MOV dword ptr [EBP + -0x14],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005523df: MOV EDX,dword ptr [EDX + 0x14]
//   XREF to: 00688028 (DATA)
// 005523e2: MOV ESI,dword ptr [EAX + 0x14]
//   XREF to: 00688028 (DATA)
// 005523e5: SUB EDX,ESI
// 005523e7: MOV dword ptr [EBP + -0x10],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005523ea: JMP 0x00552382
//   XREF to: 00552382 (UNCONDITIONAL_JUMP)
