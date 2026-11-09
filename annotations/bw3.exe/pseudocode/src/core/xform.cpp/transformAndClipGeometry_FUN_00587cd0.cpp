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
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  byte bVar13;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar13 = 0;
  iVar4 = 0;
  iVar8 = 0;
  piVar9 = vertex_indices;
  if (0 < vertex_count) {
    do {
      if (((&DAT_0060b024)[*piVar9 * 0xc] & 0x80000000) != 0) {
        iVar8 = iVar8 + 1;
      }
      iVar4 = iVar4 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar4 < vertex_count);
  }
  if (iVar8 == 0) {
    DAT_007e3e88 = vertex_count;
    if (0 < vertex_count) {
      plVar6 = (longlong *)&DAT_007e3e8c;
      local_24 = 0;
      do {
        iVar4 = 0x30;
        plVar10 = (longlong *)(&DAT_0060b014 + *vertex_indices * 0xc);
        plVar12 = plVar6;
        if (((uint)plVar6 & 7) != 0) {
          plVar12 = (longlong *)((int)plVar6 + 4);
          plVar10 = (longlong *)(&DAT_0060b018 + *vertex_indices * 0xc);
          *(int *)plVar6 = (int)*(longlong *)(&DAT_0060b014 + *vertex_indices * 0xc);
          iVar4 = 0x2c;
        }
        while (7 < iVar4) {
          lVar1 = *plVar10;
          plVar10 = plVar10 + 1;
          *plVar12 = (longlong)ROUND((float10)lVar1);
          plVar12 = plVar12 + 1;
          iVar4 = iVar4 + -8;
        }
        if (iVar4 != 0 && -9 < iVar4 + -8) {
          *(int *)plVar12 = (int)*plVar10;
          if (4 < iVar4) {
            *(uint *)((int)plVar12 + 4) = *(uint *)((int)plVar10 + 4);
          }
        }
        vertex_indices = vertex_indices + 1;
        local_24 = local_24 + 1;
        plVar6 = plVar6 + 6;
      } while (local_24 < vertex_count);
    }
  }
  else {
    _DAT_02d22ff8 = vertex_count;
    iVar4 = 0;
    _DAT_02d22ffc = 0;
    _DAT_02d23000 = 0;
    _DAT_02d23004 = 0;
    DAT_007e3e88 = 0;
    if (0 < vertex_count) {
      plVar6 = (longlong *)&DAT_02d23608;
      local_28 = vertex_indices;
      do {
        plVar12 = (longlong *)(&DAT_0060b014 + *local_28 * 0xc);
        iVar8 = 0x30;
        plVar10 = plVar6;
        while (7 < iVar8) {
          lVar1 = *plVar12;
          plVar12 = plVar12 + 1;
          *plVar10 = (longlong)ROUND((float10)lVar1);
          plVar10 = plVar10 + 1;
          iVar8 = iVar8 + -8;
        }
        if (iVar8 != 0 && -9 < iVar8 + -8) {
          *(int *)plVar10 = (int)*plVar12;
          if (4 < iVar8) {
            *(uint *)((int)plVar10 + 4) = *(uint *)((int)plVar12 + 4);
          }
        }
        iVar4 = iVar4 + 1;
        local_28 = local_28 + 1;
        plVar6 = plVar6 + 6;
      } while (iVar4 < vertex_count);
    }
    local_20 = 0;
    if (0 < (int)_DAT_02d22ff8) {
      plVar6 = (longlong *)&DAT_02d23608;
      do {
        uVar5 = local_20 + 1;
        if (uVar5 == _DAT_02d22ff8) {
          uVar5 = uVar5 ^ _DAT_02d22ff8;
        }
        piVar9 = (int *)(&DAT_02d23608 + uVar5 * 0x30);
        bVar3 = (int)plVar6[1] <= (int)*plVar6;
        if (*(int *)(&DAT_02d23610 + uVar5 * 0x30) <= *piVar9) {
          bVar3 = bVar3 | 2;
        }
        switch(bVar3) {
        case 0:
          plVar12 = (longlong *)(&DAT_02d23008 + _DAT_02d22ffc * 0x30);
          iVar4 = 0x30;
          plVar10 = plVar6;
          while (7 < iVar4) {
            lVar1 = *plVar10;
            plVar10 = plVar10 + 1;
            *plVar12 = (longlong)ROUND((float10)lVar1);
            plVar12 = plVar12 + 1;
            iVar4 = iVar4 + -8;
          }
          if (iVar4 != 0 && -9 < iVar4 + -8) {
            *(int *)plVar12 = (int)*plVar10;
            if (4 < iVar4) {
              *(uint *)((int)plVar12 + (uint)bVar13 * -8 + 4) =
                   *(uint *)((int)plVar10 + (uint)bVar13 * -8 + 4);
            }
          }
          _DAT_02d22ffc = _DAT_02d22ffc + 1;
          break;
        case 1:
          core_xform_cpp_clipInterpolateRightPlane_FUN_00587340
                    (piVar9,plVar6,&DAT_02d23008 + _DAT_02d22ffc * 0x30);
          _DAT_02d22ffc = _DAT_02d22ffc + 1;
          break;
        case 2:
          plVar12 = (longlong *)(&DAT_02d23008 + _DAT_02d22ffc * 0x30);
          iVar4 = 0x30;
          plVar10 = plVar6;
          while (7 < iVar4) {
            lVar1 = *plVar10;
            plVar10 = plVar10 + 1;
            *plVar12 = (longlong)ROUND((float10)lVar1);
            plVar12 = plVar12 + 1;
            iVar4 = iVar4 + -8;
          }
          if (iVar4 != 0 && -9 < iVar4 + -8) {
            *(int *)plVar12 = (int)*plVar10;
            if (4 < iVar4) {
              *(uint *)((int)plVar12 + (uint)bVar13 * -8 + 4) =
                   *(uint *)((int)plVar10 + (uint)bVar13 * -8 + 4);
            }
          }
          _DAT_02d22ffc = _DAT_02d22ffc + 1;
          core_xform_cpp_clipInterpolateRightPlane_FUN_00587340
                    (plVar6,piVar9,&DAT_02d23008 + _DAT_02d22ffc * 0x30);
          _DAT_02d22ffc = _DAT_02d22ffc + 1;
        }
        local_20 = local_20 + 1;
        plVar6 = plVar6 + 6;
      } while (local_20 < (int)_DAT_02d22ff8);
    }
    if (2 < (int)_DAT_02d22ffc) {
      local_18 = 0;
      if (0 < (int)_DAT_02d22ffc) {
        plVar6 = (longlong *)&DAT_02d23008;
        do {
          uVar5 = local_18 + 1;
          if (uVar5 == _DAT_02d22ffc) {
            uVar5 = uVar5 ^ _DAT_02d22ffc;
          }
          piVar9 = (int *)(&DAT_02d23008 + uVar5 * 0x30);
          bVar3 = (int)*plVar6 <= -(int)plVar6[1];
          if (*piVar9 <= -*(int *)(&DAT_02d23010 + uVar5 * 0x30)) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            plVar12 = (longlong *)(_DAT_02d23000 * 0x30 + 0x2d23c08);
            iVar4 = 0x30;
            plVar10 = plVar6;
            while (7 < iVar4) {
              lVar1 = *plVar10;
              plVar10 = plVar10 + 1;
              *plVar12 = (longlong)ROUND((float10)lVar1);
              plVar12 = plVar12 + 1;
              iVar4 = iVar4 + -8;
            }
            if (iVar4 != 0 && -9 < iVar4 + -8) {
              *(int *)plVar12 = (int)*plVar10;
              if (4 < iVar4) {
                *(uint *)((int)plVar12 + (uint)bVar13 * -8 + 4) =
                     *(uint *)((int)plVar10 + (uint)bVar13 * -8 + 4);
              }
            }
            _DAT_02d23000 = _DAT_02d23000 + 1;
            break;
          case 1:
            core_xform_cpp_clipInterpolateLeftPlane_FUN_00587400
                      (piVar9,plVar6,_DAT_02d23000 * 0x30 + 0x2d23c08);
            _DAT_02d23000 = _DAT_02d23000 + 1;
            break;
          case 2:
            plVar12 = (longlong *)(_DAT_02d23000 * 0x30 + 0x2d23c08);
            iVar4 = 0x30;
            plVar10 = plVar6;
            while (7 < iVar4) {
              lVar1 = *plVar10;
              plVar10 = plVar10 + 1;
              *plVar12 = (longlong)ROUND((float10)lVar1);
              plVar12 = plVar12 + 1;
              iVar4 = iVar4 + -8;
            }
            if (iVar4 != 0 && -9 < iVar4 + -8) {
              *(int *)plVar12 = (int)*plVar10;
              if (4 < iVar4) {
                *(uint *)((int)plVar12 + (uint)bVar13 * -8 + 4) =
                     *(uint *)((int)plVar10 + (uint)bVar13 * -8 + 4);
              }
            }
            _DAT_02d23000 = _DAT_02d23000 + 1;
            core_xform_cpp_clipInterpolateLeftPlane_FUN_00587400
                      (plVar6,piVar9,_DAT_02d23000 * 0x30 + 0x2d23c08);
            _DAT_02d23000 = _DAT_02d23000 + 1;
          }
          local_18 = local_18 + 1;
          plVar6 = plVar6 + 6;
        } while (local_18 < (int)_DAT_02d22ffc);
      }
      if (2 < (int)_DAT_02d23000) {
        local_14 = 0;
        if (0 < (int)_DAT_02d23000) {
          plVar6 = (longlong *)0x2d23c08;
          do {
            uVar5 = local_14 + 1;
            if (uVar5 == _DAT_02d23000) {
              uVar5 = uVar5 ^ _DAT_02d23000;
            }
            iVar4 = uVar5 * 0x30;
            bVar3 = (int)plVar6[1] <= *(int *)((int)plVar6 + 4);
            if (*(int *)(&DAT_02d23c10 + iVar4) <= *(int *)(&DAT_02d23c0c + iVar4)) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              plVar12 = (longlong *)(&DAT_02d24208 + _DAT_02d23004 * 0x30);
              iVar4 = 0x30;
              plVar10 = plVar6;
              while (7 < iVar4) {
                lVar1 = *plVar10;
                plVar10 = plVar10 + 1;
                *plVar12 = (longlong)ROUND((float10)lVar1);
                plVar12 = plVar12 + 1;
                iVar4 = iVar4 + -8;
              }
              if (iVar4 != 0 && -9 < iVar4 + -8) {
                *(int *)plVar12 = (int)*plVar10;
                if (4 < iVar4) {
                  *(uint *)((int)plVar12 + (uint)bVar13 * -8 + 4) =
                       *(uint *)((int)plVar10 + (uint)bVar13 * -8 + 4);
                }
              }
              _DAT_02d23004 = _DAT_02d23004 + 1;
              break;
            case 1:
              core_xform_cpp_clipInterpolateTopPlane_FUN_005874c0
                        (iVar4 + 0x2d23c08,plVar6,&DAT_02d24208 + _DAT_02d23004 * 0x30);
              _DAT_02d23004 = _DAT_02d23004 + 1;
              break;
            case 2:
              plVar12 = (longlong *)(&DAT_02d24208 + _DAT_02d23004 * 0x30);
              iVar8 = 0x30;
              plVar10 = plVar6;
              while (7 < iVar8) {
                lVar1 = *plVar10;
                plVar10 = plVar10 + 1;
                *plVar12 = (longlong)ROUND((float10)lVar1);
                plVar12 = plVar12 + 1;
                iVar8 = iVar8 + -8;
              }
              if (iVar8 != 0 && -9 < iVar8 + -8) {
                *(int *)plVar12 = (int)*plVar10;
                if (4 < iVar8) {
                  *(uint *)((int)plVar12 + (uint)bVar13 * -8 + 4) =
                       *(uint *)((int)plVar10 + (uint)bVar13 * -8 + 4);
                }
              }
              _DAT_02d23004 = _DAT_02d23004 + 1;
              core_xform_cpp_clipInterpolateTopPlane_FUN_005874c0
                        (plVar6,iVar4 + 0x2d23c08,&DAT_02d24208 + _DAT_02d23004 * 0x30);
              _DAT_02d23004 = _DAT_02d23004 + 1;
            }
            local_14 = local_14 + 1;
            plVar6 = plVar6 + 6;
          } while (local_14 < (int)_DAT_02d23000);
        }
        if (2 < (int)_DAT_02d23004) {
          local_1c = 0;
          if (0 < (int)_DAT_02d23004) {
            plVar6 = (longlong *)&DAT_02d24208;
            do {
              uVar5 = local_1c + 1;
              if (uVar5 == _DAT_02d23004) {
                uVar5 = uVar5 ^ _DAT_02d23004;
              }
              iVar4 = uVar5 * 0x30;
              bVar3 = *(int *)((int)plVar6 + 4) <= -(int)plVar6[1];
              if (*(int *)(&DAT_02d2420c + iVar4) <= -*(int *)(&DAT_02d24210 + iVar4)) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                plVar11 = (longlong *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc);
                iVar4 = 0x30;
                plVar10 = plVar6;
                plVar12 = plVar11;
                if (((uint)plVar11 & 7) != 0) {
                  plVar12 = (longlong *)(&DAT_007e3e90 + DAT_007e3e88 * 0xc + (uint)bVar13 * -2);
                  plVar10 = (longlong *)((int)plVar6 + (uint)bVar13 * -8 + 4);
                  *(int *)plVar11 = (int)*plVar6;
                  iVar4 = 0x2c;
                }
                while (7 < iVar4) {
                  lVar1 = *plVar10;
                  plVar10 = plVar10 + 1;
                  *plVar12 = (longlong)ROUND((float10)lVar1);
                  plVar12 = plVar12 + 1;
                  iVar4 = iVar4 + -8;
                }
                if (iVar4 != 0 && -9 < iVar4 + -8) {
                  *(int *)plVar12 = (int)*plVar10;
                  if (4 < iVar4) {
                    *(uint *)((int)plVar12 + (uint)bVar13 * -8 + 4) =
                         *(uint *)((int)plVar10 + (uint)bVar13 * -8 + 4);
                  }
                }
                DAT_007e3e88 = DAT_007e3e88 + 1;
                break;
              case 1:
                core_xform_cpp_clipInterpolateBottomPlane_FUN_00587580
                          (&DAT_02d24208 + iVar4,plVar6,&DAT_007e3e8c + DAT_007e3e88 * 0xc);
                DAT_007e3e88 = DAT_007e3e88 + 1;
                break;
              case 2:
                plVar11 = (longlong *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc);
                iVar8 = 0x30;
                plVar10 = plVar6;
                plVar12 = plVar11;
                if (((uint)plVar11 & 7) != 0) {
                  plVar12 = (longlong *)(&DAT_007e3e90 + DAT_007e3e88 * 0xc + (uint)bVar13 * -2);
                  plVar10 = (longlong *)((int)plVar6 + (uint)bVar13 * -8 + 4);
                  *(int *)plVar11 = (int)*plVar6;
                  iVar8 = 0x2c;
                }
                while (7 < iVar8) {
                  lVar1 = *plVar10;
                  plVar10 = plVar10 + 1;
                  *plVar12 = (longlong)ROUND((float10)lVar1);
                  plVar12 = plVar12 + 1;
                  iVar8 = iVar8 + -8;
                }
                if (iVar8 != 0 && -9 < iVar8 + -8) {
                  *(int *)plVar12 = (int)*plVar10;
                  if (4 < iVar8) {
                    *(uint *)((int)plVar12 + (uint)bVar13 * -8 + 4) =
                         *(uint *)((int)plVar10 + (uint)bVar13 * -8 + 4);
                  }
                }
                DAT_007e3e88 = DAT_007e3e88 + 1;
                core_xform_cpp_clipInterpolateBottomPlane_FUN_00587580
                          (plVar6,&DAT_02d24208 + iVar4,&DAT_007e3e8c + DAT_007e3e88 * 0xc);
                DAT_007e3e88 = DAT_007e3e88 + 1;
              }
              local_1c = local_1c + 1;
              plVar6 = plVar6 + 6;
            } while (local_1c < (int)_DAT_02d23004);
          }
          if (2 < DAT_007e3e88) {
            piVar9 = &DAT_007e3e8c;
            iVar4 = 0;
            if (0 < DAT_007e3e88) {
              do {
                iVar8 = piVar9[2];
                if (iVar8 == 0) {
                  piVar9[2] = 1;
                  *piVar9 = 0;
                  piVar9[1] = 0;
                }
                else if (iVar8 < *piVar9) {
                  *piVar9 = iVar8;
                }
                else {
                  iVar7 = -iVar8;
                  if (-*piVar9 == iVar8 || iVar7 < *piVar9) {
                    iVar2 = piVar9[1];
                    if (iVar8 < iVar2) {
                      piVar9[1] = iVar8;
                    }
                    else if (-iVar2 != iVar8 && iVar2 <= iVar7) {
                      piVar9[1] = iVar7;
                    }
                  }
                  else {
                    *piVar9 = iVar7;
                  }
                }
                iVar4 = iVar4 + 1;
                piVar9 = piVar9 + 0xc;
              } while (iVar4 < DAT_007e3e88);
            }
          }
        }
      }
    }
  }
  return;
}
