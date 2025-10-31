// Name: core_xform.cpp_transformAndClipGeometry_FUN_005f8550
// Address: 005f8550
// Address Range: [[005f8550, 005f8c84]]
// Convention: __cdecl
// Signature: SRenderVertex * core_xform.cpp_transformAndClipGeometry_FUN_005f8550(int vertex_count, int * vertex_indices)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 (0048a740) at 0048a7e3 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0 (0048c8d0) at 0048c92e [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 (0048d410) at 0048d4d3 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005f850c = 005f86dc
//   void* PTR_caseD_3_005f8518 = 005f8721
//   void* PTR_caseD_1_005f8520 = 005f8a76
//   void* PTR_caseD_3_005f8528 = 005f87eb
//   void* switchdataD_005f852c = 005f886b
//   void* PTR_caseD_3_005f8538 = 005f88b0
//   void* PTR_caseD_1_005f8540 = 005f8baa
//   void* PTR_caseD_3_005f8548 = 005f897b
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.inv_z
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
//   int g_ClippedVertexCount
//   SRenderVertex[16] g_ClippedVertexBuffer
//   undefined4 DAT_00824e2c
//   undefined4 g_ClippedVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 DAT_00824e34
//   undefined4 DAT_00824e58
//   undefined4 DAT_00824e5c
//   undefined4 DAT_00824e60
//   int g_ClipVertexCountStage1
//   int g_ClipVertexCountStage2
//   int g_ClipVertexCountStage3
//   int g_ClipVertexCountStage4
//   SRenderVertex[32] g_ClipVertexBufferStage2
//   undefined4 g_ClipVertexBufferStage2[0].projected_vertex.transformed_y
//   undefined4 DAT_03f99528
//   undefined4 DAT_03f9952c
//   undefined4 DAT_03f99550
//   undefined4 DAT_03f99558
//   SRenderVertex[32] g_ClipVertexBufferStage1
//   undefined4 DAT_03f99b28
//   undefined4 DAT_03f99b2c
//   undefined4 DAT_03f99b50
//   undefined4 DAT_03f99b54
//   undefined4 DAT_03f99b54+4
//   undefined4 DAT_03f99b5c
//   SRenderVertex[32] g_ClipVertexBufferStage3
//   undefined4 g_ClipVertexBufferStage3[0].projected_vertex.transformed_y
//   undefined4 DAT_03f9a128
//   undefined4 DAT_03f9a12c
//   undefined4 DAT_03f9a150
//   undefined4 DAT_03f9a154
//   undefined4 DAT_03f9a158
//   undefined4 DAT_03f9a15c
//   SRenderVertex[32] g_ClipVertexBufferStage4
//   undefined4 g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
//   undefined4 DAT_03f9a728
//   undefined4 DAT_03f9a72c
//   undefined4 DAT_03f9a750
//   undefined4 DAT_03f9a754
//   undefined4 DAT_03f9a758
// Function calls:
//   core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00
//   core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80
//   core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0
//   core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005f8bef) */
/* WARNING: Removing unreachable block (ram,0x005f8b55) */
/* WARNING: Removing unreachable block (ram,0x005f8abb) */
/* WARNING: Removing unreachable block (ram,0x005f8a21) */
/* WARNING: Removing unreachable block (ram,0x005f85b8) */
/* WARNING: Removing unreachable block (ram,0x005f8641) */
/* WARNING: Removing unreachable block (ram,0x005f86f8) */
/* WARNING: Removing unreachable block (ram,0x005f87c2) */
/* WARNING: Removing unreachable block (ram,0x005f8887) */
/* WARNING: Removing unreachable block (ram,0x005f8952) */

