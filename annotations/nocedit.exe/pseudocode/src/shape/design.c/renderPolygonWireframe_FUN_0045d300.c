// Name: shape_design.c_renderPolygonWireframe_FUN_0045d300
// Address: 0045d300
// Address Range: [[0045d300, 0045d462]]
// Convention: __cdecl
// Signature: void shape_design.c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive * polygon_data)
// Cross-references:
//   shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0 (0045d1d0) at 0045d2db [UNCONDITIONAL_CALL]
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
// Function calls:
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_3d.c_setActiveRenderColor_FUN_00404540

#include "nocturne.h"

void __cdecl shape_design_c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive *polygon_data)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  byte bVar7;
  SRenderVertex *in_stack_ffffff00;
  SRenderVertex *in_stack_ffffff04;
  undefined4 auStack_d0 [8];
  undefined4 uStack_b0;
  undefined4 local_a8 [12];
  int local_78 [12];
  int local_48 [12];
  int local_18;
  SMRGLHeaderPrimitive *local_14;
  
  bVar7 = 0;
  local_14 = polygon_data + 1;
  uStack_b0 = 0x45d321;
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_data->surface_normal);
  if (iVar1 != 0) {
    local_a8[0] = 0x45d331;
    engine_3d_c_setActiveRenderColor_FUN_00404540();
    for (local_18 = 0; local_18 < (polygon_data->base).count + -1; local_18 = local_18 + 1) {
      pSVar2 = g_RenderVertexBuffer + (&(local_14->base).type)[local_18];
      piVar3 = local_78;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = (pSVar2->projected_vertex).transformed_x;
        pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar7 * -2 + 1) * 4);
        piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
      }
      pSVar2 = g_RenderVertexBuffer + (&(local_14->base).count)[local_18];
      piVar3 = local_48;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = (pSVar2->projected_vertex).transformed_x;
        pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar7 * -2 + 1) * 4);
        piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
      }
      piVar3 = local_48;
      piVar5 = local_a8;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = *piVar3;
        piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
        piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
      }
      puVar4 = local_a8;
      puVar6 = auStack_d0;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      piVar3 = local_78;
      piVar5 = local_a8;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = *piVar3;
        piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
        piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
      }
      puVar4 = local_a8;
      puVar6 = (undefined4 *)&stack0xffffff00;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff00,in_stack_ffffff04);
    }
    pSVar2 = g_RenderVertexBuffer + *(int *)((int)local_14 + (polygon_data->base).count * 4 + -4);
    piVar3 = local_78;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = (pSVar2->projected_vertex).transformed_x;
      pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar7 * -2 + 1) * 4);
      piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
    }
    pSVar2 = g_RenderVertexBuffer + (local_14->base).type;
    piVar3 = local_48;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = (pSVar2->projected_vertex).transformed_x;
      pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar7 * -2 + 1) * 4);
      piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
    }
    piVar3 = local_48;
    piVar5 = local_a8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = *piVar3;
      piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
      piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
    }
    puVar4 = local_a8;
    puVar6 = auStack_d0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    piVar3 = local_78;
    piVar5 = local_a8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = *piVar3;
      piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
      piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
    }
    puVar4 = local_a8;
    puVar6 = (undefined4 *)&stack0xffffff00;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff00,in_stack_ffffff04);
  }
  return;
}


