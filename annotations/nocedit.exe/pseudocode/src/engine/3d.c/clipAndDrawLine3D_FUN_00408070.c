// Name: engine_3d.c_clipAndDrawLine3D_FUN_00408070
// Address: 00408070
// Address Range: [[00408070, 0040831a]]
// Convention: __cdecl
// Signature: void engine_3d.c_clipAndDrawLine3D_FUN_00408070(SRenderVertex * vertex1, SRenderVertex * vertex2)
// Cross-references:
//   engine_3d.c_drawLine3DFromIndices_FUN_00407ff0 (00407ff0) at 00408055 [UNCONDITIONAL_CALL]
//   engine_3d.c_drawLineStrip3D_FUN_00404600 (00404600) at 00404686 [UNCONDITIONAL_CALL]
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer
//   SRenderVertex g_QuadVertex2
//   undefined4 g_QuadVertex2_Y
//   undefined4 g_QuadVertex2_U
//   undefined4 g_ProjectedScreenX1
//   undefined4 g_ProjectedScreenY1
//   SRenderVertex g_QuadVertex3
//   undefined4 g_QuadVertex3_Y
//   undefined4 g_QuadVertex3_U
//   undefined4 g_ProjectedScreenX2
//   undefined4 g_ProjectedScreenY2
// Function calls:
//   engine_2d.c_drawLine3D_FUN_00401320
//   engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
//   engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
//   engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
//   engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
//   engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60
//   engine_prim.c_prepareDepthBuffer_FUN_00551fb0

#include "nocturne.h"

void __cdecl
engine_3d_c_clipAndDrawLine3D_FUN_00408070(SRenderVertex *vertex1,SRenderVertex *vertex2)

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
      engine_prim_c_prepareDepthBuffer_FUN_00551fb0(&g_QuadVertex2,2);
      engine_2d_c_drawLine3D_FUN_00401320
                (g_QuadVertex2.projected_vertex.screen_x >> 0x10,
                 g_QuadVertex2.projected_vertex.screen_y >> 0x10,
                 g_QuadVertex2.projected_vertex.transformed_z,
                 g_QuadVertex3.projected_vertex.screen_x >> 0x10,
                 g_QuadVertex3.projected_vertex.screen_y >> 0x10,
                 g_QuadVertex3.projected_vertex.transformed_z);
      return;
    }
  }
  return;
}


