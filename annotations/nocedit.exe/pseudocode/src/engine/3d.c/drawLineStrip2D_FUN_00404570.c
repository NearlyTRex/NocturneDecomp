// Name: engine_3d.c_drawLineStrip2D_FUN_00404570
// Address: 00404570
// Address Range: [[00404570, 004045ff]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_drawLineStrip2D_FUN_00404570(SLineStrip * line_strip)
// Cross-references:
//   core_course.cpp_FUN_00443760 (00443760) at 00443ac5 [UNCONDITIONAL_CALL]
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
// Function calls:
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   engine_3d.c_setActiveRenderColor_FUN_00404540

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip2D_FUN_00404570(SLineStrip *line_strip)

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
  uStack_74 = 0x40457c;
  engine_3d_c_setActiveRenderColor_FUN_00404540();
  iVar3 = 0;
  piVar2 = (int *)(in_stack_00000008 + 8);
  while( true ) {
    if (*(int *)(in_stack_00000008 + 4) + -1 <= iVar3) break;
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
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff34,in_stack_ffffff38);
  }
  return (SMRGLHeaderExtended *)(*(int *)(in_stack_00000008 + 4) * 4 + in_stack_00000008 + 8);
}


// Assembly code:
// 00404570: PUSH EBX
//   Label: engine_3d.c_drawLineStrip2D_FUN_00404570
// 00404571: PUSH ESI
// 00404572: PUSH EDI
// 00404573: PUSH EBP
// 00404574: SUB ESP,0x60
// 00404577: CALL engine_3d.c_setActiveRenderColor_FUN_00404540
//   XREF to: 00404540 (UNCONDITIONAL_CALL)
// 0040457c: MOV EBX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 00404580: XOR EBP,EBP
// 00404582: ADD EBX,0x8
// 00404585: MOV EAX,dword ptr [ESP + 0x74]
//   Label: LAB_00404585
//   XREF to: Stack[0x4] (READ)
// 00404589: MOV ESI,dword ptr [EAX + 0x4]
// 0040458c: DEC ESI
// 0040458d: CMP EBP,ESI
// 0040458f: JL 0x004045a8
//   XREF to: 004045a8 (CONDITIONAL_JUMP)
// 00404591: MOV EBX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 00404595: MOV EAX,dword ptr [EAX + 0x4]
// 00404598: ADD EBX,0x8
// 0040459b: SHL EAX,0x2
// 0040459e: ADD EAX,EBX
// 004045a0: ADD ESP,0x60
// 004045a3: POP EBP
// 004045a4: POP EDI
// 004045a5: POP ESI
// 004045a6: POP EBX
// 004045a7: RET
// 004045a8: IMUL ESI,dword ptr [EBX],0x30
//   Label: LAB_004045a8
// 004045ab: MOV ECX,0xc
// 004045b0: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0x40] (DATA)
// 004045b4: LEA ESI,[ESI + 0x688014]
//   XREF to: 00688014 (DATA)
// 004045ba: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 004045bc: IMUL ESI,dword ptr [EBX + 0x4],0x30
// 004045c0: MOV EDI,ESP
// 004045c2: MOV ECX,0xc
// 004045c7: LEA ESI,[ESI + 0x688014]
//   XREF to: 00688014 (DATA)
// 004045cd: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 004045cf: MOV ECX,0xc
// 004045d4: SUB ESP,0x30
// 004045d7: LEA ESI,[ESP + 0x30]
//   XREF to: Stack[-0x70] (DATA)
// 004045db: MOV EDI,ESP
// 004045dd: MOVSD.REP ES:EDI,ESI
// 004045df: MOV ECX,0xc
// 004045e4: SUB ESP,0x30
// 004045e7: LEA ESI,[ESP + 0x90]
//   XREF to: Stack[-0x40] (DATA)
// 004045ee: MOV EDI,ESP
// 004045f0: ADD EBX,0x4
// 004045f3: INC EBP
// 004045f4: MOVSD.REP ES:EDI,ESI
// 004045f6: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 004045fb: ADD ESP,0x60
// 004045fe: JMP 0x00404585
//   XREF to: 00404585 (UNCONDITIONAL_JUMP)
