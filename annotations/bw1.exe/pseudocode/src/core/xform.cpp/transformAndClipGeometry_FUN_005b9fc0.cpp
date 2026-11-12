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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  int iVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  SRenderVertex *pSVar17;
  SRenderVertex *pSVar18;
  longlong *plVar19;
  SRenderVertex *pSVar20;
  longlong *plVar21;
  byte bVar22;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar22 = 0;
  iVar11 = 0;
  iVar16 = 0;
  piVar13 = vertex_indices;
  if (0 < vertex_count) {
    do {
      if (((&DAT_00629024)[*piVar13 * 0xc] & 0x80000000) != 0) {
        iVar16 = iVar16 + 1;
      }
      iVar11 = iVar11 + 1;
      piVar13 = piVar13 + 1;
    } while (iVar11 < vertex_count);
  }
  if (iVar16 == 0) {
    DAT_007c7554 = vertex_count;
    if (0 < vertex_count) {
      plVar14 = (longlong *)&DAT_007c7558;
      local_24 = 0;
      do {
        plVar19 = (longlong *)(&DAT_00629014 + *vertex_indices * 0xc);
        iVar11 = 0x30;
        plVar21 = plVar14;
        while (7 < iVar11) {
          lVar1 = *plVar19;
          plVar19 = plVar19 + 1;
          *plVar21 = (longlong)ROUND((float10)lVar1);
          plVar21 = plVar21 + 1;
          iVar11 = iVar11 + -8;
        }
        if (iVar11 != 0 && -9 < iVar11 + -8) {
          *(int *)plVar21 = (int)*plVar19;
          if (4 < iVar11) {
            *(uint *)((int)plVar21 + 4) = *(uint *)((int)plVar19 + 4);
          }
        }
        vertex_indices = vertex_indices + 1;
        local_24 = local_24 + 1;
        plVar14 = plVar14 + 6;
      } while (local_24 < vertex_count);
    }
  }
  else {
    _DAT_02c9d2e8 = vertex_count;
    iVar11 = 0;
    _DAT_02c9d2ec = 0;
    _DAT_02c9d2f0 = 0;
    _DAT_02c9d2f4 = 0;
    DAT_007c7554 = 0;
    if (0 < vertex_count) {
      plVar14 = (longlong *)&DAT_02c9d8f8;
      local_28 = vertex_indices;
      do {
        plVar19 = (longlong *)(&DAT_00629014 + *local_28 * 0xc);
        iVar16 = 0x30;
        plVar21 = plVar14;
        while (7 < iVar16) {
          lVar1 = *plVar19;
          plVar19 = plVar19 + 1;
          *plVar21 = (longlong)ROUND((float10)lVar1);
          plVar21 = plVar21 + 1;
          iVar16 = iVar16 + -8;
        }
        if (iVar16 != 0 && -9 < iVar16 + -8) {
          *(int *)plVar21 = (int)*plVar19;
          if (4 < iVar16) {
            *(uint *)((int)plVar21 + 4) = *(uint *)((int)plVar19 + 4);
          }
        }
        iVar11 = iVar11 + 1;
        local_28 = local_28 + 1;
        plVar14 = plVar14 + 6;
      } while (iVar11 < vertex_count);
    }
    local_20 = 0;
    if (0 < (int)_DAT_02c9d2e8) {
      pSVar17 = (SRenderVertex *)&DAT_02c9d8f8;
      do {
        uVar12 = local_20 + 1;
        if (uVar12 == _DAT_02c9d2e8) {
          uVar12 = uVar12 ^ _DAT_02c9d2e8;
        }
        pSVar18 = (SRenderVertex *)(&DAT_02c9d8f8 + uVar12 * 0x30);
        bVar10 = (pSVar17->projected_vertex).transformed_z <=
                 (pSVar17->projected_vertex).transformed_x;
        if (*(int *)(&DAT_02c9d900 + uVar12 * 0x30) <= (pSVar18->projected_vertex).transformed_x) {
          bVar10 = bVar10 | 2;
        }
        switch(bVar10) {
        case 0:
          plVar14 = (longlong *)(&DAT_02c9d2f8 + _DAT_02c9d2ec * 0x30);
          iVar11 = 0x30;
          pSVar18 = pSVar17;
          while (7 < iVar11) {
            lVar2._0_4_ = (pSVar18->projected_vertex).transformed_x;
            lVar2._4_4_ = (pSVar18->projected_vertex).transformed_y;
            pSVar18 = (SRenderVertex *)&(pSVar18->projected_vertex).transformed_z;
            *plVar14 = (longlong)ROUND((float10)lVar2);
            plVar14 = plVar14 + 1;
            iVar11 = iVar11 + -8;
          }
          if (iVar11 != 0 && -9 < iVar11 + -8) {
            *(int *)plVar14 = (pSVar18->projected_vertex).transformed_x;
            if (4 < iVar11) {
              *(uint *)((int)plVar14 + (uint)bVar22 * -8 + 4) =
                   *(uint *)((int)pSVar18 + (uint)bVar22 * -8 + 4);
            }
          }
          _DAT_02c9d2ec = _DAT_02c9d2ec + 1;
          break;
        case 1:
          core_xform_cpp_clipInterpolateRightPlane_FUN_005b9630
                    (pSVar18,pSVar17,(SRenderVertex *)(&DAT_02c9d2f8 + _DAT_02c9d2ec * 0x30));
          _DAT_02c9d2ec = _DAT_02c9d2ec + 1;
          break;
        case 2:
          plVar14 = (longlong *)(&DAT_02c9d2f8 + _DAT_02c9d2ec * 0x30);
          iVar11 = 0x30;
          pSVar20 = pSVar17;
          while (7 < iVar11) {
            lVar1._0_4_ = (pSVar20->projected_vertex).transformed_x;
            lVar1._4_4_ = (pSVar20->projected_vertex).transformed_y;
            pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
            *plVar14 = (longlong)ROUND((float10)lVar1);
            plVar14 = plVar14 + 1;
            iVar11 = iVar11 + -8;
          }
          if (iVar11 != 0 && -9 < iVar11 + -8) {
            *(int *)plVar14 = (pSVar20->projected_vertex).transformed_x;
            if (4 < iVar11) {
              *(uint *)((int)plVar14 + (uint)bVar22 * -8 + 4) =
                   *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
            }
          }
          _DAT_02c9d2ec = _DAT_02c9d2ec + 1;
          core_xform_cpp_clipInterpolateRightPlane_FUN_005b9630
                    (pSVar17,pSVar18,(SRenderVertex *)(&DAT_02c9d2f8 + _DAT_02c9d2ec * 0x30));
          _DAT_02c9d2ec = _DAT_02c9d2ec + 1;
        }
        local_20 = local_20 + 1;
        pSVar17 = pSVar17 + 1;
      } while (local_20 < (int)_DAT_02c9d2e8);
    }
    if (2 < (int)_DAT_02c9d2ec) {
      local_18 = 0;
      if (0 < (int)_DAT_02c9d2ec) {
        pSVar17 = (SRenderVertex *)&DAT_02c9d2f8;
        do {
          uVar12 = local_18 + 1;
          if (uVar12 == _DAT_02c9d2ec) {
            uVar12 = uVar12 ^ _DAT_02c9d2ec;
          }
          pSVar18 = (SRenderVertex *)(&DAT_02c9d2f8 + uVar12 * 0x30);
          bVar10 = (pSVar17->projected_vertex).transformed_x <=
                   -(pSVar17->projected_vertex).transformed_z;
          if ((pSVar18->projected_vertex).transformed_x <= -*(int *)(&DAT_02c9d300 + uVar12 * 0x30))
          {
            bVar10 = bVar10 | 2;
          }
          switch(bVar10) {
          case 0:
            plVar14 = (longlong *)(_DAT_02c9d2f0 * 0x30 + 0x2c9def8);
            iVar11 = 0x30;
            pSVar18 = pSVar17;
            while (7 < iVar11) {
              lVar3._0_4_ = (pSVar18->projected_vertex).transformed_x;
              lVar3._4_4_ = (pSVar18->projected_vertex).transformed_y;
              pSVar18 = (SRenderVertex *)&(pSVar18->projected_vertex).transformed_z;
              *plVar14 = (longlong)ROUND((float10)lVar3);
              plVar14 = plVar14 + 1;
              iVar11 = iVar11 + -8;
            }
            if (iVar11 != 0 && -9 < iVar11 + -8) {
              *(int *)plVar14 = (pSVar18->projected_vertex).transformed_x;
              if (4 < iVar11) {
                *(uint *)((int)plVar14 + (uint)bVar22 * -8 + 4) =
                     *(uint *)((int)pSVar18 + (uint)bVar22 * -8 + 4);
              }
            }
            _DAT_02c9d2f0 = _DAT_02c9d2f0 + 1;
            break;
          case 1:
            core_xform_cpp_clipInterpolateLeftPlane_FUN_005b96f0
                      (pSVar18,pSVar17,(SRenderVertex *)(_DAT_02c9d2f0 * 0x30 + 0x2c9def8));
            _DAT_02c9d2f0 = _DAT_02c9d2f0 + 1;
            break;
          case 2:
            plVar14 = (longlong *)(_DAT_02c9d2f0 * 0x30 + 0x2c9def8);
            iVar11 = 0x30;
            pSVar20 = pSVar17;
            while (7 < iVar11) {
              lVar6._0_4_ = (pSVar20->projected_vertex).transformed_x;
              lVar6._4_4_ = (pSVar20->projected_vertex).transformed_y;
              pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
              *plVar14 = (longlong)ROUND((float10)lVar6);
              plVar14 = plVar14 + 1;
              iVar11 = iVar11 + -8;
            }
            if (iVar11 != 0 && -9 < iVar11 + -8) {
              *(int *)plVar14 = (pSVar20->projected_vertex).transformed_x;
              if (4 < iVar11) {
                *(uint *)((int)plVar14 + (uint)bVar22 * -8 + 4) =
                     *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
              }
            }
            _DAT_02c9d2f0 = _DAT_02c9d2f0 + 1;
            core_xform_cpp_clipInterpolateLeftPlane_FUN_005b96f0
                      (pSVar17,pSVar18,(SRenderVertex *)(_DAT_02c9d2f0 * 0x30 + 0x2c9def8));
            _DAT_02c9d2f0 = _DAT_02c9d2f0 + 1;
          }
          local_18 = local_18 + 1;
          pSVar17 = pSVar17 + 1;
        } while (local_18 < (int)_DAT_02c9d2ec);
      }
      if (2 < (int)_DAT_02c9d2f0) {
        local_14 = 0;
        if (0 < (int)_DAT_02c9d2f0) {
          pSVar17 = (SRenderVertex *)0x2c9def8;
          do {
            uVar12 = local_14 + 1;
            if (uVar12 == _DAT_02c9d2f0) {
              uVar12 = uVar12 ^ _DAT_02c9d2f0;
            }
            iVar11 = uVar12 * 0x30;
            bVar10 = (pSVar17->projected_vertex).transformed_z <=
                     (pSVar17->projected_vertex).transformed_y;
            if (*(int *)(&DAT_02c9df00 + iVar11) <= *(int *)(&DAT_02c9defc + iVar11)) {
              bVar10 = bVar10 | 2;
            }
            switch(bVar10) {
            case 0:
              plVar14 = (longlong *)(&DAT_02c9e4f8 + _DAT_02c9d2f4 * 0x30);
              iVar11 = 0x30;
              pSVar18 = pSVar17;
              while (7 < iVar11) {
                lVar4._0_4_ = (pSVar18->projected_vertex).transformed_x;
                lVar4._4_4_ = (pSVar18->projected_vertex).transformed_y;
                pSVar18 = (SRenderVertex *)&(pSVar18->projected_vertex).transformed_z;
                *plVar14 = (longlong)ROUND((float10)lVar4);
                plVar14 = plVar14 + 1;
                iVar11 = iVar11 + -8;
              }
              if (iVar11 != 0 && -9 < iVar11 + -8) {
                *(int *)plVar14 = (pSVar18->projected_vertex).transformed_x;
                if (4 < iVar11) {
                  *(uint *)((int)plVar14 + (uint)bVar22 * -8 + 4) =
                       *(uint *)((int)pSVar18 + (uint)bVar22 * -8 + 4);
                }
              }
              _DAT_02c9d2f4 = _DAT_02c9d2f4 + 1;
              break;
            case 1:
              core_xform_cpp_clipInterpolateTopPlane_FUN_005b97b0
                        ((SRenderVertex *)(iVar11 + 0x2c9def8),pSVar17,
                         (SRenderVertex *)(&DAT_02c9e4f8 + _DAT_02c9d2f4 * 0x30));
              _DAT_02c9d2f4 = _DAT_02c9d2f4 + 1;
              break;
            case 2:
              plVar14 = (longlong *)(&DAT_02c9e4f8 + _DAT_02c9d2f4 * 0x30);
              iVar16 = 0x30;
              pSVar18 = pSVar17;
              while (7 < iVar16) {
                lVar7._0_4_ = (pSVar18->projected_vertex).transformed_x;
                lVar7._4_4_ = (pSVar18->projected_vertex).transformed_y;
                pSVar18 = (SRenderVertex *)&(pSVar18->projected_vertex).transformed_z;
                *plVar14 = (longlong)ROUND((float10)lVar7);
                plVar14 = plVar14 + 1;
                iVar16 = iVar16 + -8;
              }
              if (iVar16 != 0 && -9 < iVar16 + -8) {
                *(int *)plVar14 = (pSVar18->projected_vertex).transformed_x;
                if (4 < iVar16) {
                  *(uint *)((int)plVar14 + (uint)bVar22 * -8 + 4) =
                       *(uint *)((int)pSVar18 + (uint)bVar22 * -8 + 4);
                }
              }
              _DAT_02c9d2f4 = _DAT_02c9d2f4 + 1;
              core_xform_cpp_clipInterpolateTopPlane_FUN_005b97b0
                        (pSVar17,(SRenderVertex *)(iVar11 + 0x2c9def8),
                         (SRenderVertex *)(&DAT_02c9e4f8 + _DAT_02c9d2f4 * 0x30));
              _DAT_02c9d2f4 = _DAT_02c9d2f4 + 1;
            }
            local_14 = local_14 + 1;
            pSVar17 = pSVar17 + 1;
          } while (local_14 < (int)_DAT_02c9d2f0);
        }
        if (2 < (int)_DAT_02c9d2f4) {
          local_1c = 0;
          if (0 < (int)_DAT_02c9d2f4) {
            pSVar17 = (SRenderVertex *)&DAT_02c9e4f8;
            do {
              uVar12 = local_1c + 1;
              if (uVar12 == _DAT_02c9d2f4) {
                uVar12 = uVar12 ^ _DAT_02c9d2f4;
              }
              iVar11 = uVar12 * 0x30;
              bVar10 = (pSVar17->projected_vertex).transformed_y <=
                       -(pSVar17->projected_vertex).transformed_z;
              if (*(int *)(&DAT_02c9e4fc + iVar11) <= -*(int *)(&DAT_02c9e500 + iVar11)) {
                bVar10 = bVar10 | 2;
              }
              switch(bVar10) {
              case 0:
                plVar14 = (longlong *)(&DAT_007c7558 + DAT_007c7554 * 0xc);
                iVar11 = 0x30;
                pSVar18 = pSVar17;
                while (7 < iVar11) {
                  lVar5._0_4_ = (pSVar18->projected_vertex).transformed_x;
                  lVar5._4_4_ = (pSVar18->projected_vertex).transformed_y;
                  pSVar18 = (SRenderVertex *)&(pSVar18->projected_vertex).transformed_z;
                  *plVar14 = (longlong)ROUND((float10)lVar5);
                  plVar14 = plVar14 + 1;
                  iVar11 = iVar11 + -8;
                }
                if (iVar11 != 0 && -9 < iVar11 + -8) {
                  *(int *)plVar14 = (pSVar18->projected_vertex).transformed_x;
                  if (4 < iVar11) {
                    *(uint *)((int)plVar14 + (uint)bVar22 * -8 + 4) =
                         *(uint *)((int)pSVar18 + (uint)bVar22 * -8 + 4);
                  }
                }
                DAT_007c7554 = DAT_007c7554 + 1;
                break;
              case 1:
                core_xform_cpp_clipInterpolateBottomPlane_FUN_005b9870
                          ((SRenderVertex *)(&DAT_02c9e4f8 + iVar11),pSVar17,
                           (SRenderVertex *)(&DAT_007c7558 + DAT_007c7554 * 0xc));
                DAT_007c7554 = DAT_007c7554 + 1;
                break;
              case 2:
                plVar14 = (longlong *)(&DAT_007c7558 + DAT_007c7554 * 0xc);
                iVar16 = 0x30;
                pSVar18 = pSVar17;
                while (7 < iVar16) {
                  lVar8._0_4_ = (pSVar18->projected_vertex).transformed_x;
                  lVar8._4_4_ = (pSVar18->projected_vertex).transformed_y;
                  pSVar18 = (SRenderVertex *)&(pSVar18->projected_vertex).transformed_z;
                  *plVar14 = (longlong)ROUND((float10)lVar8);
                  plVar14 = plVar14 + 1;
                  iVar16 = iVar16 + -8;
                }
                if (iVar16 != 0 && -9 < iVar16 + -8) {
                  *(int *)plVar14 = (pSVar18->projected_vertex).transformed_x;
                  if (4 < iVar16) {
                    *(uint *)((int)plVar14 + (uint)bVar22 * -8 + 4) =
                         *(uint *)((int)pSVar18 + (uint)bVar22 * -8 + 4);
                  }
                }
                DAT_007c7554 = DAT_007c7554 + 1;
                core_xform_cpp_clipInterpolateBottomPlane_FUN_005b9870
                          (pSVar17,(SRenderVertex *)(&DAT_02c9e4f8 + iVar11),
                           (SRenderVertex *)(&DAT_007c7558 + DAT_007c7554 * 0xc));
                DAT_007c7554 = DAT_007c7554 + 1;
              }
              local_1c = local_1c + 1;
              pSVar17 = pSVar17 + 1;
            } while (local_1c < (int)_DAT_02c9d2f4);
          }
          if (2 < DAT_007c7554) {
            piVar13 = &DAT_007c7558;
            iVar11 = 0;
            if (0 < DAT_007c7554) {
              do {
                iVar16 = piVar13[2];
                if (iVar16 == 0) {
                  piVar13[2] = 1;
                  *piVar13 = 0;
                  piVar13[1] = 0;
                }
                else if (iVar16 < *piVar13) {
                  *piVar13 = iVar16;
                }
                else {
                  iVar15 = -iVar16;
                  if (-*piVar13 == iVar16 || iVar15 < *piVar13) {
                    iVar9 = piVar13[1];
                    if (iVar16 < iVar9) {
                      piVar13[1] = iVar16;
                    }
                    else if (-iVar9 != iVar16 && iVar9 <= iVar15) {
                      piVar13[1] = iVar15;
                    }
                  }
                  else {
                    *piVar13 = iVar15;
                  }
                }
                iVar11 = iVar11 + 1;
                piVar13 = piVar13 + 0xc;
              } while (iVar11 < DAT_007c7554);
            }
          }
        }
      }
    }
  }
  return;
}