SRenderVertex * __cdecl
core_xform_cpp_transformAndClipGeometry_FUN_005f8550(int vertex_count,int *vertex_indices)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  SRenderVertex *extraout_EAX;
  SRenderVertex *extraout_EAX_00;
  SRenderVertex *extraout_EAX_01;
  SRenderVertex *extraout_EAX_02;
  SRenderVertex *extraout_EAX_03;
  SRenderVertex *extraout_EAX_04;
  SRenderVertex *extraout_EAX_05;
  SRenderVertex *extraout_EAX_06;
  int iVar14;
  int *piVar15;
  SRenderVertex *pSVar16;
  int iVar17;
  int iVar18;
  SRenderVertex *pSVar19;
  SRenderVertex *pSVar20;
  SRenderVertex *pSVar21;
  byte bVar22;
  int *local_28;
  SRenderVertex *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar22 = 0;
  local_28 = (int *)0x0;
  iVar18 = 0;
  piVar15 = vertex_indices;
  if (0 < vertex_count) {
    do {
      if ((g_RenderVertexBuffer[*piVar15].projected_vertex.screen_x & 0x80000000U) != 0) {
        iVar18 = iVar18 + 1;
      }
      local_28 = (int *)((int)&(((SRenderVertex *)local_28)->projected_vertex).transformed_x + 1);
      piVar15 = piVar15 + 1;
    } while ((int)local_28 < vertex_count);
  }
  if (iVar18 == 0) {
    g_ClippedVertexCount = vertex_count;
    if (0 < vertex_count) {
      pSVar16 = g_ClippedVertexBuffer;
      local_24 = (SRenderVertex *)0x0;
      do {
        pSVar19 = g_RenderVertexBuffer + *vertex_indices;
        iVar18 = 0x30;
        pSVar20 = pSVar16;
        while (7 < iVar18) {
          lVar1._0_4_ = (pSVar19->projected_vertex).transformed_x;
          lVar1._4_4_ = (pSVar19->projected_vertex).transformed_y;
          pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
          (pSVar20->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
          (pSVar20->projected_vertex).transformed_y =
               (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
          pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
          iVar18 = iVar18 + -8;
        }
        if (iVar18 != 0 && SCARRY4(iVar18 + -8,8) == iVar18 < 0) {
          (pSVar20->projected_vertex).transformed_x = (pSVar19->projected_vertex).transformed_x;
          if (4 < iVar18) {
            (pSVar20->projected_vertex).transformed_y = (pSVar19->projected_vertex).transformed_y;
          }
        }
        vertex_indices = vertex_indices + 1;
        local_28 = (int *)((int)&(local_24->projected_vertex).transformed_x + 1);
        pSVar16 = pSVar16 + 1;
        local_24 = (SRenderVertex *)local_28;
      } while ((int)local_28 < vertex_count);
    }
  }
  else {
    g_ClipVertexCountStage1 = vertex_count;
    iVar18 = 0;
    g_ClipVertexCountStage2 = 0;
    g_ClipVertexCountStage3 = 0;
    g_ClipVertexCountStage4 = 0;
    g_ClippedVertexCount = 0;
    if (0 < vertex_count) {
      pSVar16 = g_ClipVertexBufferStage1;
      local_28 = vertex_indices;
      do {
        pSVar19 = g_RenderVertexBuffer + *local_28;
        iVar14 = 0x30;
        pSVar20 = pSVar16;
        while (7 < iVar14) {
          lVar2._0_4_ = (pSVar19->projected_vertex).transformed_x;
          lVar2._4_4_ = (pSVar19->projected_vertex).transformed_y;
          pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
          (pSVar20->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
          (pSVar20->projected_vertex).transformed_y =
               (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
          pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
          iVar14 = iVar14 + -8;
        }
        if (iVar14 != 0 && SCARRY4(iVar14 + -8,8) == iVar14 < 0) {
          (pSVar20->projected_vertex).transformed_x = (pSVar19->projected_vertex).transformed_x;
          if (4 < iVar14) {
            (pSVar20->projected_vertex).transformed_y = (pSVar19->projected_vertex).transformed_y;
          }
        }
        iVar18 = iVar18 + 1;
        local_28 = local_28 + 1;
        pSVar16 = pSVar16 + 1;
      } while (iVar18 < vertex_count);
    }
    local_20 = 0;
    if (0 < g_ClipVertexCountStage1) {
      pSVar16 = g_ClipVertexBufferStage1;
      do {
        uVar13 = local_20 + 1;
        if (uVar13 == g_ClipVertexCountStage1) {
          uVar13 = uVar13 ^ g_ClipVertexCountStage1;
        }
        pSVar20 = g_ClipVertexBufferStage1 + uVar13;
        bVar12 = (pSVar16->projected_vertex).transformed_z <=
                 (pSVar16->projected_vertex).transformed_x;
        if (g_ClipVertexBufferStage1[uVar13].projected_vertex.transformed_z <=
            (pSVar20->projected_vertex).transformed_x) {
          bVar12 = bVar12 | 2;
        }
        local_28 = (int *)(uint)bVar12;
        switch(local_28) {
        case (int *)0x0:
          pSVar19 = g_ClipVertexBufferStage2 + g_ClipVertexCountStage2;
          iVar18 = 0x30;
          pSVar20 = pSVar16;
          while (7 < iVar18) {
            lVar3._0_4_ = (pSVar20->projected_vertex).transformed_x;
            lVar3._4_4_ = (pSVar20->projected_vertex).transformed_y;
            pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
            (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar3);
            (pSVar19->projected_vertex).transformed_y =
                 (int)((ulonglong)(longlong)ROUND((float10)lVar3) >> 0x20);
            pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
            iVar18 = iVar18 + -8;
          }
          if (iVar18 != 0 && SCARRY4(iVar18 + -8,8) == iVar18 < 0) {
            (pSVar19->projected_vertex).transformed_x = (pSVar20->projected_vertex).transformed_x;
            if (4 < iVar18) {
              *(undefined4 *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                   *(undefined4 *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
            }
          }
          g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
          break;
        case (int *)0x1:
          core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0
                    (pSVar20,pSVar16,g_ClipVertexBufferStage2 + g_ClipVertexCountStage2);
          g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
          local_28 = (int *)extraout_EAX;
          break;
        case (int *)0x2:
          pSVar21 = g_ClipVertexBufferStage2 + g_ClipVertexCountStage2;
          iVar18 = 0x30;
          pSVar19 = pSVar16;
          while (7 < iVar18) {
            lVar7._0_4_ = (pSVar19->projected_vertex).transformed_x;
            lVar7._4_4_ = (pSVar19->projected_vertex).transformed_y;
            pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
            (pSVar21->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar7);
            (pSVar21->projected_vertex).transformed_y =
                 (int)((ulonglong)(longlong)ROUND((float10)lVar7) >> 0x20);
            pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
            iVar18 = iVar18 + -8;
          }
          if (iVar18 != 0 && SCARRY4(iVar18 + -8,8) == iVar18 < 0) {
            (pSVar21->projected_vertex).transformed_x = (pSVar19->projected_vertex).transformed_x;
            if (4 < iVar18) {
              *(undefined4 *)((int)pSVar21 + (uint)bVar22 * -8 + 4) =
                   *(undefined4 *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
            }
          }
          g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
          core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0
                    (pSVar16,pSVar20,g_ClipVertexBufferStage2 + g_ClipVertexCountStage2);
          g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
          local_28 = (int *)extraout_EAX_00;
        }
        local_20 = local_20 + 1;
        pSVar16 = pSVar16 + 1;
      } while (local_20 < g_ClipVertexCountStage1);
    }
    if (2 < g_ClipVertexCountStage2) {
      local_28 = (int *)0x0;
      local_18 = 0;
      if (0 < g_ClipVertexCountStage2) {
        pSVar16 = g_ClipVertexBufferStage2;
        do {
          uVar13 = local_18 + 1;
          if (uVar13 == g_ClipVertexCountStage2) {
            uVar13 = uVar13 ^ g_ClipVertexCountStage2;
          }
          pSVar20 = g_ClipVertexBufferStage2 + uVar13;
          bVar12 = (pSVar16->projected_vertex).transformed_x <=
                   -(pSVar16->projected_vertex).transformed_z;
          if ((pSVar20->projected_vertex).transformed_x <=
              -g_ClipVertexBufferStage2[uVar13].projected_vertex.transformed_z) {
            bVar12 = bVar12 | 2;
          }
          local_28 = (int *)(uint)bVar12;
          switch(local_28) {
          case (int *)0x0:
            pSVar19 = g_ClipVertexBufferStage3 + g_ClipVertexCountStage3;
            iVar18 = 0x30;
            pSVar20 = pSVar16;
            while (7 < iVar18) {
              lVar4._0_4_ = (pSVar20->projected_vertex).transformed_x;
              lVar4._4_4_ = (pSVar20->projected_vertex).transformed_y;
              pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
              (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar4);
              (pSVar19->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar4) >> 0x20);
              pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
              iVar18 = iVar18 + -8;
            }
            if (iVar18 != 0 && SCARRY4(iVar18 + -8,8) == iVar18 < 0) {
              (pSVar19->projected_vertex).transformed_x = (pSVar20->projected_vertex).transformed_x;
              if (4 < iVar18) {
                *(undefined4 *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                     *(undefined4 *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
              }
            }
            g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
            break;
          case (int *)0x1:
            core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80
                      (pSVar20,pSVar16,g_ClipVertexBufferStage3 + g_ClipVertexCountStage3);
            g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
            local_28 = (int *)extraout_EAX_01;
            break;
          case (int *)0x2:
            pSVar21 = g_ClipVertexBufferStage3 + g_ClipVertexCountStage3;
            iVar18 = 0x30;
            pSVar19 = pSVar16;
            while (7 < iVar18) {
              lVar8._0_4_ = (pSVar19->projected_vertex).transformed_x;
              lVar8._4_4_ = (pSVar19->projected_vertex).transformed_y;
              pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
              (pSVar21->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar8);
              (pSVar21->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar8) >> 0x20);
              pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
              iVar18 = iVar18 + -8;
            }
            if (iVar18 != 0 && SCARRY4(iVar18 + -8,8) == iVar18 < 0) {
              (pSVar21->projected_vertex).transformed_x = (pSVar19->projected_vertex).transformed_x;
              if (4 < iVar18) {
                *(undefined4 *)((int)pSVar21 + (uint)bVar22 * -8 + 4) =
                     *(undefined4 *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
              }
            }
            g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
            core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80
                      (pSVar16,pSVar20,g_ClipVertexBufferStage3 + g_ClipVertexCountStage3);
            g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
            local_28 = (int *)extraout_EAX_02;
          }
          local_18 = local_18 + 1;
          pSVar16 = pSVar16 + 1;
        } while (local_18 < g_ClipVertexCountStage2);
      }
      if (2 < g_ClipVertexCountStage3) {
        local_14 = 0;
        if (0 < g_ClipVertexCountStage3) {
          pSVar16 = g_ClipVertexBufferStage3;
          do {
            uVar13 = local_14 + 1;
            if (uVar13 == g_ClipVertexCountStage3) {
              uVar13 = uVar13 ^ g_ClipVertexCountStage3;
            }
            bVar12 = (pSVar16->projected_vertex).transformed_z <=
                     (pSVar16->projected_vertex).transformed_y;
            if (g_ClipVertexBufferStage3[uVar13].projected_vertex.transformed_z <=
                g_ClipVertexBufferStage3[uVar13].projected_vertex.transformed_y) {
              bVar12 = bVar12 | 2;
            }
            local_28 = (int *)(uint)bVar12;
            switch(local_28) {
            case (int *)0x0:
              pSVar19 = g_ClipVertexBufferStage4 + g_ClipVertexCountStage4;
              iVar18 = 0x30;
              pSVar20 = pSVar16;
              while (7 < iVar18) {
                lVar5._0_4_ = (pSVar20->projected_vertex).transformed_x;
                lVar5._4_4_ = (pSVar20->projected_vertex).transformed_y;
                pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
                (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar5);
                (pSVar19->projected_vertex).transformed_y =
                     (int)((ulonglong)(longlong)ROUND((float10)lVar5) >> 0x20);
                pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                iVar18 = iVar18 + -8;
              }
              if (iVar18 != 0 && SCARRY4(iVar18 + -8,8) == iVar18 < 0) {
                (pSVar19->projected_vertex).transformed_x =
                     (pSVar20->projected_vertex).transformed_x;
                if (4 < iVar18) {
                  *(undefined4 *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                       *(undefined4 *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
                }
              }
              g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
              break;
            case (int *)0x1:
              core_xform_cpp_clipInterpolateTopPlane_FUN_005f7d40
                        (g_ClipVertexBufferStage3 + uVar13,pSVar16,
                         g_ClipVertexBufferStage4 + g_ClipVertexCountStage4);
              g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
              local_28 = (int *)extraout_EAX_03;
              break;
            case (int *)0x2:
              pSVar19 = g_ClipVertexBufferStage4 + g_ClipVertexCountStage4;
              iVar18 = 0x30;
              pSVar20 = pSVar16;
              while (7 < iVar18) {
                lVar9._0_4_ = (pSVar20->projected_vertex).transformed_x;
                lVar9._4_4_ = (pSVar20->projected_vertex).transformed_y;
                pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
                (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar9);
                (pSVar19->projected_vertex).transformed_y =
                     (int)((ulonglong)(longlong)ROUND((float10)lVar9) >> 0x20);
                pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                iVar18 = iVar18 + -8;
              }
              if (iVar18 != 0 && SCARRY4(iVar18 + -8,8) == iVar18 < 0) {
                (pSVar19->projected_vertex).transformed_x =
                     (pSVar20->projected_vertex).transformed_x;
                if (4 < iVar18) {
                  *(undefined4 *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                       *(undefined4 *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
                }
              }
              g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
              core_xform_cpp_clipInterpolateTopPlane_FUN_005f7d40
                        (pSVar16,g_ClipVertexBufferStage3 + uVar13,
                         g_ClipVertexBufferStage4 + g_ClipVertexCountStage4);
              g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
              local_28 = (int *)extraout_EAX_04;
            }
            local_14 = local_14 + 1;
            pSVar16 = pSVar16 + 1;
          } while (local_14 < g_ClipVertexCountStage3);
        }
        if (2 < g_ClipVertexCountStage4) {
          local_1c = 0;
          if (0 < g_ClipVertexCountStage4) {
            pSVar16 = g_ClipVertexBufferStage4;
            do {
              uVar13 = local_1c + 1;
              if (uVar13 == g_ClipVertexCountStage4) {
                uVar13 = uVar13 ^ g_ClipVertexCountStage4;
              }
              bVar12 = (pSVar16->projected_vertex).transformed_y <=
                       -(pSVar16->projected_vertex).transformed_z;
              if (g_ClipVertexBufferStage4[uVar13].projected_vertex.transformed_y <=
                  -g_ClipVertexBufferStage4[uVar13].projected_vertex.transformed_z) {
                bVar12 = bVar12 | 2;
              }
              local_28 = (int *)(uint)bVar12;
              switch(local_28) {
              case (int *)0x0:
                pSVar19 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                iVar18 = 0x30;
                pSVar20 = pSVar16;
                while (7 < iVar18) {
                  lVar6._0_4_ = (pSVar20->projected_vertex).transformed_x;
                  lVar6._4_4_ = (pSVar20->projected_vertex).transformed_y;
                  pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
                  (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar6);
                  (pSVar19->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar6) >> 0x20);
                  pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                  iVar18 = iVar18 + -8;
                }
                if (iVar18 != 0 && SCARRY4(iVar18 + -8,8) == iVar18 < 0) {
                  (pSVar19->projected_vertex).transformed_x =
                       (pSVar20->projected_vertex).transformed_x;
                  if (4 < iVar18) {
                    *(undefined4 *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                         *(undefined4 *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
                  }
                }
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                break;
              case (int *)0x1:
                core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00
                          (g_ClipVertexBufferStage4 + uVar13,pSVar16,
                           g_ClippedVertexBuffer + g_ClippedVertexCount);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                local_28 = (int *)extraout_EAX_05;
                break;
              case (int *)0x2:
                pSVar19 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                iVar18 = 0x30;
                pSVar20 = pSVar16;
                while (7 < iVar18) {
                  lVar10._0_4_ = (pSVar20->projected_vertex).transformed_x;
                  lVar10._4_4_ = (pSVar20->projected_vertex).transformed_y;
                  pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
                  (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar10);
                  (pSVar19->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar10) >> 0x20);
                  pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                  iVar18 = iVar18 + -8;
                }
                if (iVar18 != 0 && SCARRY4(iVar18 + -8,8) == iVar18 < 0) {
                  (pSVar19->projected_vertex).transformed_x =
                       (pSVar20->projected_vertex).transformed_x;
                  if (4 < iVar18) {
                    *(undefined4 *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                         *(undefined4 *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
                  }
                }
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00
                          (pSVar16,g_ClipVertexBufferStage4 + uVar13,
                           g_ClippedVertexBuffer + g_ClippedVertexCount);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                local_28 = (int *)extraout_EAX_06;
              }
              local_1c = local_1c + 1;
              pSVar16 = pSVar16 + 1;
            } while (local_1c < g_ClipVertexCountStage4);
          }
          if (2 < g_ClippedVertexCount) {
            local_28 = (int *)g_ClippedVertexBuffer;
            iVar18 = 0;
            if (0 < g_ClippedVertexCount) {
              do {
                iVar14 = (((SRenderVertex *)local_28)->projected_vertex).transformed_z;
                if (iVar14 == 0) {
                  (((SRenderVertex *)local_28)->projected_vertex).transformed_z = 1;
                  (((SRenderVertex *)local_28)->projected_vertex).transformed_x = 0;
                  (((SRenderVertex *)local_28)->projected_vertex).transformed_y = 0;
                }
                else if (iVar14 < (((SRenderVertex *)local_28)->projected_vertex).transformed_x) {
                  (((SRenderVertex *)local_28)->projected_vertex).transformed_x = iVar14;
                }
                else {
                  iVar11 = (((SRenderVertex *)local_28)->projected_vertex).transformed_x;
                  iVar17 = -iVar14;
                  if (-iVar11 == iVar14 || iVar17 < iVar11) {
                    iVar11 = (((SRenderVertex *)local_28)->projected_vertex).transformed_y;
                    if (iVar14 < iVar11) {
                      (((SRenderVertex *)local_28)->projected_vertex).transformed_y = iVar14;
                    }
                    else if (-iVar11 != iVar14 && iVar11 <= iVar17) {
                      (((SRenderVertex *)local_28)->projected_vertex).transformed_y = iVar17;
                    }
                  }
                  else {
                    (((SRenderVertex *)local_28)->projected_vertex).transformed_x = iVar17;
                  }
                }
                iVar18 = iVar18 + 1;
                local_28 = (int *)((int)local_28 + 0x30);
              } while (iVar18 < g_ClippedVertexCount);
            }
          }
        }
      }
    }
  }
  return (SRenderVertex *)local_28;
}


// Assembly code:
// 005f8550: PUSH EBX
//   Label: core_xform.cpp_transformAndClipGeometry_FUN_005f8550
// 005f8551: PUSH ESI
// 005f8552: PUSH EDI
// 005f8553: PUSH EBP
// 005f8554: SUB ESP,0x18
// 005f8557: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 005f855b: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 005f855f: XOR EAX,EAX
// 005f8561: XOR EBX,EBX
// 005f8563: TEST EBP,EBP
// 005f8565: JLE 0x005f8583
//   XREF to: 005f8583 (CONDITIONAL_JUMP)
// 005f8567: MOV EDX,EDI
// 005f8569: IMUL ESI,dword ptr [EDX],0x30
//   Label: LAB_005f8569
// 005f856c: MOV ESI,dword ptr [ESI + 0x688024]
//   XREF to: 00688024 (DATA)
// 005f8572: TEST ESI,0x80000000
// 005f8578: JZ 0x005f857b
//   XREF to: 005f857b (CONDITIONAL_JUMP)
// 005f857a: INC EBX
// 005f857b: INC EAX
//   Label: LAB_005f857b
// 005f857c: ADD EDX,0x4
// 005f857f: CMP EAX,EBP
// 005f8581: JL 0x005f8569
//   XREF to: 005f8569 (CONDITIONAL_JUMP)
// 005f8583: TEST EBX,EBX
//   Label: LAB_005f8583
// 005f8585: JNZ 0x005f85f8
//   XREF to: 005f85f8 (CONDITIONAL_JUMP)
// 005f858b: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 005f858f: MOV dword ptr [0x00824e24],EBP
//   XREF to: 00824e24 (WRITE)
// 005f8595: TEST EBP,EBP
// 005f8597: JLE 0x005f85f0
//   XREF to: 005f85f0 (CONDITIONAL_JUMP)
// 005f8599: MOV EDX,0x824e28
//   XREF to: 00824e28 (DATA)
// 005f859e: MOV EBX,EDI
// 005f85a0: IMUL ESI,dword ptr [EBX],0x30
//   Label: LAB_005f85a0
// 005f85a3: MOV ECX,0x30
// 005f85a8: ADD ESI,0x688014
//   XREF to: 00688014 (DATA)
// 005f85ae: MOV EDI,EDX
// 005f85b0: TEST EDI,0x7
// 005f85b6: JZ 0x005f85be
//   XREF to: 005f85be (CONDITIONAL_JUMP)
// 005f85b8: MOVSD ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 00824e58 (WRITE)
// 005f85b9: SUB ECX,0x4
// 005f85bc: JLE 0x005f85db
//   XREF to: 005f85db (CONDITIONAL_JUMP)
// 005f85be: SUB ECX,0x8
//   Label: LAB_005f85be
// 005f85c1: JL 0x005f85cf
//   XREF to: 005f85cf (CONDITIONAL_JUMP)
// 005f85c3: FILD qword ptr [ESI]
//   XREF to: 00688014 (DATA)
//   XREF to: 0068801c (DATA)
//   XREF to: 00688018 (DATA)
// 005f85c5: ADD ESI,0x8
// 005f85c8: FISTP qword ptr [EDI]
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e30 (WRITE)
//   XREF to: 00824e5c (WRITE)
// 005f85ca: ADD EDI,0x8
// 005f85cd: JMP 0x005f85be
//   XREF to: 005f85be (UNCONDITIONAL_JUMP)
// 005f85cf: ADD ECX,0x8
//   Label: LAB_005f85cf
// 005f85d2: JLE 0x005f85db
//   XREF to: 005f85db (CONDITIONAL_JUMP)
// 005f85d4: MOVSD ES:EDI,ESI
//   XREF to: 0068801c (DATA)
//   XREF to: 00824e30 (WRITE)
// 005f85d5: SUB ECX,0x4
// 005f85d8: JLE 0x005f85db
//   XREF to: 005f85db (CONDITIONAL_JUMP)
// 005f85da: MOVSD ES:EDI,ESI
//   XREF to: 00688020 (DATA)
//   XREF to: 00824e34 (WRITE)
// 005f85db: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_005f85db
//   XREF to: Stack[-0x24] (READ)
// 005f85df: ADD EBX,0x4
// 005f85e2: INC EAX
// 005f85e3: ADD EDX,0x30
// 005f85e6: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005f85ea: CMP EBP,EAX
// 005f85ec: JG 0x005f85a0
//   XREF to: 005f85a0 (CONDITIONAL_JUMP)
// 005f85ee: MOV EAX,EAX
// 005f85f0: ADD ESP,0x18
//   Label: LAB_005f85f0
// 005f85f3: POP EBP
// 005f85f4: POP EDI
// 005f85f5: POP ESI
// 005f85f6: POP EBX
// 005f85f7: RET
// 005f85f8: MOV dword ptr [0x03f99510],EBP
//   Label: LAB_005f85f8
//   XREF to: 03f99510 (WRITE)
// 005f85fe: XOR EDX,EDX
// 005f8600: XOR EBX,EBX
// 005f8602: MOV dword ptr [0x03f99514],EDX
//   XREF to: 03f99514 (WRITE)
// 005f8608: MOV dword ptr [0x03f99518],EDX
//   XREF to: 03f99518 (WRITE)
// 005f860e: MOV dword ptr [0x03f9951c],EDX
//   XREF to: 03f9951c (WRITE)
// 005f8614: MOV dword ptr [0x00824e24],EDX
//   XREF to: 00824e24 (WRITE)
// 005f861a: TEST EBP,EBP
// 005f861c: JLE 0x005f8680
//   XREF to: 005f8680 (CONDITIONAL_JUMP)
// 005f861e: MOV EDX,0x3f99b20
//   XREF to: 03f99b20 (DATA)
// 005f8623: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x28] (DATA)
// 005f8626: MOV EAX,dword ptr [ESP]
//   Label: LAB_005f8626
//   XREF to: Stack[-0x28] (DATA)
// 005f8629: IMUL ESI,dword ptr [EAX],0x30
// 005f862c: MOV ECX,0x30
// 005f8631: ADD ESI,0x688014
//   XREF to: 00688014 (DATA)
// 005f8637: MOV EDI,EDX
// 005f8639: TEST EDI,0x7
// 005f863f: JZ 0x005f8647
//   XREF to: 005f8647 (CONDITIONAL_JUMP)
// 005f8641: MOVSD ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 03f99b50 (WRITE)
// 005f8642: SUB ECX,0x4
// 005f8645: JLE 0x005f8664
//   XREF to: 005f8664 (CONDITIONAL_JUMP)
// 005f8647: SUB ECX,0x8
//   Label: LAB_005f8647
// 005f864a: JL 0x005f8658
//   XREF to: 005f8658 (CONDITIONAL_JUMP)
// 005f864c: FILD qword ptr [ESI]
//   XREF to: 00688014 (DATA)
//   XREF to: 0068801c (DATA)
//   XREF to: 00688018 (DATA)
// 005f864e: ADD ESI,0x8
// 005f8651: FISTP qword ptr [EDI]
//   XREF to: 03f99b20 (WRITE)
//   XREF to: 03f99b28 (WRITE)
//   XREF to: 03f99b54 (WRITE)
// 005f8653: ADD EDI,0x8
// 005f8656: JMP 0x005f8647
//   XREF to: 005f8647 (UNCONDITIONAL_JUMP)
// 005f8658: ADD ECX,0x8
//   Label: LAB_005f8658
// 005f865b: JLE 0x005f8664
//   XREF to: 005f8664 (CONDITIONAL_JUMP)
// 005f865d: MOVSD ES:EDI,ESI
//   XREF to: 0068801c (DATA)
//   XREF to: 03f99b28 (WRITE)
// 005f865e: SUB ECX,0x4
// 005f8661: JLE 0x005f8664
//   XREF to: 005f8664 (CONDITIONAL_JUMP)
// 005f8663: MOVSD ES:EDI,ESI
//   XREF to: 00688020 (DATA)
//   XREF to: 03f99b2c (WRITE)
// 005f8664: MOV EAX,dword ptr [ESP]
//   Label: LAB_005f8664
//   XREF to: Stack[-0x28] (DATA)
// 005f8667: INC EBX
// 005f8668: ADD EAX,0x4
// 005f866b: ADD EDX,0x30
// 005f866e: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 005f8671: CMP EBX,EBP
// 005f8673: JL 0x005f8626
//   XREF to: 005f8626 (CONDITIONAL_JUMP)
// 005f8675: LEA EAX,[EAX]
// 005f867b: LEA EDX,[EDX]
//   XREF to: 03f99b50 (DATA)
// 005f867e: MOV EBX,EBX
// 005f8680: XOR EDX,EDX
//   Label: LAB_005f8680
// 005f8682: MOV ECX,dword ptr [0x03f99510]
//   XREF to: 03f99510 (READ)
// 005f8688: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005f868c: TEST ECX,ECX
// 005f868e: JLE 0x005f873b
//   XREF to: 005f873b (CONDITIONAL_JUMP)
// 005f8694: MOV EBX,0x3f99b20
//   XREF to: 03f99b20 (DATA)
// 005f8699: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005f8699
//   XREF to: Stack[-0x20] (READ)
// 005f869d: MOV ECX,dword ptr [0x03f99510]
//   XREF to: 03f99510 (READ)
// 005f86a3: INC EAX
// 005f86a4: CMP EAX,ECX
// 005f86a6: JNZ 0x005f86aa
//   XREF to: 005f86aa (CONDITIONAL_JUMP)
// 005f86a8: XOR EAX,ECX
// 005f86aa: IMUL EAX,EAX,0x30
//   Label: LAB_005f86aa
// 005f86ad: MOV EBP,0x3f99b20
//   XREF to: 03f99b20 (DATA)
// 005f86b2: MOV EDX,EBX
//   XREF to: 03f99b50 (PARAM)
// 005f86b4: MOV ESI,dword ptr [EBX]
//   XREF to: 03f99b20 (READ)
//   XREF to: 03f99b50 (READ)
// 005f86b6: MOV EDI,dword ptr [EBX + 0x8]
//   XREF to: 03f99b28 (READ)
//   XREF to: 03f99b58 (READ)
// 005f86b9: ADD EBP,EAX
// 005f86bb: XOR EAX,EAX
// 005f86bd: CMP ESI,EDI
// 005f86bf: JL 0x005f86c6
//   XREF to: 005f86c6 (CONDITIONAL_JUMP)
// 005f86c1: MOV EAX,0x1
// 005f86c6: MOV ECX,dword ptr [EBP + 0x8]
//   Label: LAB_005f86c6
//   XREF to: 03f99b28 (DATA)
// 005f86c9: CMP ECX,dword ptr [EBP]
//   XREF to: 03f99b20 (DATA)
// 005f86cc: JG 0x005f86d0
//   XREF to: 005f86d0 (CONDITIONAL_JUMP)
// 005f86ce: OR AL,0x2
// 005f86d0: CMP EAX,0x3
//   Label: LAB_005f86d0
// 005f86d3: JA 0x005f8721
//   XREF to: 005f8721 (CONDITIONAL_JUMP)
// 005f86d5: JMP dword ptr [EAX*0x4 + 0x5f850c]
//   Label: switchD
//   XREF to: 005f86dc (COMPUTED_JUMP)
//   XREF to: 005f89dc (COMPUTED_JUMP)
//   XREF to: 005f8a05 (COMPUTED_JUMP)
//   XREF to: 005f8721 (COMPUTED_JUMP)
//   XREF to: 005f8518 (READ)
//   XREF to: 005f850c (READ)
// 005f86dc: IMUL EDI,dword ptr [0x03f99514],0x30
//   Label: caseD_0
//   XREF to: 03f99514 (READ)
// 005f86e3: MOV ECX,0x30
// 005f86e8: MOV ESI,EDX
// 005f86ea: ADD EDI,0x3f99520
//   XREF to: 03f99520 (DATA)
// 005f86f0: TEST EDI,0x7
// 005f86f6: JZ 0x005f86fe
//   XREF to: 005f86fe (CONDITIONAL_JUMP)
// 005f86f8: MOVSD ES:EDI,ESI
//   XREF to: 03f99b50 (READ)
//   XREF to: 03f99520 (WRITE)
// 005f86f9: SUB ECX,0x4
// 005f86fc: JLE 0x005f871b
//   XREF to: 005f871b (CONDITIONAL_JUMP)
// 005f86fe: SUB ECX,0x8
//   Label: LAB_005f86fe
// 005f8701: JL 0x005f870f
//   XREF to: 005f870f (CONDITIONAL_JUMP)
// 005f8703: FILD qword ptr [ESI]
//   XREF to: 03f99b50 (READ)
//   XREF to: 03f99b58 (READ)
//   XREF to: 03f99b54 (READ)
// 005f8705: ADD ESI,0x8
// 005f8708: FISTP qword ptr [EDI]
//   XREF to: 03f99520 (WRITE)
//   XREF to: 03f99528 (WRITE)
//   XREF to: 03f99524 (WRITE)
// 005f870a: ADD EDI,0x8
// 005f870d: JMP 0x005f86fe
//   XREF to: 005f86fe (UNCONDITIONAL_JUMP)
// 005f870f: ADD ECX,0x8
//   Label: LAB_005f870f
// 005f8712: JLE 0x005f871b
//   XREF to: 005f871b (CONDITIONAL_JUMP)
// 005f8714: MOVSD ES:EDI,ESI
//   XREF to: 03f99b58 (READ)
//   XREF to: 03f99528 (WRITE)
// 005f8715: SUB ECX,0x4
// 005f8718: JLE 0x005f871b
//   XREF to: 005f871b (CONDITIONAL_JUMP)
// 005f871a: MOVSD ES:EDI,ESI
//   XREF to: 03f99b5c (READ)
//   XREF to: 03f9952c (WRITE)
// 005f871b: INC dword ptr [0x03f99514]
//   Label: LAB_005f871b
//   XREF to: 03f99514 (READ_WRITE)
// 005f8721: MOV ESI,dword ptr [ESP + 0x8]
//   Label: caseD_3
//   XREF to: Stack[-0x20] (READ)
// 005f8725: MOV EDI,dword ptr [0x03f99510]
//   XREF to: 03f99510 (READ)
// 005f872b: INC ESI
// 005f872c: ADD EBX,0x30
//   XREF to: 03f99b50 (PARAM)
// 005f872f: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 005f8733: CMP ESI,EDI
// 005f8735: JL 0x005f8699
//   XREF to: 005f8699 (CONDITIONAL_JUMP)
// 005f873b: MOV EBP,dword ptr [0x03f99514]
//   Label: LAB_005f873b
//   XREF to: 03f99514 (READ)
// 005f8741: CMP EBP,0x3
// 005f8744: JL 0x005f85f0
//   XREF to: 005f85f0 (CONDITIONAL_JUMP)
// 005f874a: XOR EAX,EAX
// 005f874c: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005f8750: TEST EBP,EBP
// 005f8752: JLE 0x005f8805
//   XREF to: 005f8805 (CONDITIONAL_JUMP)
// 005f8758: MOV EBX,0x3f99520
//   XREF to: 03f99520 (PARAM)
// 005f875d: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_005f875d
//   XREF to: Stack[-0x18] (READ)
// 005f8761: MOV EDX,dword ptr [0x03f99514]
//   XREF to: 03f99514 (READ)
// 005f8767: INC EAX
// 005f8768: CMP EAX,EDX
// 005f876a: JNZ 0x005f876e
//   XREF to: 005f876e (CONDITIONAL_JUMP)
// 005f876c: XOR EAX,EDX
// 005f876e: IMUL EAX,EAX,0x30
//   Label: LAB_005f876e
// 005f8771: MOV EBP,0x3f99520
//   XREF to: 03f99520 (DATA)
// 005f8776: MOV EDX,EBX
//   XREF to: 03f99520 (PARAM)
// 005f8778: MOV ESI,dword ptr [EBX + 0x8]
//   XREF to: 03f99528 (READ)
//   XREF to: 03f99558 (READ)
// 005f877b: MOV ECX,dword ptr [EBX]
//   XREF to: 03f99520 (READ)
//   XREF to: 03f99550 (READ)
// 005f877d: NEG ESI
// 005f877f: ADD EBP,EAX
// 005f8781: XOR EAX,EAX
// 005f8783: CMP ESI,ECX
// 005f8785: JL 0x005f878c
//   XREF to: 005f878c (CONDITIONAL_JUMP)
// 005f8787: MOV EAX,0x1
// 005f878c: MOV ESI,dword ptr [EBP + 0x8]
//   Label: LAB_005f878c
//   XREF to: 03f99528 (DATA)
// 005f878f: MOV EDI,dword ptr [EBP]
//   XREF to: 03f99520 (DATA)
// 005f8792: NEG ESI
// 005f8794: CMP ESI,EDI
// 005f8796: JL 0x005f879a
//   XREF to: 005f879a (CONDITIONAL_JUMP)
// 005f8798: OR AL,0x2
// 005f879a: CMP EAX,0x3
//   Label: LAB_005f879a
// 005f879d: JA 0x005f87eb
//   XREF to: 005f87eb (CONDITIONAL_JUMP)
// 005f879f: JMP dword ptr [EAX*0x4 + 0x5f851c]
//   Label: switchD
//   XREF to: 005f87a6 (COMPUTED_JUMP)
//   XREF to: 005f8a76 (COMPUTED_JUMP)
//   XREF to: 005f87eb (COMPUTED_JUMP)
//   XREF to: 005f8a9f (COMPUTED_JUMP)
//   XREF to: 005f8528 (READ)
//   XREF to: 005f8520 (READ)
// 005f87a6: IMUL EDI,dword ptr [0x03f99518],0x30
//   Label: caseD_0
//   XREF to: 03f99518 (READ)
// 005f87ad: MOV ECX,0x30
// 005f87b2: MOV ESI,EDX
// 005f87b4: ADD EDI,0x3f9a120
//   XREF to: 03f9a120 (DATA)
// 005f87ba: TEST EDI,0x7
// 005f87c0: JZ 0x005f87c8
//   XREF to: 005f87c8 (CONDITIONAL_JUMP)
// 005f87c2: MOVSD ES:EDI,ESI
//   XREF to: 03f99520 (READ)
//   XREF to: 03f9a120 (WRITE)
// 005f87c3: SUB ECX,0x4
// 005f87c6: JLE 0x005f87e5
//   XREF to: 005f87e5 (CONDITIONAL_JUMP)
// 005f87c8: SUB ECX,0x8
//   Label: LAB_005f87c8
// 005f87cb: JL 0x005f87d9
//   XREF to: 005f87d9 (CONDITIONAL_JUMP)
// 005f87cd: FILD qword ptr [ESI]
//   XREF to: 03f99520 (READ)
//   XREF to: 03f99528 (READ)
//   XREF to: 03f99524 (READ)
// 005f87cf: ADD ESI,0x8
// 005f87d2: FISTP qword ptr [EDI]
//   XREF to: 03f9a120 (WRITE)
//   XREF to: 03f9a128 (WRITE)
//   XREF to: 03f9a124 (WRITE)
// 005f87d4: ADD EDI,0x8
// 005f87d7: JMP 0x005f87c8
//   XREF to: 005f87c8 (UNCONDITIONAL_JUMP)
// 005f87d9: ADD ECX,0x8
//   Label: LAB_005f87d9
// 005f87dc: JLE 0x005f87e5
//   XREF to: 005f87e5 (CONDITIONAL_JUMP)
// 005f87de: MOVSD ES:EDI,ESI
//   XREF to: 03f99528 (READ)
//   XREF to: 03f9a128 (WRITE)
// 005f87df: SUB ECX,0x4
// 005f87e2: JLE 0x005f87e5
//   XREF to: 005f87e5 (CONDITIONAL_JUMP)
// 005f87e4: MOVSD ES:EDI,ESI
//   XREF to: 03f9952c (READ)
//   XREF to: 03f9a12c (WRITE)
// 005f87e5: INC dword ptr [0x03f99518]
//   Label: LAB_005f87e5
//   XREF to: 03f99518 (READ_WRITE)
// 005f87eb: MOV ECX,dword ptr [ESP + 0x10]
//   Label: caseD_3
//   XREF to: Stack[-0x18] (READ)
// 005f87ef: MOV ESI,dword ptr [0x03f99514]
//   XREF to: 03f99514 (READ)
// 005f87f5: INC ECX
// 005f87f6: ADD EBX,0x30
// 005f87f9: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005f87fd: CMP ECX,ESI
// 005f87ff: JL 0x005f875d
//   XREF to: 005f875d (CONDITIONAL_JUMP)
// 005f8805: MOV EDI,dword ptr [0x03f99518]
//   Label: LAB_005f8805
//   XREF to: 03f99518 (READ)
// 005f880b: CMP EDI,0x3
// 005f880e: JL 0x005f85f0
//   XREF to: 005f85f0 (CONDITIONAL_JUMP)
// 005f8814: XOR EBP,EBP
// 005f8816: MOV dword ptr [ESP + 0x14],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 005f881a: TEST EDI,EDI
// 005f881c: JLE 0x005f88ca
//   XREF to: 005f88ca (CONDITIONAL_JUMP)
// 005f8822: MOV EBX,0x3f9a120
//   XREF to: 03f9a120 (DATA)
// 005f8827: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_005f8827
//   XREF to: Stack[-0x14] (READ)
// 005f882b: MOV EBP,dword ptr [0x03f99518]
//   XREF to: 03f99518 (READ)
// 005f8831: INC EAX
// 005f8832: CMP EAX,EBP
// 005f8834: JNZ 0x005f8838
//   XREF to: 005f8838 (CONDITIONAL_JUMP)
// 005f8836: XOR EAX,EBP
// 005f8838: IMUL EAX,EAX,0x30
//   Label: LAB_005f8838
// 005f883b: MOV EBP,0x3f9a120
//   XREF to: 03f9a120 (DATA)
// 005f8840: MOV EDX,EBX
//   XREF to: 03f9a150 (PARAM)
// 005f8842: MOV ESI,dword ptr [EBX + 0x4]
//   XREF to: 03f9a124 (READ)
//   XREF to: 03f9a154 (READ)
// 005f8845: MOV ECX,dword ptr [EBX + 0x8]
//   XREF to: 03f9a128 (READ)
//   XREF to: 03f9a158 (READ)
// 005f8848: ADD EBP,EAX
// 005f884a: XOR EAX,EAX
// 005f884c: CMP ESI,ECX
// 005f884e: JL 0x005f8855
//   XREF to: 005f8855 (CONDITIONAL_JUMP)
// 005f8850: MOV EAX,0x1
// 005f8855: MOV EDI,dword ptr [EBP + 0x8]
//   Label: LAB_005f8855
//   XREF to: 03f9a128 (DATA)
// 005f8858: CMP EDI,dword ptr [EBP + 0x4]
//   XREF to: 03f9a124 (DATA)
// 005f885b: JG 0x005f885f
//   XREF to: 005f885f (CONDITIONAL_JUMP)
// 005f885d: OR AL,0x2
// 005f885f: CMP EAX,0x3
//   Label: LAB_005f885f
// 005f8862: JA 0x005f88b0
//   XREF to: 005f88b0 (CONDITIONAL_JUMP)
// 005f8864: JMP dword ptr [EAX*0x4 + 0x5f852c]
//   Label: switchD
//   XREF to: 005f886b (COMPUTED_JUMP)
//   XREF to: 005f8b10 (COMPUTED_JUMP)
//   XREF to: 005f8b39 (COMPUTED_JUMP)
//   XREF to: 005f88b0 (COMPUTED_JUMP)
//   XREF to: 005f8538 (READ)
//   XREF to: 005f852c (READ)
// 005f886b: IMUL EDI,dword ptr [0x03f9951c],0x30
//   Label: caseD_0
//   XREF to: 03f9951c (READ)
// 005f8872: MOV ECX,0x30
// 005f8877: MOV ESI,EDX
// 005f8879: ADD EDI,0x3f9a720
//   XREF to: 03f9a720 (DATA)
// 005f887f: TEST EDI,0x7
// 005f8885: JZ 0x005f888d
//   XREF to: 005f888d (CONDITIONAL_JUMP)
// 005f8887: MOVSD ES:EDI,ESI
//   XREF to: 03f9a150 (READ)
//   XREF to: 03f9a720 (WRITE)
// 005f8888: SUB ECX,0x4
// 005f888b: JLE 0x005f88aa
//   XREF to: 005f88aa (CONDITIONAL_JUMP)
// 005f888d: SUB ECX,0x8
//   Label: LAB_005f888d
// 005f8890: JL 0x005f889e
//   XREF to: 005f889e (CONDITIONAL_JUMP)
// 005f8892: FILD qword ptr [ESI]
//   XREF to: 03f9a150 (READ)
//   XREF to: 03f9a158 (READ)
//   XREF to: 03f9a154 (READ)
// 005f8894: ADD ESI,0x8
// 005f8897: FISTP qword ptr [EDI]
//   XREF to: 03f9a720 (WRITE)
//   XREF to: 03f9a728 (WRITE)
//   XREF to: 03f9a724 (WRITE)
// 005f8899: ADD EDI,0x8
// 005f889c: JMP 0x005f888d
//   XREF to: 005f888d (UNCONDITIONAL_JUMP)
// 005f889e: ADD ECX,0x8
//   Label: LAB_005f889e
// 005f88a1: JLE 0x005f88aa
//   XREF to: 005f88aa (CONDITIONAL_JUMP)
// 005f88a3: MOVSD ES:EDI,ESI
//   XREF to: 03f9a158 (READ)
//   XREF to: 03f9a728 (WRITE)
// 005f88a4: SUB ECX,0x4
// 005f88a7: JLE 0x005f88aa
//   XREF to: 005f88aa (CONDITIONAL_JUMP)
// 005f88a9: MOVSD ES:EDI,ESI
//   XREF to: 03f9a15c (READ)
//   XREF to: 03f9a72c (WRITE)
// 005f88aa: INC dword ptr [0x03f9951c]
//   Label: LAB_005f88aa
//   XREF to: 03f9951c (READ_WRITE)
// 005f88b0: MOV EDX,dword ptr [ESP + 0x14]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (READ)
// 005f88b4: MOV ECX,dword ptr [0x03f99518]
//   XREF to: 03f99518 (READ)
// 005f88ba: INC EDX
// 005f88bb: ADD EBX,0x30
//   XREF to: 03f9a150 (PARAM)
// 005f88be: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005f88c2: CMP EDX,ECX
// 005f88c4: JL 0x005f8827
//   XREF to: 005f8827 (CONDITIONAL_JUMP)
// 005f88ca: MOV EBX,dword ptr [0x03f9951c]
//   Label: LAB_005f88ca
//   XREF to: 03f9951c (READ)
// 005f88d0: CMP EBX,0x3
// 005f88d3: JL 0x005f85f0
//   XREF to: 005f85f0 (CONDITIONAL_JUMP)
// 005f88d9: XOR ESI,ESI
// 005f88db: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 005f88df: TEST EBX,EBX
// 005f88e1: JLE 0x005f8995
//   XREF to: 005f8995 (CONDITIONAL_JUMP)
// 005f88e7: MOV EBX,0x3f9a720
//   XREF to: 03f9a720 (PARAM)
// 005f88ec: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_005f88ec
//   XREF to: Stack[-0x1c] (READ)
// 005f88f0: MOV EDI,dword ptr [0x03f9951c]
//   XREF to: 03f9951c (READ)
// 005f88f6: INC EAX
// 005f88f7: CMP EAX,EDI
// 005f88f9: JNZ 0x005f88fd
//   XREF to: 005f88fd (CONDITIONAL_JUMP)
// 005f88fb: XOR EAX,EDI
// 005f88fd: IMUL EAX,EAX,0x30
//   Label: LAB_005f88fd
// 005f8900: MOV EBP,0x3f9a720
//   XREF to: 03f9a720 (DATA)
// 005f8905: MOV EDX,EBX
//   XREF to: 03f9a720 (PARAM)
// 005f8907: MOV ESI,dword ptr [EBX + 0x8]
//   XREF to: 03f9a728 (READ)
//   XREF to: 03f9a758 (READ)
// 005f890a: MOV ECX,dword ptr [EBX + 0x4]
//   XREF to: 03f9a724 (READ)
//   XREF to: 03f9a754 (READ)
// 005f890d: NEG ESI
// 005f890f: ADD EBP,EAX
// 005f8911: XOR EAX,EAX
// 005f8913: CMP ESI,ECX
// 005f8915: JL 0x005f891c
//   XREF to: 005f891c (CONDITIONAL_JUMP)
// 005f8917: MOV EAX,0x1
// 005f891c: MOV ESI,dword ptr [EBP + 0x8]
//   Label: LAB_005f891c
//   XREF to: 03f9a728 (DATA)
// 005f891f: MOV EDI,dword ptr [EBP + 0x4]
//   XREF to: 03f9a724 (DATA)
// 005f8922: NEG ESI
// 005f8924: CMP ESI,EDI
// 005f8926: JL 0x005f892a
//   XREF to: 005f892a (CONDITIONAL_JUMP)
// 005f8928: OR AL,0x2
// 005f892a: CMP EAX,0x3
//   Label: LAB_005f892a
// 005f892d: JA 0x005f897b
//   XREF to: 005f897b (CONDITIONAL_JUMP)
// 005f892f: JMP dword ptr [EAX*0x4 + 0x5f853c]
//   Label: switchD
//   XREF to: 005f8936 (COMPUTED_JUMP)
//   XREF to: 005f8baa (COMPUTED_JUMP)
//   XREF to: 005f8bd3 (COMPUTED_JUMP)
//   XREF to: 005f897b (COMPUTED_JUMP)
//   XREF to: 005f8548 (READ)
//   XREF to: 005f8540 (READ)
// 005f8936: IMUL EDI,dword ptr [0x00824e24],0x30
//   Label: caseD_0
//   XREF to: 00824e24 (READ)
// 005f893d: MOV ECX,0x30
// 005f8942: MOV ESI,EDX
// 005f8944: ADD EDI,0x824e28
//   XREF to: 00824e28 (DATA)
// 005f894a: TEST EDI,0x7
// 005f8950: JZ 0x005f8958
//   XREF to: 005f8958 (CONDITIONAL_JUMP)
// 005f8952: MOVSD ES:EDI,ESI
//   XREF to: 03f9a720 (READ)
//   XREF to: 00824e28 (WRITE)
// 005f8953: SUB ECX,0x4
// 005f8956: JLE 0x005f8975
//   XREF to: 005f8975 (CONDITIONAL_JUMP)
// 005f8958: SUB ECX,0x8
//   Label: LAB_005f8958
// 005f895b: JL 0x005f8969
//   XREF to: 005f8969 (CONDITIONAL_JUMP)
// 005f895d: FILD qword ptr [ESI]
//   XREF to: 03f9a720 (READ)
//   XREF to: 03f9a728 (READ)
//   XREF to: 03f9a724 (READ)
// 005f895f: ADD ESI,0x8
// 005f8962: FISTP qword ptr [EDI]
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e30 (WRITE)
//   XREF to: 00824e2c (WRITE)
// 005f8964: ADD EDI,0x8
// 005f8967: JMP 0x005f8958
//   XREF to: 005f8958 (UNCONDITIONAL_JUMP)
// 005f8969: ADD ECX,0x8
//   Label: LAB_005f8969
// 005f896c: JLE 0x005f8975
//   XREF to: 005f8975 (CONDITIONAL_JUMP)
// 005f896e: MOVSD ES:EDI,ESI
//   XREF to: 03f9a728 (READ)
//   XREF to: 00824e30 (WRITE)
// 005f896f: SUB ECX,0x4
// 005f8972: JLE 0x005f8975
//   XREF to: 005f8975 (CONDITIONAL_JUMP)
// 005f8974: MOVSD ES:EDI,ESI
//   XREF to: 03f9a72c (READ)
//   XREF to: 00824e34 (WRITE)
// 005f8975: INC dword ptr [0x00824e24]
//   Label: LAB_005f8975
//   XREF to: 00824e24 (READ_WRITE)
// 005f897b: MOV EDX,dword ptr [ESP + 0xc]
//   Label: caseD_3
//   XREF to: Stack[-0x1c] (READ)
// 005f897f: MOV ECX,dword ptr [0x03f9951c]
//   XREF to: 03f9951c (READ)
// 005f8985: INC EDX
// 005f8986: ADD EBX,0x30
// 005f8989: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005f898d: CMP EDX,ECX
// 005f898f: JL 0x005f88ec
//   XREF to: 005f88ec (CONDITIONAL_JUMP)
// 005f8995: MOV EBX,dword ptr [0x00824e24]
//   Label: LAB_005f8995
//   XREF to: 00824e24 (READ)
// 005f899b: CMP EBX,0x3
// 005f899e: JL 0x005f85f0
//   XREF to: 005f85f0 (CONDITIONAL_JUMP)
// 005f89a4: MOV EAX,0x824e28
//   XREF to: 00824e28 (DATA)
// 005f89a9: XOR EBP,EBP
// 005f89ab: TEST EBX,EBX
// 005f89ad: JLE 0x005f85f0
//   XREF to: 005f85f0 (CONDITIONAL_JUMP)
// 005f89b3: MOV ECX,dword ptr [EAX + 0x8]
//   Label: LAB_005f89b3
//   XREF to: 00824e30 (READ)
//   XREF to: 00824e60 (READ)
// 005f89b6: TEST ECX,ECX
// 005f89b8: JZ 0x005f8c44
//   XREF to: 005f8c44 (CONDITIONAL_JUMP)
// 005f89be: CMP ECX,dword ptr [EAX]
//   XREF to: 00824e28 (READ)
//   XREF to: 00824e58 (READ)
// 005f89c0: JGE 0x005f8c55
//   XREF to: 005f8c55 (CONDITIONAL_JUMP)
// 005f89c6: MOV dword ptr [EAX],ECX
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e58 (WRITE)
// 005f89c8: MOV EDX,dword ptr [0x00824e24]
//   Label: LAB_005f89c8
//   XREF to: 00824e24 (READ)
// 005f89ce: INC EBP
// 005f89cf: ADD EAX,0x30
//   XREF to: 00824e58 (DATA)
// 005f89d2: CMP EBP,EDX
// 005f89d4: JGE 0x005f85f0
//   XREF to: 005f85f0 (CONDITIONAL_JUMP)
// 005f89da: JMP 0x005f89b3
//   XREF to: 005f89b3 (UNCONDITIONAL_JUMP)
// 005f89dc: IMUL EAX,dword ptr [0x03f99514],0x30
//   Label: caseD_1
//   XREF to: 03f99514 (READ)
// 005f89e3: ADD EAX,0x3f99520
//   XREF to: 03f99520 (PARAM)
// 005f89e8: PUSH EAX
//   XREF to: 03f99520 (DATA)
// 005f89e9: PUSH EDX
//   XREF to: 03f99b50 (DATA)
// 005f89ea: PUSH EBP
// 005f89eb: CALL core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0
//   XREF to: 005f7bc0 (UNCONDITIONAL_CALL)
// 005f89f0: MOV EBP,dword ptr [0x03f99514]
//   XREF to: 03f99514 (READ)
// 005f89f6: INC EBP
// 005f89f7: ADD ESP,0xc
// 005f89fa: MOV dword ptr [0x03f99514],EBP
//   XREF to: 03f99514 (WRITE)
// 005f8a00: JMP 0x005f8721
//   XREF to: 005f8721 (UNCONDITIONAL_JUMP)
// 005f8a05: IMUL EDI,dword ptr [0x03f99514],0x30
//   Label: caseD_2
//   XREF to: 03f99514 (READ)
// 005f8a0c: MOV ECX,0x30
// 005f8a11: ADD EDI,0x3f99520
//   XREF to: 03f99520 (DATA)
// 005f8a17: MOV ESI,EDX
// 005f8a19: TEST EDI,0x7
// 005f8a1f: JZ 0x005f8a27
//   XREF to: 005f8a27 (CONDITIONAL_JUMP)
// 005f8a21: MOVSD ES:EDI,ESI
//   XREF to: 03f99b50 (READ)
//   XREF to: 03f99520 (WRITE)
// 005f8a22: SUB ECX,0x4
// 005f8a25: JLE 0x005f8a44
//   XREF to: 005f8a44 (CONDITIONAL_JUMP)
// 005f8a27: SUB ECX,0x8
//   Label: LAB_005f8a27
// 005f8a2a: JL 0x005f8a38
//   XREF to: 005f8a38 (CONDITIONAL_JUMP)
// 005f8a2c: FILD qword ptr [ESI]
//   XREF to: 03f99b50 (READ)
//   XREF to: 03f99b58 (READ)
//   XREF to: 03f99b54 (READ)
// 005f8a2e: ADD ESI,0x8
// 005f8a31: FISTP qword ptr [EDI]
//   XREF to: 03f99520 (WRITE)
//   XREF to: 03f99528 (WRITE)
//   XREF to: 03f99524 (WRITE)
// 005f8a33: ADD EDI,0x8
// 005f8a36: JMP 0x005f8a27
//   XREF to: 005f8a27 (UNCONDITIONAL_JUMP)
// 005f8a38: ADD ECX,0x8
//   Label: LAB_005f8a38
// 005f8a3b: JLE 0x005f8a44
//   XREF to: 005f8a44 (CONDITIONAL_JUMP)
// 005f8a3d: MOVSD ES:EDI,ESI
//   XREF to: 03f99b58 (READ)
//   XREF to: 03f99528 (WRITE)
// 005f8a3e: SUB ECX,0x4
// 005f8a41: JLE 0x005f8a44
//   XREF to: 005f8a44 (CONDITIONAL_JUMP)
// 005f8a43: MOVSD ES:EDI,ESI
//   XREF to: 03f99b5c (READ)
//   XREF to: 03f9952c (WRITE)
// 005f8a44: MOV EDI,dword ptr [0x03f99514]
//   Label: LAB_005f8a44
//   XREF to: 03f99514 (READ)
// 005f8a4a: INC EDI
// 005f8a4b: MOV dword ptr [0x03f99514],EDI
//   XREF to: 03f99514 (WRITE)
// 005f8a51: IMUL EAX,EDI,0x30
// 005f8a54: ADD EAX,0x3f99520
//   XREF to: 03f99550 (PARAM)
//   XREF to: 03f99520 (DATA)
// 005f8a59: PUSH EAX
//   XREF to: 03f99550 (DATA)
// 005f8a5a: PUSH EBP
// 005f8a5b: PUSH EDX
//   XREF to: 03f99b50 (DATA)
// 005f8a5c: CALL core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0
//   XREF to: 005f7bc0 (UNCONDITIONAL_CALL)
// 005f8a61: MOV ESI,dword ptr [0x03f99514]
//   XREF to: 03f99514 (READ)
// 005f8a67: INC ESI
// 005f8a68: ADD ESP,0xc
// 005f8a6b: MOV dword ptr [0x03f99514],ESI
//   XREF to: 03f99514 (WRITE)
// 005f8a71: JMP 0x005f8721
//   XREF to: 005f8721 (UNCONDITIONAL_JUMP)
// 005f8a76: IMUL EAX,dword ptr [0x03f99518],0x30
//   Label: caseD_1
//   XREF to: 03f99518 (READ)
// 005f8a7d: ADD EAX,0x3f9a120
//   XREF to: 03f9a120 (PARAM)
// 005f8a82: PUSH EAX
//   XREF to: 03f9a120 (DATA)
// 005f8a83: PUSH EDX
//   XREF to: 03f99520 (DATA)
// 005f8a84: PUSH EBP
// 005f8a85: CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80
//   XREF to: 005f7c80 (UNCONDITIONAL_CALL)
// 005f8a8a: MOV ESI,dword ptr [0x03f99518]
//   XREF to: 03f99518 (READ)
// 005f8a90: INC ESI
// 005f8a91: ADD ESP,0xc
// 005f8a94: MOV dword ptr [0x03f99518],ESI
//   XREF to: 03f99518 (WRITE)
// 005f8a9a: JMP 0x005f87eb
//   XREF to: 005f87eb (UNCONDITIONAL_JUMP)
// 005f8a9f: IMUL EDI,dword ptr [0x03f99518],0x30
//   Label: caseD_2
//   XREF to: 03f99518 (READ)
// 005f8aa6: MOV ECX,0x30
// 005f8aab: MOV ESI,EDX
// 005f8aad: ADD EDI,0x3f9a120
//   XREF to: 03f9a120 (DATA)
// 005f8ab3: TEST EDI,0x7
// 005f8ab9: JZ 0x005f8ac1
//   XREF to: 005f8ac1 (CONDITIONAL_JUMP)
// 005f8abb: MOVSD ES:EDI,ESI
//   XREF to: 03f99520 (READ)
//   XREF to: 03f9a120 (WRITE)
// 005f8abc: SUB ECX,0x4
// 005f8abf: JLE 0x005f8ade
//   XREF to: 005f8ade (CONDITIONAL_JUMP)
// 005f8ac1: SUB ECX,0x8
//   Label: LAB_005f8ac1
// 005f8ac4: JL 0x005f8ad2
//   XREF to: 005f8ad2 (CONDITIONAL_JUMP)
// 005f8ac6: FILD qword ptr [ESI]
//   XREF to: 03f99520 (READ)
//   XREF to: 03f99528 (READ)
//   XREF to: 03f99524 (READ)
// 005f8ac8: ADD ESI,0x8
// 005f8acb: FISTP qword ptr [EDI]
//   XREF to: 03f9a120 (WRITE)
//   XREF to: 03f9a128 (WRITE)
//   XREF to: 03f9a124 (WRITE)
// 005f8acd: ADD EDI,0x8
// 005f8ad0: JMP 0x005f8ac1
//   XREF to: 005f8ac1 (UNCONDITIONAL_JUMP)
// 005f8ad2: ADD ECX,0x8
//   Label: LAB_005f8ad2
// 005f8ad5: JLE 0x005f8ade
//   XREF to: 005f8ade (CONDITIONAL_JUMP)
// 005f8ad7: MOVSD ES:EDI,ESI
//   XREF to: 03f99528 (READ)
//   XREF to: 03f9a128 (WRITE)
// 005f8ad8: SUB ECX,0x4
// 005f8adb: JLE 0x005f8ade
//   XREF to: 005f8ade (CONDITIONAL_JUMP)
// 005f8add: MOVSD ES:EDI,ESI
//   XREF to: 03f9952c (READ)
//   XREF to: 03f9a12c (WRITE)
// 005f8ade: MOV ECX,dword ptr [0x03f99518]
//   Label: LAB_005f8ade
//   XREF to: 03f99518 (READ)
// 005f8ae4: INC ECX
// 005f8ae5: MOV dword ptr [0x03f99518],ECX
//   XREF to: 03f99518 (WRITE)
// 005f8aeb: IMUL EAX,ECX,0x30
// 005f8aee: ADD EAX,0x3f9a120
//   XREF to: 03f9a150 (PARAM)
//   XREF to: 03f9a120 (DATA)
// 005f8af3: PUSH EAX
//   XREF to: 03f9a150 (DATA)
// 005f8af4: PUSH EBP
// 005f8af5: PUSH EDX
//   XREF to: 03f99520 (DATA)
// 005f8af6: CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80
//   XREF to: 005f7c80 (UNCONDITIONAL_CALL)
// 005f8afb: MOV EDI,dword ptr [0x03f99518]
//   XREF to: 03f99518 (READ)
// 005f8b01: INC EDI
// 005f8b02: ADD ESP,0xc
// 005f8b05: MOV dword ptr [0x03f99518],EDI
//   XREF to: 03f99518 (WRITE)
// 005f8b0b: JMP 0x005f87eb
//   XREF to: 005f87eb (UNCONDITIONAL_JUMP)
// 005f8b10: IMUL EAX,dword ptr [0x03f9951c],0x30
//   Label: caseD_1
//   XREF to: 03f9951c (READ)
// 005f8b17: ADD EAX,0x3f9a720
//   XREF to: 03f9a720 (PARAM)
// 005f8b1c: PUSH EAX
//   XREF to: 03f9a720 (DATA)
// 005f8b1d: PUSH EDX
//   XREF to: 03f9a150 (DATA)
// 005f8b1e: PUSH EBP
// 005f8b1f: CALL core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40
//   XREF to: 005f7d40 (UNCONDITIONAL_CALL)
// 005f8b24: MOV ESI,dword ptr [0x03f9951c]
//   XREF to: 03f9951c (READ)
// 005f8b2a: INC ESI
// 005f8b2b: ADD ESP,0xc
// 005f8b2e: MOV dword ptr [0x03f9951c],ESI
//   XREF to: 03f9951c (WRITE)
// 005f8b34: JMP 0x005f88b0
//   XREF to: 005f88b0 (UNCONDITIONAL_JUMP)
// 005f8b39: IMUL EDI,dword ptr [0x03f9951c],0x30
//   Label: caseD_2
//   XREF to: 03f9951c (READ)
// 005f8b40: MOV ECX,0x30
// 005f8b45: MOV ESI,EDX
// 005f8b47: ADD EDI,0x3f9a720
//   XREF to: 03f9a720 (DATA)
// 005f8b4d: TEST EDI,0x7
// 005f8b53: JZ 0x005f8b5b
//   XREF to: 005f8b5b (CONDITIONAL_JUMP)
// 005f8b55: MOVSD ES:EDI,ESI
//   XREF to: 03f9a150 (READ)
//   XREF to: 03f9a720 (WRITE)
// 005f8b56: SUB ECX,0x4
// 005f8b59: JLE 0x005f8b78
//   XREF to: 005f8b78 (CONDITIONAL_JUMP)
// 005f8b5b: SUB ECX,0x8
//   Label: LAB_005f8b5b
// 005f8b5e: JL 0x005f8b6c
//   XREF to: 005f8b6c (CONDITIONAL_JUMP)
// 005f8b60: FILD qword ptr [ESI]
//   XREF to: 03f9a150 (READ)
//   XREF to: 03f9a158 (READ)
//   XREF to: 03f9a154 (READ)
// 005f8b62: ADD ESI,0x8
// 005f8b65: FISTP qword ptr [EDI]
//   XREF to: 03f9a720 (WRITE)
//   XREF to: 03f9a728 (WRITE)
//   XREF to: 03f9a724 (WRITE)
// 005f8b67: ADD EDI,0x8
// 005f8b6a: JMP 0x005f8b5b
//   XREF to: 005f8b5b (UNCONDITIONAL_JUMP)
// 005f8b6c: ADD ECX,0x8
//   Label: LAB_005f8b6c
// 005f8b6f: JLE 0x005f8b78
//   XREF to: 005f8b78 (CONDITIONAL_JUMP)
// 005f8b71: MOVSD ES:EDI,ESI
//   XREF to: 03f9a158 (READ)
//   XREF to: 03f9a728 (WRITE)
// 005f8b72: SUB ECX,0x4
// 005f8b75: JLE 0x005f8b78
//   XREF to: 005f8b78 (CONDITIONAL_JUMP)
// 005f8b77: MOVSD ES:EDI,ESI
//   XREF to: 03f9a15c (READ)
//   XREF to: 03f9a72c (WRITE)
// 005f8b78: MOV ECX,dword ptr [0x03f9951c]
//   Label: LAB_005f8b78
//   XREF to: 03f9951c (READ)
// 005f8b7e: INC ECX
// 005f8b7f: MOV dword ptr [0x03f9951c],ECX
//   XREF to: 03f9951c (WRITE)
// 005f8b85: IMUL EAX,ECX,0x30
// 005f8b88: ADD EAX,0x3f9a720
//   XREF to: 03f9a750 (PARAM)
//   XREF to: 03f9a720 (DATA)
// 005f8b8d: PUSH EAX
//   XREF to: 03f9a750 (DATA)
// 005f8b8e: PUSH EBP
// 005f8b8f: PUSH EDX
//   XREF to: 03f9a150 (DATA)
// 005f8b90: CALL core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40
//   XREF to: 005f7d40 (UNCONDITIONAL_CALL)
// 005f8b95: MOV EDI,dword ptr [0x03f9951c]
//   XREF to: 03f9951c (READ)
// 005f8b9b: INC EDI
// 005f8b9c: ADD ESP,0xc
// 005f8b9f: MOV dword ptr [0x03f9951c],EDI
//   XREF to: 03f9951c (WRITE)
// 005f8ba5: JMP 0x005f88b0
//   XREF to: 005f88b0 (UNCONDITIONAL_JUMP)
// 005f8baa: IMUL EAX,dword ptr [0x00824e24],0x30
//   Label: caseD_1
//   XREF to: 00824e24 (READ)
// 005f8bb1: ADD EAX,0x824e28
//   XREF to: 00824e28 (PARAM)
// 005f8bb6: PUSH EAX
//   XREF to: 00824e28 (DATA)
// 005f8bb7: PUSH EDX
//   XREF to: 03f9a720 (DATA)
// 005f8bb8: PUSH EBP
// 005f8bb9: CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00
//   XREF to: 005f7e00 (UNCONDITIONAL_CALL)
// 005f8bbe: MOV ESI,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 005f8bc4: INC ESI
// 005f8bc5: ADD ESP,0xc
// 005f8bc8: MOV dword ptr [0x00824e24],ESI
//   XREF to: 00824e24 (WRITE)
// 005f8bce: JMP 0x005f897b
//   XREF to: 005f897b (UNCONDITIONAL_JUMP)
// 005f8bd3: IMUL EDI,dword ptr [0x00824e24],0x30
//   Label: caseD_2
//   XREF to: 00824e24 (READ)
// 005f8bda: MOV ECX,0x30
// 005f8bdf: MOV ESI,EDX
// 005f8be1: ADD EDI,0x824e28
//   XREF to: 00824e28 (DATA)
// 005f8be7: TEST EDI,0x7
// 005f8bed: JZ 0x005f8bf5
//   XREF to: 005f8bf5 (CONDITIONAL_JUMP)
// 005f8bef: MOVSD ES:EDI,ESI
//   XREF to: 03f9a720 (READ)
//   XREF to: 00824e28 (WRITE)
// 005f8bf0: SUB ECX,0x4
// 005f8bf3: JLE 0x005f8c12
//   XREF to: 005f8c12 (CONDITIONAL_JUMP)
// 005f8bf5: SUB ECX,0x8
//   Label: LAB_005f8bf5
// 005f8bf8: JL 0x005f8c06
//   XREF to: 005f8c06 (CONDITIONAL_JUMP)
// 005f8bfa: FILD qword ptr [ESI]
//   XREF to: 03f9a720 (READ)
//   XREF to: 03f9a728 (READ)
//   XREF to: 03f9a724 (READ)
// 005f8bfc: ADD ESI,0x8
// 005f8bff: FISTP qword ptr [EDI]
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e30 (WRITE)
//   XREF to: 00824e2c (WRITE)
// 005f8c01: ADD EDI,0x8
// 005f8c04: JMP 0x005f8bf5
//   XREF to: 005f8bf5 (UNCONDITIONAL_JUMP)
// 005f8c06: ADD ECX,0x8
//   Label: LAB_005f8c06
// 005f8c09: JLE 0x005f8c12
//   XREF to: 005f8c12 (CONDITIONAL_JUMP)
// 005f8c0b: MOVSD ES:EDI,ESI
//   XREF to: 03f9a728 (READ)
//   XREF to: 00824e30 (WRITE)
// 005f8c0c: SUB ECX,0x4
// 005f8c0f: JLE 0x005f8c12
//   XREF to: 005f8c12 (CONDITIONAL_JUMP)
// 005f8c11: MOVSD ES:EDI,ESI
//   XREF to: 03f9a72c (READ)
//   XREF to: 00824e34 (WRITE)
// 005f8c12: MOV ECX,dword ptr [0x00824e24]
//   Label: LAB_005f8c12
//   XREF to: 00824e24 (READ)
// 005f8c18: INC ECX
// 005f8c19: MOV dword ptr [0x00824e24],ECX
//   XREF to: 00824e24 (WRITE)
// 005f8c1f: IMUL EAX,ECX,0x30
// 005f8c22: ADD EAX,0x824e28
//   XREF to: 00824e58 (PARAM)
//   XREF to: 00824e28 (DATA)
// 005f8c27: PUSH EAX
//   XREF to: 00824e58 (DATA)
// 005f8c28: PUSH EBP
// 005f8c29: PUSH EDX
//   XREF to: 03f9a720 (DATA)
// 005f8c2a: CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00
//   XREF to: 005f7e00 (UNCONDITIONAL_CALL)
// 005f8c2f: MOV EDI,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 005f8c35: INC EDI
// 005f8c36: ADD ESP,0xc
// 005f8c39: MOV dword ptr [0x00824e24],EDI
//   XREF to: 00824e24 (WRITE)
// 005f8c3f: JMP 0x005f897b
//   XREF to: 005f897b (UNCONDITIONAL_JUMP)
// 005f8c44: MOV dword ptr [EAX + 0x8],0x1
//   Label: LAB_005f8c44
//   XREF to: 00824e60 (WRITE)
// 005f8c4b: MOV dword ptr [EAX],ECX
//   XREF to: 00824e58 (WRITE)
// 005f8c4d: MOV dword ptr [EAX + 0x4],ECX
//   XREF to: 00824e5c (WRITE)
// 005f8c50: JMP 0x005f89c8
//   XREF to: 005f89c8 (UNCONDITIONAL_JUMP)
// 005f8c55: MOV EDX,ECX
//   Label: LAB_005f8c55
// 005f8c57: MOV ESI,dword ptr [EAX]
//   XREF to: 00824e58 (READ)
// 005f8c59: NEG EDX
// 005f8c5b: CMP EDX,ESI
// 005f8c5d: JLE 0x005f8c66
//   XREF to: 005f8c66 (CONDITIONAL_JUMP)
// 005f8c5f: MOV dword ptr [EAX],EDX
//   XREF to: 00824e58 (WRITE)
// 005f8c61: JMP 0x005f89c8
//   XREF to: 005f89c8 (UNCONDITIONAL_JUMP)
// 005f8c66: MOV EBX,dword ptr [EAX + 0x4]
//   Label: LAB_005f8c66
//   XREF to: 00824e5c (READ)
// 005f8c69: CMP EBX,ECX
// 005f8c6b: JLE 0x005f8c75
//   XREF to: 005f8c75 (CONDITIONAL_JUMP)
// 005f8c6d: MOV dword ptr [EAX + 0x4],ECX
//   XREF to: 00824e5c (WRITE)
// 005f8c70: JMP 0x005f89c8
//   XREF to: 005f89c8 (UNCONDITIONAL_JUMP)
// 005f8c75: CMP EDX,EBX
//   Label: LAB_005f8c75
// 005f8c77: JLE 0x005f89c8
//   XREF to: 005f89c8 (CONDITIONAL_JUMP)
// 005f8c7d: MOV dword ptr [EAX + 0x4],EDX
//   XREF to: 00824e5c (WRITE)
// 005f8c80: JMP 0x005f89c8
//   XREF to: 005f89c8 (UNCONDITIONAL_JUMP)
