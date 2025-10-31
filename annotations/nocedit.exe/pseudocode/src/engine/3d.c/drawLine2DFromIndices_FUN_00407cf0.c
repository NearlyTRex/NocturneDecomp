// Name: engine_3d.c_drawLine2DFromIndices_FUN_00407cf0
// Address: 00407cf0
// Address Range: [[00407cf0, 00407d62]]
// Convention: __cdecl
// Signature: void engine_3d.c_drawLine2DFromIndices_FUN_00407cf0(int vertex_index1, int vertex_index2)
// Cross-references:
//   core_waypoint.cpp_CWaypoint_FUN_005ebf70 (005ebf70) at 005ec24e [UNCONDITIONAL_CALL]
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
// Function calls:
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70

#include "nocturne.h"

void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00407cf0(int vertex_index1,int vertex_index2)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar2;
  int *piVar3;
  int *piVar4;
  SRenderVertex *in_stack_ffffff38;
  SRenderVertex *in_stack_ffffff3c;
  undefined4 auStack_98 [12];
  int local_68 [12];
  int local_38 [12];
  
  pSVar2 = g_RenderVertexBuffer + vertex_index1;
  piVar3 = local_68;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)&(pSVar2->projected_vertex).transformed_y;
    piVar3 = piVar3 + 1;
  }
  pSVar2 = g_RenderVertexBuffer + vertex_index2;
  piVar3 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)&(pSVar2->projected_vertex).transformed_y;
    piVar3 = piVar3 + 1;
  }
  piVar3 = local_38;
  piVar4 = auStack_98;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar3 = local_68;
  piVar4 = (int *)&stack0xffffff38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff38,in_stack_ffffff3c);
  return;
}


// Assembly code:
// 00407cf0: PUSH ESI
//   Label: engine_3d.c_drawLine2DFromIndices_FUN_00407cf0
// 00407cf1: PUSH EDI
// 00407cf2: SUB ESP,0x60
// 00407cf5: MOV EDI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00407cf9: LEA EAX,[EDI*0x4 + 0x0]
// 00407d00: SUB EAX,EDI
// 00407d02: MOV ECX,0xc
// 00407d07: SHL EAX,0x4
// 00407d0a: MOV EDI,ESP
// 00407d0c: LEA ESI,[EAX + 0x688014]
//   XREF to: 00688014 (DATA)
// 00407d12: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 00407d14: MOV EDI,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00407d18: LEA EAX,[EDI*0x4 + 0x0]
// 00407d1f: SUB EAX,EDI
// 00407d21: MOV ECX,0xc
// 00407d26: SHL EAX,0x4
// 00407d29: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0x38] (DATA)
// 00407d2d: LEA ESI,[EAX + 0x688014]
//   XREF to: 00688014 (DATA)
// 00407d33: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 00407d35: MOV ECX,0xc
// 00407d3a: SUB ESP,0x30
// 00407d3d: LEA ESI,[ESP + 0x60]
//   XREF to: Stack[-0x38] (DATA)
// 00407d41: MOV EDI,ESP
// 00407d43: MOVSD.REP ES:EDI,ESI
// 00407d45: MOV ECX,0xc
// 00407d4a: SUB ESP,0x30
// 00407d4d: LEA ESI,[ESP + 0x60]
//   XREF to: Stack[-0x68] (DATA)
// 00407d51: MOV EDI,ESP
// 00407d53: MOVSD.REP ES:EDI,ESI
// 00407d55: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00407d5a: ADD ESP,0x60
// 00407d5d: ADD ESP,0x60
// 00407d60: POP EDI
// 00407d61: POP ESI
// 00407d62: RET
