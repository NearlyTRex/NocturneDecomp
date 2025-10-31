// Name: engine_3d.c_drawLineStrip3D_FUN_00404600
// Address: 00404600
// Address Range: [[00404600, 0040468f]]
// Convention: __cdecl
// Signature: void engine_3d.c_drawLineStrip3D_FUN_00404600(SLineStrip * line_strip)
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
// Function calls:
//   engine_3d.c_clipAndDrawLine3D_FUN_00408070
//   engine_3d.c_setActiveRenderColor_FUN_00404540

#include "nocturne.h"

void __cdecl engine_3d_c_drawLineStrip3D_FUN_00404600(SLineStrip *line_strip)

{
  int iVar1;
  int *piVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  byte bVar8;
  int in_stack_00000008;
  SRenderVertex *in_stack_ffffff34;
  SRenderVertex *in_stack_ffffff38;
  undefined4 auStack_9c [10];
  undefined4 uStack_74;
  int aiStack_6c [12];
  int aiStack_3c [11];
  
  bVar8 = 0;
  uStack_74 = 0x40460c;
  engine_3d_c_setActiveRenderColor_FUN_00404540();
  iVar3 = 0;
  piVar2 = (int *)(in_stack_00000008 + 8);
  while (iVar3 < *(int *)(in_stack_00000008 + 4) + -1) {
    pSVar4 = g_RenderVertexBuffer + *piVar2;
    piVar5 = aiStack_3c;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
    }
    pSVar4 = g_RenderVertexBuffer + piVar2[1];
    piVar5 = aiStack_6c;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
    }
    piVar5 = aiStack_6c;
    puVar6 = auStack_9c;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *piVar5;
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
    piVar5 = aiStack_3c;
    piVar7 = (int *)&stack0xffffff34;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine3D_FUN_00408070(in_stack_ffffff34,in_stack_ffffff38);
  }
  return;
}


// Assembly code:
// 00404600: PUSH EBX
//   Label: engine_3d.c_drawLineStrip3D_FUN_00404600
// 00404601: PUSH ESI
// 00404602: PUSH EDI
// 00404603: PUSH EBP
// 00404604: SUB ESP,0x60
// 00404607: CALL engine_3d.c_setActiveRenderColor_FUN_00404540
//   XREF to: 00404540 (UNCONDITIONAL_CALL)
// 0040460c: MOV EBX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 00404610: XOR EBP,EBP
// 00404612: ADD EBX,0x8
// 00404615: MOV EAX,dword ptr [ESP + 0x74]
//   Label: LAB_00404615
//   XREF to: Stack[0x4] (READ)
// 00404619: MOV ESI,dword ptr [EAX + 0x4]
// 0040461c: DEC ESI
// 0040461d: CMP EBP,ESI
// 0040461f: JL 0x00404638
//   XREF to: 00404638 (CONDITIONAL_JUMP)
// 00404621: MOV EBX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 00404625: MOV EAX,dword ptr [EAX + 0x4]
// 00404628: ADD EBX,0x8
// 0040462b: SHL EAX,0x2
// 0040462e: ADD EAX,EBX
// 00404630: ADD ESP,0x60
// 00404633: POP EBP
// 00404634: POP EDI
// 00404635: POP ESI
// 00404636: POP EBX
// 00404637: RET
// 00404638: IMUL ESI,dword ptr [EBX],0x30
//   Label: LAB_00404638
// 0040463b: MOV ECX,0xc
// 00404640: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0x40] (DATA)
// 00404644: LEA ESI,[ESI + 0x688014]
//   XREF to: 00688014 (DATA)
// 0040464a: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 0040464c: IMUL ESI,dword ptr [EBX + 0x4],0x30
// 00404650: MOV EDI,ESP
// 00404652: MOV ECX,0xc
// 00404657: LEA ESI,[ESI + 0x688014]
//   XREF to: 00688014 (DATA)
// 0040465d: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 0040465f: MOV ECX,0xc
// 00404664: SUB ESP,0x30
// 00404667: LEA ESI,[ESP + 0x30]
//   XREF to: Stack[-0x70] (DATA)
// 0040466b: MOV EDI,ESP
// 0040466d: MOVSD.REP ES:EDI,ESI
// 0040466f: MOV ECX,0xc
// 00404674: SUB ESP,0x30
// 00404677: LEA ESI,[ESP + 0x90]
//   XREF to: Stack[-0x40] (DATA)
// 0040467e: MOV EDI,ESP
// 00404680: ADD EBX,0x4
// 00404683: INC EBP
// 00404684: MOVSD.REP ES:EDI,ESI
// 00404686: CALL engine_3d.c_clipAndDrawLine3D_FUN_00408070
//   XREF to: 00408070 (UNCONDITIONAL_CALL)
// 0040468b: ADD ESP,0x60
// 0040468e: JMP 0x00404615
//   XREF to: 00404615 (UNCONDITIONAL_JUMP)
