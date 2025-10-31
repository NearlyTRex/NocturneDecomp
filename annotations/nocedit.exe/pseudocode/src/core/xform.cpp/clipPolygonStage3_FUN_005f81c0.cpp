// Name: core_xform.cpp_clipPolygonStage3_FUN_005f81c0
// Address: 005f81c0
// Address Range: [[005f81c0, 005f831d]]
// Convention: __cdecl
// Signature: void core_xform.cpp_clipPolygonStage3_FUN_005f81c0(void)
// Globals:
//   void* switchdataD_005f81a4 = 005f8222
//   void* PTR_caseD_3_005f81b0 = 005f8267
//   int g_ClipVertexCountStage3
//   int g_ClipVertexCountStage4
//   SRenderVertex[32] g_ClipVertexBufferStage3
//   undefined4 g_ClipVertexBufferStage3[0].projected_vertex.transformed_y
//   undefined4 DAT_03f9a128
//   undefined4 DAT_03f9a150
//   undefined4 DAT_03f9a154
//   undefined4 DAT_03f9a158
//   undefined4 DAT_03f9a15c
//   undefined4 g_ClipVertexBufferStage3[1].projected_vertex.screen_x
//   SRenderVertex[32] g_ClipVertexBufferStage4
//   undefined4 g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
//   undefined4 DAT_03f9a72c
//   undefined4 DAT_03f9a730
// Function calls:
//   core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005f82c9) */
/* WARNING: Removing unreachable block (ram,0x005f823e) */

