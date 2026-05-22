// Name: core_xform.cpp_transformAndClipGeometry_FUN_005f8550
// Address: 005f8550
// Address Range: [[005f8550, 005f8c84]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_transformAndClipGeometry_FUN_005f8550(int vertex_count,int *vertex_indices)

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

void __cdecl core_xform_cpp_transformAndClipGeometry_FUN_005f8550(int vertex_count,int *vertex_indices)

{
  int iVar1;
  int iVar2;
  byte bVar12;
  byte bVar3;
  int iVar4;
  uint uVar13;
  uint uVar5;
  int iVar14;
  int *piVar15;
  SRenderVertex *pSVar16;
  SRenderVertex *pSVar6;
  int iVar17;
  int iVar18;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  SRenderVertex *pSVar19;
  SRenderVertex *pSVar20;
  SRenderVertex *pSVar9;
  SRenderVertex *pSVar21;
  byte bVar22;
  int *local_28;
  SRenderVertex *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  longlong lVar8;
  longlong lVar7;
  int iVar11;
  longlong lVar2;
  longlong lVar1;
  longlong lVar6;
  longlong lVar5;
  longlong lVar4;
  longlong lVar3;
  longlong lVar10;
  longlong lVar9;
  
  iVar4 = 0;
  iVar18 = 0;
  piVar15 = vertex_indices;
  if (0 < vertex_count) {
    do {
      if ((g_RenderVertexBuffer[*piVar15].projected_vertex.screen_x & 0x80000000U) != 0) {
        iVar18 = iVar18 + 1;
      }
      iVar4 = iVar4 + 1;
      piVar15 = piVar15 + 1;
    } while (iVar4 < vertex_count);
  }
  if (iVar18 == 0) {
    g_ClippedVertexCount = vertex_count;
    if (0 < vertex_count) {
      pSVar16 = g_ClippedVertexBuffer;
      local_24 = (SRenderVertex *)0x0;
      do {
        pSVar7 = g_RenderVertexBuffer + *vertex_indices;
        iVar4 = 0x30;
        pSVar6 = pSVar16;
        while (7 < iVar4) {
          lVar1._0_4_ = (pSVar7->projected_vertex).transformed_x;
          lVar1._4_4_ = (pSVar7->projected_vertex).transformed_y;
          pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
          (pSVar6->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
          (pSVar6->projected_vertex).transformed_y =
               (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
          pSVar6 = (SRenderVertex *)&(pSVar6->projected_vertex).transformed_z;
          iVar4 = iVar4 + -8;
        }
        if (iVar4 != 0 && -9 < iVar4 + -8) {
          (pSVar6->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
          if (4 < iVar4) {
            (pSVar6->projected_vertex).transformed_y = (pSVar7->projected_vertex).transformed_y;
          }
        }
        vertex_indices = vertex_indices + 1;
        local_24 = (SRenderVertex *)((int)&(local_24->projected_vertex).transformed_x + 1);
        pSVar16 = pSVar16 + 1;
      } while ((int)local_24 < vertex_count);
    }
  }
  else {
    g_ClipVertexCountStage1 = vertex_count;
    iVar4 = 0;
    g_ClipVertexCountStage2 = 0;
    g_ClipVertexCountStage3 = 0;
    g_ClipVertexCountStage4 = 0;
    g_ClippedVertexCount = 0;
    if (0 < vertex_count) {
      pSVar6 = g_ClipVertexBufferStage1;
      local_28 = vertex_indices;
      do {
        pSVar8 = g_RenderVertexBuffer + *local_28;
        iVar14 = 0x30;
        pSVar7 = pSVar6;
        while (iVar14 = iVar14 + -8, 7 < iVar14) {
          lVar2._0_4_ = (pSVar8->projected_vertex).transformed_x;
          lVar2._4_4_ = (pSVar8->projected_vertex).transformed_y;
          pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
          (pSVar7->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
          (pSVar7->projected_vertex).transformed_y =
               (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
          pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
          iVar14 = iVar14;
        }
        if (iVar14 != 0 && -9 < iVar14) {
          (pSVar7->projected_vertex).transformed_x = (pSVar8->projected_vertex).transformed_x;
          if (4 < iVar14) {
            (pSVar7->projected_vertex).transformed_y = (pSVar8->projected_vertex).transformed_y;
          }
        }
        iVar4 = iVar4 + 1;
        local_28 = local_28 + 1;
        pSVar6 = pSVar6 + 1;
      } while (iVar4 < vertex_count);
    }
    local_20 = 0;
    if (0 < g_ClipVertexCountStage1) {
      pSVar6 = g_ClipVertexBufferStage1;
      do {
        uVar13 = local_20 + 1;
        if (uVar13 == g_ClipVertexCountStage1) {
          uVar13 = uVar13 ^ g_ClipVertexCountStage1;
        }
        pSVar7 = g_ClipVertexBufferStage1 + uVar13;
        bVar12 = (pSVar6->projected_vertex).transformed_z <=
                 (pSVar6->projected_vertex).transformed_x;
        if (g_ClipVertexBufferStage1[uVar13].projected_vertex.transformed_z <=
            (pSVar7->projected_vertex).transformed_x) {
          bVar12 = bVar12 | 2;
        }
        switch(bVar12) {
        case 0:
          pSVar8 = g_ClipVertexBufferStage2 + g_ClipVertexCountStage2;
          iVar4 = 0x30;
          pSVar7 = pSVar6;
          while (7 < iVar4) {
            lVar3._0_4_ = (pSVar7->projected_vertex).transformed_x;
            lVar3._4_4_ = (pSVar7->projected_vertex).transformed_y;
            pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
            (pSVar8->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar3);
            (pSVar8->projected_vertex).transformed_y =
                 (int)((ulonglong)(longlong)ROUND((float10)lVar3) >> 0x20);
            pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
            iVar4 = iVar4 + -8;
          }
          if (iVar4 != 0 && -9 < iVar4 + -8) {
            (pSVar8->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
            if (4 < iVar4) {
              (pSVar8->projected_vertex).transformed_y = (pSVar7->projected_vertex).transformed_y;
            }
          }
          g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
          break;
        case 1:
          core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0
                    (pSVar7,pSVar6,g_ClipVertexBufferStage2 + g_ClipVertexCountStage2);
          g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
          break;
        case 2:
          pSVar9 = g_ClipVertexBufferStage2 + g_ClipVertexCountStage2;
          iVar4 = 0x30;
          pSVar8 = pSVar6;
          while (7 < iVar4) {
            lVar7._0_4_ = (pSVar8->projected_vertex).transformed_x;
            lVar7._4_4_ = (pSVar8->projected_vertex).transformed_y;
            pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
            (pSVar9->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar7);
            (pSVar9->projected_vertex).transformed_y =
                 (int)((ulonglong)(longlong)ROUND((float10)lVar7) >> 0x20);
            pSVar9 = (SRenderVertex *)&(pSVar9->projected_vertex).transformed_z;
            iVar4 = iVar4 + -8;
          }
          if (iVar4 != 0 && -9 < iVar4 + -8) {
            (pSVar9->projected_vertex).transformed_x = (pSVar8->projected_vertex).transformed_x;
            if (4 < iVar4) {
              (pSVar9->projected_vertex).transformed_y = (pSVar8->projected_vertex).transformed_y;
            }
          }
          g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
          core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0
                    (pSVar6,pSVar7,g_ClipVertexBufferStage2 + g_ClipVertexCountStage2);
          g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
        }
        local_20 = local_20 + 1;
        pSVar6 = pSVar6 + 1;
      } while (local_20 < g_ClipVertexCountStage1);
    }
    if (2 < g_ClipVertexCountStage2) {
      local_18 = 0;
      if (0 < g_ClipVertexCountStage2) {
        pSVar6 = g_ClipVertexBufferStage2;
        do {
          uVar5 = local_18 + 1;
          if (uVar5 == g_ClipVertexCountStage2) {
            uVar5 = uVar5 ^ g_ClipVertexCountStage2;
          }
          pSVar7 = g_ClipVertexBufferStage2 + uVar5;
          bVar3 = (pSVar6->projected_vertex).transformed_x <=
                  -(pSVar6->projected_vertex).transformed_z;
          if ((pSVar7->projected_vertex).transformed_x <=
              -g_ClipVertexBufferStage2[uVar5].projected_vertex.transformed_z) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            pSVar8 = g_ClipVertexBufferStage3 + g_ClipVertexCountStage3;
            iVar4 = 0x30;
            pSVar7 = pSVar6;
            while (7 < iVar4) {
              lVar4._0_4_ = (pSVar7->projected_vertex).transformed_x;
              lVar4._4_4_ = (pSVar7->projected_vertex).transformed_y;
              pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
              (pSVar8->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar4);
              (pSVar8->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar4) >> 0x20);
              pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
              iVar4 = iVar4 + -8;
            }
            if (iVar4 != 0 && -9 < iVar4 + -8) {
              (pSVar8->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
              if (4 < iVar4) {
                (pSVar8->projected_vertex).transformed_y = (pSVar7->projected_vertex).transformed_y;
              }
            }
            g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
            break;
          case 1:
            core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80
                      (pSVar7,pSVar6,g_ClipVertexBufferStage3 + g_ClipVertexCountStage3);
            g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
            break;
          case 2:
            pSVar21 = g_ClipVertexBufferStage3 + g_ClipVertexCountStage3;
            iVar4 = 0x30;
            pSVar19 = pSVar6;
            while (7 < iVar4) {
              lVar8._0_4_ = (pSVar19->projected_vertex).transformed_x;
              lVar8._4_4_ = (pSVar19->projected_vertex).transformed_y;
              pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
              (pSVar21->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar8);
              (pSVar21->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar8) >> 0x20);
              pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
              iVar4 = iVar4 + -8;
            }
            if (iVar4 != 0 && -9 < iVar4 + -8) {
              (pSVar21->projected_vertex).transformed_x = (pSVar19->projected_vertex).transformed_x;
              if (4 < iVar4) {
                (pSVar21->projected_vertex).transformed_y =
                     (pSVar19->projected_vertex).transformed_y;
              }
            }
            g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
            core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80
                      (pSVar6,pSVar7,g_ClipVertexBufferStage3 + g_ClipVertexCountStage3);
            g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
          }
          local_18 = local_18 + 1;
          pSVar6 = pSVar6 + 1;
        } while (local_18 < g_ClipVertexCountStage2);
      }
      if (2 < g_ClipVertexCountStage3) {
        local_14 = 0;
        if (0 < g_ClipVertexCountStage3) {
          pSVar6 = g_ClipVertexBufferStage3;
          do {
            uVar5 = local_14 + 1;
            if (uVar5 == g_ClipVertexCountStage3) {
              uVar5 = uVar5 ^ g_ClipVertexCountStage3;
            }
            bVar3 = (pSVar6->projected_vertex).transformed_z <=
                    (pSVar6->projected_vertex).transformed_y;
            if (g_ClipVertexBufferStage3[uVar5].projected_vertex.transformed_z <=
                g_ClipVertexBufferStage3[uVar5].projected_vertex.transformed_y) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              pSVar8 = g_ClipVertexBufferStage4 + g_ClipVertexCountStage4;
              iVar4 = 0x30;
              pSVar7 = pSVar6;
              while (7 < iVar4) {
                lVar5._0_4_ = (pSVar7->projected_vertex).transformed_x;
                lVar5._4_4_ = (pSVar7->projected_vertex).transformed_y;
                pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
                (pSVar8->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar5);
                (pSVar8->projected_vertex).transformed_y =
                     (int)((ulonglong)(longlong)ROUND((float10)lVar5) >> 0x20);
                pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
                iVar4 = iVar4 + -8;
              }
              if (iVar4 != 0 && -9 < iVar4 + -8) {
                (pSVar8->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
                if (4 < iVar4) {
                  (pSVar8->projected_vertex).transformed_y =
                       (pSVar7->projected_vertex).transformed_y;
                }
              }
              g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
              break;
            case 1:
              core_xform_cpp_clipInterpolateTopPlane_FUN_005f7d40
                        (g_ClipVertexBufferStage3 + uVar5,pSVar6,
                         g_ClipVertexBufferStage4 + g_ClipVertexCountStage4);
              g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
              break;
            case 2:
              pSVar8 = g_ClipVertexBufferStage4 + g_ClipVertexCountStage4;
              iVar4 = 0x30;
              pSVar7 = pSVar6;
              while (7 < iVar4) {
                lVar9._0_4_ = (pSVar7->projected_vertex).transformed_x;
                lVar9._4_4_ = (pSVar7->projected_vertex).transformed_y;
                pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
                (pSVar8->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar9);
                (pSVar8->projected_vertex).transformed_y =
                     (int)((ulonglong)(longlong)ROUND((float10)lVar9) >> 0x20);
                pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
                iVar4 = iVar4 + -8;
              }
              if (iVar4 != 0 && -9 < iVar4 + -8) {
                (pSVar8->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
                if (4 < iVar4) {
                  (pSVar8->projected_vertex).transformed_y =
                       (pSVar7->projected_vertex).transformed_y;
                }
              }
              g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
              core_xform_cpp_clipInterpolateTopPlane_FUN_005f7d40
                        (pSVar6,g_ClipVertexBufferStage3 + uVar5,
                         g_ClipVertexBufferStage4 + g_ClipVertexCountStage4);
              g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
            }
            local_14 = local_14 + 1;
            pSVar6 = pSVar6 + 1;
          } while (local_14 < g_ClipVertexCountStage3);
        }
        if (2 < g_ClipVertexCountStage4) {
          local_1c = 0;
          if (0 < g_ClipVertexCountStage4) {
            pSVar6 = g_ClipVertexBufferStage4;
            do {
              uVar5 = local_1c + 1;
              if (uVar5 == g_ClipVertexCountStage4) {
                uVar5 = uVar5 ^ g_ClipVertexCountStage4;
              }
              bVar3 = (pSVar6->projected_vertex).transformed_y <=
                      -(pSVar6->projected_vertex).transformed_z;
              if (g_ClipVertexBufferStage4[uVar5].projected_vertex.transformed_y <=
                  -g_ClipVertexBufferStage4[uVar5].projected_vertex.transformed_z) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                pSVar8 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                iVar4 = 0x30;
                pSVar7 = pSVar6;
                while (7 < iVar4) {
                  lVar6._0_4_ = (pSVar7->projected_vertex).transformed_x;
                  lVar6._4_4_ = (pSVar7->projected_vertex).transformed_y;
                  pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
                  (pSVar8->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar6);
                  (pSVar8->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar6) >> 0x20);
                  pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
                  iVar4 = iVar4 + -8;
                }
                if (iVar4 != 0 && -9 < iVar4 + -8) {
                  (pSVar8->projected_vertex).transformed_x =
                       (pSVar7->projected_vertex).transformed_x;
                  if (4 < iVar4) {
                    (pSVar8->projected_vertex).transformed_y =
                         (pSVar7->projected_vertex).transformed_y;
                  }
                }
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                break;
              case 1:
                core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00
                          (g_ClipVertexBufferStage4 + uVar5,pSVar6,
                           g_ClippedVertexBuffer + g_ClippedVertexCount);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                break;
              case 2:
                pSVar7 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                iVar4 = 0x30;
                pSVar20 = pSVar6;
                while (7 < iVar4) {
                  lVar10._0_4_ = (pSVar20->projected_vertex).transformed_x;
                  lVar10._4_4_ = (pSVar20->projected_vertex).transformed_y;
                  pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
                  (pSVar7->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar10);
                  (pSVar7->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar10) >> 0x20);
                  pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
                  iVar4 = iVar4 + -8;
                }
                if (iVar4 != 0 && -9 < iVar4 + -8) {
                  (pSVar7->projected_vertex).transformed_x =
                       (pSVar20->projected_vertex).transformed_x;
                  if (4 < iVar4) {
                    (pSVar7->projected_vertex).transformed_y =
                         (pSVar20->projected_vertex).transformed_y;
                  }
                }
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00
                          (pSVar6,g_ClipVertexBufferStage4 + uVar5,
                           g_ClippedVertexBuffer + g_ClippedVertexCount);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
              }
              local_1c = local_1c + 1;
              pSVar6 = pSVar6 + 1;
            } while (local_1c < g_ClipVertexCountStage4);
          }
          if (2 < g_ClippedVertexCount) {
            pSVar6 = g_ClippedVertexBuffer;
            iVar4 = 0;
            if (0 < g_ClippedVertexCount) {
              do {
                iVar1 = (pSVar6->projected_vertex).transformed_z;
                if (iVar1 == 0) {
                  (pSVar6->projected_vertex).transformed_z = 1;
                  (pSVar6->projected_vertex).transformed_x = 0;
                  (pSVar6->projected_vertex).transformed_y = 0;
                }
                else if (iVar1 < (pSVar6->projected_vertex).transformed_x) {
                  (pSVar6->projected_vertex).transformed_x = iVar1;
                }
                else {
                  iVar11 = (pSVar6->projected_vertex).transformed_x;
                  iVar17 = -iVar1;
                  if (-iVar11 == iVar1 || iVar17 < iVar11) {
                    iVar2 = (pSVar6->projected_vertex).transformed_y;
                    if (iVar1 < iVar2) {
                      (pSVar6->projected_vertex).transformed_y = iVar1;
                    }
                    else if (-iVar2 != iVar1 && iVar2 <= iVar17) {
                      (pSVar6->projected_vertex).transformed_y = iVar17;
                    }
                  }
                  else {
                    (pSVar6->projected_vertex).transformed_x = iVar17;
                  }
                }
                iVar4 = iVar4 + 1;
                pSVar6 = pSVar6 + 1;
              } while (iVar4 < g_ClippedVertexCount);
            }
          }
        }
      }
    }
  }
  return;
}
