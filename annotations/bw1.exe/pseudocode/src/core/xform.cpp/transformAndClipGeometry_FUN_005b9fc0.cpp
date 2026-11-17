// Name: core_xform.cpp_transformAndClipGeometry_FUN_005b9fc0
// Address: 005b9fc0
// Address Range: [[005b9fc0, 005ba6f4]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_transformAndClipGeometry_FUN_005b9fc0(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005ba65f) */
/* WARNING: Removing unreachable block (ram,0x005ba5c5) */
/* WARNING: Removing unreachable block (ram,0x005ba52b) */
/* WARNING: Removing unreachable block (ram,0x005ba491) */
/* WARNING: Removing unreachable block (ram,0x005ba028) */
/* WARNING: Removing unreachable block (ram,0x005ba0b1) */
/* WARNING: Removing unreachable block (ram,0x005ba168) */
/* WARNING: Removing unreachable block (ram,0x005ba232) */
/* WARNING: Removing unreachable block (ram,0x005ba2f7) */
/* WARNING: Removing unreachable block (ram,0x005ba3c2) */

void __cdecl core_xform_cpp_transformAndClipGeometry_FUN_005b9fc0(int vertex_count,int *vertex_indices)

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
      if ((g_SRenderVertex_ARRAY_00629014[*piVar15].projected_vertex.screen_x & 0x80000000U) != 0) {
        iVar18 = iVar18 + 1;
      }
      iVar13 = iVar13 + 1;
      piVar15 = piVar15 + 1;
    } while (iVar13 < vertex_count);
  }
  if (iVar18 == 0) {
    g_INT_007c7554 = vertex_count;
    if (0 < vertex_count) {
      pSVar16 = g_SRenderVertex_ARRAY_007c7558;
      local_24 = 0;
      do {
        pSVar19 = g_SRenderVertex_ARRAY_00629014 + *vertex_indices;
        iVar13 = 0x30;
        pSVar20 = pSVar16;
        while (7 < iVar13) {
          lVar1._0_4_ = (pSVar19->projected_vertex).transformed_x;
          lVar1._4_4_ = (pSVar19->projected_vertex).transformed_y;
          pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
          (pSVar20->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
          (pSVar20->projected_vertex).transformed_y =
               (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
          pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
          iVar13 = iVar13 + -8;
        }
        if (iVar13 != 0 && -9 < iVar13 + -8) {
          (pSVar20->projected_vertex).transformed_x = (pSVar19->projected_vertex).transformed_x;
          if (4 < iVar13) {
            (pSVar20->projected_vertex).transformed_y = (pSVar19->projected_vertex).transformed_y;
          }
        }
        vertex_indices = vertex_indices + 1;
        local_24 = local_24 + 1;
        pSVar16 = pSVar16 + 1;
      } while (local_24 < vertex_count);
    }
  }
  else {
    g_INT_02c9d2e8 = vertex_count;
    iVar13 = 0;
    g_INT_02c9d2ec = 0;
    g_INT_02c9d2f0 = 0;
    g_INT_02c9d2f4 = 0;
    g_INT_007c7554 = 0;
    if (0 < vertex_count) {
      pSVar16 = g_SRenderVertex_ARRAY_02c9d8f8;
      local_28 = vertex_indices;
      do {
        pSVar19 = g_SRenderVertex_ARRAY_00629014 + *local_28;
        iVar18 = 0x30;
        pSVar20 = pSVar16;
        while (7 < iVar18) {
          lVar2._0_4_ = (pSVar19->projected_vertex).transformed_x;
          lVar2._4_4_ = (pSVar19->projected_vertex).transformed_y;
          pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
          (pSVar20->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
          (pSVar20->projected_vertex).transformed_y =
               (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
          pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
          iVar18 = iVar18 + -8;
        }
        if (iVar18 != 0 && -9 < iVar18 + -8) {
          (pSVar20->projected_vertex).transformed_x = (pSVar19->projected_vertex).transformed_x;
          if (4 < iVar18) {
            (pSVar20->projected_vertex).transformed_y = (pSVar19->projected_vertex).transformed_y;
          }
        }
        iVar13 = iVar13 + 1;
        local_28 = local_28 + 1;
        pSVar16 = pSVar16 + 1;
      } while (iVar13 < vertex_count);
    }
    local_20 = 0;
    if (0 < g_INT_02c9d2e8) {
      pSVar16 = g_SRenderVertex_ARRAY_02c9d8f8;
      do {
        uVar14 = local_20 + 1;
        if (uVar14 == g_INT_02c9d2e8) {
          uVar14 = uVar14 ^ g_INT_02c9d2e8;
        }
        pSVar20 = g_SRenderVertex_ARRAY_02c9d8f8 + uVar14;
        bVar12 = (pSVar16->projected_vertex).transformed_z <=
                 (pSVar16->projected_vertex).transformed_x;
        if (g_SRenderVertex_ARRAY_02c9d8f8[uVar14].projected_vertex.transformed_z <=
            (pSVar20->projected_vertex).transformed_x) {
          bVar12 = bVar12 | 2;
        }
        switch(bVar12) {
        case 0:
          pSVar19 = g_SRenderVertex_ARRAY_02c9d2f8 + g_INT_02c9d2ec;
          iVar13 = 0x30;
          pSVar20 = pSVar16;
          while (7 < iVar13) {
            lVar3._0_4_ = (pSVar20->projected_vertex).transformed_x;
            lVar3._4_4_ = (pSVar20->projected_vertex).transformed_y;
            pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
            (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar3);
            (pSVar19->projected_vertex).transformed_y =
                 (int)((ulonglong)(longlong)ROUND((float10)lVar3) >> 0x20);
            pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
            iVar13 = iVar13 + -8;
          }
          if (iVar13 != 0 && -9 < iVar13 + -8) {
            (pSVar19->projected_vertex).transformed_x = (pSVar20->projected_vertex).transformed_x;
            if (4 < iVar13) {
              *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                   *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
            }
          }
          g_INT_02c9d2ec = g_INT_02c9d2ec + 1;
          break;
        case 1:
          core_xform_cpp_clipInterpolateRightPlane_FUN_005b9630
                    (pSVar20,pSVar16,g_SRenderVertex_ARRAY_02c9d2f8 + g_INT_02c9d2ec);
          g_INT_02c9d2ec = g_INT_02c9d2ec + 1;
          break;
        case 2:
          pSVar21 = g_SRenderVertex_ARRAY_02c9d2f8 + g_INT_02c9d2ec;
          iVar13 = 0x30;
          pSVar19 = pSVar16;
          while (7 < iVar13) {
            lVar7._0_4_ = (pSVar19->projected_vertex).transformed_x;
            lVar7._4_4_ = (pSVar19->projected_vertex).transformed_y;
            pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
            (pSVar21->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar7);
            (pSVar21->projected_vertex).transformed_y =
                 (int)((ulonglong)(longlong)ROUND((float10)lVar7) >> 0x20);
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
          g_INT_02c9d2ec = g_INT_02c9d2ec + 1;
          core_xform_cpp_clipInterpolateRightPlane_FUN_005b9630
                    (pSVar16,pSVar20,g_SRenderVertex_ARRAY_02c9d2f8 + g_INT_02c9d2ec);
          g_INT_02c9d2ec = g_INT_02c9d2ec + 1;
        }
        local_20 = local_20 + 1;
        pSVar16 = pSVar16 + 1;
      } while (local_20 < g_INT_02c9d2e8);
    }
    if (2 < g_INT_02c9d2ec) {
      local_18 = 0;
      if (0 < g_INT_02c9d2ec) {
        pSVar16 = g_SRenderVertex_ARRAY_02c9d2f8;
        do {
          uVar14 = local_18 + 1;
          if (uVar14 == g_INT_02c9d2ec) {
            uVar14 = uVar14 ^ g_INT_02c9d2ec;
          }
          pSVar20 = g_SRenderVertex_ARRAY_02c9d2f8 + uVar14;
          bVar12 = (pSVar16->projected_vertex).transformed_x <=
                   -(pSVar16->projected_vertex).transformed_z;
          if ((pSVar20->projected_vertex).transformed_x <=
              -g_SRenderVertex_ARRAY_02c9d2f8[uVar14].projected_vertex.transformed_z) {
            bVar12 = bVar12 | 2;
          }
          switch(bVar12) {
          case 0:
            pSVar19 = g_SRenderVertex_ARRAY_02c9def8 + g_INT_02c9d2f0;
            iVar13 = 0x30;
            pSVar20 = pSVar16;
            while (7 < iVar13) {
              lVar4._0_4_ = (pSVar20->projected_vertex).transformed_x;
              lVar4._4_4_ = (pSVar20->projected_vertex).transformed_y;
              pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
              (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar4);
              (pSVar19->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar4) >> 0x20);
              pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
              iVar13 = iVar13 + -8;
            }
            if (iVar13 != 0 && -9 < iVar13 + -8) {
              (pSVar19->projected_vertex).transformed_x = (pSVar20->projected_vertex).transformed_x;
              if (4 < iVar13) {
                *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                     *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
              }
            }
            g_INT_02c9d2f0 = g_INT_02c9d2f0 + 1;
            break;
          case 1:
            core_xform_cpp_clipInterpolateLeftPlane_FUN_005b96f0
                      (pSVar20,pSVar16,g_SRenderVertex_ARRAY_02c9def8 + g_INT_02c9d2f0);
            g_INT_02c9d2f0 = g_INT_02c9d2f0 + 1;
            break;
          case 2:
            pSVar21 = g_SRenderVertex_ARRAY_02c9def8 + g_INT_02c9d2f0;
            iVar13 = 0x30;
            pSVar19 = pSVar16;
            while (7 < iVar13) {
              lVar8._0_4_ = (pSVar19->projected_vertex).transformed_x;
              lVar8._4_4_ = (pSVar19->projected_vertex).transformed_y;
              pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
              (pSVar21->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar8);
              (pSVar21->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar8) >> 0x20);
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
            g_INT_02c9d2f0 = g_INT_02c9d2f0 + 1;
            core_xform_cpp_clipInterpolateLeftPlane_FUN_005b96f0
                      (pSVar16,pSVar20,g_SRenderVertex_ARRAY_02c9def8 + g_INT_02c9d2f0);
            g_INT_02c9d2f0 = g_INT_02c9d2f0 + 1;
          }
          local_18 = local_18 + 1;
          pSVar16 = pSVar16 + 1;
        } while (local_18 < g_INT_02c9d2ec);
      }
      if (2 < g_INT_02c9d2f0) {
        local_14 = 0;
        if (0 < g_INT_02c9d2f0) {
          pSVar16 = g_SRenderVertex_ARRAY_02c9def8;
          do {
            uVar14 = local_14 + 1;
            if (uVar14 == g_INT_02c9d2f0) {
              uVar14 = uVar14 ^ g_INT_02c9d2f0;
            }
            bVar12 = (pSVar16->projected_vertex).transformed_z <=
                     (pSVar16->projected_vertex).transformed_y;
            if (g_SRenderVertex_ARRAY_02c9def8[uVar14].projected_vertex.transformed_z <=
                g_SRenderVertex_ARRAY_02c9def8[uVar14].projected_vertex.transformed_y) {
              bVar12 = bVar12 | 2;
            }
            switch(bVar12) {
            case 0:
              pSVar19 = g_SRenderVertex_ARRAY_02c9e4f8 + g_INT_02c9d2f4;
              iVar13 = 0x30;
              pSVar20 = pSVar16;
              while (7 < iVar13) {
                lVar5._0_4_ = (pSVar20->projected_vertex).transformed_x;
                lVar5._4_4_ = (pSVar20->projected_vertex).transformed_y;
                pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
                (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar5);
                (pSVar19->projected_vertex).transformed_y =
                     (int)((ulonglong)(longlong)ROUND((float10)lVar5) >> 0x20);
                pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                iVar13 = iVar13 + -8;
              }
              if (iVar13 != 0 && -9 < iVar13 + -8) {
                (pSVar19->projected_vertex).transformed_x =
                     (pSVar20->projected_vertex).transformed_x;
                if (4 < iVar13) {
                  *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                       *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
                }
              }
              g_INT_02c9d2f4 = g_INT_02c9d2f4 + 1;
              break;
            case 1:
              core_xform_cpp_clipInterpolateTopPlane_FUN_005b97b0
                        (g_SRenderVertex_ARRAY_02c9def8 + uVar14,pSVar16,
                         g_SRenderVertex_ARRAY_02c9e4f8 + g_INT_02c9d2f4);
              g_INT_02c9d2f4 = g_INT_02c9d2f4 + 1;
              break;
            case 2:
              pSVar19 = g_SRenderVertex_ARRAY_02c9e4f8 + g_INT_02c9d2f4;
              iVar13 = 0x30;
              pSVar20 = pSVar16;
              while (7 < iVar13) {
                lVar9._0_4_ = (pSVar20->projected_vertex).transformed_x;
                lVar9._4_4_ = (pSVar20->projected_vertex).transformed_y;
                pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
                (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar9);
                (pSVar19->projected_vertex).transformed_y =
                     (int)((ulonglong)(longlong)ROUND((float10)lVar9) >> 0x20);
                pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                iVar13 = iVar13 + -8;
              }
              if (iVar13 != 0 && -9 < iVar13 + -8) {
                (pSVar19->projected_vertex).transformed_x =
                     (pSVar20->projected_vertex).transformed_x;
                if (4 < iVar13) {
                  *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                       *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
                }
              }
              g_INT_02c9d2f4 = g_INT_02c9d2f4 + 1;
              core_xform_cpp_clipInterpolateTopPlane_FUN_005b97b0
                        (pSVar16,g_SRenderVertex_ARRAY_02c9def8 + uVar14,
                         g_SRenderVertex_ARRAY_02c9e4f8 + g_INT_02c9d2f4);
              g_INT_02c9d2f4 = g_INT_02c9d2f4 + 1;
            }
            local_14 = local_14 + 1;
            pSVar16 = pSVar16 + 1;
          } while (local_14 < g_INT_02c9d2f0);
        }
        if (2 < g_INT_02c9d2f4) {
          local_1c = 0;
          if (0 < g_INT_02c9d2f4) {
            pSVar16 = g_SRenderVertex_ARRAY_02c9e4f8;
            do {
              uVar14 = local_1c + 1;
              if (uVar14 == g_INT_02c9d2f4) {
                uVar14 = uVar14 ^ g_INT_02c9d2f4;
              }
              bVar12 = (pSVar16->projected_vertex).transformed_y <=
                       -(pSVar16->projected_vertex).transformed_z;
              if (g_SRenderVertex_ARRAY_02c9e4f8[uVar14].projected_vertex.transformed_y <=
                  -g_SRenderVertex_ARRAY_02c9e4f8[uVar14].projected_vertex.transformed_z) {
                bVar12 = bVar12 | 2;
              }
              switch(bVar12) {
              case 0:
                pSVar19 = g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554;
                iVar13 = 0x30;
                pSVar20 = pSVar16;
                while (7 < iVar13) {
                  lVar6._0_4_ = (pSVar20->projected_vertex).transformed_x;
                  lVar6._4_4_ = (pSVar20->projected_vertex).transformed_y;
                  pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
                  (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar6);
                  (pSVar19->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar6) >> 0x20);
                  pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                  iVar13 = iVar13 + -8;
                }
                if (iVar13 != 0 && -9 < iVar13 + -8) {
                  (pSVar19->projected_vertex).transformed_x =
                       (pSVar20->projected_vertex).transformed_x;
                  if (4 < iVar13) {
                    *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                         *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
                  }
                }
                g_INT_007c7554 = g_INT_007c7554 + 1;
                break;
              case 1:
                core_xform_cpp_clipInterpolateBottomPlane_FUN_005b9870
                          (g_SRenderVertex_ARRAY_02c9e4f8 + uVar14,pSVar16,
                           g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554);
                g_INT_007c7554 = g_INT_007c7554 + 1;
                break;
              case 2:
                pSVar19 = g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554;
                iVar13 = 0x30;
                pSVar20 = pSVar16;
                while (7 < iVar13) {
                  lVar10._0_4_ = (pSVar20->projected_vertex).transformed_x;
                  lVar10._4_4_ = (pSVar20->projected_vertex).transformed_y;
                  pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
                  (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar10);
                  (pSVar19->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar10) >> 0x20);
                  pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                  iVar13 = iVar13 + -8;
                }
                if (iVar13 != 0 && -9 < iVar13 + -8) {
                  (pSVar19->projected_vertex).transformed_x =
                       (pSVar20->projected_vertex).transformed_x;
                  if (4 < iVar13) {
                    *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                         *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
                  }
                }
                g_INT_007c7554 = g_INT_007c7554 + 1;
                core_xform_cpp_clipInterpolateBottomPlane_FUN_005b9870
                          (pSVar16,g_SRenderVertex_ARRAY_02c9e4f8 + uVar14,
                           g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554);
                g_INT_007c7554 = g_INT_007c7554 + 1;
              }
              local_1c = local_1c + 1;
              pSVar16 = pSVar16 + 1;
            } while (local_1c < g_INT_02c9d2f4);
          }
          if (2 < g_INT_007c7554) {
            pSVar16 = g_SRenderVertex_ARRAY_007c7558;
            iVar13 = 0;
            if (0 < g_INT_007c7554) {
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
              } while (iVar13 < g_INT_007c7554);
            }
          }
        }
      }
    }
  }
  return;
}
