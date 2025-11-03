// Name: engine_3d.c_clipAndDrawLine2D_FUN_00407d70
// Address: 00407d70
// Address Range: [[00407d70, 00407fed]]
// Convention: __cdecl
// Signature: void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex * vertex1, SRenderVertex * vertex2)
// Cross-references:
//   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 (0040d940) at 0040dcef [UNCONDITIONAL_CALL]
//   core_actor.cpp_draw3DLineSegment_FUN_0040d330 (0040d330) at 0040d45b [UNCONDITIONAL_CALL]
//   core_actor.cpp_drawBoundingBox_FUN_0040d470 (0040d470) at 0040d5fe [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443e4b [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502620 (00502620) at 00502845 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00584184 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00582930 (00582930) at 00582cfa [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640 (0059b640) at 0059b734 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005b9c10 (005b9c10) at 005b9fe4 [UNCONDITIONAL_CALL]
//   engine_3d.c_drawLine2DFromIndices_FUN_00407cf0 (00407cf0) at 00407d55 [UNCONDITIONAL_CALL]
//   engine_3d.c_drawLineStrip2D_FUN_00404570 (00404570) at 004045f6 [UNCONDITIONAL_CALL]
//   shape_design.c_renderPolygonWireframe_FUN_0045d300 (0045d300) at 0045d3cd [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0 (004a1ca0) at 004a1d4e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050 (004a2050) at 004a2240 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_draw3DInterpolatedLine_FUN_004a1f40 (004a1f40) at 004a2040 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051e770 (0051e770) at 0051e7ee [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051e830 (0051e830) at 0051e927 [UNCONDITIONAL_CALL]
// Globals:
//   SRenderVertex g_QuadVertex2
//   undefined4 g_QuadVertex2_Y
//   undefined4 g_ProjectedScreenX1
//   undefined4 g_ProjectedScreenY1
//   SRenderVertex g_QuadVertex3
//   undefined4 g_QuadVertex3_Y
//   undefined4 g_ProjectedScreenX2
//   undefined4 g_ProjectedScreenY2
// Function calls:
//   engine_2d.c_drawLine_FUN_004011b0
//   engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
//   engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
//   engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
//   engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
//   engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60

#include "nocturne.h"

