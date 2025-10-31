// Name: engine_clipper.c_clipPolygonNearPlane_FUN_00436420
// Address: 00436420
// Address Range: [[00436420, 00436618]]
// Convention: __cdecl
// Signature: void engine_clipper.c_clipPolygonNearPlane_FUN_00436420(void)
// Globals:
//   void* PTR_caseD_3_0043641c = 00436565
//   int g_NearPlaneDistance = 0x7fffffff
//   int g_ClippedVertexCount
//   SRenderVertex[16] g_ClippedVertexBuffer
//   undefined4 DAT_00824e2c
//   undefined4 g_ClippedVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 DAT_00824e34
//   undefined4 DAT_00824e38
//   undefined4 DAT_00824e58
//   undefined4 DAT_00824e60
//   undefined4 DAT_008254a8
//   undefined8 DAT_008254ac
//   undefined4 DAT_008254ac+4
//   undefined4 DAT_008254b4
//   undefined4 DAT_008254b8
//   undefined4 DAT_008254bc
//   undefined4 DAT_008254e0+4
//   undefined4 DAT_0082550c
//   undefined4 DAT_00825514
// Function calls:
//   engine_clipper.c_interpolateVertexNearClip_FUN_00435e00

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004365c2) */
/* WARNING: Removing unreachable block (ram,0x0043653c) */

