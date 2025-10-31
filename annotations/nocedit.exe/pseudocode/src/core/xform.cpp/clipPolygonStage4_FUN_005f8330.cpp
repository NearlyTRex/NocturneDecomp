// Name: core_xform.cpp_clipPolygonStage4_FUN_005f8330
// Address: 005f8330
// Address Range: [[005f8330, 005f8493]]
// Convention: __cdecl
// Signature: void core_xform.cpp_clipPolygonStage4_FUN_005f8330(void)
// Globals:
//   void* PTR_caseD_1_005f8324 = 005f83fd
//   void* PTR_caseD_3_005f832c = 005f83dd
//   int g_ClippedVertexCount
//   SRenderVertex[16] g_ClippedVertexBuffer
//   undefined4 DAT_00824e2c
//   undefined4 DAT_00824e34
//   undefined4 DAT_00824e38
//   int g_ClipVertexCountStage4
//   SRenderVertex[32] g_ClipVertexBufferStage4
//   undefined4 g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
//   undefined4 DAT_03f9a728
//   undefined4 DAT_03f9a72c
//   undefined4 DAT_03f9a730
//   undefined4 DAT_03f9a754
//   undefined4 DAT_03f9a758
// Function calls:
//   core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005f843f) */
/* WARNING: Removing unreachable block (ram,0x005f83b4) */

void __cdecl core_xform_cpp_clipPolygonStage4_FUN_005f8330(void)

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
  if (0 < g_ClipVertexCountStage4) {
    vertex_a = g_ClipVertexBufferStage4;
    do {
      uVar4 = local_14 + 1;
      if (uVar4 == g_ClipVertexCountStage4) {
        uVar4 = uVar4 ^ g_ClipVertexCountStage4;
      }
      bVar3 = (vertex_a->projected_vertex).transformed_y <=
              -(vertex_a->projected_vertex).transformed_z;
      if (g_ClipVertexBufferStage4[uVar4].projected_vertex.transformed_y <=
          -g_ClipVertexBufferStage4[uVar4].projected_vertex.transformed_z) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        pSVar7 = g_ClippedVertexBuffer + g_ClippedVertexCount;
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
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00
                  (g_ClipVertexBufferStage4 + uVar4,vertex_a,
                   g_ClippedVertexBuffer + g_ClippedVertexCount);
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
        break;
      case 2:
        pSVar7 = g_ClippedVertexBuffer + g_ClippedVertexCount;
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
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
        core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00
                  (vertex_a,g_ClipVertexBufferStage4 + uVar4,
                   g_ClippedVertexBuffer + g_ClippedVertexCount);
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
      }
      local_14 = local_14 + 1;
      vertex_a = vertex_a + 1;
    } while (local_14 < g_ClipVertexCountStage4);
  }
  return;
}


