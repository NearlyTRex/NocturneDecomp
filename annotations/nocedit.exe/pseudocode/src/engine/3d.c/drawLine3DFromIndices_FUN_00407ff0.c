// Name: engine_3d.c_drawLine3DFromIndices_FUN_00407ff0
// Address: 00407ff0
// Address Range: [[00407ff0, 00408062]]
// Convention: __cdecl
// Signature: void engine_3d.c_drawLine3DFromIndices_FUN_00407ff0(int vertex_index1, int vertex_index2)
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
// Function calls:
//   engine_3d.c_clipAndDrawLine3D_FUN_00408070

#include "nocturne.h"

void __cdecl engine_3d_c_drawLine3DFromIndices_FUN_00407ff0(int vertex_index1,int vertex_index2)

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
  engine_3d_c_clipAndDrawLine3D_FUN_00408070(in_stack_ffffff38,in_stack_ffffff3c);
  return;
}


// Assembly code:
// 00407ff0: PUSH ESI
//   Label: engine_3d.c_drawLine3DFromIndices_FUN_00407ff0
// 00407ff1: PUSH EDI
// 00407ff2: SUB ESP,0x60
// 00407ff5: MOV EDI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00407ff9: LEA EAX,[EDI*0x4 + 0x0]
// 00408000: SUB EAX,EDI
// 00408002: MOV ECX,0xc
// 00408007: SHL EAX,0x4
// 0040800a: MOV EDI,ESP
// 0040800c: LEA ESI,[EAX + 0x688014]
//   XREF to: 00688014 (DATA)
// 00408012: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 00408014: MOV EDI,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00408018: LEA EAX,[EDI*0x4 + 0x0]
// 0040801f: SUB EAX,EDI
// 00408021: MOV ECX,0xc
// 00408026: SHL EAX,0x4
// 00408029: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0x38] (DATA)
// 0040802d: LEA ESI,[EAX + 0x688014]
//   XREF to: 00688014 (DATA)
// 00408033: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 00408035: MOV ECX,0xc
// 0040803a: SUB ESP,0x30
// 0040803d: LEA ESI,[ESP + 0x60]
//   XREF to: Stack[-0x38] (DATA)
// 00408041: MOV EDI,ESP
// 00408043: MOVSD.REP ES:EDI,ESI
// 00408045: MOV ECX,0xc
// 0040804a: SUB ESP,0x30
// 0040804d: LEA ESI,[ESP + 0x60]
//   XREF to: Stack[-0x68] (DATA)
// 00408051: MOV EDI,ESP
// 00408053: MOVSD.REP ES:EDI,ESI
// 00408055: CALL engine_3d.c_clipAndDrawLine3D_FUN_00408070
//   XREF to: 00408070 (UNCONDITIONAL_CALL)
// 0040805a: ADD ESP,0x60
// 0040805d: ADD ESP,0x60
// 00408060: POP EDI
// 00408061: POP ESI
// 00408062: RET