// Assembly code:
// 00408070: PUSH EBX
//   Label: engine_3d.c_clipAndDrawLine3D_FUN_00408070
// 00408071: PUSH ESI
// 00408072: PUSH EDI
// 00408073: PUSH EBP
// 00408074: SUB ESP,0x30
// 00408077: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x14] (READ)
// 0040807b: AND EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x44] (READ)
// 00408082: TEST EAX,0x80000000
// 00408087: JNZ 0x00408281
//   XREF to: 00408281 (CONDITIONAL_JUMP)
// 0040808d: XOR EBX,EBX
//   Label: LAB_0040808d
// 0040808f: MOV EAX,dword ptr [ESP + 0x74]
//   Label: LAB_0040808f
//   XREF to: Stack[0x34] (READ)
// 00408093: CMP EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x3c] (READ)
// 00408097: JLE 0x004080c0
//   XREF to: 004080c0 (CONDITIONAL_JUMP)
// 00408099: MOV EAX,ESP
// 0040809b: PUSH EAX
// 0040809c: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[0x34] (DATA)
// 004080a0: PUSH EAX
// 004080a1: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[0x4] (DATA)
// 004080a5: PUSH EAX
// 004080a6: LEA EDI,[ESP + 0x80]
//   XREF to: Stack[0x34] (DATA)
// 004080ad: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 004080b1: CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
//   XREF to: 00435a00 (UNCONDITIONAL_CALL)
// 004080b6: MOV ECX,0xc
// 004080bb: ADD ESP,0xc
// 004080be: MOVSD.REP ES:EDI,ESI
// 004080c0: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_004080c0
//   XREF to: Stack[0x3c] (READ)
// 004080c4: MOV ESI,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x34] (READ)
// 004080c8: NEG EAX
// 004080ca: CMP EAX,ESI
// 004080cc: JLE 0x004080f5
//   XREF to: 004080f5 (CONDITIONAL_JUMP)
// 004080ce: MOV EAX,ESP
// 004080d0: PUSH EAX
// 004080d1: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[0x34] (DATA)
// 004080d5: PUSH EAX
// 004080d6: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[0x4] (DATA)
// 004080da: PUSH EAX
// 004080db: LEA EDI,[ESP + 0x80]
//   XREF to: Stack[0x34] (DATA)
// 004080e2: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 004080e6: CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
//   XREF to: 00435b00 (UNCONDITIONAL_CALL)
// 004080eb: MOV ECX,0xc
// 004080f0: ADD ESP,0xc
// 004080f3: MOVSD.REP ES:EDI,ESI
// 004080f5: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_004080f5
//   XREF to: Stack[0x38] (READ)
// 004080f9: CMP EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x3c] (READ)
// 004080fd: JLE 0x00408126
//   XREF to: 00408126 (CONDITIONAL_JUMP)
// 004080ff: MOV EAX,ESP
// 00408101: PUSH EAX
// 00408102: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[0x34] (DATA)
// 00408106: PUSH EAX
// 00408107: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[0x4] (DATA)
// 0040810b: PUSH EAX
// 0040810c: LEA EDI,[ESP + 0x80]
//   XREF to: Stack[0x34] (DATA)
// 00408113: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 00408117: CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
//   XREF to: 00435c00 (UNCONDITIONAL_CALL)
// 0040811c: MOV ECX,0xc
// 00408121: ADD ESP,0xc
// 00408124: MOVSD.REP ES:EDI,ESI
// 00408126: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_00408126
//   XREF to: Stack[0x3c] (READ)
// 0040812a: MOV EBP,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x38] (READ)
// 0040812e: NEG EAX
// 00408130: CMP EAX,EBP
// 00408132: JLE 0x0040815b
//   XREF to: 0040815b (CONDITIONAL_JUMP)
// 00408134: MOV EAX,ESP
// 00408136: PUSH EAX
// 00408137: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[0x34] (DATA)
// 0040813b: PUSH EAX
// 0040813c: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[0x4] (DATA)
// 00408140: PUSH EAX
// 00408141: LEA EDI,[ESP + 0x80]
//   XREF to: Stack[0x34] (DATA)
// 00408148: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 0040814c: CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
//   XREF to: 00435d00 (UNCONDITIONAL_CALL)
// 00408151: MOV ECX,0xc
// 00408156: ADD ESP,0xc
// 00408159: MOVSD.REP ES:EDI,ESI
// 0040815b: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_0040815b
//   XREF to: Stack[0x4] (READ)
// 0040815f: CMP EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0xc] (READ)
// 00408163: JLE 0x00408189
//   XREF to: 00408189 (CONDITIONAL_JUMP)
// 00408165: MOV EAX,ESP
// 00408167: PUSH EAX
// 00408168: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[0x4] (DATA)
// 0040816c: PUSH EAX
// 0040816d: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[0x34] (DATA)
// 00408171: PUSH EAX
// 00408172: LEA EDI,[ESP + 0x50]
//   XREF to: Stack[0x4] (DATA)
// 00408176: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 0040817a: CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
//   XREF to: 00435a00 (UNCONDITIONAL_CALL)
// 0040817f: MOV ECX,0xc
// 00408184: ADD ESP,0xc
// 00408187: MOVSD.REP ES:EDI,ESI
// 00408189: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_00408189
//   XREF to: Stack[0xc] (READ)
// 0040818d: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00408191: NEG EAX
// 00408193: CMP EAX,ECX
// 00408195: JLE 0x004081bb
//   XREF to: 004081bb (CONDITIONAL_JUMP)
// 00408197: MOV EAX,ESP
// 00408199: PUSH EAX
// 0040819a: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[0x4] (DATA)
// 0040819e: PUSH EAX
// 0040819f: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[0x34] (DATA)
// 004081a3: PUSH EAX
// 004081a4: LEA EDI,[ESP + 0x50]
//   XREF to: Stack[0x4] (DATA)
// 004081a8: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 004081ac: CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
//   XREF to: 00435b00 (UNCONDITIONAL_CALL)
// 004081b1: MOV ECX,0xc
// 004081b6: ADD ESP,0xc
// 004081b9: MOVSD.REP ES:EDI,ESI
// 004081bb: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_004081bb
//   XREF to: Stack[0x8] (READ)
// 004081bf: CMP EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0xc] (READ)
// 004081c3: JLE 0x004081e9
//   XREF to: 004081e9 (CONDITIONAL_JUMP)
// 004081c5: MOV EAX,ESP
// 004081c7: PUSH EAX
// 004081c8: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[0x4] (DATA)
// 004081cc: PUSH EAX
// 004081cd: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[0x34] (DATA)
// 004081d1: PUSH EAX
// 004081d2: LEA EDI,[ESP + 0x50]
//   XREF to: Stack[0x4] (DATA)
// 004081d6: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 004081da: CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
//   XREF to: 00435c00 (UNCONDITIONAL_CALL)
// 004081df: MOV ECX,0xc
// 004081e4: ADD ESP,0xc
// 004081e7: MOVSD.REP ES:EDI,ESI
// 004081e9: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_004081e9
//   XREF to: Stack[0xc] (READ)
// 004081ed: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (DATA)
// 004081f1: NEG EAX
// 004081f3: CMP EAX,EDI
// 004081f5: JLE 0x0040821b
//   XREF to: 0040821b (CONDITIONAL_JUMP)
// 004081f7: MOV EAX,ESP
// 004081f9: PUSH EAX
// 004081fa: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[0x4] (DATA)
// 004081fe: PUSH EAX
// 004081ff: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[0x34] (DATA)
// 00408203: PUSH EAX
// 00408204: LEA EDI,[ESP + 0x50]
//   XREF to: Stack[0x4] (DATA)
// 00408208: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 0040820c: CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
//   XREF to: 00435d00 (UNCONDITIONAL_CALL)
// 00408211: MOV ECX,0xc
// 00408216: ADD ESP,0xc
// 00408219: MOVSD.REP ES:EDI,ESI
// 0040821b: INC EBX
//   Label: LAB_0040821b
// 0040821c: CMP EBX,0x2
// 0040821f: JL 0x0040808f
//   XREF to: 0040808f (CONDITIONAL_JUMP)
// 00408225: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00408229: MOV EBP,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0xc] (READ)
// 0040822d: CMP EAX,EBP
// 0040822f: JG 0x0040826f
//   XREF to: 0040826f (CONDITIONAL_JUMP)
// 00408231: MOV EBX,EBP
// 00408233: NEG EBX
// 00408235: CMP EBX,EAX
// 00408237: JG 0x0040826f
//   XREF to: 0040826f (CONDITIONAL_JUMP)
// 00408239: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 0040823d: CMP EAX,EBP
// 0040823f: JG 0x0040826f
//   XREF to: 0040826f (CONDITIONAL_JUMP)
// 00408241: CMP EBX,EAX
// 00408243: JG 0x0040826f
//   XREF to: 0040826f (CONDITIONAL_JUMP)
// 00408245: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x34] (READ)
// 00408249: MOV EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x3c] (READ)
// 0040824d: CMP EAX,EBX
// 0040824f: JG 0x0040826f
//   XREF to: 0040826f (CONDITIONAL_JUMP)
// 00408251: NEG EBX
// 00408253: CMP EBX,EAX
// 00408255: JG 0x0040826f
//   XREF to: 0040826f (CONDITIONAL_JUMP)
// 00408257: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x38] (READ)
// 0040825b: MOV EDI,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x3c] (READ)
// 0040825f: CMP EAX,EDI
// 00408261: JG 0x0040826f
//   XREF to: 0040826f (CONDITIONAL_JUMP)
// 00408263: CMP EBX,EAX
// 00408265: JG 0x0040826f
//   XREF to: 0040826f (CONDITIONAL_JUMP)
// 00408267: TEST EBP,EBP
// 00408269: JLE 0x0040826f
//   XREF to: 0040826f (CONDITIONAL_JUMP)
// 0040826b: TEST EDI,EDI
// 0040826d: JG 0x0040828a
//   XREF to: 0040828a (CONDITIONAL_JUMP)
// 0040826f: ADD ESP,0x30
//   Label: LAB_0040826f
// 00408272: POP EBP
// 00408273: POP EDI
// 00408274: POP ESI
// 00408275: POP EBX
// 00408276: LEA EAX,[EAX]
// 0040827c: LEA EDX,[EDX]
// 00408280: RET
// 00408281: TEST AL,0xff
//   Label: LAB_00408281
// 00408283: JNZ 0x0040826f
//   XREF to: 0040826f (CONDITIONAL_JUMP)
// 00408285: JMP 0x0040808d
//   XREF to: 0040808d (UNCONDITIONAL_JUMP)
// 0040828a: MOV ECX,0xc
//   Label: LAB_0040828a
// 0040828f: LEA ESI,[ESP + 0x44]
//   XREF to: Stack[0x4] (DATA)
// 00408293: MOV EDI,0x7725b4
//   XREF to: 007725b4 (DATA)
// 00408298: MOVSD.REP ES:EDI,ESI
//   XREF to: 007725b4 (WRITE)
//   XREF to: 007725b8 (WRITE)
// 0040829a: MOV ECX,0xc
// 0040829f: LEA ESI,[ESP + 0x74]
//   XREF to: Stack[0x34] (DATA)
// 004082a3: MOV EDI,0x7725e4
//   XREF to: 007725e4 (DATA)
// 004082a8: PUSH 0x4e1e
// 004082ad: MOVSD.REP ES:EDI,ESI
//   XREF to: 007725e4 (WRITE)
//   XREF to: 007725e8 (WRITE)
// 004082af: CALL engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60
//   XREF to: 0050ce60 (UNCONDITIONAL_CALL)
// 004082b4: ADD ESP,0x4
// 004082b7: PUSH 0x4e1f
// 004082bc: CALL engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60
//   XREF to: 0050ce60 (UNCONDITIONAL_CALL)
// 004082c1: ADD ESP,0x4
// 004082c4: MOV EAX,0x688014
//   XREF to: 00688014 (DATA)
// 004082c9: PUSH 0x2
// 004082cb: ADD EAX,0xea5a0
// 004082d0: PUSH EAX
//   XREF to: 007725b4 (DATA)
// 004082d1: CALL engine_prim.c_prepareDepthBuffer_FUN_00551fb0
//   XREF to: 00551fb0 (UNCONDITIONAL_CALL)
// 004082d6: ADD ESP,0x8
// 004082d9: MOV ECX,dword ptr [0x007725ec]
//   XREF to: 007725ec (READ)
// 004082df: MOV EAX,[0x007725f8]
//   XREF to: 007725f8 (READ)
// 004082e4: PUSH ECX
// 004082e5: SAR EAX,0x10
// 004082e8: PUSH EAX
// 004082e9: MOV EAX,[0x007725f4]
//   XREF to: 007725f4 (READ)
// 004082ee: SAR EAX,0x10
// 004082f1: PUSH EAX
// 004082f2: MOV EBX,dword ptr [0x007725bc]
//   XREF to: 007725bc (READ)
// 004082f8: MOV EAX,[0x007725c8]
//   XREF to: 007725c8 (READ)
// 004082fd: PUSH EBX
// 004082fe: SAR EAX,0x10
// 00408301: PUSH EAX
// 00408302: MOV EAX,[0x007725c4]
//   XREF to: 007725c4 (READ)
// 00408307: SAR EAX,0x10
// 0040830a: PUSH EAX
// 0040830b: CALL engine_2d.c_drawLine3D_FUN_00401320
//   XREF to: 00401320 (UNCONDITIONAL_CALL)
// 00408310: ADD ESP,0x18
// 00408313: ADD ESP,0x30
// 00408316: POP EBP
// 00408317: POP EDI
// 00408318: POP ESI
// 00408319: POP EBX
// 0040831a: RET
