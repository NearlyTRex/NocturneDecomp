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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  longlong *plVar20;
  SRenderVertex *pSVar21;
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
      if (((&DAT_0060b024)[*piVar13 * 0xc] & 0x80000000) != 0) {
        iVar16 = iVar16 + 1;
      }
      iVar11 = iVar11 + 1;
      piVar13 = piVar13 + 1;
    } while (iVar11 < vertex_count);
  }
  if (iVar16 == 0) {
    DAT_007e3e88 = vertex_count;
    if (0 < vertex_count) {
      plVar14 = (longlong *)&DAT_007e3e8c;
      local_24 = 0;
      do {
        iVar11 = 0x30;
        plVar19 = (longlong *)(&DAT_0060b014 + *vertex_indices * 0xc);
        plVar20 = plVar14;
        if (((uint)plVar14 & 7) != 0) {
          plVar20 = (longlong *)((int)plVar14 + 4);
          plVar19 = (longlong *)(&DAT_0060b018 + *vertex_indices * 0xc);
          *(int *)plVar14 = (int)*(longlong *)(&DAT_0060b014 + *vertex_indices * 0xc);
          iVar11 = 0x2c;
        }
        while (7 < iVar11) {
          lVar1 = *plVar19;
          plVar19 = plVar19 + 1;
          *plVar20 = (longlong)ROUND((float10)lVar1);
          plVar20 = plVar20 + 1;
          iVar11 = iVar11 + -8;
        }
        if (iVar11 != 0 && -9 < iVar11 + -8) {
          *(int *)plVar20 = (int)*plVar19;
          if (4 < iVar11) {
            *(uint *)((int)plVar20 + 4) = *(uint *)((int)plVar19 + 4);
          }
        }
        vertex_indices = vertex_indices + 1;
        local_24 = local_24 + 1;
        plVar14 = plVar14 + 6;
      } while (local_24 < vertex_count);
    }
  }
  else {
    _DAT_02d22ff8 = vertex_count;
    iVar11 = 0;
    _DAT_02d22ffc = 0;
    _DAT_02d23000 = 0;
    _DAT_02d23004 = 0;
    DAT_007e3e88 = 0;
    if (0 < vertex_count) {
      plVar14 = (longlong *)&DAT_02d23608;
      local_28 = vertex_indices;
      do {
        plVar20 = (longlong *)(&DAT_0060b014 + *local_28 * 0xc);
        iVar16 = 0x30;
        plVar19 = plVar14;
        while (7 < iVar16) {
          lVar1 = *plVar20;
          plVar20 = plVar20 + 1;
          *plVar19 = (longlong)ROUND((float10)lVar1);
          plVar19 = plVar19 + 1;
          iVar16 = iVar16 + -8;
        }
        if (iVar16 != 0 && -9 < iVar16 + -8) {
          *(int *)plVar19 = (int)*plVar20;
          if (4 < iVar16) {
            *(uint *)((int)plVar19 + 4) = *(uint *)((int)plVar20 + 4);
          }
        }
        iVar11 = iVar11 + 1;
        local_28 = local_28 + 1;
        plVar14 = plVar14 + 6;
      } while (iVar11 < vertex_count);
    }
    local_20 = 0;
    if (0 < (int)_DAT_02d22ff8) {
      pSVar17 = (SRenderVertex *)&DAT_02d23608;
      do {
        uVar12 = local_20 + 1;
        if (uVar12 == _DAT_02d22ff8) {
          uVar12 = uVar12 ^ _DAT_02d22ff8;
        }
        pSVar18 = (SRenderVertex *)(&DAT_02d23608 + uVar12 * 0x30);
        bVar10 = (pSVar17->projected_vertex).transformed_z <=
                 (pSVar17->projected_vertex).transformed_x;
        if (*(int *)(&DAT_02d23610 + uVar12 * 0x30) <= (pSVar18->projected_vertex).transformed_x) {
          bVar10 = bVar10 | 2;
        }
        switch(bVar10) {
        case 0:
          plVar14 = (longlong *)(&DAT_02d23008 + _DAT_02d22ffc * 0x30);
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
          _DAT_02d22ffc = _DAT_02d22ffc + 1;
          break;
        case 1:
          core_xform_cpp_clipInterpolateRightPlane_FUN_00587340
                    (pSVar18,pSVar17,(SRenderVertex *)(&DAT_02d23008 + _DAT_02d22ffc * 0x30));
          _DAT_02d22ffc = _DAT_02d22ffc + 1;
          break;
        case 2:
          plVar14 = (longlong *)(&DAT_02d23008 + _DAT_02d22ffc * 0x30);
          iVar11 = 0x30;
          pSVar21 = pSVar17;
          while (7 < iVar11) {
            lVar1._0_4_ = (pSVar21->projected_vertex).transformed_x;
            lVar1._4_4_ = (pSVar21->projected_vertex).transformed_y;
            pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
            *plVar14 = (longlong)ROUND((float10)lVar1);
            plVar14 = plVar14 + 1;
            iVar11 = iVar11 + -8;
          }
          if (iVar11 != 0 && -9 < iVar11 + -8) {
            *(int *)plVar14 = (pSVar21->projected_vertex).transformed_x;
            if (4 < iVar11) {
              *(uint *)((int)plVar14 + (uint)bVar22 * -8 + 4) =
                   *(uint *)((int)pSVar21 + (uint)bVar22 * -8 + 4);
            }
          }
          _DAT_02d22ffc = _DAT_02d22ffc + 1;
          core_xform_cpp_clipInterpolateRightPlane_FUN_00587340
                    (pSVar17,pSVar18,(SRenderVertex *)(&DAT_02d23008 + _DAT_02d22ffc * 0x30));
          _DAT_02d22ffc = _DAT_02d22ffc + 1;
        }
        local_20 = local_20 + 1;
        pSVar17 = pSVar17 + 1;
      } while (local_20 < (int)_DAT_02d22ff8);
    }
    if (2 < (int)_DAT_02d22ffc) {
      local_18 = 0;
      if (0 < (int)_DAT_02d22ffc) {
        pSVar17 = (SRenderVertex *)&DAT_02d23008;
        do {
          uVar12 = local_18 + 1;
          if (uVar12 == _DAT_02d22ffc) {
            uVar12 = uVar12 ^ _DAT_02d22ffc;
          }
          pSVar18 = (SRenderVertex *)(&DAT_02d23008 + uVar12 * 0x30);
          bVar10 = (pSVar17->projected_vertex).transformed_x <=
                   -(pSVar17->projected_vertex).transformed_z;
          if ((pSVar18->projected_vertex).transformed_x <= -*(int *)(&DAT_02d23010 + uVar12 * 0x30))
          {
            bVar10 = bVar10 | 2;
          }
          switch(bVar10) {
          case 0:
            plVar14 = (longlong *)(_DAT_02d23000 * 0x30 + 0x2d23c08);
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
            _DAT_02d23000 = _DAT_02d23000 + 1;
            break;
          case 1:
            core_xform_cpp_clipInterpolateLeftPlane_FUN_00587400
                      (pSVar18,pSVar17,(SRenderVertex *)(_DAT_02d23000 * 0x30 + 0x2d23c08));
            _DAT_02d23000 = _DAT_02d23000 + 1;
            break;
          case 2:
            plVar14 = (longlong *)(_DAT_02d23000 * 0x30 + 0x2d23c08);
            iVar11 = 0x30;
            pSVar21 = pSVar17;
            while (7 < iVar11) {
              lVar6._0_4_ = (pSVar21->projected_vertex).transformed_x;
              lVar6._4_4_ = (pSVar21->projected_vertex).transformed_y;
              pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
              *plVar14 = (longlong)ROUND((float10)lVar6);
              plVar14 = plVar14 + 1;
              iVar11 = iVar11 + -8;
            }
            if (iVar11 != 0 && -9 < iVar11 + -8) {
              *(int *)plVar14 = (pSVar21->projected_vertex).transformed_x;
              if (4 < iVar11) {
                *(uint *)((int)plVar14 + (uint)bVar22 * -8 + 4) =
                     *(uint *)((int)pSVar21 + (uint)bVar22 * -8 + 4);
              }
            }
            _DAT_02d23000 = _DAT_02d23000 + 1;
            core_xform_cpp_clipInterpolateLeftPlane_FUN_00587400
                      (pSVar17,pSVar18,(SRenderVertex *)(_DAT_02d23000 * 0x30 + 0x2d23c08));
            _DAT_02d23000 = _DAT_02d23000 + 1;
          }
          local_18 = local_18 + 1;
          pSVar17 = pSVar17 + 1;
        } while (local_18 < (int)_DAT_02d22ffc);
      }
      if (2 < (int)_DAT_02d23000) {
        local_14 = 0;
        if (0 < (int)_DAT_02d23000) {
          pSVar17 = (SRenderVertex *)0x2d23c08;
          do {
            uVar12 = local_14 + 1;
            if (uVar12 == _DAT_02d23000) {
              uVar12 = uVar12 ^ _DAT_02d23000;
            }
            iVar11 = uVar12 * 0x30;
            bVar10 = (pSVar17->projected_vertex).transformed_z <=
                     (pSVar17->projected_vertex).transformed_y;
            if (*(int *)(&DAT_02d23c10 + iVar11) <= *(int *)(&DAT_02d23c0c + iVar11)) {
              bVar10 = bVar10 | 2;
            }
            switch(bVar10) {
            case 0:
              plVar14 = (longlong *)(&DAT_02d24208 + _DAT_02d23004 * 0x30);
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
              _DAT_02d23004 = _DAT_02d23004 + 1;
              break;
            case 1:
              core_xform_cpp_clipInterpolateTopPlane_FUN_005874c0
                        ((SRenderVertex *)(iVar11 + 0x2d23c08),pSVar17,
                         (SRenderVertex *)(&DAT_02d24208 + _DAT_02d23004 * 0x30));
              _DAT_02d23004 = _DAT_02d23004 + 1;
              break;
            case 2:
              plVar14 = (longlong *)(&DAT_02d24208 + _DAT_02d23004 * 0x30);
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
              _DAT_02d23004 = _DAT_02d23004 + 1;
              core_xform_cpp_clipInterpolateTopPlane_FUN_005874c0
                        (pSVar17,(SRenderVertex *)(iVar11 + 0x2d23c08),
                         (SRenderVertex *)(&DAT_02d24208 + _DAT_02d23004 * 0x30));
              _DAT_02d23004 = _DAT_02d23004 + 1;
            }
            local_14 = local_14 + 1;
            pSVar17 = pSVar17 + 1;
          } while (local_14 < (int)_DAT_02d23000);
        }
        if (2 < (int)_DAT_02d23004) {
          local_1c = 0;
          if (0 < (int)_DAT_02d23004) {
            pSVar17 = (SRenderVertex *)&DAT_02d24208;
            do {
              uVar12 = local_1c + 1;
              if (uVar12 == _DAT_02d23004) {
                uVar12 = uVar12 ^ _DAT_02d23004;
              }
              iVar11 = uVar12 * 0x30;
              bVar10 = (pSVar17->projected_vertex).transformed_y <=
                       -(pSVar17->projected_vertex).transformed_z;
              if (*(int *)(&DAT_02d2420c + iVar11) <= -*(int *)(&DAT_02d24210 + iVar11)) {
                bVar10 = bVar10 | 2;
              }
              switch(bVar10) {
              case 0:
                plVar19 = (longlong *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc);
                iVar11 = 0x30;
                pSVar18 = pSVar17;
                plVar14 = plVar19;
                if (((uint)plVar19 & 7) != 0) {
                  plVar14 = (longlong *)(&DAT_007e3e90 + DAT_007e3e88 * 0xc + (uint)bVar22 * -2);
                  pSVar18 = (SRenderVertex *)((int)pSVar17 + (uint)bVar22 * -8 + 4);
                  *(int *)plVar19 = (pSVar17->projected_vertex).transformed_x;
                  iVar11 = 0x2c;
                }
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
                DAT_007e3e88 = DAT_007e3e88 + 1;
                break;
              case 1:
                core_xform_cpp_clipInterpolateBottomPlane_FUN_00587580
                          ((SRenderVertex *)(&DAT_02d24208 + iVar11),pSVar17,
                           (SRenderVertex *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc));
                DAT_007e3e88 = DAT_007e3e88 + 1;
                break;
              case 2:
                plVar19 = (longlong *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc);
                iVar16 = 0x30;
                pSVar18 = pSVar17;
                plVar14 = plVar19;
                if (((uint)plVar19 & 7) != 0) {
                  plVar14 = (longlong *)(&DAT_007e3e90 + DAT_007e3e88 * 0xc + (uint)bVar22 * -2);
                  pSVar18 = (SRenderVertex *)((int)pSVar17 + (uint)bVar22 * -8 + 4);
                  *(int *)plVar19 = (pSVar17->projected_vertex).transformed_x;
                  iVar16 = 0x2c;
                }
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
                DAT_007e3e88 = DAT_007e3e88 + 1;
                core_xform_cpp_clipInterpolateBottomPlane_FUN_00587580
                          (pSVar17,(SRenderVertex *)(&DAT_02d24208 + iVar11),
                           (SRenderVertex *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc));
                DAT_007e3e88 = DAT_007e3e88 + 1;
              }
              local_1c = local_1c + 1;
              pSVar17 = pSVar17 + 1;
            } while (local_1c < (int)_DAT_02d23004);
          }
          if (2 < DAT_007e3e88) {
            piVar13 = &DAT_007e3e8c;
            iVar11 = 0;
            if (0 < DAT_007e3e88) {
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
              } while (iVar11 < DAT_007e3e88);
            }
          }
        }
      }
    }
  }
  return;
}