void __cdecl core_xform_cpp_clipPolygonStage3_FUN_005f81c0(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  SRenderVertex *vertex_a;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  byte bVar8;
  int local_14;
  
  bVar8 = 0;
  local_14 = 0;
  if (0 < g_ClipVertexCountStage3) {
    vertex_a = g_ClipVertexBufferStage3;
    do {
      uVar4 = local_14 + 1;
      if (uVar4 == g_ClipVertexCountStage3) {
        uVar4 = uVar4 ^ g_ClipVertexCountStage3;
      }
      bVar3 = (vertex_a->projected_vertex).transformed_z <=
              (vertex_a->projected_vertex).transformed_y;
      if (g_ClipVertexBufferStage3[uVar4].projected_vertex.transformed_z <=
          g_ClipVertexBufferStage3[uVar4].projected_vertex.transformed_y) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        pSVar7 = g_ClipVertexBufferStage4 + g_ClipVertexCountStage4;
        iVar5 = 0x30;
        pSVar6 = vertex_a;
        while (7 < iVar5) {
          lVar1._0_4_ = (pSVar6->projected_vertex).transformed_x;
          lVar1._4_4_ = (pSVar6->projected_vertex).transformed_y;
          pSVar6 = (SRenderVertex *)&(pSVar6->projected_vertex).transformed_z;
          (pSVar7->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
          (pSVar7->projected_vertex).transformed_y =
               (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
          pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
          iVar5 = iVar5 + -8;
        }
        if (iVar5 != 0 && SCARRY4(iVar5 + -8,8) == iVar5 < 0) {
          (pSVar7->projected_vertex).transformed_x = (pSVar6->projected_vertex).transformed_x;
          if (4 < iVar5) {
            *(undefined4 *)((int)pSVar7 + (uint)bVar8 * -8 + 4) =
                 *(undefined4 *)((int)pSVar6 + (uint)bVar8 * -8 + 4);
          }
        }
        g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateTopPlane_FUN_005f7d40
                  (g_ClipVertexBufferStage3 + uVar4,vertex_a,
                   g_ClipVertexBufferStage4 + g_ClipVertexCountStage4);
        g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
        break;
      case 2:
        pSVar7 = g_ClipVertexBufferStage4 + g_ClipVertexCountStage4;
        iVar5 = 0x30;
        pSVar6 = vertex_a;
        while (7 < iVar5) {
          lVar2._0_4_ = (pSVar6->projected_vertex).transformed_x;
          lVar2._4_4_ = (pSVar6->projected_vertex).transformed_y;
          pSVar6 = (SRenderVertex *)&(pSVar6->projected_vertex).transformed_z;
          (pSVar7->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
          (pSVar7->projected_vertex).transformed_y =
               (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
          pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
          iVar5 = iVar5 + -8;
        }
        if (iVar5 != 0 && SCARRY4(iVar5 + -8,8) == iVar5 < 0) {
          (pSVar7->projected_vertex).transformed_x = (pSVar6->projected_vertex).transformed_x;
          if (4 < iVar5) {
            *(undefined4 *)((int)pSVar7 + (uint)bVar8 * -8 + 4) =
                 *(undefined4 *)((int)pSVar6 + (uint)bVar8 * -8 + 4);
          }
        }
        g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
        core_xform_cpp_clipInterpolateTopPlane_FUN_005f7d40
                  (vertex_a,g_ClipVertexBufferStage3 + uVar4,
                   g_ClipVertexBufferStage4 + g_ClipVertexCountStage4);
        g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
      }
      local_14 = local_14 + 1;
      vertex_a = vertex_a + 1;
    } while (local_14 < g_ClipVertexCountStage3);
  }
  return;
}


// Assembly code:
// 005f81c0: PUSH EBX
//   Label: core_xform.cpp_clipPolygonStage3_FUN_005f81c0
// 005f81c1: PUSH ESI
// 005f81c2: PUSH EDI
// 005f81c3: PUSH EBP
// 005f81c4: SUB ESP,0x4
// 005f81c7: XOR EDX,EDX
// 005f81c9: MOV ECX,dword ptr [0x03f99518]
//   XREF to: 03f99518 (READ)
// 005f81cf: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 005f81d2: TEST ECX,ECX
// 005f81d4: JLE 0x005f827f
//   XREF to: 005f827f (CONDITIONAL_JUMP)
// 005f81da: MOV EBX,0x3f9a120
//   XREF to: 03f9a120 (DATA)
// 005f81df: MOV EAX,dword ptr [ESP]
//   Label: LAB_005f81df
//   XREF to: Stack[-0x14] (DATA)
// 005f81e2: MOV EBP,dword ptr [0x03f99518]
//   XREF to: 03f99518 (READ)
// 005f81e8: INC EAX
// 005f81e9: CMP EAX,EBP
// 005f81eb: JNZ 0x005f81ef
//   XREF to: 005f81ef (CONDITIONAL_JUMP)
// 005f81ed: XOR EAX,EBP
// 005f81ef: IMUL EAX,EAX,0x30
//   Label: LAB_005f81ef
// 005f81f2: MOV EBP,0x3f9a120
//   XREF to: 03f9a120 (DATA)
// 005f81f7: MOV EDX,EBX
//   XREF to: 03f9a150 (PARAM)
// 005f81f9: MOV EDI,dword ptr [EBX + 0x4]
//   XREF to: 03f9a124 (READ)
//   XREF to: 03f9a154 (READ)
// 005f81fc: MOV ECX,dword ptr [EBX + 0x8]
//   XREF to: 03f9a128 (READ)
//   XREF to: 03f9a158 (READ)
// 005f81ff: ADD EBP,EAX
// 005f8201: XOR EAX,EAX
// 005f8203: CMP EDI,ECX
// 005f8205: JL 0x005f820c
//   XREF to: 005f820c (CONDITIONAL_JUMP)
// 005f8207: MOV EAX,0x1
// 005f820c: MOV ESI,dword ptr [EBP + 0x8]
//   Label: LAB_005f820c
//   XREF to: 03f9a128 (DATA)
// 005f820f: CMP ESI,dword ptr [EBP + 0x4]
//   XREF to: 03f9a124 (DATA)
// 005f8212: JG 0x005f8216
//   XREF to: 005f8216 (CONDITIONAL_JUMP)
// 005f8214: OR AL,0x2
// 005f8216: CMP EAX,0x3
//   Label: LAB_005f8216
// 005f8219: JA 0x005f8267
//   XREF to: 005f8267 (CONDITIONAL_JUMP)
// 005f821b: JMP dword ptr [EAX*0x4 + 0x5f81a4]
//   Label: switchD
//   XREF to: 005f8222 (COMPUTED_JUMP)
//   XREF to: 005f8287 (COMPUTED_JUMP)
//   XREF to: 005f82ad (COMPUTED_JUMP)
//   XREF to: 005f8267 (COMPUTED_JUMP)
//   XREF to: 005f81b0 (READ)
//   XREF to: 005f81a4 (READ)
// 005f8222: IMUL EDI,dword ptr [0x03f9951c],0x30
//   Label: caseD_0
//   XREF to: 03f9951c (READ)
// 005f8229: MOV ECX,0x30
// 005f822e: MOV ESI,EDX
// 005f8230: ADD EDI,0x3f9a720
//   XREF to: 03f9a720 (DATA)
// 005f8236: TEST EDI,0x7
// 005f823c: JZ 0x005f8244
//   XREF to: 005f8244 (CONDITIONAL_JUMP)
// 005f823e: MOVSD ES:EDI,ESI
//   XREF to: 03f9a150 (READ)
//   XREF to: 03f9a720 (DATA)
// 005f823f: SUB ECX,0x4
// 005f8242: JLE 0x005f8261
//   XREF to: 005f8261 (CONDITIONAL_JUMP)
// 005f8244: SUB ECX,0x8
//   Label: LAB_005f8244
// 005f8247: JL 0x005f8255
//   XREF to: 005f8255 (CONDITIONAL_JUMP)
// 005f8249: FILD qword ptr [ESI]
//   XREF to: 03f9a154 (READ)
//   XREF to: 03f9a15c (READ)
//   XREF to: 03f9a150 (READ)
// 005f824b: ADD ESI,0x8
// 005f824e: FISTP qword ptr [EDI]
//   XREF to: 03f9a724 (DATA)
//   XREF to: 03f9a72c (DATA)
//   XREF to: 03f9a720 (DATA)
// 005f8250: ADD EDI,0x8
// 005f8253: JMP 0x005f8244
//   XREF to: 005f8244 (UNCONDITIONAL_JUMP)
// 005f8255: ADD ECX,0x8
//   Label: LAB_005f8255
// 005f8258: JLE 0x005f8261
//   XREF to: 005f8261 (CONDITIONAL_JUMP)
// 005f825a: MOVSD ES:EDI,ESI
//   XREF to: 03f9a15c (READ)
//   XREF to: 03f9a72c (DATA)
// 005f825b: SUB ECX,0x4
// 005f825e: JLE 0x005f8261
//   XREF to: 005f8261 (CONDITIONAL_JUMP)
// 005f8260: MOVSD ES:EDI,ESI
//   XREF to: 03f9a160 (READ)
//   XREF to: 03f9a730 (DATA)
// 005f8261: INC dword ptr [0x03f9951c]
//   Label: LAB_005f8261
//   XREF to: 03f9951c (READ_WRITE)
// 005f8267: MOV ESI,dword ptr [ESP]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (DATA)
// 005f826a: MOV EDI,dword ptr [0x03f99518]
//   XREF to: 03f99518 (READ)
// 005f8270: INC ESI
// 005f8271: ADD EBX,0x30
//   XREF to: 03f9a150 (PARAM)
// 005f8274: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x14] (DATA)
// 005f8277: CMP ESI,EDI
// 005f8279: JL 0x005f81df
//   XREF to: 005f81df (CONDITIONAL_JUMP)
// 005f827f: ADD ESP,0x4
//   Label: LAB_005f827f
// 005f8282: POP EBP
// 005f8283: POP EDI
// 005f8284: POP ESI
// 005f8285: POP EBX
// 005f8286: RET
// 005f8287: IMUL EAX,dword ptr [0x03f9951c],0x30
//   Label: caseD_1
//   XREF to: 03f9951c (READ)
// 005f828e: ADD EAX,0x3f9a720
//   XREF to: 03f9a720 (DATA)
// 005f8293: PUSH EAX
// 005f8294: PUSH EDX
//   XREF to: 03f9a150 (DATA)
// 005f8295: PUSH EBP
// 005f8296: CALL core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40
//   XREF to: 005f7d40 (UNCONDITIONAL_CALL)
// 005f829b: MOV ESI,dword ptr [0x03f9951c]
//   XREF to: 03f9951c (READ)
// 005f82a1: INC ESI
// 005f82a2: ADD ESP,0xc
// 005f82a5: MOV dword ptr [0x03f9951c],ESI
//   XREF to: 03f9951c (WRITE)
// 005f82ab: JMP 0x005f8267
//   XREF to: 005f8267 (UNCONDITIONAL_JUMP)
// 005f82ad: IMUL EDI,dword ptr [0x03f9951c],0x30
//   Label: caseD_2
//   XREF to: 03f9951c (READ)
// 005f82b4: MOV ECX,0x30
// 005f82b9: MOV ESI,EDX
// 005f82bb: ADD EDI,0x3f9a720
//   XREF to: 03f9a720 (DATA)
// 005f82c1: TEST EDI,0x7
// 005f82c7: JZ 0x005f82cf
//   XREF to: 005f82cf (CONDITIONAL_JUMP)
// 005f82c9: MOVSD ES:EDI,ESI
//   XREF to: 03f9a150 (READ)
//   XREF to: 03f9a720 (DATA)
// 005f82ca: SUB ECX,0x4
// 005f82cd: JLE 0x005f82ec
//   XREF to: 005f82ec (CONDITIONAL_JUMP)
// 005f82cf: SUB ECX,0x8
//   Label: LAB_005f82cf
// 005f82d2: JL 0x005f82e0
//   XREF to: 005f82e0 (CONDITIONAL_JUMP)
// 005f82d4: FILD qword ptr [ESI]
//   XREF to: 03f9a154 (READ)
//   XREF to: 03f9a15c (READ)
//   XREF to: 03f9a150 (READ)
// 005f82d6: ADD ESI,0x8
// 005f82d9: FISTP qword ptr [EDI]
//   XREF to: 03f9a724 (DATA)
//   XREF to: 03f9a72c (DATA)
//   XREF to: 03f9a720 (DATA)
// 005f82db: ADD EDI,0x8
// 005f82de: JMP 0x005f82cf
//   XREF to: 005f82cf (UNCONDITIONAL_JUMP)
// 005f82e0: ADD ECX,0x8
//   Label: LAB_005f82e0
// 005f82e3: JLE 0x005f82ec
//   XREF to: 005f82ec (CONDITIONAL_JUMP)
// 005f82e5: MOVSD ES:EDI,ESI
//   XREF to: 03f9a15c (READ)
//   XREF to: 03f9a72c (DATA)
// 005f82e6: SUB ECX,0x4
// 005f82e9: JLE 0x005f82ec
//   XREF to: 005f82ec (CONDITIONAL_JUMP)
// 005f82eb: MOVSD ES:EDI,ESI
//   XREF to: 03f9a160 (READ)
//   XREF to: 03f9a730 (DATA)
// 005f82ec: MOV ECX,dword ptr [0x03f9951c]
//   Label: LAB_005f82ec
//   XREF to: 03f9951c (READ)
// 005f82f2: INC ECX
// 005f82f3: MOV dword ptr [0x03f9951c],ECX
//   XREF to: 03f9951c (WRITE)
// 005f82f9: IMUL EAX,ECX,0x30
// 005f82fc: ADD EAX,0x3f9a720
//   XREF to: 03f9a720 (DATA)
// 005f8301: PUSH EAX
// 005f8302: PUSH EBP
// 005f8303: PUSH EDX
//   XREF to: 03f9a150 (DATA)
// 005f8304: CALL core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40
//   XREF to: 005f7d40 (UNCONDITIONAL_CALL)
// 005f8309: MOV EDI,dword ptr [0x03f9951c]
//   XREF to: 03f9951c (READ)
// 005f830f: INC EDI
// 005f8310: ADD ESP,0xc
// 005f8313: MOV dword ptr [0x03f9951c],EDI
//   XREF to: 03f9951c (WRITE)
// 005f8319: JMP 0x005f8267
//   XREF to: 005f8267 (UNCONDITIONAL_JUMP)