void __cdecl
engine_3d_c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex *vertex1,SRenderVertex *vertex2)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar3;
  SRenderVertex **ppSVar4;
  int *piVar5;
  undefined4 *puVar6;
  SRenderVertex *pSVar7;
  byte bVar8;
  int in_stack_0000000c;
  uint in_stack_00000014;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  uint in_stack_00000044;
  
  bVar8 = 0;
  if (((in_stack_00000014 & in_stack_00000044 & 0x80000000) == 0) ||
     ((char)(in_stack_00000014 & in_stack_00000044) == '\0')) {
    iVar2 = 0;
    do {
      if (in_stack_0000003c < in_stack_00000034) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00
                  ((SRenderVertex *)&vertex1,(SRenderVertex *)&stack0x00000034,
                   (SRenderVertex *)&stack0xffffffc0);
        puVar3 = (undefined4 *)&stack0xffffffc0;
        puVar6 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        }
      }
      if (-in_stack_00000034 != in_stack_0000003c && in_stack_00000034 <= -in_stack_0000003c) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00
                  ((SRenderVertex *)&vertex1,(SRenderVertex *)&stack0x00000034,
                   (SRenderVertex *)&stack0xffffffc0);
        puVar3 = (undefined4 *)&stack0xffffffc0;
        puVar6 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        }
      }
      if (in_stack_0000003c < in_stack_00000038) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00
                  ((SRenderVertex *)&vertex1,(SRenderVertex *)&stack0x00000034,
                   (SRenderVertex *)&stack0xffffffc0);
        puVar3 = (undefined4 *)&stack0xffffffc0;
        puVar6 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        }
      }
      if (-in_stack_00000038 != in_stack_0000003c && in_stack_00000038 <= -in_stack_0000003c) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00
                  ((SRenderVertex *)&vertex1,(SRenderVertex *)&stack0x00000034,
                   (SRenderVertex *)&stack0xffffffc0);
        puVar3 = (undefined4 *)&stack0xffffffc0;
        puVar6 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        }
      }
      if (in_stack_0000000c < (int)vertex1) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00
                  ((SRenderVertex *)&stack0x00000034,(SRenderVertex *)&vertex1,
                   (SRenderVertex *)&stack0xffffffc0);
        puVar3 = (undefined4 *)&stack0xffffffc0;
        ppSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *ppSVar4 = (SRenderVertex *)*puVar3;
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
          ppSVar4 = ppSVar4 + (uint)bVar8 * -2 + 1;
        }
      }
      if (-(int)vertex1 != in_stack_0000000c && (int)vertex1 <= -in_stack_0000000c) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00
                  ((SRenderVertex *)&stack0x00000034,(SRenderVertex *)&vertex1,
                   (SRenderVertex *)&stack0xffffffc0);
        puVar3 = (undefined4 *)&stack0xffffffc0;
        ppSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *ppSVar4 = (SRenderVertex *)*puVar3;
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
          ppSVar4 = ppSVar4 + (uint)bVar8 * -2 + 1;
        }
      }
      if (in_stack_0000000c < (int)vertex2) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00
                  ((SRenderVertex *)&stack0x00000034,(SRenderVertex *)&vertex1,
                   (SRenderVertex *)&stack0xffffffc0);
        puVar3 = (undefined4 *)&stack0xffffffc0;
        ppSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *ppSVar4 = (SRenderVertex *)*puVar3;
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
          ppSVar4 = ppSVar4 + (uint)bVar8 * -2 + 1;
        }
      }
      if (-(int)vertex2 != in_stack_0000000c && (int)vertex2 <= -in_stack_0000000c) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00
                  ((SRenderVertex *)&stack0x00000034,(SRenderVertex *)&vertex1,
                   (SRenderVertex *)&stack0xffffffc0);
        puVar3 = (undefined4 *)&stack0xffffffc0;
        ppSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *ppSVar4 = (SRenderVertex *)*puVar3;
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
          ppSVar4 = ppSVar4 + (uint)bVar8 * -2 + 1;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    if (((((((int)vertex1 <= in_stack_0000000c) &&
           (-(int)vertex1 == in_stack_0000000c || -in_stack_0000000c < (int)vertex1)) &&
          ((int)vertex2 <= in_stack_0000000c)) &&
         ((-(int)vertex2 == in_stack_0000000c || -in_stack_0000000c < (int)vertex2 &&
          (in_stack_00000034 <= in_stack_0000003c)))) &&
        ((-in_stack_00000034 == in_stack_0000003c || -in_stack_0000003c < in_stack_00000034 &&
         ((in_stack_00000038 <= in_stack_0000003c &&
          (-in_stack_00000038 == in_stack_0000003c || -in_stack_0000003c < in_stack_00000038))))))
       && ((0 < in_stack_0000000c && (0 < in_stack_0000003c)))) {
      ppSVar4 = &vertex1;
      pSVar7 = &g_QuadVertex2;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        (pSVar7->projected_vertex).transformed_x = (int)*ppSVar4;
        ppSVar4 = ppSVar4 + (uint)bVar8 * -2 + 1;
        pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
      }
      piVar5 = &stack0x00000034;
      pSVar7 = &g_QuadVertex3;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        (pSVar7->projected_vertex).transformed_x = *piVar5;
        piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
        pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
      }
      engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(0x4e1e);
      engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(19999);
      engine_2d_c_drawLine_FUN_004011b0
                (g_QuadVertex2.projected_vertex.screen_x >> 0x10,
                 g_QuadVertex2.projected_vertex.screen_y >> 0x10,
                 g_QuadVertex3.projected_vertex.screen_x >> 0x10,
                 g_QuadVertex3.projected_vertex.screen_y >> 0x10);
      return;
    }
  }
  return;
}


