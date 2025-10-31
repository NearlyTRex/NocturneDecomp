// Name: core_xform.cpp_clipPolygonStage2_FUN_005f8040
// Address: 005f8040
// Address Range: [[005f8040, 005f81a2]]
// Convention: __cdecl
// Signature: void core_xform.cpp_clipPolygonStage2_FUN_005f8040(void)
// Globals:
//   void* PTR_caseD_1_005f8034 = 005f810c
//   void* PTR_caseD_3_005f803c = 005f80ec
//   int g_ClipVertexCountStage2
//   int g_ClipVertexCountStage3
//   SRenderVertex[32] g_ClipVertexBufferStage2
//   undefined4 g_ClipVertexBufferStage2[0].projected_vertex.transformed_y
//   undefined4 DAT_03f99528
//   undefined4 DAT_03f9952c
//   undefined4 DAT_03f99530
//   undefined4 DAT_03f99550
//   undefined4 DAT_03f99558
//   SRenderVertex[32] g_ClipVertexBufferStage3
//   undefined4 g_ClipVertexBufferStage3[0].projected_vertex.transformed_y
//   undefined4 DAT_03f9a12c
//   undefined4 DAT_03f9a130
// Function calls:
//   core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005f814e) */
/* WARNING: Removing unreachable block (ram,0x005f80c3) */

void __cdecl core_xform_cpp_clipPolygonStage2_FUN_005f8040(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  SRenderVertex *vertex_a;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  byte bVar9;
  int local_14;
  
  bVar9 = 0;
  local_14 = 0;
  if (0 < g_ClipVertexCountStage2) {
    vertex_a = g_ClipVertexBufferStage2;
    do {
      uVar4 = local_14 + 1;
      if (uVar4 == g_ClipVertexCountStage2) {
        uVar4 = uVar4 ^ g_ClipVertexCountStage2;
      }
      pSVar6 = g_ClipVertexBufferStage2 + uVar4;
      bVar3 = (vertex_a->projected_vertex).transformed_x <=
              -(vertex_a->projected_vertex).transformed_z;
      if ((pSVar6->projected_vertex).transformed_x <=
          -g_ClipVertexBufferStage2[uVar4].projected_vertex.transformed_z) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        pSVar7 = g_ClipVertexBufferStage3 + g_ClipVertexCountStage3;
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
            *(undefined4 *)((int)pSVar7 + (uint)bVar9 * -8 + 4) =
                 *(undefined4 *)((int)pSVar6 + (uint)bVar9 * -8 + 4);
          }
        }
        g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80
                  (pSVar6,vertex_a,g_ClipVertexBufferStage3 + g_ClipVertexCountStage3);
        g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
        break;
      case 2:
        pSVar8 = g_ClipVertexBufferStage3 + g_ClipVertexCountStage3;
        iVar5 = 0x30;
        pSVar7 = vertex_a;
        while (7 < iVar5) {
          lVar2._0_4_ = (pSVar7->projected_vertex).transformed_x;
          lVar2._4_4_ = (pSVar7->projected_vertex).transformed_y;
          pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
          (pSVar8->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
          (pSVar8->projected_vertex).transformed_y =
               (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
          pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
          iVar5 = iVar5 + -8;
        }
        if (iVar5 != 0 && SCARRY4(iVar5 + -8,8) == iVar5 < 0) {
          (pSVar8->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
          if (4 < iVar5) {
            *(undefined4 *)((int)pSVar8 + (uint)bVar9 * -8 + 4) =
                 *(undefined4 *)((int)pSVar7 + (uint)bVar9 * -8 + 4);
          }
        }
        g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
        core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80
                  (vertex_a,pSVar6,g_ClipVertexBufferStage3 + g_ClipVertexCountStage3);
        g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
      }
      local_14 = local_14 + 1;
      vertex_a = vertex_a + 1;
    } while (local_14 < g_ClipVertexCountStage2);
  }
  return;
}