void __cdecl engine_clipper_c_clipPolygonNearPlane_FUN_00436420(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  SRenderVertex *v1;
  int *piVar8;
  SRenderVertex *pSVar9;
  longlong *plVar10;
  SRenderVertex *pSVar11;
  byte bVar12;
  
  bVar12 = 0;
  iVar7 = 0;
  if (g_NearPlaneDistance != 0) {
    if (0 < g_ClippedVertexCount) {
      iVar5 = 0;
      do {
        iVar3 = *(int *)((int)&g_ClippedVertexBuffer[0].projected_vertex.transformed_z + iVar5);
        if (iVar7 < iVar3) {
          iVar7 = iVar3;
        }
        iVar5 = iVar5 + 0x30;
      } while (iVar5 < g_ClippedVertexCount * 0x30);
    }
    if (g_NearPlaneDistance <= iVar7) {
      DAT_008254a8 = g_ClippedVertexCount;
      iVar5 = 0;
      plVar10 = (longlong *)((int)&DAT_008254ac + 4);
      piVar8 = &g_ClippedVertexBuffer[0].projected_vertex.transformed_y;
      DAT_008254ac._0_4_ = g_ClippedVertexBuffer[0].projected_vertex.transformed_x;
      iVar7 = g_ClippedVertexCount * 0x30 + -4;
      if (iVar7 != 0 && 3 < g_ClippedVertexCount * 0x30) {
        while (7 < iVar7) {
          lVar1 = *(longlong *)piVar8;
          piVar8 = piVar8 + 2;
          *plVar10 = (longlong)ROUND((float10)lVar1);
          plVar10 = plVar10 + 1;
          iVar7 = iVar7 + -8;
        }
        if (iVar7 != 0 && SCARRY4(iVar7 + -8,8) == iVar7 < 0) {
          *(int *)plVar10 = *piVar8;
          if (4 < iVar7) {
            *(int *)((int)plVar10 + 4) = piVar8[1];
          }
        }
      }
      g_ClippedVertexCount = 0;
      if (0 < (int)DAT_008254a8) {
        v1 = (SRenderVertex *)&DAT_008254ac;
        do {
          uVar6 = iVar5 + 1;
          if (uVar6 == DAT_008254a8) {
            uVar6 = uVar6 ^ DAT_008254a8;
          }
          bVar4 = g_NearPlaneDistance <= (v1->projected_vertex).transformed_z;
          if (g_NearPlaneDistance <= *(int *)(&DAT_008254b4 + uVar6 * 0x30)) {
            bVar4 = bVar4 | 2;
          }
          switch(bVar4) {
          case 0:
            pSVar11 = g_ClippedVertexBuffer + g_ClippedVertexCount;
            iVar7 = 0x30;
            pSVar9 = v1;
            while (7 < iVar7) {
              lVar2._0_4_ = (pSVar9->projected_vertex).transformed_x;
              lVar2._4_4_ = (pSVar9->projected_vertex).transformed_y;
              pSVar9 = (SRenderVertex *)&(pSVar9->projected_vertex).transformed_z;
              (pSVar11->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
              (pSVar11->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
              pSVar11 = (SRenderVertex *)&(pSVar11->projected_vertex).transformed_z;
              iVar7 = iVar7 + -8;
            }
            if (iVar7 != 0 && SCARRY4(iVar7 + -8,8) == iVar7 < 0) {
              (pSVar11->projected_vertex).transformed_x = (pSVar9->projected_vertex).transformed_x;
              if (4 < iVar7) {
                *(undefined4 *)((int)pSVar11 + (uint)bVar12 * -8 + 4) =
                     *(undefined4 *)((int)pSVar9 + (uint)bVar12 * -8 + 4);
              }
            }
            g_ClippedVertexCount = g_ClippedVertexCount + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexNearClip_FUN_00435e00
                      ((SRenderVertex *)(&DAT_008254ac + uVar6 * 6),v1,
                       g_ClippedVertexBuffer + g_ClippedVertexCount);
            g_ClippedVertexCount = g_ClippedVertexCount + 1;
            break;
          case 2:
            pSVar11 = g_ClippedVertexBuffer + g_ClippedVertexCount;
            iVar7 = 0x30;
            pSVar9 = v1;
            while (7 < iVar7) {
              lVar1._0_4_ = (pSVar9->projected_vertex).transformed_x;
              lVar1._4_4_ = (pSVar9->projected_vertex).transformed_y;
              pSVar9 = (SRenderVertex *)&(pSVar9->projected_vertex).transformed_z;
              (pSVar11->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
              (pSVar11->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
              pSVar11 = (SRenderVertex *)&(pSVar11->projected_vertex).transformed_z;
              iVar7 = iVar7 + -8;
            }
            if (iVar7 != 0 && SCARRY4(iVar7 + -8,8) == iVar7 < 0) {
              (pSVar11->projected_vertex).transformed_x = (pSVar9->projected_vertex).transformed_x;
              if (4 < iVar7) {
                *(undefined4 *)((int)pSVar11 + (uint)bVar12 * -8 + 4) =
                     *(undefined4 *)((int)pSVar9 + (uint)bVar12 * -8 + 4);
              }
            }
            g_ClippedVertexCount = g_ClippedVertexCount + 1;
            engine_clipper_c_interpolateVertexNearClip_FUN_00435e00
                      (v1,(SRenderVertex *)(&DAT_008254ac + uVar6 * 6),
                       g_ClippedVertexBuffer + g_ClippedVertexCount);
            g_ClippedVertexCount = g_ClippedVertexCount + 1;
          }
          iVar5 = iVar5 + 1;
          v1 = v1 + 1;
        } while (iVar5 < (int)DAT_008254a8);
      }
    }
  }
  return;
}


// Assembly code:
// 00436420: PUSH EBX
//   Label: engine_clipper.c_clipPolygonNearPlane_FUN_00436420
// 00436421: PUSH ESI
// 00436422: PUSH EDI
// 00436423: PUSH EBP
// 00436424: SUB ESP,0x4
// 00436427: MOV EDX,dword ptr [0x0066e804]
//   XREF to: 0066e804 (READ)
// 0043642d: XOR EBX,EBX
// 0043642f: TEST EDX,EDX
// 00436431: JZ 0x00436466
//   XREF to: 00436466 (CONDITIONAL_JUMP)
// 00436433: MOV ECX,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 00436439: TEST ECX,ECX
// 0043643b: JLE 0x0043645e
//   XREF to: 0043645e (CONDITIONAL_JUMP)
// 0043643d: LEA EDI,[ECX*0x4 + 0x0]
// 00436444: SUB EDI,ECX
// 00436446: XOR EAX,EAX
// 00436448: SHL EDI,0x4
// 0043644b: MOV EDX,dword ptr [EAX + 0x824e30]
//   Label: LAB_0043644b
//   XREF to: 00824e30 (READ)
//   XREF to: 00824e60 (READ)
// 00436451: CMP EBX,EDX
// 00436453: JGE 0x00436457
//   XREF to: 00436457 (CONDITIONAL_JUMP)
// 00436455: MOV EBX,EDX
// 00436457: ADD EAX,0x30
//   Label: LAB_00436457
// 0043645a: CMP EAX,EDI
// 0043645c: JL 0x0043644b
//   XREF to: 0043644b (CONDITIONAL_JUMP)
// 0043645e: CMP EBX,dword ptr [0x0066e804]
//   Label: LAB_0043645e
//   XREF to: 0066e804 (READ)
// 00436464: JGE 0x0043646e
//   XREF to: 0043646e (CONDITIONAL_JUMP)
// 00436466: ADD ESP,0x4
//   Label: LAB_00436466
// 00436469: POP EBP
// 0043646a: POP EDI
// 0043646b: POP ESI
// 0043646c: POP EBX
// 0043646d: RET
// 0043646e: MOV EAX,[0x00824e24]
//   Label: LAB_0043646e
//   XREF to: 00824e24 (READ)
// 00436473: MOV [0x008254a8],EAX
//   XREF to: 008254a8 (WRITE)
// 00436478: LEA ECX,[EAX*0x4 + 0x0]
// 0043647f: MOV ESI,0x824e28
//   XREF to: 00824e28 (DATA)
// 00436484: SUB ECX,EAX
// 00436486: MOV EDI,0x8254ac
//   XREF to: 008254ac (DATA)
// 0043648b: SHL ECX,0x4
// 0043648e: XOR EBX,EBX
// 00436490: TEST EDI,0x7
// 00436496: JZ 0x0043649e
//   XREF to: 0043649e (CONDITIONAL_JUMP)
// 00436498: MOVSD ES:EDI,ESI
//   XREF to: 00824e28 (READ)
//   XREF to: 008254ac (WRITE)
// 00436499: SUB ECX,0x4
// 0043649c: JLE 0x004364bb
//   XREF to: 004364bb (CONDITIONAL_JUMP)
// 0043649e: SUB ECX,0x8
//   Label: LAB_0043649e
// 004364a1: JL 0x004364af
//   XREF to: 004364af (CONDITIONAL_JUMP)
// 004364a3: FILD qword ptr [ESI]
//   XREF to: 00824e2c (READ)
//   XREF to: 00824e34 (READ)
//   XREF to: 00824e28 (READ)
// 004364a5: ADD ESI,0x8
// 004364a8: FISTP qword ptr [EDI]
//   XREF to: 008254b0 (WRITE)
//   XREF to: 008254b8 (WRITE)
//   XREF to: 008254ac (WRITE)
// 004364aa: ADD EDI,0x8
// 004364ad: JMP 0x0043649e
//   XREF to: 0043649e (UNCONDITIONAL_JUMP)
// 004364af: ADD ECX,0x8
//   Label: LAB_004364af
// 004364b2: JLE 0x004364bb
//   XREF to: 004364bb (CONDITIONAL_JUMP)
// 004364b4: MOVSD ES:EDI,ESI
//   XREF to: 00824e34 (READ)
//   XREF to: 008254b8 (WRITE)
// 004364b5: SUB ECX,0x4
// 004364b8: JLE 0x004364bb
//   XREF to: 004364bb (CONDITIONAL_JUMP)
// 004364ba: MOVSD ES:EDI,ESI
//   XREF to: 00824e38 (READ)
//   XREF to: 008254bc (WRITE)
// 004364bb: XOR EDI,EDI
//   Label: LAB_004364bb
// 004364bd: MOV EBP,dword ptr [0x008254a8]
//   XREF to: 008254a8 (READ)
// 004364c3: MOV dword ptr [0x00824e24],EDI
//   XREF to: 00824e24 (WRITE)
// 004364c9: TEST EBP,EBP
// 004364cb: JLE 0x00436466
//   XREF to: 00436466 (CONDITIONAL_JUMP)
// 004364cd: MOV EBP,0x8254ac
//   XREF to: 008254ac (DATA)
// 004364d2: MOV ESI,dword ptr [0x008254a8]
//   Label: LAB_004364d2
//   XREF to: 008254a8 (READ)
// 004364d8: LEA EAX,[EBX + 0x1]
// 004364db: CMP EAX,ESI
// 004364dd: JNZ 0x004364e1
//   XREF to: 004364e1 (CONDITIONAL_JUMP)
// 004364df: XOR EAX,ESI
// 004364e1: IMUL EAX,EAX,0x30
//   Label: LAB_004364e1
// 004364e4: MOV EDI,0x8254ac
//   XREF to: 008254ac (DATA)
// 004364e9: MOV ECX,dword ptr [0x0066e804]
//   XREF to: 0066e804 (READ)
// 004364ef: ADD EDI,EAX
// 004364f1: MOV EDX,EBP
// 004364f3: MOV dword ptr [ESP],EDI
//   XREF to: 0082550c (DATA)
//   XREF to: Stack[-0x14] (DATA)
// 004364f6: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: 008254b4 (READ)
//   XREF to: 008254e4 (READ)
// 004364f9: XOR EAX,EAX
// 004364fb: CMP EDI,ECX
// 004364fd: JL 0x00436504
//   XREF to: 00436504 (CONDITIONAL_JUMP)
// 004364ff: MOV EAX,0x1
// 00436504: MOV EDI,dword ptr [ESP]
//   Label: LAB_00436504
//   XREF to: Stack[-0x14] (DATA)
// 00436507: MOV ESI,dword ptr [0x0066e804]
//   XREF to: 0066e804 (READ)
// 0043650d: CMP ESI,dword ptr [EDI + 0x8]
//   XREF to: 008254b4 (DATA)
//   XREF to: 00825514 (READ)
// 00436510: JG 0x00436514
//   XREF to: 00436514 (CONDITIONAL_JUMP)
// 00436512: OR AL,0x2
// 00436514: CMP EAX,0x3
//   Label: LAB_00436514
// 00436517: JA 0x00436565
//   XREF to: 00436565 (CONDITIONAL_JUMP)
// 00436519: JMP dword ptr [EAX*0x4 + 0x436410]
//   Label: switchD
//   XREF to: 00436520 (COMPUTED_JUMP)
//   XREF to: 0043657c (COMPUTED_JUMP)
//   XREF to: 004365a6 (COMPUTED_JUMP)
//   XREF to: 00436565 (COMPUTED_JUMP)
//   XREF to: 0043641c (READ)
// 00436520: IMUL EDI,dword ptr [0x00824e24],0x30
//   Label: caseD_0
//   XREF to: 00824e24 (READ)
// 00436527: MOV ECX,0x30
// 0043652c: MOV ESI,EDX
// 0043652e: ADD EDI,0x824e28
//   XREF to: 00824e28 (DATA)
// 00436534: TEST EDI,0x7
// 0043653a: JZ 0x00436542
//   XREF to: 00436542 (CONDITIONAL_JUMP)
// 0043653c: MOVSD ES:EDI,ESI
//   XREF to: 008254ac (READ)
//   XREF to: 00824e28 (WRITE)
// 0043653d: SUB ECX,0x4
// 00436540: JLE 0x0043655f
//   XREF to: 0043655f (CONDITIONAL_JUMP)
// 00436542: SUB ECX,0x8
//   Label: LAB_00436542
// 00436545: JL 0x00436553
//   XREF to: 00436553 (CONDITIONAL_JUMP)
// 00436547: FILD qword ptr [ESI]
//   XREF to: 008254ac (READ)
//   XREF to: 008254b4 (READ)
//   XREF to: 008254b0 (READ)
// 00436549: ADD ESI,0x8
// 0043654c: FISTP qword ptr [EDI]
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e30 (WRITE)
//   XREF to: 00824e2c (WRITE)
// 0043654e: ADD EDI,0x8
// 00436551: JMP 0x00436542
//   XREF to: 00436542 (UNCONDITIONAL_JUMP)
// 00436553: ADD ECX,0x8
//   Label: LAB_00436553
// 00436556: JLE 0x0043655f
//   XREF to: 0043655f (CONDITIONAL_JUMP)
// 00436558: MOVSD ES:EDI,ESI
//   XREF to: 008254b4 (READ)
//   XREF to: 00824e30 (WRITE)
// 00436559: SUB ECX,0x4
// 0043655c: JLE 0x0043655f
//   XREF to: 0043655f (CONDITIONAL_JUMP)
// 0043655e: MOVSD ES:EDI,ESI
//   XREF to: 008254b8 (READ)
//   XREF to: 00824e34 (WRITE)
// 0043655f: INC dword ptr [0x00824e24]
//   Label: LAB_0043655f
//   XREF to: 00824e24 (READ_WRITE)
// 00436565: MOV ECX,dword ptr [0x008254a8]
//   Label: caseD_3
//   XREF to: 008254a8 (READ)
// 0043656b: INC EBX
// 0043656c: ADD EBP,0x30
// 0043656f: CMP EBX,ECX
// 00436571: JGE 0x00436466
//   XREF to: 00436466 (CONDITIONAL_JUMP)
// 00436577: JMP 0x004364d2
//   XREF to: 004364d2 (UNCONDITIONAL_JUMP)
// 0043657c: IMUL EAX,dword ptr [0x00824e24],0x30
//   Label: caseD_1
//   XREF to: 00824e24 (READ)
// 00436583: ADD EAX,0x824e28
//   XREF to: 00824e28 (DATA)
// 00436588: PUSH EAX
//   XREF to: 00824e28 (DATA)
// 00436589: PUSH EDX
//   XREF to: 008254ac (DATA)
// 0043658a: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 0043658e: PUSH ESI
// 0043658f: CALL engine_clipper.c_interpolateVertexNearClip_FUN_00435e00
//   XREF to: 00435e00 (UNCONDITIONAL_CALL)
// 00436594: MOV EDI,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 0043659a: INC EDI
// 0043659b: ADD ESP,0xc
// 0043659e: MOV dword ptr [0x00824e24],EDI
//   XREF to: 00824e24 (WRITE)
// 004365a4: JMP 0x00436565
//   XREF to: 00436565 (UNCONDITIONAL_JUMP)
// 004365a6: IMUL EDI,dword ptr [0x00824e24],0x30
//   Label: caseD_2
//   XREF to: 00824e24 (READ)
// 004365ad: MOV ECX,0x30
// 004365b2: MOV ESI,EDX
// 004365b4: ADD EDI,0x824e28
//   XREF to: 00824e28 (DATA)
// 004365ba: TEST EDI,0x7
// 004365c0: JZ 0x004365c8
//   XREF to: 004365c8 (CONDITIONAL_JUMP)
// 004365c2: MOVSD ES:EDI,ESI
//   XREF to: 008254ac (READ)
//   XREF to: 00824e28 (WRITE)
// 004365c3: SUB ECX,0x4
// 004365c6: JLE 0x004365e5
//   XREF to: 004365e5 (CONDITIONAL_JUMP)
// 004365c8: SUB ECX,0x8
//   Label: LAB_004365c8
// 004365cb: JL 0x004365d9
//   XREF to: 004365d9 (CONDITIONAL_JUMP)
// 004365cd: FILD qword ptr [ESI]
//   XREF to: 008254ac (READ)
//   XREF to: 008254b4 (READ)
//   XREF to: 008254b0 (READ)
// 004365cf: ADD ESI,0x8
// 004365d2: FISTP qword ptr [EDI]
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e30 (WRITE)
//   XREF to: 00824e2c (WRITE)
// 004365d4: ADD EDI,0x8
// 004365d7: JMP 0x004365c8
//   XREF to: 004365c8 (UNCONDITIONAL_JUMP)
// 004365d9: ADD ECX,0x8
//   Label: LAB_004365d9
// 004365dc: JLE 0x004365e5
//   XREF to: 004365e5 (CONDITIONAL_JUMP)
// 004365de: MOVSD ES:EDI,ESI
//   XREF to: 008254b4 (READ)
//   XREF to: 00824e30 (WRITE)
// 004365df: SUB ECX,0x4
// 004365e2: JLE 0x004365e5
//   XREF to: 004365e5 (CONDITIONAL_JUMP)
// 004365e4: MOVSD ES:EDI,ESI
//   XREF to: 008254b8 (READ)
//   XREF to: 00824e34 (WRITE)
// 004365e5: MOV ECX,dword ptr [0x00824e24]
//   Label: LAB_004365e5
//   XREF to: 00824e24 (READ)
// 004365eb: INC ECX
// 004365ec: MOV dword ptr [0x00824e24],ECX
//   XREF to: 00824e24 (WRITE)
// 004365f2: IMUL EAX,ECX,0x30
// 004365f5: ADD EAX,0x824e28
//   XREF to: 00824e28 (DATA)
// 004365fa: PUSH EAX
//   XREF to: 00824e58 (DATA)
// 004365fb: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 004365ff: PUSH EDI
// 00436600: PUSH EDX
//   XREF to: 008254ac (DATA)
// 00436601: CALL engine_clipper.c_interpolateVertexNearClip_FUN_00435e00
//   XREF to: 00435e00 (UNCONDITIONAL_CALL)
// 00436606: MOV EAX,[0x00824e24]
//   XREF to: 00824e24 (READ)
// 0043660b: INC EAX
// 0043660c: ADD ESP,0xc
// 0043660f: MOV [0x00824e24],EAX
//   XREF to: 00824e24 (WRITE)
// 00436614: JMP 0x00436565
//   XREF to: 00436565 (UNCONDITIONAL_JUMP)