// Assembly code:
// 00407d70: PUSH EBX
//   Label: engine_3d.c_clipAndDrawLine2D_FUN_00407d70
// 00407d71: PUSH ESI
// 00407d72: PUSH EDI
// 00407d73: PUSH EBP
// 00407d74: SUB ESP,0x30
// 00407d77: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x14] (READ)
// 00407d7b: AND EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x44] (READ)
// 00407d82: TEST EAX,0x80000000
// 00407d87: JNZ 0x00407f77
//   XREF to: 00407f77 (CONDITIONAL_JUMP)
// 00407d8d: XOR EBX,EBX
//   Label: LAB_00407d8d
// 00407d8f: MOV EAX,dword ptr [ESP + 0x74]
//   Label: LAB_00407d8f
//   XREF to: Stack[0x34] (READ)
// 00407d93: CMP EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x3c] (READ)
// 00407d97: JLE 0x00407dc0
//   XREF to: 00407dc0 (CONDITIONAL_JUMP)
// 00407d99: MOV EAX,ESP
// 00407d9b: PUSH EAX
// 00407d9c: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[0x34] (DATA)
// 00407da0: PUSH EAX
// 00407da1: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[0x4] (DATA)
// 00407da5: PUSH EAX
// 00407da6: LEA EDI,[ESP + 0x80]
//   XREF to: Stack[0x34] (DATA)
// 00407dad: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 00407db1: CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
//   XREF to: 00435a00 (UNCONDITIONAL_CALL)
// 00407db6: MOV ECX,0xc
// 00407dbb: ADD ESP,0xc
// 00407dbe: MOVSD.REP ES:EDI,ESI
// 00407dc0: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_00407dc0
//   XREF to: Stack[0x3c] (READ)
// 00407dc4: MOV ESI,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x34] (READ)
// 00407dc8: NEG EAX
// 00407dca: CMP EAX,ESI
// 00407dcc: JLE 0x00407df5
//   XREF to: 00407df5 (CONDITIONAL_JUMP)
// 00407dce: MOV EAX,ESP
// 00407dd0: PUSH EAX
// 00407dd1: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[0x34] (DATA)
// 00407dd5: PUSH EAX
// 00407dd6: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[0x4] (DATA)
// 00407dda: PUSH EAX
// 00407ddb: LEA EDI,[ESP + 0x80]
//   XREF to: Stack[0x34] (DATA)
// 00407de2: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 00407de6: CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
//   XREF to: 00435b00 (UNCONDITIONAL_CALL)
// 00407deb: MOV ECX,0xc
// 00407df0: ADD ESP,0xc
// 00407df3: MOVSD.REP ES:EDI,ESI
// 00407df5: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_00407df5
//   XREF to: Stack[0x38] (READ)
// 00407df9: CMP EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x3c] (READ)
// 00407dfd: JLE 0x00407e26
//   XREF to: 00407e26 (CONDITIONAL_JUMP)
// 00407dff: MOV EAX,ESP
// 00407e01: PUSH EAX
// 00407e02: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[0x34] (DATA)
// 00407e06: PUSH EAX
// 00407e07: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[0x4] (DATA)
// 00407e0b: PUSH EAX
// 00407e0c: LEA EDI,[ESP + 0x80]
//   XREF to: Stack[0x34] (DATA)
// 00407e13: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 00407e17: CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
//   XREF to: 00435c00 (UNCONDITIONAL_CALL)
// 00407e1c: MOV ECX,0xc
// 00407e21: ADD ESP,0xc
// 00407e24: MOVSD.REP ES:EDI,ESI
// 00407e26: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_00407e26
//   XREF to: Stack[0x3c] (READ)
// 00407e2a: MOV EBP,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x38] (READ)
// 00407e2e: NEG EAX
// 00407e30: CMP EAX,EBP
// 00407e32: JLE 0x00407e5b
//   XREF to: 00407e5b (CONDITIONAL_JUMP)
// 00407e34: MOV EAX,ESP
// 00407e36: PUSH EAX
// 00407e37: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[0x34] (DATA)
// 00407e3b: PUSH EAX
// 00407e3c: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[0x4] (DATA)
// 00407e40: PUSH EAX
// 00407e41: LEA EDI,[ESP + 0x80]
//   XREF to: Stack[0x34] (DATA)
// 00407e48: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 00407e4c: CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
//   XREF to: 00435d00 (UNCONDITIONAL_CALL)
// 00407e51: MOV ECX,0xc
// 00407e56: ADD ESP,0xc
// 00407e59: MOVSD.REP ES:EDI,ESI
// 00407e5b: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_00407e5b
//   XREF to: Stack[0x4] (READ)
// 00407e5f: CMP EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0xc] (READ)
// 00407e63: JLE 0x00407e89
//   XREF to: 00407e89 (CONDITIONAL_JUMP)
// 00407e65: MOV EAX,ESP
// 00407e67: PUSH EAX
// 00407e68: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[0x4] (DATA)
// 00407e6c: PUSH EAX
// 00407e6d: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[0x34] (DATA)
// 00407e71: PUSH EAX
// 00407e72: LEA EDI,[ESP + 0x50]
//   XREF to: Stack[0x4] (DATA)
// 00407e76: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 00407e7a: CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
//   XREF to: 00435a00 (UNCONDITIONAL_CALL)
// 00407e7f: MOV ECX,0xc
// 00407e84: ADD ESP,0xc
// 00407e87: MOVSD.REP ES:EDI,ESI
// 00407e89: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_00407e89
//   XREF to: Stack[0xc] (READ)
// 00407e8d: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00407e91: NEG EAX
// 00407e93: CMP EAX,ECX
// 00407e95: JLE 0x00407ebb
//   XREF to: 00407ebb (CONDITIONAL_JUMP)
// 00407e97: MOV EAX,ESP
// 00407e99: PUSH EAX
// 00407e9a: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[0x4] (DATA)
// 00407e9e: PUSH EAX
// 00407e9f: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[0x34] (DATA)
// 00407ea3: PUSH EAX
// 00407ea4: LEA EDI,[ESP + 0x50]
//   XREF to: Stack[0x4] (DATA)
// 00407ea8: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 00407eac: CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
//   XREF to: 00435b00 (UNCONDITIONAL_CALL)
// 00407eb1: MOV ECX,0xc
// 00407eb6: ADD ESP,0xc
// 00407eb9: MOVSD.REP ES:EDI,ESI
// 00407ebb: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_00407ebb
//   XREF to: Stack[0x8] (READ)
// 00407ebf: CMP EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0xc] (READ)
// 00407ec3: JLE 0x00407ee9
//   XREF to: 00407ee9 (CONDITIONAL_JUMP)
// 00407ec5: MOV EAX,ESP
// 00407ec7: PUSH EAX
// 00407ec8: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[0x4] (DATA)
// 00407ecc: PUSH EAX
// 00407ecd: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[0x34] (DATA)
// 00407ed1: PUSH EAX
// 00407ed2: LEA EDI,[ESP + 0x50]
//   XREF to: Stack[0x4] (DATA)
// 00407ed6: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 00407eda: CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
//   XREF to: 00435c00 (UNCONDITIONAL_CALL)
// 00407edf: MOV ECX,0xc
// 00407ee4: ADD ESP,0xc
// 00407ee7: MOVSD.REP ES:EDI,ESI
// 00407ee9: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_00407ee9
//   XREF to: Stack[0xc] (READ)
// 00407eed: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (DATA)
//   XREF to: Stack[0x8] (READ)
// 00407ef1: NEG EAX
// 00407ef3: CMP EAX,EDI
// 00407ef5: JLE 0x00407f1b
//   XREF to: 00407f1b (CONDITIONAL_JUMP)
// 00407ef7: MOV EAX,ESP
// 00407ef9: PUSH EAX
// 00407efa: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[0x4] (DATA)
// 00407efe: PUSH EAX
// 00407eff: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[0x34] (DATA)
// 00407f03: PUSH EAX
// 00407f04: LEA EDI,[ESP + 0x50]
//   XREF to: Stack[0x4] (DATA)
// 00407f08: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 00407f0c: CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
//   XREF to: 00435d00 (UNCONDITIONAL_CALL)
// 00407f11: MOV ECX,0xc
// 00407f16: ADD ESP,0xc
// 00407f19: MOVSD.REP ES:EDI,ESI
// 00407f1b: INC EBX
//   Label: LAB_00407f1b
// 00407f1c: CMP EBX,0x2
// 00407f1f: JL 0x00407d8f
//   XREF to: 00407d8f (CONDITIONAL_JUMP)
// 00407f25: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00407f29: MOV EBP,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0xc] (READ)
// 00407f2d: CMP EAX,EBP
// 00407f2f: JG 0x00407f6f
//   XREF to: 00407f6f (CONDITIONAL_JUMP)
// 00407f31: MOV EBX,EBP
// 00407f33: NEG EBX
// 00407f35: CMP EBX,EAX
// 00407f37: JG 0x00407f6f
//   XREF to: 00407f6f (CONDITIONAL_JUMP)
// 00407f39: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 00407f3d: CMP EAX,EBP
// 00407f3f: JG 0x00407f6f
//   XREF to: 00407f6f (CONDITIONAL_JUMP)
// 00407f41: CMP EBX,EAX
// 00407f43: JG 0x00407f6f
//   XREF to: 00407f6f (CONDITIONAL_JUMP)
// 00407f45: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x34] (READ)
// 00407f49: MOV EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x3c] (READ)
// 00407f4d: CMP EAX,EBX
// 00407f4f: JG 0x00407f6f
//   XREF to: 00407f6f (CONDITIONAL_JUMP)
// 00407f51: NEG EBX
// 00407f53: CMP EBX,EAX
// 00407f55: JG 0x00407f6f
//   XREF to: 00407f6f (CONDITIONAL_JUMP)
// 00407f57: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x38] (READ)
// 00407f5b: MOV EDI,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x3c] (READ)
// 00407f5f: CMP EAX,EDI
// 00407f61: JG 0x00407f6f
//   XREF to: 00407f6f (CONDITIONAL_JUMP)
// 00407f63: CMP EBX,EAX
// 00407f65: JG 0x00407f6f
//   XREF to: 00407f6f (CONDITIONAL_JUMP)
// 00407f67: TEST EBP,EBP
// 00407f69: JLE 0x00407f6f
//   XREF to: 00407f6f (CONDITIONAL_JUMP)
// 00407f6b: TEST EDI,EDI
// 00407f6d: JG 0x00407f80
//   XREF to: 00407f80 (CONDITIONAL_JUMP)
// 00407f6f: ADD ESP,0x30
//   Label: LAB_00407f6f
// 00407f72: POP EBP
// 00407f73: POP EDI
// 00407f74: POP ESI
// 00407f75: POP EBX
// 00407f76: RET
// 00407f77: TEST AL,0xff
//   Label: LAB_00407f77
// 00407f79: JNZ 0x00407f6f
//   XREF to: 00407f6f (CONDITIONAL_JUMP)
// 00407f7b: JMP 0x00407d8d
//   XREF to: 00407d8d (UNCONDITIONAL_JUMP)
// 00407f80: MOV ECX,0xc
//   Label: LAB_00407f80
// 00407f85: LEA ESI,[ESP + 0x44]
//   XREF to: Stack[0x4] (DATA)
// 00407f89: MOV EDI,0x7725b4
//   XREF to: 007725b4 (DATA)
// 00407f8e: MOVSD.REP ES:EDI,ESI
//   XREF to: 007725b4 (WRITE)
//   XREF to: 007725b8 (WRITE)
// 00407f90: MOV ECX,0xc
// 00407f95: LEA ESI,[ESP + 0x74]
//   XREF to: Stack[0x34] (DATA)
// 00407f99: MOV EDI,0x7725e4
//   XREF to: 007725e4 (DATA)
// 00407f9e: PUSH 0x4e1e
// 00407fa3: MOVSD.REP ES:EDI,ESI
//   XREF to: 007725e4 (WRITE)
//   XREF to: 007725e8 (WRITE)
// 00407fa5: CALL engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60
//   XREF to: 0050ce60 (UNCONDITIONAL_CALL)
// 00407faa: ADD ESP,0x4
// 00407fad: PUSH 0x4e1f
// 00407fb2: CALL engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60
//   XREF to: 0050ce60 (UNCONDITIONAL_CALL)
// 00407fb7: MOV EAX,[0x007725f8]
//   XREF to: 007725f8 (READ)
// 00407fbc: ADD ESP,0x4
// 00407fbf: SAR EAX,0x10
// 00407fc2: PUSH EAX
// 00407fc3: MOV EAX,[0x007725f4]
//   XREF to: 007725f4 (READ)
// 00407fc8: SAR EAX,0x10
// 00407fcb: PUSH EAX
// 00407fcc: MOV EAX,[0x007725c8]
//   XREF to: 007725c8 (READ)
// 00407fd1: SAR EAX,0x10
// 00407fd4: PUSH EAX
// 00407fd5: MOV EAX,[0x007725c4]
//   XREF to: 007725c4 (READ)
// 00407fda: SAR EAX,0x10
// 00407fdd: PUSH EAX
// 00407fde: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 00407fe3: ADD ESP,0x10
// 00407fe6: ADD ESP,0x30
// 00407fe9: POP EBP
// 00407fea: POP EDI
// 00407feb: POP ESI
// 00407fec: POP EBX
// 00407fed: RET
