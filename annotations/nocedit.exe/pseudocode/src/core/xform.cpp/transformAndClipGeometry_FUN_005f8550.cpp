// Name: core_xform.cpp_transformAndClipGeometry_FUN_005f8550
// Address: 005f8550
// Address Range: [[005f8550, 005f8c84]]
// Convention: __cdecl
// Signature: SRenderVertex * core_xform.cpp_transformAndClipGeometry_FUN_005f8550(int vertex_count, int * vertex_indices)

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
        if (iVar18 != 0 && -9 < iVar18 + -8) {
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
        if (iVar14 != 0 && -9 < iVar14 + -8) {
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
          if (iVar18 != 0 && -9 < iVar18 + -8) {
            (pSVar19->projected_vertex).transformed_x = (pSVar20->projected_vertex).transformed_x;
            if (4 < iVar18) {
              *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                   *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
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
          if (iVar18 != 0 && -9 < iVar18 + -8) {
            (pSVar21->projected_vertex).transformed_x = (pSVar19->projected_vertex).transformed_x;
            if (4 < iVar18) {
              *(uint *)((int)pSVar21 + (uint)bVar22 * -8 + 4) =
                   *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
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
            if (iVar18 != 0 && -9 < iVar18 + -8) {
              (pSVar19->projected_vertex).transformed_x = (pSVar20->projected_vertex).transformed_x;
              if (4 < iVar18) {
                *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                     *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
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
            if (iVar18 != 0 && -9 < iVar18 + -8) {
              (pSVar21->projected_vertex).transformed_x = (pSVar19->projected_vertex).transformed_x;
              if (4 < iVar18) {
                *(uint *)((int)pSVar21 + (uint)bVar22 * -8 + 4) =
                     *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
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
              if (iVar18 != 0 && -9 < iVar18 + -8) {
                (pSVar19->projected_vertex).transformed_x =
                     (pSVar20->projected_vertex).transformed_x;
                if (4 < iVar18) {
                  *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                       *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
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
              if (iVar18 != 0 && -9 < iVar18 + -8) {
                (pSVar19->projected_vertex).transformed_x =
                     (pSVar20->projected_vertex).transformed_x;
                if (4 < iVar18) {
                  *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                       *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
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
                if (iVar18 != 0 && -9 < iVar18 + -8) {
                  (pSVar19->projected_vertex).transformed_x =
                       (pSVar20->projected_vertex).transformed_x;
                  if (4 < iVar18) {
                    *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                         *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
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
                if (iVar18 != 0 && -9 < iVar18 + -8) {
                  (pSVar19->projected_vertex).transformed_x =
                       (pSVar20->projected_vertex).transformed_x;
                  if (4 < iVar18) {
                    *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                         *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
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
