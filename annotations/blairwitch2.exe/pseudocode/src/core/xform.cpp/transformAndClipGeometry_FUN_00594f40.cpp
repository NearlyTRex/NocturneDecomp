// Name: core_xform.cpp_transformAndClipGeometry_FUN_00594f40
// Address: 00594f40
// Address Range: [[00594f40, 00595674]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_transformAndClipGeometry_FUN_00594f40(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_xform_cpp_transformAndClipGeometry_FUN_00594f40(int vertex_count,int *vertex_indices)

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
  SRenderVertex *pSVar19;
  longlong *plVar20;
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
      if (((&DAT_00622024)[*piVar13 * 0xc] & 0x80000000) != 0) {
        iVar16 = iVar16 + 1;
      }
      iVar11 = iVar11 + 1;
      piVar13 = piVar13 + 1;
    } while (iVar11 < vertex_count);
  }
  if (iVar16 == 0) {
    DAT_007bee30 = vertex_count;
    if (0 < vertex_count) {
      plVar14 = (longlong *)&DAT_007bee34;
      local_24 = 0;
      do {
        iVar11 = 0x30;
        plVar21 = (longlong *)(&DAT_00622014 + *vertex_indices * 0xc);
        plVar20 = plVar14;
        if (((uint)plVar14 & 7) != 0) {
          plVar20 = (longlong *)((int)plVar14 + 4);
          plVar21 = (longlong *)(&DAT_00622018 + *vertex_indices * 0xc);
          *(int *)plVar14 = (int)*(longlong *)(&DAT_00622014 + *vertex_indices * 0xc);
          iVar11 = 0x2c;
        }
        while (7 < iVar11) {
          lVar1 = *plVar21;
          plVar21 = plVar21 + 1;
          *plVar20 = (longlong)ROUND((float10)lVar1);
          plVar20 = plVar20 + 1;
          iVar11 = iVar11 + -8;
        }
        if (iVar11 != 0 && -9 < iVar11 + -8) {
          *(int *)plVar20 = (int)*plVar21;
          if (4 < iVar11) {
            *(uint *)((int)plVar20 + 4) = *(uint *)((int)plVar21 + 4);
          }
        }
        vertex_indices = vertex_indices + 1;
        local_24 = local_24 + 1;
        plVar14 = plVar14 + 6;
      } while (local_24 < vertex_count);
    }
  }
  else {
    _DAT_02665a5c = vertex_count;
    iVar11 = 0;
    _DAT_02665a60 = 0;
    _DAT_02665a64 = 0;
    _DAT_02665a68 = 0;
    DAT_007bee30 = 0;
    if (0 < vertex_count) {
      plVar14 = (longlong *)&DAT_0266606c;
      local_28 = vertex_indices;
      do {
        iVar16 = 0x30;
        plVar21 = (longlong *)(&DAT_00622014 + *local_28 * 0xc);
        plVar20 = plVar14;
        if (((uint)plVar14 & 7) != 0) {
          plVar20 = (longlong *)((int)plVar14 + 4);
          plVar21 = (longlong *)(&DAT_00622018 + *local_28 * 0xc);
          *(int *)plVar14 = (int)*(longlong *)(&DAT_00622014 + *local_28 * 0xc);
          iVar16 = 0x2c;
        }
        while (7 < iVar16) {
          lVar1 = *plVar21;
          plVar21 = plVar21 + 1;
          *plVar20 = (longlong)ROUND((float10)lVar1);
          plVar20 = plVar20 + 1;
          iVar16 = iVar16 + -8;
        }
        if (iVar16 != 0 && -9 < iVar16 + -8) {
          *(int *)plVar20 = (int)*plVar21;
          if (4 < iVar16) {
            *(uint *)((int)plVar20 + 4) = *(uint *)((int)plVar21 + 4);
          }
        }
        iVar11 = iVar11 + 1;
        local_28 = local_28 + 1;
        plVar14 = plVar14 + 6;
      } while (iVar11 < vertex_count);
    }
    local_20 = 0;
    if (0 < (int)_DAT_02665a5c) {
      pSVar17 = (SRenderVertex *)&DAT_0266606c;
      do {
        uVar12 = local_20 + 1;
        if (uVar12 == _DAT_02665a5c) {
          uVar12 = uVar12 ^ _DAT_02665a5c;
        }
        pSVar18 = (SRenderVertex *)(&DAT_0266606c + uVar12 * 0x30);
        bVar10 = (pSVar17->projected_vertex).transformed_z <=
                 (pSVar17->projected_vertex).transformed_x;
        if (*(int *)(&DAT_02666074 + uVar12 * 0x30) <= (pSVar18->projected_vertex).transformed_x) {
          bVar10 = bVar10 | 2;
        }
        switch(bVar10) {
        case 0:
          plVar21 = (longlong *)(&DAT_02665a6c + _DAT_02665a60 * 0x30);
          iVar11 = 0x30;
          pSVar18 = pSVar17;
          plVar14 = plVar21;
          if (((uint)plVar21 & 7) != 0) {
            plVar14 = (longlong *)(&DAT_02665a70 + (uint)bVar22 * -8 + _DAT_02665a60 * 0x30);
            pSVar18 = (SRenderVertex *)((int)pSVar17 + (uint)bVar22 * -8 + 4);
            *(int *)plVar21 = (pSVar17->projected_vertex).transformed_x;
            iVar11 = 0x2c;
          }
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
          _DAT_02665a60 = _DAT_02665a60 + 1;
          break;
        case 1:
          core_xform_cpp_clipInterpolateRightPlane_FUN_005945b0
                    (pSVar18,pSVar17,(SRenderVertex *)(&DAT_02665a6c + _DAT_02665a60 * 0x30));
          _DAT_02665a60 = _DAT_02665a60 + 1;
          break;
        case 2:
          plVar21 = (longlong *)(&DAT_02665a6c + _DAT_02665a60 * 0x30);
          iVar11 = 0x30;
          pSVar19 = pSVar17;
          plVar14 = plVar21;
          if (((uint)plVar21 & 7) != 0) {
            plVar14 = (longlong *)(&DAT_02665a70 + (uint)bVar22 * -8 + _DAT_02665a60 * 0x30);
            pSVar19 = (SRenderVertex *)((int)pSVar17 + (uint)bVar22 * -8 + 4);
            *(int *)plVar21 = (pSVar17->projected_vertex).transformed_x;
            iVar11 = 0x2c;
          }
          while (7 < iVar11) {
            lVar1._0_4_ = (pSVar19->projected_vertex).transformed_x;
            lVar1._4_4_ = (pSVar19->projected_vertex).transformed_y;
            pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
            *plVar14 = (longlong)ROUND((float10)lVar1);
            plVar14 = plVar14 + 1;
            iVar11 = iVar11 + -8;
          }
          if (iVar11 != 0 && -9 < iVar11 + -8) {
            *(int *)plVar14 = (pSVar19->projected_vertex).transformed_x;
            if (4 < iVar11) {
              *(uint *)((int)plVar14 + (uint)bVar22 * -8 + 4) =
                   *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
            }
          }
          _DAT_02665a60 = _DAT_02665a60 + 1;
          core_xform_cpp_clipInterpolateRightPlane_FUN_005945b0
                    (pSVar17,pSVar18,(SRenderVertex *)(&DAT_02665a6c + _DAT_02665a60 * 0x30));
          _DAT_02665a60 = _DAT_02665a60 + 1;
        }
        local_20 = local_20 + 1;
        pSVar17 = pSVar17 + 1;
      } while (local_20 < (int)_DAT_02665a5c);
    }
    if (2 < (int)_DAT_02665a60) {
      local_18 = 0;
      if (0 < (int)_DAT_02665a60) {
        pSVar17 = (SRenderVertex *)&DAT_02665a6c;
        do {
          uVar12 = local_18 + 1;
          if (uVar12 == _DAT_02665a60) {
            uVar12 = uVar12 ^ _DAT_02665a60;
          }
          pSVar18 = (SRenderVertex *)(&DAT_02665a6c + uVar12 * 0x30);
          bVar10 = (pSVar17->projected_vertex).transformed_x <=
                   -(pSVar17->projected_vertex).transformed_z;
          if ((pSVar18->projected_vertex).transformed_x <= -*(int *)(&DAT_02665a74 + uVar12 * 0x30))
          {
            bVar10 = bVar10 | 2;
          }
          switch(bVar10) {
          case 0:
            plVar21 = (longlong *)(_DAT_02665a64 * 0x30 + 0x266666c);
            iVar11 = 0x30;
            pSVar18 = pSVar17;
            plVar14 = plVar21;
            if (((uint)plVar21 & 7) != 0) {
              plVar14 = (longlong *)(&DAT_02666670 + (uint)bVar22 * -8 + _DAT_02665a64 * 0x30);
              pSVar18 = (SRenderVertex *)((int)pSVar17 + (uint)bVar22 * -8 + 4);
              *(int *)plVar21 = (pSVar17->projected_vertex).transformed_x;
              iVar11 = 0x2c;
            }
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
            _DAT_02665a64 = _DAT_02665a64 + 1;
            break;
          case 1:
            core_xform_cpp_clipInterpolateLeftPlane_FUN_00594670
                      (pSVar18,pSVar17,(SRenderVertex *)(_DAT_02665a64 * 0x30 + 0x266666c));
            _DAT_02665a64 = _DAT_02665a64 + 1;
            break;
          case 2:
            plVar21 = (longlong *)(_DAT_02665a64 * 0x30 + 0x266666c);
            iVar11 = 0x30;
            pSVar19 = pSVar17;
            plVar14 = plVar21;
            if (((uint)plVar21 & 7) != 0) {
              plVar14 = (longlong *)(&DAT_02666670 + (uint)bVar22 * -8 + _DAT_02665a64 * 0x30);
              pSVar19 = (SRenderVertex *)((int)pSVar17 + (uint)bVar22 * -8 + 4);
              *(int *)plVar21 = (pSVar17->projected_vertex).transformed_x;
              iVar11 = 0x2c;
            }
            while (7 < iVar11) {
              lVar6._0_4_ = (pSVar19->projected_vertex).transformed_x;
              lVar6._4_4_ = (pSVar19->projected_vertex).transformed_y;
              pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
              *plVar14 = (longlong)ROUND((float10)lVar6);
              plVar14 = plVar14 + 1;
              iVar11 = iVar11 + -8;
            }
            if (iVar11 != 0 && -9 < iVar11 + -8) {
              *(int *)plVar14 = (pSVar19->projected_vertex).transformed_x;
              if (4 < iVar11) {
                *(uint *)((int)plVar14 + (uint)bVar22 * -8 + 4) =
                     *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
              }
            }
            _DAT_02665a64 = _DAT_02665a64 + 1;
            core_xform_cpp_clipInterpolateLeftPlane_FUN_00594670
                      (pSVar17,pSVar18,(SRenderVertex *)(_DAT_02665a64 * 0x30 + 0x266666c));
            _DAT_02665a64 = _DAT_02665a64 + 1;
          }
          local_18 = local_18 + 1;
          pSVar17 = pSVar17 + 1;
        } while (local_18 < (int)_DAT_02665a60);
      }
      if (2 < (int)_DAT_02665a64) {
        local_14 = 0;
        if (0 < (int)_DAT_02665a64) {
          pSVar17 = (SRenderVertex *)0x266666c;
          do {
            uVar12 = local_14 + 1;
            if (uVar12 == _DAT_02665a64) {
              uVar12 = uVar12 ^ _DAT_02665a64;
            }
            iVar11 = uVar12 * 0x30;
            bVar10 = (pSVar17->projected_vertex).transformed_z <=
                     (pSVar17->projected_vertex).transformed_y;
            if (*(int *)(&DAT_02666674 + iVar11) <= *(int *)(&DAT_02666670 + iVar11)) {
              bVar10 = bVar10 | 2;
            }
            switch(bVar10) {
            case 0:
              plVar21 = (longlong *)(&DAT_02666c6c + _DAT_02665a68 * 0x30);
              iVar11 = 0x30;
              pSVar18 = pSVar17;
              plVar14 = plVar21;
              if (((uint)plVar21 & 7) != 0) {
                plVar14 = (longlong *)(&DAT_02666c70 + (uint)bVar22 * -8 + _DAT_02665a68 * 0x30);
                pSVar18 = (SRenderVertex *)((int)pSVar17 + (uint)bVar22 * -8 + 4);
                *(int *)plVar21 = (pSVar17->projected_vertex).transformed_x;
                iVar11 = 0x2c;
              }
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
              _DAT_02665a68 = _DAT_02665a68 + 1;
              break;
            case 1:
              core_xform_cpp_clipInterpolateTopPlane_FUN_00594730
                        ((SRenderVertex *)(iVar11 + 0x266666c),pSVar17,
                         (SRenderVertex *)(&DAT_02666c6c + _DAT_02665a68 * 0x30));
              _DAT_02665a68 = _DAT_02665a68 + 1;
              break;
            case 2:
              plVar21 = (longlong *)(&DAT_02666c6c + _DAT_02665a68 * 0x30);
              iVar16 = 0x30;
              pSVar18 = pSVar17;
              plVar14 = plVar21;
              if (((uint)plVar21 & 7) != 0) {
                plVar14 = (longlong *)(&DAT_02666c70 + (uint)bVar22 * -8 + _DAT_02665a68 * 0x30);
                pSVar18 = (SRenderVertex *)((int)pSVar17 + (uint)bVar22 * -8 + 4);
                *(int *)plVar21 = (pSVar17->projected_vertex).transformed_x;
                iVar16 = 0x2c;
              }
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
              _DAT_02665a68 = _DAT_02665a68 + 1;
              core_xform_cpp_clipInterpolateTopPlane_FUN_00594730
                        (pSVar17,(SRenderVertex *)(iVar11 + 0x266666c),
                         (SRenderVertex *)(&DAT_02666c6c + _DAT_02665a68 * 0x30));
              _DAT_02665a68 = _DAT_02665a68 + 1;
            }
            local_14 = local_14 + 1;
            pSVar17 = pSVar17 + 1;
          } while (local_14 < (int)_DAT_02665a64);
        }
        if (2 < (int)_DAT_02665a68) {
          local_1c = 0;
          if (0 < (int)_DAT_02665a68) {
            pSVar17 = (SRenderVertex *)&DAT_02666c6c;
            do {
              uVar12 = local_1c + 1;
              if (uVar12 == _DAT_02665a68) {
                uVar12 = uVar12 ^ _DAT_02665a68;
              }
              iVar11 = uVar12 * 0x30;
              bVar10 = (pSVar17->projected_vertex).transformed_y <=
                       -(pSVar17->projected_vertex).transformed_z;
              if (*(int *)(&DAT_02666c70 + iVar11) <= -*(int *)(&DAT_02666c74 + iVar11)) {
                bVar10 = bVar10 | 2;
              }
              switch(bVar10) {
              case 0:
                plVar21 = (longlong *)(&DAT_007bee34 + DAT_007bee30 * 0xc);
                iVar11 = 0x30;
                pSVar18 = pSVar17;
                plVar14 = plVar21;
                if (((uint)plVar21 & 7) != 0) {
                  plVar14 = (longlong *)(&DAT_007bee38 + DAT_007bee30 * 0xc + (uint)bVar22 * -2);
                  pSVar18 = (SRenderVertex *)((int)pSVar17 + (uint)bVar22 * -8 + 4);
                  *(int *)plVar21 = (pSVar17->projected_vertex).transformed_x;
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
                DAT_007bee30 = DAT_007bee30 + 1;
                break;
              case 1:
                core_xform_cpp_clipInterpolateBottomPlane_FUN_005947f0
                          ((SRenderVertex *)(&DAT_02666c6c + iVar11),pSVar17,
                           (SRenderVertex *)(&DAT_007bee34 + DAT_007bee30 * 0xc));
                DAT_007bee30 = DAT_007bee30 + 1;
                break;
              case 2:
                plVar21 = (longlong *)(&DAT_007bee34 + DAT_007bee30 * 0xc);
                iVar16 = 0x30;
                pSVar18 = pSVar17;
                plVar14 = plVar21;
                if (((uint)plVar21 & 7) != 0) {
                  plVar14 = (longlong *)(&DAT_007bee38 + DAT_007bee30 * 0xc + (uint)bVar22 * -2);
                  pSVar18 = (SRenderVertex *)((int)pSVar17 + (uint)bVar22 * -8 + 4);
                  *(int *)plVar21 = (pSVar17->projected_vertex).transformed_x;
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
                DAT_007bee30 = DAT_007bee30 + 1;
                core_xform_cpp_clipInterpolateBottomPlane_FUN_005947f0
                          (pSVar17,(SRenderVertex *)(&DAT_02666c6c + iVar11),
                           (SRenderVertex *)(&DAT_007bee34 + DAT_007bee30 * 0xc));
                DAT_007bee30 = DAT_007bee30 + 1;
              }
              local_1c = local_1c + 1;
              pSVar17 = pSVar17 + 1;
            } while (local_1c < (int)_DAT_02665a68);
          }
          if (2 < DAT_007bee30) {
            piVar13 = &DAT_007bee34;
            iVar11 = 0;
            if (0 < DAT_007bee30) {
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
              } while (iVar11 < DAT_007bee30);
            }
          }
        }
      }
    }
  }
  return;
}
