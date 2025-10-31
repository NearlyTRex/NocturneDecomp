// Name: shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470
// Address: 0045d470
// Address Range: [[0045d470, 0045d5c7]]
// Convention: __cdecl
// Signature: void shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470(SMRGLHeaderPrimitive * polygon_data, int line_color)
// Cross-references:
//   shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0 (0045d1d0) at 0045d2ed [UNCONDITIONAL_CALL]
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
//   int[12] g_AALineVertex1
//   undefined4 DAT_0069ffb8
//   undefined4 g_AALineVertex1[4]
//   undefined4 g_AALineVertex1[5]
//   int[12] g_AALineVertex2
//   undefined4 DAT_0069ffe8
//   undefined4 g_AALineVertex2[4]
//   undefined4 DAT_0069fff4+3
//   undefined4 g_AALineVertex2[5]
// Function calls:
//   cockpit_ckptutil.c_drawLineAA_FUN_00433c90
//   engine_3d.c_isVisiblePlane_FUN_00403950

#include "nocturne.h"

void __cdecl
shape_design_c_renderPolygonWireframeAntialiased_FUN_0045d470
          (SMRGLHeaderPrimitive *polygon_data,int line_color)

{
  SMRGLHeaderPrimitive *pSVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  byte bVar6;
  
  bVar6 = 0;
  pSVar1 = polygon_data + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_data->surface_normal);
  if (iVar2 != 0) {
    for (iVar2 = 0; iVar2 < (polygon_data->base).count + -1; iVar2 = iVar2 + 1) {
      pSVar4 = g_RenderVertexBuffer + (&(pSVar1->base).type)[iVar2];
      piVar5 = g_AALineVertex1;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = (pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      pSVar4 = g_RenderVertexBuffer + (&(pSVar1->base).count)[iVar2];
      piVar5 = g_AALineVertex2;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = (pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      if (((g_AALineVertex1[4] & 0x80000000U) == 0) && ((g_AALineVertex2[4] & 0x80000000U) == 0)) {
        iVar2 = line_color;
        cockpit_ckptutil_c_drawLineAA_FUN_00433c90
                  (g_AALineVertex1[4] >> 0x10,g_AALineVertex1[5] >> 0x10,g_AALineVertex2[4] >> 0x10,
                   g_AALineVertex2[5] >> 0x10,line_color);
      }
    }
    pSVar4 = g_RenderVertexBuffer + *(int *)((int)pSVar1 + (polygon_data->base).count * 4 + -4);
    piVar5 = g_AALineVertex1;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
      piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
    }
    pSVar4 = g_RenderVertexBuffer + (pSVar1->base).type;
    piVar5 = g_AALineVertex2;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
      piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
    }
    if (((g_AALineVertex1[4] & 0x80000000U) == 0) && ((g_AALineVertex2[4] & 0x80000000U) == 0)) {
      cockpit_ckptutil_c_drawLineAA_FUN_00433c90
                (g_AALineVertex1[4] >> 0x10,g_AALineVertex1[5] >> 0x10,g_AALineVertex2[4] >> 0x10,
                 g_AALineVertex2[5] >> 0x10,line_color);
    }
  }
  return;
}