// Assembly code:
// 005f8330: PUSH EBX
//   Label: core_xform.cpp_clipPolygonStage4_FUN_005f8330
// 005f8331: PUSH ESI
// 005f8332: PUSH EDI
// 005f8333: PUSH EBP
// 005f8334: SUB ESP,0x4
// 005f8337: XOR EDX,EDX
// 005f8339: MOV ECX,dword ptr [0x03f9951c]
//   XREF to: 03f9951c (READ)
// 005f833f: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 005f8342: TEST ECX,ECX
// 005f8344: JLE 0x005f83f5
//   XREF to: 005f83f5 (CONDITIONAL_JUMP)
// 005f834a: MOV EBX,0x3f9a720
//   XREF to: 03f9a720 (PARAM)
// 005f834f: MOV EAX,dword ptr [ESP]
//   Label: LAB_005f834f
//   XREF to: Stack[-0x14] (DATA)
// 005f8352: MOV EBP,dword ptr [0x03f9951c]
//   XREF to: 03f9951c (READ)
// 005f8358: INC EAX
// 005f8359: CMP EAX,EBP
// 005f835b: JNZ 0x005f835f
//   XREF to: 005f835f (CONDITIONAL_JUMP)
// 005f835d: XOR EAX,EBP
// 005f835f: IMUL EAX,EAX,0x30
//   Label: LAB_005f835f
// 005f8362: MOV EBP,0x3f9a720
//   XREF to: 03f9a720 (DATA)
// 005f8367: MOV EDX,EBX
//   XREF to: 03f9a720 (PARAM)
// 005f8369: MOV EDI,dword ptr [EBX + 0x8]
//   XREF to: 03f9a728 (READ)
//   XREF to: 03f9a758 (READ)
// 005f836c: MOV ECX,dword ptr [EBX + 0x4]
//   XREF to: 03f9a724 (READ)
//   XREF to: 03f9a754 (READ)
// 005f836f: NEG EDI
// 005f8371: ADD EBP,EAX
// 005f8373: XOR EAX,EAX
// 005f8375: CMP EDI,ECX
// 005f8377: JL 0x005f837e
//   XREF to: 005f837e (CONDITIONAL_JUMP)
// 005f8379: MOV EAX,0x1
// 005f837e: MOV EDI,dword ptr [EBP + 0x8]
//   Label: LAB_005f837e
//   XREF to: 03f9a728 (DATA)
// 005f8381: MOV ESI,dword ptr [EBP + 0x4]
//   XREF to: 03f9a724 (DATA)
// 005f8384: NEG EDI
// 005f8386: CMP EDI,ESI
// 005f8388: JL 0x005f838c
//   XREF to: 005f838c (CONDITIONAL_JUMP)
// 005f838a: OR AL,0x2
// 005f838c: CMP EAX,0x3
//   Label: LAB_005f838c
// 005f838f: JA 0x005f83dd
//   XREF to: 005f83dd (CONDITIONAL_JUMP)
// 005f8391: JMP dword ptr [EAX*0x4 + 0x5f8320]
//   Label: switchD
//   XREF to: 005f8398 (COMPUTED_JUMP)
//   XREF to: 005f83fd (COMPUTED_JUMP)
//   XREF to: 005f8423 (COMPUTED_JUMP)
//   XREF to: 005f83dd (COMPUTED_JUMP)
//   XREF to: 005f832c (READ)
//   XREF to: 005f8324 (READ)
// 005f8398: IMUL EDI,dword ptr [0x00824e24],0x30
//   Label: caseD_0
//   XREF to: 00824e24 (READ)
// 005f839f: MOV ECX,0x30
// 005f83a4: MOV ESI,EDX
// 005f83a6: ADD EDI,0x824e28
//   XREF to: 00824e28 (DATA)
// 005f83ac: TEST EDI,0x7
// 005f83b2: JZ 0x005f83ba
//   XREF to: 005f83ba (CONDITIONAL_JUMP)
// 005f83b4: MOVSD ES:EDI,ESI
//   XREF to: 03f9a720 (READ)
//   XREF to: 00824e28 (DATA)
// 005f83b5: SUB ECX,0x4
// 005f83b8: JLE 0x005f83d7
//   XREF to: 005f83d7 (CONDITIONAL_JUMP)
// 005f83ba: SUB ECX,0x8
//   Label: LAB_005f83ba
// 005f83bd: JL 0x005f83cb
//   XREF to: 005f83cb (CONDITIONAL_JUMP)
// 005f83bf: FILD qword ptr [ESI]
//   XREF to: 03f9a724 (READ)
//   XREF to: 03f9a72c (READ)
//   XREF to: 03f9a720 (READ)
// 005f83c1: ADD ESI,0x8
// 005f83c4: FISTP qword ptr [EDI]
//   XREF to: 00824e2c (DATA)
//   XREF to: 00824e34 (DATA)
//   XREF to: 00824e28 (DATA)
// 005f83c6: ADD EDI,0x8
// 005f83c9: JMP 0x005f83ba
//   XREF to: 005f83ba (UNCONDITIONAL_JUMP)
// 005f83cb: ADD ECX,0x8
//   Label: LAB_005f83cb
// 005f83ce: JLE 0x005f83d7
//   XREF to: 005f83d7 (CONDITIONAL_JUMP)
// 005f83d0: MOVSD ES:EDI,ESI
//   XREF to: 03f9a72c (READ)
//   XREF to: 00824e34 (DATA)
// 005f83d1: SUB ECX,0x4
// 005f83d4: JLE 0x005f83d7
//   XREF to: 005f83d7 (CONDITIONAL_JUMP)
// 005f83d6: MOVSD ES:EDI,ESI
//   XREF to: 03f9a730 (READ)
//   XREF to: 00824e38 (DATA)
// 005f83d7: INC dword ptr [0x00824e24]
//   Label: LAB_005f83d7
//   XREF to: 00824e24 (READ_WRITE)
// 005f83dd: MOV ESI,dword ptr [ESP]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (DATA)
// 005f83e0: MOV EDI,dword ptr [0x03f9951c]
//   XREF to: 03f9951c (READ)
// 005f83e6: INC ESI
// 005f83e7: ADD EBX,0x30
// 005f83ea: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x14] (DATA)
// 005f83ed: CMP ESI,EDI
// 005f83ef: JL 0x005f834f
//   XREF to: 005f834f (CONDITIONAL_JUMP)
// 005f83f5: ADD ESP,0x4
//   Label: LAB_005f83f5
// 005f83f8: POP EBP
// 005f83f9: POP EDI
// 005f83fa: POP ESI
// 005f83fb: POP EBX
// 005f83fc: RET
// 005f83fd: IMUL EAX,dword ptr [0x00824e24],0x30
//   Label: caseD_1
//   XREF to: 00824e24 (READ)
// 005f8404: ADD EAX,0x824e28
//   XREF to: 00824e28 (DATA)
// 005f8409: PUSH EAX
// 005f840a: PUSH EDX
//   XREF to: 03f9a720 (DATA)
// 005f840b: PUSH EBP
// 005f840c: CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00
//   XREF to: 005f7e00 (UNCONDITIONAL_CALL)
// 005f8411: MOV ESI,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 005f8417: INC ESI
// 005f8418: ADD ESP,0xc
// 005f841b: MOV dword ptr [0x00824e24],ESI
//   XREF to: 00824e24 (WRITE)
// 005f8421: JMP 0x005f83dd
//   XREF to: 005f83dd (UNCONDITIONAL_JUMP)
// 005f8423: IMUL EDI,dword ptr [0x00824e24],0x30
//   Label: caseD_2
//   XREF to: 00824e24 (READ)
// 005f842a: MOV ECX,0x30
// 005f842f: MOV ESI,EDX
// 005f8431: ADD EDI,0x824e28
//   XREF to: 00824e28 (DATA)
// 005f8437: TEST EDI,0x7
// 005f843d: JZ 0x005f8445
//   XREF to: 005f8445 (CONDITIONAL_JUMP)
// 005f843f: MOVSD ES:EDI,ESI
//   XREF to: 03f9a720 (READ)
//   XREF to: 00824e28 (DATA)
// 005f8440: SUB ECX,0x4
// 005f8443: JLE 0x005f8462
//   XREF to: 005f8462 (CONDITIONAL_JUMP)
// 005f8445: SUB ECX,0x8
//   Label: LAB_005f8445
// 005f8448: JL 0x005f8456
//   XREF to: 005f8456 (CONDITIONAL_JUMP)
// 005f844a: FILD qword ptr [ESI]
//   XREF to: 03f9a724 (READ)
//   XREF to: 03f9a72c (READ)
//   XREF to: 03f9a720 (READ)
// 005f844c: ADD ESI,0x8
// 005f844f: FISTP qword ptr [EDI]
//   XREF to: 00824e2c (DATA)
//   XREF to: 00824e34 (DATA)
//   XREF to: 00824e28 (DATA)
// 005f8451: ADD EDI,0x8
// 005f8454: JMP 0x005f8445
//   XREF to: 005f8445 (UNCONDITIONAL_JUMP)
// 005f8456: ADD ECX,0x8
//   Label: LAB_005f8456
// 005f8459: JLE 0x005f8462
//   XREF to: 005f8462 (CONDITIONAL_JUMP)
// 005f845b: MOVSD ES:EDI,ESI
//   XREF to: 03f9a72c (READ)
//   XREF to: 00824e34 (DATA)
// 005f845c: SUB ECX,0x4
// 005f845f: JLE 0x005f8462
//   XREF to: 005f8462 (CONDITIONAL_JUMP)
// 005f8461: MOVSD ES:EDI,ESI
//   XREF to: 03f9a730 (READ)
//   XREF to: 00824e38 (DATA)
// 005f8462: MOV ECX,dword ptr [0x00824e24]
//   Label: LAB_005f8462
//   XREF to: 00824e24 (READ)
// 005f8468: INC ECX
// 005f8469: MOV dword ptr [0x00824e24],ECX
//   XREF to: 00824e24 (WRITE)
// 005f846f: IMUL EAX,ECX,0x30
// 005f8472: ADD EAX,0x824e28
//   XREF to: 00824e28 (DATA)
// 005f8477: PUSH EAX
// 005f8478: PUSH EBP
// 005f8479: PUSH EDX
//   XREF to: 03f9a720 (DATA)
// 005f847a: CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00
//   XREF to: 005f7e00 (UNCONDITIONAL_CALL)
// 005f847f: MOV EDI,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 005f8485: INC EDI
// 005f8486: ADD ESP,0xc
// 005f8489: MOV dword ptr [0x00824e24],EDI
//   XREF to: 00824e24 (WRITE)
// 005f848f: JMP 0x005f83dd
//   XREF to: 005f83dd (UNCONDITIONAL_JUMP)