// Assembly code:
// 005f8040: PUSH EBX
//   Label: core_xform.cpp_clipPolygonStage2_FUN_005f8040
// 005f8041: PUSH ESI
// 005f8042: PUSH EDI
// 005f8043: PUSH EBP
// 005f8044: SUB ESP,0x4
// 005f8047: XOR EDX,EDX
// 005f8049: MOV ECX,dword ptr [0x03f99514]
//   XREF to: 03f99514 (READ)
// 005f804f: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 005f8052: TEST ECX,ECX
// 005f8054: JLE 0x005f8104
//   XREF to: 005f8104 (CONDITIONAL_JUMP)
// 005f805a: MOV EBX,0x3f99520
//   XREF to: 03f99520 (PARAM)
// 005f805f: MOV EAX,dword ptr [ESP]
//   Label: LAB_005f805f
//   XREF to: Stack[-0x14] (DATA)
// 005f8062: MOV EBP,dword ptr [0x03f99514]
//   XREF to: 03f99514 (READ)
// 005f8068: INC EAX
// 005f8069: CMP EAX,EBP
// 005f806b: JNZ 0x005f806f
//   XREF to: 005f806f (CONDITIONAL_JUMP)
// 005f806d: XOR EAX,EBP
// 005f806f: IMUL EAX,EAX,0x30
//   Label: LAB_005f806f
// 005f8072: MOV EBP,0x3f99520
//   XREF to: 03f99520 (DATA)
// 005f8077: MOV EDX,EBX
//   XREF to: 03f99520 (PARAM)
// 005f8079: MOV EDI,dword ptr [EBX + 0x8]
//   XREF to: 03f99528 (READ)
//   XREF to: 03f99558 (READ)
// 005f807c: MOV ECX,dword ptr [EBX]
//   XREF to: 03f99520 (READ)
//   XREF to: 03f99550 (READ)
// 005f807e: NEG EDI
// 005f8080: ADD EBP,EAX
// 005f8082: XOR EAX,EAX
// 005f8084: CMP EDI,ECX
// 005f8086: JL 0x005f808d
//   XREF to: 005f808d (CONDITIONAL_JUMP)
// 005f8088: MOV EAX,0x1
// 005f808d: MOV EDI,dword ptr [EBP + 0x8]
//   Label: LAB_005f808d
//   XREF to: 03f99528 (DATA)
// 005f8090: MOV ESI,dword ptr [EBP]
//   XREF to: 03f99520 (DATA)
// 005f8093: NEG EDI
// 005f8095: CMP EDI,ESI
// 005f8097: JL 0x005f809b
//   XREF to: 005f809b (CONDITIONAL_JUMP)
// 005f8099: OR AL,0x2
// 005f809b: CMP EAX,0x3
//   Label: LAB_005f809b
// 005f809e: JA 0x005f80ec
//   XREF to: 005f80ec (CONDITIONAL_JUMP)
// 005f80a0: JMP dword ptr [EAX*0x4 + 0x5f8030]
//   Label: switchD
//   XREF to: 005f80a7 (COMPUTED_JUMP)
//   XREF to: 005f810c (COMPUTED_JUMP)
//   XREF to: 005f8132 (COMPUTED_JUMP)
//   XREF to: 005f80ec (COMPUTED_JUMP)
//   XREF to: 005f803c (READ)
//   XREF to: 005f8034 (READ)
// 005f80a7: IMUL EDI,dword ptr [0x03f99518],0x30
//   Label: caseD_0
//   XREF to: 03f99518 (READ)
// 005f80ae: MOV ECX,0x30
// 005f80b3: MOV ESI,EDX
// 005f80b5: ADD EDI,0x3f9a120
//   XREF to: 03f9a120 (DATA)
// 005f80bb: TEST EDI,0x7
// 005f80c1: JZ 0x005f80c9
//   XREF to: 005f80c9 (CONDITIONAL_JUMP)
// 005f80c3: MOVSD ES:EDI,ESI
//   XREF to: 03f99520 (READ)
//   XREF to: 03f9a120 (DATA)
// 005f80c4: SUB ECX,0x4
// 005f80c7: JLE 0x005f80e6
//   XREF to: 005f80e6 (CONDITIONAL_JUMP)
// 005f80c9: SUB ECX,0x8
//   Label: LAB_005f80c9
// 005f80cc: JL 0x005f80da
//   XREF to: 005f80da (CONDITIONAL_JUMP)
// 005f80ce: FILD qword ptr [ESI]
//   XREF to: 03f99524 (READ)
//   XREF to: 03f9952c (READ)
//   XREF to: 03f99520 (READ)
// 005f80d0: ADD ESI,0x8
// 005f80d3: FISTP qword ptr [EDI]
//   XREF to: 03f9a124 (DATA)
//   XREF to: 03f9a12c (DATA)
//   XREF to: 03f9a120 (DATA)
// 005f80d5: ADD EDI,0x8
// 005f80d8: JMP 0x005f80c9
//   XREF to: 005f80c9 (UNCONDITIONAL_JUMP)
// 005f80da: ADD ECX,0x8
//   Label: LAB_005f80da
// 005f80dd: JLE 0x005f80e6
//   XREF to: 005f80e6 (CONDITIONAL_JUMP)
// 005f80df: MOVSD ES:EDI,ESI
//   XREF to: 03f9952c (READ)
//   XREF to: 03f9a12c (DATA)
// 005f80e0: SUB ECX,0x4
// 005f80e3: JLE 0x005f80e6
//   XREF to: 005f80e6 (CONDITIONAL_JUMP)
// 005f80e5: MOVSD ES:EDI,ESI
//   XREF to: 03f99530 (READ)
//   XREF to: 03f9a130 (DATA)
// 005f80e6: INC dword ptr [0x03f99518]
//   Label: LAB_005f80e6
//   XREF to: 03f99518 (READ_WRITE)
// 005f80ec: MOV ESI,dword ptr [ESP]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (DATA)
// 005f80ef: MOV EDI,dword ptr [0x03f99514]
//   XREF to: 03f99514 (READ)
// 005f80f5: INC ESI
// 005f80f6: ADD EBX,0x30
// 005f80f9: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x14] (DATA)
// 005f80fc: CMP ESI,EDI
// 005f80fe: JL 0x005f805f
//   XREF to: 005f805f (CONDITIONAL_JUMP)
// 005f8104: ADD ESP,0x4
//   Label: LAB_005f8104
// 005f8107: POP EBP
// 005f8108: POP EDI
// 005f8109: POP ESI
// 005f810a: POP EBX
// 005f810b: RET
// 005f810c: IMUL EAX,dword ptr [0x03f99518],0x30
//   Label: caseD_1
//   XREF to: 03f99518 (READ)
// 005f8113: ADD EAX,0x3f9a120
//   XREF to: 03f9a120 (DATA)
// 005f8118: PUSH EAX
// 005f8119: PUSH EDX
//   XREF to: 03f99520 (DATA)
// 005f811a: PUSH EBP
// 005f811b: CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80
//   XREF to: 005f7c80 (UNCONDITIONAL_CALL)
// 005f8120: MOV ESI,dword ptr [0x03f99518]
//   XREF to: 03f99518 (READ)
// 005f8126: INC ESI
// 005f8127: ADD ESP,0xc
// 005f812a: MOV dword ptr [0x03f99518],ESI
//   XREF to: 03f99518 (WRITE)
// 005f8130: JMP 0x005f80ec
//   XREF to: 005f80ec (UNCONDITIONAL_JUMP)
// 005f8132: IMUL EDI,dword ptr [0x03f99518],0x30
//   Label: caseD_2
//   XREF to: 03f99518 (READ)
// 005f8139: MOV ECX,0x30
// 005f813e: MOV ESI,EDX
// 005f8140: ADD EDI,0x3f9a120
//   XREF to: 03f9a120 (DATA)
// 005f8146: TEST EDI,0x7
// 005f814c: JZ 0x005f8154
//   XREF to: 005f8154 (CONDITIONAL_JUMP)
// 005f814e: MOVSD ES:EDI,ESI
//   XREF to: 03f99520 (READ)
//   XREF to: 03f9a120 (DATA)
// 005f814f: SUB ECX,0x4
// 005f8152: JLE 0x005f8171
//   XREF to: 005f8171 (CONDITIONAL_JUMP)
// 005f8154: SUB ECX,0x8
//   Label: LAB_005f8154
// 005f8157: JL 0x005f8165
//   XREF to: 005f8165 (CONDITIONAL_JUMP)
// 005f8159: FILD qword ptr [ESI]
//   XREF to: 03f99524 (READ)
//   XREF to: 03f9952c (READ)
//   XREF to: 03f99520 (READ)
// 005f815b: ADD ESI,0x8
// 005f815e: FISTP qword ptr [EDI]
//   XREF to: 03f9a124 (DATA)
//   XREF to: 03f9a12c (DATA)
//   XREF to: 03f9a120 (DATA)
// 005f8160: ADD EDI,0x8
// 005f8163: JMP 0x005f8154
//   XREF to: 005f8154 (UNCONDITIONAL_JUMP)
// 005f8165: ADD ECX,0x8
//   Label: LAB_005f8165
// 005f8168: JLE 0x005f8171
//   XREF to: 005f8171 (CONDITIONAL_JUMP)
// 005f816a: MOVSD ES:EDI,ESI
//   XREF to: 03f9952c (READ)
//   XREF to: 03f9a12c (DATA)
// 005f816b: SUB ECX,0x4
// 005f816e: JLE 0x005f8171
//   XREF to: 005f8171 (CONDITIONAL_JUMP)
// 005f8170: MOVSD ES:EDI,ESI
//   XREF to: 03f99530 (READ)
//   XREF to: 03f9a130 (DATA)
// 005f8171: MOV ECX,dword ptr [0x03f99518]
//   Label: LAB_005f8171
//   XREF to: 03f99518 (READ)
// 005f8177: INC ECX
// 005f8178: MOV dword ptr [0x03f99518],ECX
//   XREF to: 03f99518 (WRITE)
// 005f817e: IMUL EAX,ECX,0x30
// 005f8181: ADD EAX,0x3f9a120
//   XREF to: 03f9a120 (DATA)
// 005f8186: PUSH EAX
// 005f8187: PUSH EBP
// 005f8188: PUSH EDX
//   XREF to: 03f99520 (DATA)
// 005f8189: CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80
//   XREF to: 005f7c80 (UNCONDITIONAL_CALL)
// 005f818e: MOV EDI,dword ptr [0x03f99518]
//   XREF to: 03f99518 (READ)
// 005f8194: INC EDI
// 005f8195: ADD ESP,0xc
// 005f8198: MOV dword ptr [0x03f99518],EDI
//   XREF to: 03f99518 (WRITE)
// 005f819e: JMP 0x005f80ec
//   XREF to: 005f80ec (UNCONDITIONAL_JUMP)