// Assembly code:
// 0045d470: PUSH EBX
//   Label: shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470
// 0045d471: PUSH ESI
// 0045d472: PUSH EDI
// 0045d473: PUSH EBP
// 0045d474: MOV EBP,ESP
// 0045d476: SUB ESP,0x8
// 0045d47c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045d47f: ADD EAX,0x18
// 0045d482: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045d485: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045d488: ADD EAX,0x8
// 0045d48b: PUSH EAX
// 0045d48c: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0045d491: ADD ESP,0x4
// 0045d494: TEST EAX,EAX
// 0045d496: JZ 0x0045d5c1
//   XREF to: 0045d5c1 (CONDITIONAL_JUMP)
// 0045d49c: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 0045d4a3: JMP 0x0045d4ab
//   XREF to: 0045d4ab (UNCONDITIONAL_JUMP)
// 0045d4a5: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045d4a5
//   XREF to: Stack[-0x18] (READ)
// 0045d4a8: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0045d4ab: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0045d4ab
//   XREF to: Stack[0x4] (READ)
// 0045d4ae: MOV EAX,dword ptr [EAX + 0x4]
// 0045d4b1: DEC EAX
// 0045d4b2: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d4b5: JLE 0x0045d543
//   XREF to: 0045d543 (CONDITIONAL_JUMP)
// 0045d4bb: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d4be: SHL EAX,0x2
// 0045d4c1: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045d4c4: IMUL ESI,dword ptr [EAX],0x30
// 0045d4c7: MOV ECX,0xc
// 0045d4cc: MOV EDI,0x69ffb4
//   XREF to: 0069ffb4 (DATA)
// 0045d4d1: LEA ESI,[ESI + 0x688014]
//   XREF to: 00688014 (DATA)
// 0045d4d7: MOVSD.REP ES:EDI,ESI
//   XREF to: 0069ffb4 (WRITE)
//   XREF to: 0069ffb8 (WRITE)
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 0045d4d9: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d4dc: SHL EAX,0x2
// 0045d4df: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045d4e2: IMUL ESI,dword ptr [EAX + 0x4],0x30
// 0045d4e6: MOV ECX,0xc
// 0045d4eb: MOV EDI,0x69ffe4
//   XREF to: 0069ffe4 (DATA)
// 0045d4f0: LEA ESI,[ESI + 0x688014]
//   XREF to: 00688014 (DATA)
// 0045d4f6: MOVSD.REP ES:EDI,ESI
//   XREF to: 0069ffe4 (WRITE)
//   XREF to: 0069ffe8 (WRITE)
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 0045d4f8: TEST byte ptr [0x0069ffc7],0x80
//   XREF to: 0069ffc7 (READ)
// 0045d4ff: JZ 0x0045d503
//   XREF to: 0045d503 (CONDITIONAL_JUMP)
// 0045d501: JMP 0x0045d53e
//   XREF to: 0045d53e (UNCONDITIONAL_JUMP)
// 0045d503: TEST byte ptr [0x0069fff7],0x80
//   Label: LAB_0045d503
//   XREF to: 0069fff7 (READ)
// 0045d50a: JZ 0x0045d50e
//   XREF to: 0045d50e (CONDITIONAL_JUMP)
// 0045d50c: JMP 0x0045d53e
//   XREF to: 0045d53e (UNCONDITIONAL_JUMP)
// 0045d50e: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0045d50e
//   XREF to: Stack[0x8] (READ)
// 0045d511: PUSH EAX
// 0045d512: MOV EAX,[0x0069fff8]
//   XREF to: 0069fff8 (READ)
// 0045d517: SAR EAX,0x10
// 0045d51a: PUSH EAX
// 0045d51b: MOV EAX,[0x0069fff4]
//   XREF to: 0069fff4 (READ)
// 0045d520: SAR EAX,0x10
// 0045d523: PUSH EAX
// 0045d524: MOV EAX,[0x0069ffc8]
//   XREF to: 0069ffc8 (READ)
// 0045d529: SAR EAX,0x10
// 0045d52c: PUSH EAX
// 0045d52d: MOV EAX,[0x0069ffc4]
//   XREF to: 0069ffc4 (READ)
// 0045d532: SAR EAX,0x10
// 0045d535: PUSH EAX
// 0045d536: CALL cockpit_ckptutil.c_drawLineAA_FUN_00433c90
//   XREF to: 00433c90 (UNCONDITIONAL_CALL)
// 0045d53b: ADD ESP,0x14
// 0045d53e: JMP 0x0045d4a5
//   Label: LAB_0045d53e
//   XREF to: 0045d4a5 (UNCONDITIONAL_JUMP)
// 0045d543: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0045d543
//   XREF to: Stack[0x4] (READ)
// 0045d546: MOV EAX,dword ptr [EAX + 0x4]
// 0045d549: SHL EAX,0x2
// 0045d54c: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045d54f: IMUL ESI,dword ptr [EAX + -0x4],0x30
// 0045d553: MOV ECX,0xc
// 0045d558: MOV EDI,0x69ffb4
//   XREF to: 0069ffb4 (DATA)
// 0045d55d: LEA ESI,[ESI + 0x688014]
//   XREF to: 00688014 (DATA)
// 0045d563: MOVSD.REP ES:EDI,ESI
//   XREF to: 0069ffb4 (WRITE)
//   XREF to: 0069ffb8 (WRITE)
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 0045d565: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045d568: IMUL ESI,dword ptr [EAX],0x30
// 0045d56b: MOV ECX,0xc
// 0045d570: MOV EDI,0x69ffe4
//   XREF to: 0069ffe4 (DATA)
// 0045d575: LEA ESI,[ESI + 0x688014]
//   XREF to: 00688014 (DATA)
// 0045d57b: MOVSD.REP ES:EDI,ESI
//   XREF to: 0069ffe4 (WRITE)
//   XREF to: 0069ffe8 (WRITE)
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 0045d57d: TEST byte ptr [0x0069ffc7],0x80
//   XREF to: 0069ffc7 (READ)
// 0045d584: JNZ 0x0045d58f
//   XREF to: 0045d58f (CONDITIONAL_JUMP)
// 0045d586: TEST byte ptr [0x0069fff7],0x80
//   XREF to: 0069fff7 (READ)
// 0045d58d: JZ 0x0045d591
//   XREF to: 0045d591 (CONDITIONAL_JUMP)
// 0045d58f: JMP 0x0045d5c1
//   Label: LAB_0045d58f
//   XREF to: 0045d5c1 (UNCONDITIONAL_JUMP)
// 0045d591: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0045d591
//   XREF to: Stack[0x8] (READ)
// 0045d594: PUSH EAX
// 0045d595: MOV EAX,[0x0069fff8]
//   XREF to: 0069fff8 (READ)
// 0045d59a: SAR EAX,0x10
// 0045d59d: PUSH EAX
// 0045d59e: MOV EAX,[0x0069fff4]
//   XREF to: 0069fff4 (READ)
// 0045d5a3: SAR EAX,0x10
// 0045d5a6: PUSH EAX
// 0045d5a7: MOV EAX,[0x0069ffc8]
//   XREF to: 0069ffc8 (READ)
// 0045d5ac: SAR EAX,0x10
// 0045d5af: PUSH EAX
// 0045d5b0: MOV EAX,[0x0069ffc4]
//   XREF to: 0069ffc4 (READ)
// 0045d5b5: SAR EAX,0x10
// 0045d5b8: PUSH EAX
// 0045d5b9: CALL cockpit_ckptutil.c_drawLineAA_FUN_00433c90
//   XREF to: 00433c90 (UNCONDITIONAL_CALL)
// 0045d5be: ADD ESP,0x14
// 0045d5c1: MOV ESP,EBP
//   Label: LAB_0045d5c1
// 0045d5c3: POP EBP
// 0045d5c4: POP EDI
// 0045d5c5: POP ESI
// 0045d5c6: POP EBX
// 0045d5c7: RET
