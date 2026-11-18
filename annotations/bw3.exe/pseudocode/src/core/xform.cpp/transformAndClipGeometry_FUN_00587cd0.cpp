// Name: core_xform.cpp_transformAndClipGeometry_FUN_00587cd0
// Address: 00587cd0
// Address Range: [[00587cd0, 00588404]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_transformAndClipGeometry_FUN_00587cd0(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005882d5) */
/* WARNING: Removing unreachable block (ram,0x0058823b) */
/* WARNING: Removing unreachable block (ram,0x005881a1) */
/* WARNING: Removing unreachable block (ram,0x00587dc1) */
/* WARNING: Removing unreachable block (ram,0x00587e78) */
/* WARNING: Removing unreachable block (ram,0x00587f42) */
/* WARNING: Removing unreachable block (ram,0x00588007) */

void __cdecl core_xform_cpp_transformAndClipGeometry_FUN_00587cd0(int vertex_count,int *vertex_indices)

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
  int iVar13;
  uint uVar14;
  int *piVar15;
  SRenderVertex *pSVar16;
  int iVar17;
  int iVar18;
  SRenderVertex *pSVar19;
  SRenderVertex *pSVar20;
  SRenderVertex *pSVar21;
  byte bVar22;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar22 = 0;
  iVar13 = 0;
  iVar18 = 0;
  piVar15 = vertex_indices;
  if (0 < vertex_count) {
    do {
      if ((g_SRenderVertex_ARRAY_0060b014[*piVar15].projected_vertex.screen_x & 0x80000000U) != 0) {
        iVar18 = iVar18 + 1;
      }
      iVar13 = iVar13 + 1;
      piVar15 = piVar15 + 1;
    } while (iVar13 < vertex_count);
  }
  if (iVar18 == 0) {
    g_ClippedVertexCount = vertex_count;
    if (0 < vertex_count) {
      pSVar16 = g_SRenderVertex_ARRAY_007e3e8c;
      local_24 = 0;
      do {
        iVar13 = 0x30;
        pSVar19 = g_SRenderVertex_ARRAY_0060b014 + *vertex_indices;
        pSVar21 = pSVar16;
        if (((uint)pSVar16 & 7) != 0) {
          pSVar21 = (SRenderVertex *)&(pSVar16->projected_vertex).transformed_y;
          pSVar19 = (SRenderVertex *)
                    &g_SRenderVertex_ARRAY_0060b014[*vertex_indices].projected_vertex.transformed_y;
          (pSVar16->projected_vertex).transformed_x =
               g_SRenderVertex_ARRAY_0060b014[*vertex_indices].projected_vertex.transformed_x;
          iVar13 = 0x2c;
        }
        while (7 < iVar13) {
          lVar1._0_4_ = (pSVar19->projected_vertex).transformed_x;
          lVar1._4_4_ = (pSVar19->projected_vertex).transformed_y;
          pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
          (pSVar21->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
          (pSVar21->projected_vertex).transformed_y =
               (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
          pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
          iVar13 = iVar13 + -8;
        }
        if (iVar13 != 0 && -9 < iVar13 + -8) {
          (pSVar21->projected_vertex).transformed_x = (pSVar19->projected_vertex).transformed_x;
          if (4 < iVar13) {
            (pSVar21->projected_vertex).transformed_y = (pSVar19->projected_vertex).transformed_y;
          }
        }
        vertex_indices = vertex_indices + 1;
        local_24 = local_24 + 1;
        pSVar16 = pSVar16 + 1;
      } while (local_24 < vertex_count);
    }
  }
  else {
    g_ClipVertexCountStage1 = vertex_count;
    iVar13 = 0;
    g_ClipVertexCountStage2 = 0;
    g_ClipVertexCountStage3 = 0;
    g_ClipVertexCountStage4 = 0;
    g_ClippedVertexCount = 0;
    if (0 < vertex_count) {
      pSVar16 = g_ClipVertexBufferStage1;
      local_28 = vertex_indices;
      do {
        pSVar21 = g_SRenderVertex_ARRAY_0060b014 + *local_28;
        iVar18 = 0x30;
        pSVar19 = pSVar16;
        while (7 < iVar18) {
          lVar2._0_4_ = (pSVar21->projected_vertex).transformed_x;
          lVar2._4_4_ = (pSVar21->projected_vertex).transformed_y;
          pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
          (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
          (pSVar19->projected_vertex).transformed_y =
               (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
          pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
          iVar18 = iVar18 + -8;
        }
        if (iVar18 != 0 && -9 < iVar18 + -8) {
          (pSVar19->projected_vertex).transformed_x = (pSVar21->projected_vertex).transformed_x;
          if (4 < iVar18) {
            (pSVar19->projected_vertex).transformed_y = (pSVar21->projected_vertex).transformed_y;
          }
        }
        iVar13 = iVar13 + 1;
        local_28 = local_28 + 1;
        pSVar16 = pSVar16 + 1;
      } while (iVar13 < vertex_count);
    }
    local_20 = 0;
    if (0 < g_ClipVertexCountStage1) {
      pSVar16 = g_ClipVertexBufferStage1;
      do {
        uVar14 = local_20 + 1;
        if (uVar14 == g_ClipVertexCountStage1) {
          uVar14 = uVar14 ^ g_ClipVertexCountStage1;
        }
        pSVar19 = g_ClipVertexBufferStage1 + uVar14;
        bVar12 = (pSVar16->projected_vertex).transformed_z <=
                 (pSVar16->projected_vertex).transformed_x;
        if (g_ClipVertexBufferStage1[uVar14].projected_vertex.transformed_z <=
            (pSVar19->projected_vertex).transformed_x) {
          bVar12 = bVar12 | 2;
        }
        switch(bVar12) {
        case 0:
          pSVar21 = g_ClipVertexBufferStage2 + g_ClipVertexCountStage2;
          iVar13 = 0x30;
          pSVar19 = pSVar16;
          while (7 < iVar13) {
            lVar3._0_4_ = (pSVar19->projected_vertex).transformed_x;
            lVar3._4_4_ = (pSVar19->projected_vertex).transformed_y;
            pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
            (pSVar21->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar3);
            (pSVar21->projected_vertex).transformed_y =
                 (int)((ulonglong)(longlong)ROUND((float10)lVar3) >> 0x20);
            pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
            iVar13 = iVar13 + -8;
          }
          if (iVar13 != 0 && -9 < iVar13 + -8) {
            (pSVar21->projected_vertex).transformed_x = (pSVar19->projected_vertex).transformed_x;
            if (4 < iVar13) {
              *(uint *)((int)pSVar21 + (uint)bVar22 * -8 + 4) =
                   *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
            }
          }
          g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
          break;
        case 1:
          core_xform_cpp_clipInterpolateRightPlane_FUN_00587340
                    (pSVar19,pSVar16,g_ClipVertexBufferStage2 + g_ClipVertexCountStage2);
          g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
          break;
        case 2:
          pSVar20 = g_ClipVertexBufferStage2 + g_ClipVertexCountStage2;
          iVar13 = 0x30;
          pSVar21 = pSVar16;
          while (7 < iVar13) {
            lVar7._0_4_ = (pSVar21->projected_vertex).transformed_x;
            lVar7._4_4_ = (pSVar21->projected_vertex).transformed_y;
            pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
            (pSVar20->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar7);
            (pSVar20->projected_vertex).transformed_y =
                 (int)((ulonglong)(longlong)ROUND((float10)lVar7) >> 0x20);
            pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
            iVar13 = iVar13 + -8;
          }
          if (iVar13 != 0 && -9 < iVar13 + -8) {
            (pSVar20->projected_vertex).transformed_x = (pSVar21->projected_vertex).transformed_x;
            if (4 < iVar13) {
              *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4) =
                   *(uint *)((int)pSVar21 + (uint)bVar22 * -8 + 4);
            }
          }
          g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
          core_xform_cpp_clipInterpolateRightPlane_FUN_00587340
                    (pSVar16,pSVar19,g_ClipVertexBufferStage2 + g_ClipVertexCountStage2);
          g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
        }
        local_20 = local_20 + 1;
        pSVar16 = pSVar16 + 1;
      } while (local_20 < g_ClipVertexCountStage1);
    }
    if (2 < g_ClipVertexCountStage2) {
      local_18 = 0;
      if (0 < g_ClipVertexCountStage2) {
        pSVar16 = g_ClipVertexBufferStage2;
        do {
          uVar14 = local_18 + 1;
          if (uVar14 == g_ClipVertexCountStage2) {
            uVar14 = uVar14 ^ g_ClipVertexCountStage2;
          }
          pSVar19 = g_ClipVertexBufferStage2 + uVar14;
          bVar12 = (pSVar16->projected_vertex).transformed_x <=
                   -(pSVar16->projected_vertex).transformed_z;
          if ((pSVar19->projected_vertex).transformed_x <=
              -g_ClipVertexBufferStage2[uVar14].projected_vertex.transformed_z) {
            bVar12 = bVar12 | 2;
          }
          switch(bVar12) {
          case 0:
            pSVar21 = g_ClipVertexBufferStage3 + g_ClipVertexCountStage3;
            iVar13 = 0x30;
            pSVar19 = pSVar16;
            while (7 < iVar13) {
              lVar4._0_4_ = (pSVar19->projected_vertex).transformed_x;
              lVar4._4_4_ = (pSVar19->projected_vertex).transformed_y;
              pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
              (pSVar21->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar4);
              (pSVar21->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar4) >> 0x20);
              pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
              iVar13 = iVar13 + -8;
            }
            if (iVar13 != 0 && -9 < iVar13 + -8) {
              (pSVar21->projected_vertex).transformed_x = (pSVar19->projected_vertex).transformed_x;
              if (4 < iVar13) {
                *(uint *)((int)pSVar21 + (uint)bVar22 * -8 + 4) =
                     *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
              }
            }
            g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
            break;
          case 1:
            core_xform_cpp_clipInterpolateLeftPlane_FUN_00587400
                      (pSVar19,pSVar16,g_ClipVertexBufferStage3 + g_ClipVertexCountStage3);
            g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
            break;
          case 2:
            pSVar20 = g_ClipVertexBufferStage3 + g_ClipVertexCountStage3;
            iVar13 = 0x30;
            pSVar21 = pSVar16;
            while (7 < iVar13) {
              lVar8._0_4_ = (pSVar21->projected_vertex).transformed_x;
              lVar8._4_4_ = (pSVar21->projected_vertex).transformed_y;
              pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
              (pSVar20->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar8);
              (pSVar20->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar8) >> 0x20);
              pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
              iVar13 = iVar13 + -8;
            }
            if (iVar13 != 0 && -9 < iVar13 + -8) {
              (pSVar20->projected_vertex).transformed_x = (pSVar21->projected_vertex).transformed_x;
              if (4 < iVar13) {
                *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4) =
                     *(uint *)((int)pSVar21 + (uint)bVar22 * -8 + 4);
              }
            }
            g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
            core_xform_cpp_clipInterpolateLeftPlane_FUN_00587400
                      (pSVar16,pSVar19,g_ClipVertexBufferStage3 + g_ClipVertexCountStage3);
            g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
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
            uVar14 = local_14 + 1;
            if (uVar14 == g_ClipVertexCountStage3) {
              uVar14 = uVar14 ^ g_ClipVertexCountStage3;
            }
            bVar12 = (pSVar16->projected_vertex).transformed_z <=
                     (pSVar16->projected_vertex).transformed_y;
            if (g_ClipVertexBufferStage3[uVar14].projected_vertex.transformed_z <=
                g_ClipVertexBufferStage3[uVar14].projected_vertex.transformed_y) {
              bVar12 = bVar12 | 2;
            }
            switch(bVar12) {
            case 0:
              pSVar21 = g_ClipVertexBufferStage4 + g_ClipVertexCountStage4;
              iVar13 = 0x30;
              pSVar19 = pSVar16;
              while (7 < iVar13) {
                lVar5._0_4_ = (pSVar19->projected_vertex).transformed_x;
                lVar5._4_4_ = (pSVar19->projected_vertex).transformed_y;
                pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                (pSVar21->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar5);
                (pSVar21->projected_vertex).transformed_y =
                     (int)((ulonglong)(longlong)ROUND((float10)lVar5) >> 0x20);
                pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
                iVar13 = iVar13 + -8;
              }
              if (iVar13 != 0 && -9 < iVar13 + -8) {
                (pSVar21->projected_vertex).transformed_x =
                     (pSVar19->projected_vertex).transformed_x;
                if (4 < iVar13) {
                  *(uint *)((int)pSVar21 + (uint)bVar22 * -8 + 4) =
                       *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
                }
              }
              g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
              break;
            case 1:
              core_xform_cpp_clipInterpolateTopPlane_FUN_005874c0
                        (g_ClipVertexBufferStage3 + uVar14,pSVar16,
                         g_ClipVertexBufferStage4 + g_ClipVertexCountStage4);
              g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
              break;
            case 2:
              pSVar21 = g_ClipVertexBufferStage4 + g_ClipVertexCountStage4;
              iVar13 = 0x30;
              pSVar19 = pSVar16;
              while (7 < iVar13) {
                lVar9._0_4_ = (pSVar19->projected_vertex).transformed_x;
                lVar9._4_4_ = (pSVar19->projected_vertex).transformed_y;
                pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                (pSVar21->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar9);
                (pSVar21->projected_vertex).transformed_y =
                     (int)((ulonglong)(longlong)ROUND((float10)lVar9) >> 0x20);
                pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
                iVar13 = iVar13 + -8;
              }
              if (iVar13 != 0 && -9 < iVar13 + -8) {
                (pSVar21->projected_vertex).transformed_x =
                     (pSVar19->projected_vertex).transformed_x;
                if (4 < iVar13) {
                  *(uint *)((int)pSVar21 + (uint)bVar22 * -8 + 4) =
                       *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
                }
              }
              g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
              core_xform_cpp_clipInterpolateTopPlane_FUN_005874c0
                        (pSVar16,g_ClipVertexBufferStage3 + uVar14,
                         g_ClipVertexBufferStage4 + g_ClipVertexCountStage4);
              g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
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
              uVar14 = local_1c + 1;
              if (uVar14 == g_ClipVertexCountStage4) {
                uVar14 = uVar14 ^ g_ClipVertexCountStage4;
              }
              bVar12 = (pSVar16->projected_vertex).transformed_y <=
                       -(pSVar16->projected_vertex).transformed_z;
              if (g_ClipVertexBufferStage4[uVar14].projected_vertex.transformed_y <=
                  -g_ClipVertexBufferStage4[uVar14].projected_vertex.transformed_z) {
                bVar12 = bVar12 | 2;
              }
              switch(bVar12) {
              case 0:
                pSVar20 = g_SRenderVertex_ARRAY_007e3e8c + g_ClippedVertexCount;
                iVar13 = 0x30;
                pSVar19 = pSVar16;
                pSVar21 = pSVar20;
                if (((uint)pSVar20 & 7) != 0) {
                  pSVar21 = (SRenderVertex *)
                            (g_ClippedVertexCount * 0x30 + 0x7e3e90 + (uint)bVar22 * -8);
                  pSVar19 = (SRenderVertex *)((int)pSVar16 + (uint)bVar22 * -8 + 4);
                  (pSVar20->projected_vertex).transformed_x =
                       (pSVar16->projected_vertex).transformed_x;
                  iVar13 = 0x2c;
                }
                while (7 < iVar13) {
                  lVar6._0_4_ = (pSVar19->projected_vertex).transformed_x;
                  lVar6._4_4_ = (pSVar19->projected_vertex).transformed_y;
                  pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                  (pSVar21->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar6);
                  (pSVar21->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar6) >> 0x20);
                  pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
                  iVar13 = iVar13 + -8;
                }
                if (iVar13 != 0 && -9 < iVar13 + -8) {
                  (pSVar21->projected_vertex).transformed_x =
                       (pSVar19->projected_vertex).transformed_x;
                  if (4 < iVar13) {
                    *(uint *)((int)pSVar21 + (uint)bVar22 * -8 + 4) =
                         *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
                  }
                }
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                break;
              case 1:
                core_xform_cpp_clipInterpolateBottomPlane_FUN_00587580
                          (g_ClipVertexBufferStage4 + uVar14,pSVar16,
                           g_SRenderVertex_ARRAY_007e3e8c + g_ClippedVertexCount);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                break;
              case 2:
                pSVar20 = g_SRenderVertex_ARRAY_007e3e8c + g_ClippedVertexCount;
                iVar13 = 0x30;
                pSVar19 = pSVar16;
                pSVar21 = pSVar20;
                if (((uint)pSVar20 & 7) != 0) {
                  pSVar21 = (SRenderVertex *)
                            (g_ClippedVertexCount * 0x30 + 0x7e3e90 + (uint)bVar22 * -8);
                  pSVar19 = (SRenderVertex *)((int)pSVar16 + (uint)bVar22 * -8 + 4);
                  (pSVar20->projected_vertex).transformed_x =
                       (pSVar16->projected_vertex).transformed_x;
                  iVar13 = 0x2c;
                }
                while (7 < iVar13) {
                  lVar10._0_4_ = (pSVar19->projected_vertex).transformed_x;
                  lVar10._4_4_ = (pSVar19->projected_vertex).transformed_y;
                  pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                  (pSVar21->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar10);
                  (pSVar21->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar10) >> 0x20);
                  pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
                  iVar13 = iVar13 + -8;
                }
                if (iVar13 != 0 && -9 < iVar13 + -8) {
                  (pSVar21->projected_vertex).transformed_x =
                       (pSVar19->projected_vertex).transformed_x;
                  if (4 < iVar13) {
                    *(uint *)((int)pSVar21 + (uint)bVar22 * -8 + 4) =
                         *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
                  }
                }
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                core_xform_cpp_clipInterpolateBottomPlane_FUN_00587580
                          (pSVar16,g_ClipVertexBufferStage4 + uVar14,
                           g_SRenderVertex_ARRAY_007e3e8c + g_ClippedVertexCount);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
              }
              local_1c = local_1c + 1;
              pSVar16 = pSVar16 + 1;
            } while (local_1c < g_ClipVertexCountStage4);
          }
          if (2 < g_ClippedVertexCount) {
            pSVar16 = g_SRenderVertex_ARRAY_007e3e8c;
            iVar13 = 0;
            if (0 < g_ClippedVertexCount) {
              do {
                iVar18 = (pSVar16->projected_vertex).transformed_z;
                if (iVar18 == 0) {
                  (pSVar16->projected_vertex).transformed_z = 1;
                  (pSVar16->projected_vertex).transformed_x = 0;
                  (pSVar16->projected_vertex).transformed_y = 0;
                }
                else if (iVar18 < (pSVar16->projected_vertex).transformed_x) {
                  (pSVar16->projected_vertex).transformed_x = iVar18;
                }
                else {
                  iVar11 = (pSVar16->projected_vertex).transformed_x;
                  iVar17 = -iVar18;
                  if (-iVar11 == iVar18 || iVar17 < iVar11) {
                    iVar11 = (pSVar16->projected_vertex).transformed_y;
                    if (iVar18 < iVar11) {
                      (pSVar16->projected_vertex).transformed_y = iVar18;
                    }
                    else if (-iVar11 != iVar18 && iVar11 <= iVar17) {
                      (pSVar16->projected_vertex).transformed_y = iVar17;
                    }
                  }
                  else {
                    (pSVar16->projected_vertex).transformed_x = iVar17;
                  }
                }
                iVar13 = iVar13 + 1;
                pSVar16 = pSVar16 + 1;
              } while (iVar13 < g_ClippedVertexCount);
            }
          }
        }
      }
    }
  }
  return;
}
