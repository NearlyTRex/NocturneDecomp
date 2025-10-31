// Name: core_xform.cpp_clipPolygonStage1_FUN_005f7ed0
// Address: 005f7ed0
// Address Range: [[005f7ed0, 005f802c]]
// Convention: __cdecl
// Signature: void core_xform.cpp_clipPolygonStage1_FUN_005f7ed0(void)
// Globals:
//   void* switchdataD_005f7ebc = 005f7f31
//   void* PTR_caseD_3_005f7ec8 = 005f7f76
//   int g_ClipVertexCountStage1
//   int g_ClipVertexCountStage2
//   SRenderVertex[32] g_ClipVertexBufferStage2
//   undefined4 g_ClipVertexBufferStage2[0].projected_vertex.transformed_y
//   undefined4 DAT_03f9952c
//   undefined4 DAT_03f99530
//   SRenderVertex[32] g_ClipVertexBufferStage1
//   undefined4 DAT_03f99b28
//   undefined4 DAT_03f99b50
//   undefined4 DAT_03f99b54
//   undefined4 DAT_03f99b5c
//   undefined4 g_ClipVertexBufferStage1[1].projected_vertex.screen_x
// Function calls:
//   core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005f7fd8) */
/* WARNING: Removing unreachable block (ram,0x005f7f4d) */

void __cdecl core_xform_cpp_clipPolygonStage1_FUN_005f7ed0(void)

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
  if (0 < g_ClipVertexCountStage1) {
    vertex_a = g_ClipVertexBufferStage1;
    do {
      uVar4 = local_14 + 1;
      if (uVar4 == g_ClipVertexCountStage1) {
        uVar4 = uVar4 ^ g_ClipVertexCountStage1;
      }
      pSVar6 = g_ClipVertexBufferStage1 + uVar4;
      bVar3 = (vertex_a->projected_vertex).transformed_z <=
              (vertex_a->projected_vertex).transformed_x;
      if (g_ClipVertexBufferStage1[uVar4].projected_vertex.transformed_z <=
          (pSVar6->projected_vertex).transformed_x) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        pSVar7 = g_ClipVertexBufferStage2 + g_ClipVertexCountStage2;
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
        g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0
                  (pSVar6,vertex_a,g_ClipVertexBufferStage2 + g_ClipVertexCountStage2);
        g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
        break;
      case 2:
        pSVar8 = g_ClipVertexBufferStage2 + g_ClipVertexCountStage2;
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
        g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
        core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0
                  (vertex_a,pSVar6,g_ClipVertexBufferStage2 + g_ClipVertexCountStage2);
        g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
      }
      local_14 = local_14 + 1;
      vertex_a = vertex_a + 1;
    } while (local_14 < g_ClipVertexCountStage1);
  }
  return;
}