// Assembly code:
// 0045d300: PUSH EBX
//   Label: shape_design.c_renderPolygonWireframe_FUN_0045d300
// 0045d301: PUSH ESI
// 0045d302: PUSH EDI
// 0045d303: PUSH EBP
// 0045d304: MOV EBP,ESP
// 0045d306: SUB ESP,0x98
// 0045d30c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045d30f: ADD EAX,0x18
// 0045d312: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045d315: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045d318: ADD EAX,0x8
// 0045d31b: PUSH EAX
// 0045d31c: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0045d321: ADD ESP,0x4
// 0045d324: TEST EAX,EAX
// 0045d326: JZ 0x0045d45c
//   XREF to: 0045d45c (CONDITIONAL_JUMP)
// 0045d32c: CALL engine_3d.c_setActiveRenderColor_FUN_00404540
//   XREF to: 00404540 (UNCONDITIONAL_CALL)
// 0045d331: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 0045d338: JMP 0x0045d340
//   XREF to: 0045d340 (UNCONDITIONAL_JUMP)
// 0045d33a: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045d33a
//   XREF to: Stack[-0x18] (READ)
// 0045d33d: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0045d340: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0045d340
//   XREF to: Stack[0x4] (READ)
// 0045d343: MOV EAX,dword ptr [EAX + 0x4]
// 0045d346: DEC EAX
// 0045d347: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d34a: JLE 0x0045d3da
//   XREF to: 0045d3da (CONDITIONAL_JUMP)
// 0045d350: MOV EDI,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d353: SHL EDI,0x2
// 0045d356: ADD EDI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045d359: IMUL ESI,dword ptr [EDI],0x30
// 0045d35c: MOV ECX,0xc
// 0045d361: LEA EDI,[EBP + -0x68]
//   XREF to: Stack[-0x78] (DATA)
// 0045d364: LEA ESI,[ESI + 0x688014]
//   XREF to: 00688014 (DATA)
// 0045d36a: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 0045d36c: MOV ESI,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045d36f: SHL ESI,0x2
// 0045d372: ADD ESI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045d375: IMUL ESI,dword ptr [ESI + 0x4],0x30
// 0045d379: MOV ECX,0xc
// 0045d37e: LEA EDI,[EBP + -0x38]
//   XREF to: Stack[-0x48] (DATA)
// 0045d381: LEA ESI,[ESI + 0x688014]
//   XREF to: 00688014 (DATA)
// 0045d387: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 0045d389: MOV ECX,0xc
// 0045d38e: LEA EDI,[EBP + 0xffffff68]
//   XREF to: Stack[-0xa8] (DATA)
// 0045d394: LEA ESI,[EBP + -0x38]
//   XREF to: Stack[-0x48] (DATA)
// 0045d397: MOVSD.REP ES:EDI,ESI
// 0045d399: MOV ECX,0xc
// 0045d39e: SUB ESP,0x30
// 0045d3a1: MOV EDI,ESP
// 0045d3a3: LEA ESI,[EBP + 0xffffff68]
//   XREF to: Stack[-0xa8] (DATA)
// 0045d3a9: MOVSD.REP ES:EDI,ESI
// 0045d3ab: MOV ECX,0xc
// 0045d3b0: LEA EDI,[EBP + 0xffffff68]
//   XREF to: Stack[-0xa8] (DATA)
// 0045d3b6: LEA ESI,[EBP + -0x68]
//   XREF to: Stack[-0x78] (DATA)
// 0045d3b9: MOVSD.REP ES:EDI,ESI
// 0045d3bb: MOV ECX,0xc
// 0045d3c0: SUB ESP,0x30
// 0045d3c3: MOV EDI,ESP
// 0045d3c5: LEA ESI,[EBP + 0xffffff68]
//   XREF to: Stack[-0xa8] (DATA)
// 0045d3cb: MOVSD.REP ES:EDI,ESI
// 0045d3cd: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 0045d3d2: ADD ESP,0x60
// 0045d3d5: JMP 0x0045d33a
//   XREF to: 0045d33a (UNCONDITIONAL_JUMP)
// 0045d3da: MOV EDI,dword ptr [EBP + 0x14]
//   Label: LAB_0045d3da
//   XREF to: Stack[0x4] (READ)
// 0045d3dd: MOV EDI,dword ptr [EDI + 0x4]
// 0045d3e0: SHL EDI,0x2
// 0045d3e3: ADD EDI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045d3e6: IMUL ESI,dword ptr [EDI + -0x4],0x30
// 0045d3ea: MOV ECX,0xc
// 0045d3ef: LEA EDI,[EBP + -0x68]
//   XREF to: Stack[-0x78] (DATA)
// 0045d3f2: LEA ESI,[ESI + 0x688014]
//   XREF to: 00688014 (DATA)
// 0045d3f8: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 0045d3fa: MOV EDI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045d3fd: IMUL ESI,dword ptr [EDI],0x30
// 0045d400: MOV ECX,0xc
// 0045d405: LEA EDI,[EBP + -0x38]
//   XREF to: Stack[-0x48] (DATA)
// 0045d408: LEA ESI,[ESI + 0x688014]
//   XREF to: 00688014 (DATA)
// 0045d40e: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 0045d410: MOV ECX,0xc
// 0045d415: LEA EDI,[EBP + 0xffffff68]
//   XREF to: Stack[-0xa8] (DATA)
// 0045d41b: LEA ESI,[EBP + -0x38]
//   XREF to: Stack[-0x48] (DATA)
// 0045d41e: MOVSD.REP ES:EDI,ESI
// 0045d420: MOV ECX,0xc
// 0045d425: SUB ESP,0x30
// 0045d428: MOV EDI,ESP
// 0045d42a: LEA ESI,[EBP + 0xffffff68]
//   XREF to: Stack[-0xa8] (DATA)
// 0045d430: MOVSD.REP ES:EDI,ESI
// 0045d432: MOV ECX,0xc
// 0045d437: LEA EDI,[EBP + 0xffffff68]
//   XREF to: Stack[-0xa8] (DATA)
// 0045d43d: LEA ESI,[EBP + -0x68]
//   XREF to: Stack[-0x78] (DATA)
// 0045d440: MOVSD.REP ES:EDI,ESI
// 0045d442: MOV ECX,0xc
// 0045d447: SUB ESP,0x30
// 0045d44a: MOV EDI,ESP
// 0045d44c: LEA ESI,[EBP + 0xffffff68]
//   XREF to: Stack[-0xa8] (DATA)
// 0045d452: MOVSD.REP ES:EDI,ESI
// 0045d454: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 0045d459: ADD ESP,0x60
// 0045d45c: MOV ESP,EBP
//   Label: LAB_0045d45c
// 0045d45e: POP EBP
// 0045d45f: POP EDI
// 0045d460: POP ESI
// 0045d461: POP EBX
// 0045d462: RET