// Assembly code:
// 005f7ed0: PUSH EBX
//   Label: core_xform.cpp_clipPolygonStage1_FUN_005f7ed0
// 005f7ed1: PUSH ESI
// 005f7ed2: PUSH EDI
// 005f7ed3: PUSH EBP
// 005f7ed4: SUB ESP,0x4
// 005f7ed7: XOR EDX,EDX
// 005f7ed9: MOV ECX,dword ptr [0x03f99510]
//   XREF to: 03f99510 (READ)
// 005f7edf: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 005f7ee2: TEST ECX,ECX
// 005f7ee4: JLE 0x005f7f8e
//   XREF to: 005f7f8e (CONDITIONAL_JUMP)
// 005f7eea: MOV EBX,0x3f99b20
//   XREF to: 03f99b20 (DATA)
// 005f7eef: MOV EAX,dword ptr [ESP]
//   Label: LAB_005f7eef
//   XREF to: Stack[-0x14] (DATA)
// 005f7ef2: MOV EBP,dword ptr [0x03f99510]
//   XREF to: 03f99510 (READ)
// 005f7ef8: INC EAX
// 005f7ef9: CMP EAX,EBP
// 005f7efb: JNZ 0x005f7eff
//   XREF to: 005f7eff (CONDITIONAL_JUMP)
// 005f7efd: XOR EAX,EBP
// 005f7eff: IMUL EAX,EAX,0x30
//   Label: LAB_005f7eff
// 005f7f02: MOV EBP,0x3f99b20
//   XREF to: 03f99b20 (DATA)
// 005f7f07: MOV EDX,EBX
//   XREF to: 03f99b50 (PARAM)
// 005f7f09: MOV EDI,dword ptr [EBX]
//   XREF to: 03f99b20 (READ)
//   XREF to: 03f99b50 (READ)
// 005f7f0b: MOV ECX,dword ptr [EBX + 0x8]
//   XREF to: 03f99b28 (READ)
//   XREF to: 03f99b58 (READ)
// 005f7f0e: ADD EBP,EAX
// 005f7f10: XOR EAX,EAX
// 005f7f12: CMP EDI,ECX
// 005f7f14: JL 0x005f7f1b
//   XREF to: 005f7f1b (CONDITIONAL_JUMP)
// 005f7f16: MOV EAX,0x1
// 005f7f1b: MOV ESI,dword ptr [EBP + 0x8]
//   Label: LAB_005f7f1b
//   XREF to: 03f99b28 (DATA)
// 005f7f1e: CMP ESI,dword ptr [EBP]
//   XREF to: 03f99b20 (DATA)
// 005f7f21: JG 0x005f7f25
//   XREF to: 005f7f25 (CONDITIONAL_JUMP)
// 005f7f23: OR AL,0x2
// 005f7f25: CMP EAX,0x3
//   Label: LAB_005f7f25
// 005f7f28: JA 0x005f7f76
//   XREF to: 005f7f76 (CONDITIONAL_JUMP)
// 005f7f2a: JMP dword ptr [EAX*0x4 + 0x5f7ebc]
//   Label: switchD
//   XREF to: 005f7f31 (COMPUTED_JUMP)
//   XREF to: 005f7f96 (COMPUTED_JUMP)
//   XREF to: 005f7fbc (COMPUTED_JUMP)
//   XREF to: 005f7f76 (COMPUTED_JUMP)
//   XREF to: 005f7ec8 (READ)
//   XREF to: 005f7ebc (READ)
// 005f7f31: IMUL EDI,dword ptr [0x03f99514],0x30
//   Label: caseD_0
//   XREF to: 03f99514 (READ)
// 005f7f38: MOV ECX,0x30
// 005f7f3d: MOV ESI,EDX
// 005f7f3f: ADD EDI,0x3f99520
//   XREF to: 03f99520 (DATA)
// 005f7f45: TEST EDI,0x7
// 005f7f4b: JZ 0x005f7f53
//   XREF to: 005f7f53 (CONDITIONAL_JUMP)
// 005f7f4d: MOVSD ES:EDI,ESI
//   XREF to: 03f99b50 (READ)
//   XREF to: 03f99520 (DATA)
// 005f7f4e: SUB ECX,0x4
// 005f7f51: JLE 0x005f7f70
//   XREF to: 005f7f70 (CONDITIONAL_JUMP)
// 005f7f53: SUB ECX,0x8
//   Label: LAB_005f7f53
// 005f7f56: JL 0x005f7f64
//   XREF to: 005f7f64 (CONDITIONAL_JUMP)
// 005f7f58: FILD qword ptr [ESI]
//   XREF to: 03f99b54 (READ)
//   XREF to: 03f99b5c (READ)
//   XREF to: 03f99b50 (READ)
// 005f7f5a: ADD ESI,0x8
// 005f7f5d: FISTP qword ptr [EDI]
//   XREF to: 03f99524 (DATA)
//   XREF to: 03f9952c (DATA)
//   XREF to: 03f99520 (DATA)
// 005f7f5f: ADD EDI,0x8
// 005f7f62: JMP 0x005f7f53
//   XREF to: 005f7f53 (UNCONDITIONAL_JUMP)
// 005f7f64: ADD ECX,0x8
//   Label: LAB_005f7f64
// 005f7f67: JLE 0x005f7f70
//   XREF to: 005f7f70 (CONDITIONAL_JUMP)
// 005f7f69: MOVSD ES:EDI,ESI
//   XREF to: 03f99b5c (READ)
//   XREF to: 03f9952c (DATA)
// 005f7f6a: SUB ECX,0x4
// 005f7f6d: JLE 0x005f7f70
//   XREF to: 005f7f70 (CONDITIONAL_JUMP)
// 005f7f6f: MOVSD ES:EDI,ESI
//   XREF to: 03f99b60 (READ)
//   XREF to: 03f99530 (DATA)
// 005f7f70: INC dword ptr [0x03f99514]
//   Label: LAB_005f7f70
//   XREF to: 03f99514 (READ_WRITE)
// 005f7f76: MOV ESI,dword ptr [ESP]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (DATA)
// 005f7f79: MOV EDI,dword ptr [0x03f99510]
//   XREF to: 03f99510 (READ)
// 005f7f7f: INC ESI
// 005f7f80: ADD EBX,0x30
//   XREF to: 03f99b50 (PARAM)
// 005f7f83: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x14] (DATA)
// 005f7f86: CMP ESI,EDI
// 005f7f88: JL 0x005f7eef
//   XREF to: 005f7eef (CONDITIONAL_JUMP)
// 005f7f8e: ADD ESP,0x4
//   Label: LAB_005f7f8e
// 005f7f91: POP EBP
// 005f7f92: POP EDI
// 005f7f93: POP ESI
// 005f7f94: POP EBX
// 005f7f95: RET
// 005f7f96: IMUL EAX,dword ptr [0x03f99514],0x30
//   Label: caseD_1
//   XREF to: 03f99514 (READ)
// 005f7f9d: ADD EAX,0x3f99520
//   XREF to: 03f99520 (DATA)
// 005f7fa2: PUSH EAX
// 005f7fa3: PUSH EDX
//   XREF to: 03f99b50 (DATA)
// 005f7fa4: PUSH EBP
// 005f7fa5: CALL core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0
//   XREF to: 005f7bc0 (UNCONDITIONAL_CALL)
// 005f7faa: MOV ESI,dword ptr [0x03f99514]
//   XREF to: 03f99514 (READ)
// 005f7fb0: INC ESI
// 005f7fb1: ADD ESP,0xc
// 005f7fb4: MOV dword ptr [0x03f99514],ESI
//   XREF to: 03f99514 (WRITE)
// 005f7fba: JMP 0x005f7f76
//   XREF to: 005f7f76 (UNCONDITIONAL_JUMP)
// 005f7fbc: IMUL EDI,dword ptr [0x03f99514],0x30
//   Label: caseD_2
//   XREF to: 03f99514 (READ)
// 005f7fc3: MOV ECX,0x30
// 005f7fc8: MOV ESI,EDX
// 005f7fca: ADD EDI,0x3f99520
//   XREF to: 03f99520 (DATA)
// 005f7fd0: TEST EDI,0x7
// 005f7fd6: JZ 0x005f7fde
//   XREF to: 005f7fde (CONDITIONAL_JUMP)
// 005f7fd8: MOVSD ES:EDI,ESI
//   XREF to: 03f99b50 (READ)
//   XREF to: 03f99520 (DATA)
// 005f7fd9: SUB ECX,0x4
// 005f7fdc: JLE 0x005f7ffb
//   XREF to: 005f7ffb (CONDITIONAL_JUMP)
// 005f7fde: SUB ECX,0x8
//   Label: LAB_005f7fde
// 005f7fe1: JL 0x005f7fef
//   XREF to: 005f7fef (CONDITIONAL_JUMP)
// 005f7fe3: FILD qword ptr [ESI]
//   XREF to: 03f99b54 (READ)
//   XREF to: 03f99b5c (READ)
//   XREF to: 03f99b50 (READ)
// 005f7fe5: ADD ESI,0x8
// 005f7fe8: FISTP qword ptr [EDI]
//   XREF to: 03f99524 (DATA)
//   XREF to: 03f9952c (DATA)
//   XREF to: 03f99520 (DATA)
// 005f7fea: ADD EDI,0x8
// 005f7fed: JMP 0x005f7fde
//   XREF to: 005f7fde (UNCONDITIONAL_JUMP)
// 005f7fef: ADD ECX,0x8
//   Label: LAB_005f7fef
// 005f7ff2: JLE 0x005f7ffb
//   XREF to: 005f7ffb (CONDITIONAL_JUMP)
// 005f7ff4: MOVSD ES:EDI,ESI
//   XREF to: 03f99b5c (READ)
//   XREF to: 03f9952c (DATA)
// 005f7ff5: SUB ECX,0x4
// 005f7ff8: JLE 0x005f7ffb
//   XREF to: 005f7ffb (CONDITIONAL_JUMP)
// 005f7ffa: MOVSD ES:EDI,ESI
//   XREF to: 03f99b60 (READ)
//   XREF to: 03f99530 (DATA)
// 005f7ffb: MOV ECX,dword ptr [0x03f99514]
//   Label: LAB_005f7ffb
//   XREF to: 03f99514 (READ)
// 005f8001: INC ECX
// 005f8002: MOV dword ptr [0x03f99514],ECX
//   XREF to: 03f99514 (WRITE)
// 005f8008: IMUL EAX,ECX,0x30
// 005f800b: ADD EAX,0x3f99520
//   XREF to: 03f99520 (DATA)
// 005f8010: PUSH EAX
// 005f8011: PUSH EBP
// 005f8012: PUSH EDX
//   XREF to: 03f99b50 (DATA)
// 005f8013: CALL core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0
//   XREF to: 005f7bc0 (UNCONDITIONAL_CALL)
// 005f8018: MOV EDI,dword ptr [0x03f99514]
//   XREF to: 03f99514 (READ)
// 005f801e: INC EDI
// 005f801f: ADD ESP,0xc
// 005f8022: MOV dword ptr [0x03f99514],EDI
//   XREF to: 03f99514 (WRITE)
// 005f8028: JMP 0x005f7f76
//   XREF to: 005f7f76 (UNCONDITIONAL_JUMP)
