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
  byte bVar12;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar12 = 0;
  iVar4 = 0;
  iVar8 = 0;
  piVar9 = vertex_indices;
  if (0 < vertex_count) {
    do {
      if (((&DAT_00629024)[*piVar9 * 0xc] & 0x80000000) != 0) {
        iVar8 = iVar8 + 1;
      }
      iVar4 = iVar4 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar4 < vertex_count);
  }
  if (iVar8 == 0) {
    DAT_007c7554 = vertex_count;
    if (0 < vertex_count) {
      plVar6 = (longlong *)&DAT_007c7558;
      local_24 = 0;
      do {
        plVar11 = (longlong *)(&DAT_00629014 + *vertex_indices * 0xc);
        iVar4 = 0x30;
        plVar10 = plVar6;
        while (7 < iVar4) {
          lVar1 = *plVar11;
          plVar11 = plVar11 + 1;
          *plVar10 = (longlong)ROUND((float10)lVar1);
          plVar10 = plVar10 + 1;
          iVar4 = iVar4 + -8;
        }
        if (iVar4 != 0 && -9 < iVar4 + -8) {
          *(int *)plVar10 = (int)*plVar11;
          if (4 < iVar4) {
            *(uint *)((int)plVar10 + 4) = *(uint *)((int)plVar11 + 4);
          }
        }
        vertex_indices = vertex_indices + 1;
        local_24 = local_24 + 1;
        plVar6 = plVar6 + 6;
      } while (local_24 < vertex_count);
    }
  }
  else {
    _DAT_02c9d2e8 = vertex_count;
    iVar4 = 0;
    _DAT_02c9d2ec = 0;
    _DAT_02c9d2f0 = 0;
    _DAT_02c9d2f4 = 0;
    DAT_007c7554 = 0;
    if (0 < vertex_count) {
      plVar6 = (longlong *)&DAT_02c9d8f8;
      local_28 = vertex_indices;
      do {
        plVar11 = (longlong *)(&DAT_00629014 + *local_28 * 0xc);
        iVar8 = 0x30;
        plVar10 = plVar6;
        while (7 < iVar8) {
          lVar1 = *plVar11;
          plVar11 = plVar11 + 1;
          *plVar10 = (longlong)ROUND((float10)lVar1);
          plVar10 = plVar10 + 1;
          iVar8 = iVar8 + -8;
        }
        if (iVar8 != 0 && -9 < iVar8 + -8) {
          *(int *)plVar10 = (int)*plVar11;
          if (4 < iVar8) {
            *(uint *)((int)plVar10 + 4) = *(uint *)((int)plVar11 + 4);
          }
        }
        iVar4 = iVar4 + 1;
        local_28 = local_28 + 1;
        plVar6 = plVar6 + 6;
      } while (iVar4 < vertex_count);
    }
    local_20 = 0;
    if (0 < (int)_DAT_02c9d2e8) {
      plVar6 = (longlong *)&DAT_02c9d8f8;
      do {
        uVar5 = local_20 + 1;
        if (uVar5 == _DAT_02c9d2e8) {
          uVar5 = uVar5 ^ _DAT_02c9d2e8;
        }
        piVar9 = (int *)(&DAT_02c9d8f8 + uVar5 * 0x30);
        bVar3 = (int)plVar6[1] <= (int)*plVar6;
        if (*(int *)(&DAT_02c9d900 + uVar5 * 0x30) <= *piVar9) {
          bVar3 = bVar3 | 2;
        }
        switch(bVar3) {
        case 0:
          plVar11 = (longlong *)(&DAT_02c9d2f8 + _DAT_02c9d2ec * 0x30);
          iVar4 = 0x30;
          plVar10 = plVar6;
          while (7 < iVar4) {
            lVar1 = *plVar10;
            plVar10 = plVar10 + 1;
            *plVar11 = (longlong)ROUND((float10)lVar1);
            plVar11 = plVar11 + 1;
            iVar4 = iVar4 + -8;
          }
          if (iVar4 != 0 && -9 < iVar4 + -8) {
            *(int *)plVar11 = (int)*plVar10;
            if (4 < iVar4) {
              *(uint *)((int)plVar11 + (uint)bVar12 * -8 + 4) =
                   *(uint *)((int)plVar10 + (uint)bVar12 * -8 + 4);
            }
          }
          _DAT_02c9d2ec = _DAT_02c9d2ec + 1;
          break;
        case 1:
          core_xform_cpp_clipInterpolateRightPlane_FUN_005b9630
                    (piVar9,plVar6,&DAT_02c9d2f8 + _DAT_02c9d2ec * 0x30);
          _DAT_02c9d2ec = _DAT_02c9d2ec + 1;
          break;
        case 2:
          plVar11 = (longlong *)(&DAT_02c9d2f8 + _DAT_02c9d2ec * 0x30);
          iVar4 = 0x30;
          plVar10 = plVar6;
          while (7 < iVar4) {
            lVar1 = *plVar10;
            plVar10 = plVar10 + 1;
            *plVar11 = (longlong)ROUND((float10)lVar1);
            plVar11 = plVar11 + 1;
            iVar4 = iVar4 + -8;
          }
          if (iVar4 != 0 && -9 < iVar4 + -8) {
            *(int *)plVar11 = (int)*plVar10;
            if (4 < iVar4) {
              *(uint *)((int)plVar11 + (uint)bVar12 * -8 + 4) =
                   *(uint *)((int)plVar10 + (uint)bVar12 * -8 + 4);
            }
          }
          _DAT_02c9d2ec = _DAT_02c9d2ec + 1;
          core_xform_cpp_clipInterpolateRightPlane_FUN_005b9630
                    (plVar6,piVar9,&DAT_02c9d2f8 + _DAT_02c9d2ec * 0x30);
          _DAT_02c9d2ec = _DAT_02c9d2ec + 1;
        }
        local_20 = local_20 + 1;
        plVar6 = plVar6 + 6;
      } while (local_20 < (int)_DAT_02c9d2e8);
    }
    if (2 < (int)_DAT_02c9d2ec) {
      local_18 = 0;
      if (0 < (int)_DAT_02c9d2ec) {
        plVar6 = (longlong *)&DAT_02c9d2f8;
        do {
          uVar5 = local_18 + 1;
          if (uVar5 == _DAT_02c9d2ec) {
            uVar5 = uVar5 ^ _DAT_02c9d2ec;
          }
          piVar9 = (int *)(&DAT_02c9d2f8 + uVar5 * 0x30);
          bVar3 = (int)*plVar6 <= -(int)plVar6[1];
          if (*piVar9 <= -*(int *)(&DAT_02c9d300 + uVar5 * 0x30)) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            plVar11 = (longlong *)(_DAT_02c9d2f0 * 0x30 + 0x2c9def8);
            iVar4 = 0x30;
            plVar10 = plVar6;
            while (7 < iVar4) {
              lVar1 = *plVar10;
              plVar10 = plVar10 + 1;
              *plVar11 = (longlong)ROUND((float10)lVar1);
              plVar11 = plVar11 + 1;
              iVar4 = iVar4 + -8;
            }
            if (iVar4 != 0 && -9 < iVar4 + -8) {
              *(int *)plVar11 = (int)*plVar10;
              if (4 < iVar4) {
                *(uint *)((int)plVar11 + (uint)bVar12 * -8 + 4) =
                     *(uint *)((int)plVar10 + (uint)bVar12 * -8 + 4);
              }
            }
            _DAT_02c9d2f0 = _DAT_02c9d2f0 + 1;
            break;
          case 1:
            core_xform_cpp_clipInterpolateLeftPlane_FUN_005b96f0
                      (piVar9,plVar6,_DAT_02c9d2f0 * 0x30 + 0x2c9def8);
            _DAT_02c9d2f0 = _DAT_02c9d2f0 + 1;
            break;
          case 2:
            plVar11 = (longlong *)(_DAT_02c9d2f0 * 0x30 + 0x2c9def8);
            iVar4 = 0x30;
            plVar10 = plVar6;
            while (7 < iVar4) {
              lVar1 = *plVar10;
              plVar10 = plVar10 + 1;
              *plVar11 = (longlong)ROUND((float10)lVar1);
              plVar11 = plVar11 + 1;
              iVar4 = iVar4 + -8;
            }
            if (iVar4 != 0 && -9 < iVar4 + -8) {
              *(int *)plVar11 = (int)*plVar10;
              if (4 < iVar4) {
                *(uint *)((int)plVar11 + (uint)bVar12 * -8 + 4) =
                     *(uint *)((int)plVar10 + (uint)bVar12 * -8 + 4);
              }
            }
            _DAT_02c9d2f0 = _DAT_02c9d2f0 + 1;
            core_xform_cpp_clipInterpolateLeftPlane_FUN_005b96f0
                      (plVar6,piVar9,_DAT_02c9d2f0 * 0x30 + 0x2c9def8);
            _DAT_02c9d2f0 = _DAT_02c9d2f0 + 1;
          }
          local_18 = local_18 + 1;
          plVar6 = plVar6 + 6;
        } while (local_18 < (int)_DAT_02c9d2ec);
      }
      if (2 < (int)_DAT_02c9d2f0) {
        local_14 = 0;
        if (0 < (int)_DAT_02c9d2f0) {
          plVar6 = (longlong *)0x2c9def8;
          do {
            uVar5 = local_14 + 1;
            if (uVar5 == _DAT_02c9d2f0) {
              uVar5 = uVar5 ^ _DAT_02c9d2f0;
            }
            iVar4 = uVar5 * 0x30;
            bVar3 = (int)plVar6[1] <= *(int *)((int)plVar6 + 4);
            if (*(int *)(&DAT_02c9df00 + iVar4) <= *(int *)(&DAT_02c9defc + iVar4)) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              plVar11 = (longlong *)(&DAT_02c9e4f8 + _DAT_02c9d2f4 * 0x30);
              iVar4 = 0x30;
              plVar10 = plVar6;
              while (7 < iVar4) {
                lVar1 = *plVar10;
                plVar10 = plVar10 + 1;
                *plVar11 = (longlong)ROUND((float10)lVar1);
                plVar11 = plVar11 + 1;
                iVar4 = iVar4 + -8;
              }
              if (iVar4 != 0 && -9 < iVar4 + -8) {
                *(int *)plVar11 = (int)*plVar10;
                if (4 < iVar4) {
                  *(uint *)((int)plVar11 + (uint)bVar12 * -8 + 4) =
                       *(uint *)((int)plVar10 + (uint)bVar12 * -8 + 4);
                }
              }
              _DAT_02c9d2f4 = _DAT_02c9d2f4 + 1;
              break;
            case 1:
              core_xform_cpp_clipInterpolateTopPlane_FUN_005b97b0
                        (iVar4 + 0x2c9def8,plVar6,&DAT_02c9e4f8 + _DAT_02c9d2f4 * 0x30);
              _DAT_02c9d2f4 = _DAT_02c9d2f4 + 1;
              break;
            case 2:
              plVar11 = (longlong *)(&DAT_02c9e4f8 + _DAT_02c9d2f4 * 0x30);
              iVar8 = 0x30;
              plVar10 = plVar6;
              while (7 < iVar8) {
                lVar1 = *plVar10;
                plVar10 = plVar10 + 1;
                *plVar11 = (longlong)ROUND((float10)lVar1);
                plVar11 = plVar11 + 1;
                iVar8 = iVar8 + -8;
              }
              if (iVar8 != 0 && -9 < iVar8 + -8) {
                *(int *)plVar11 = (int)*plVar10;
                if (4 < iVar8) {
                  *(uint *)((int)plVar11 + (uint)bVar12 * -8 + 4) =
                       *(uint *)((int)plVar10 + (uint)bVar12 * -8 + 4);
                }
              }
              _DAT_02c9d2f4 = _DAT_02c9d2f4 + 1;
              core_xform_cpp_clipInterpolateTopPlane_FUN_005b97b0
                        (plVar6,iVar4 + 0x2c9def8,&DAT_02c9e4f8 + _DAT_02c9d2f4 * 0x30);
              _DAT_02c9d2f4 = _DAT_02c9d2f4 + 1;
            }
            local_14 = local_14 + 1;
            plVar6 = plVar6 + 6;
          } while (local_14 < (int)_DAT_02c9d2f0);
        }
        if (2 < (int)_DAT_02c9d2f4) {
          local_1c = 0;
          if (0 < (int)_DAT_02c9d2f4) {
            plVar6 = (longlong *)&DAT_02c9e4f8;
            do {
              uVar5 = local_1c + 1;
              if (uVar5 == _DAT_02c9d2f4) {
                uVar5 = uVar5 ^ _DAT_02c9d2f4;
              }
              iVar4 = uVar5 * 0x30;
              bVar3 = *(int *)((int)plVar6 + 4) <= -(int)plVar6[1];
              if (*(int *)(&DAT_02c9e4fc + iVar4) <= -*(int *)(&DAT_02c9e500 + iVar4)) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                plVar11 = (longlong *)(&DAT_007c7558 + DAT_007c7554 * 0xc);
                iVar4 = 0x30;
                plVar10 = plVar6;
                while (7 < iVar4) {
                  lVar1 = *plVar10;
                  plVar10 = plVar10 + 1;
                  *plVar11 = (longlong)ROUND((float10)lVar1);
                  plVar11 = plVar11 + 1;
                  iVar4 = iVar4 + -8;
                }
                if (iVar4 != 0 && -9 < iVar4 + -8) {
                  *(int *)plVar11 = (int)*plVar10;
                  if (4 < iVar4) {
                    *(uint *)((int)plVar11 + (uint)bVar12 * -8 + 4) =
                         *(uint *)((int)plVar10 + (uint)bVar12 * -8 + 4);
                  }
                }
                DAT_007c7554 = DAT_007c7554 + 1;
                break;
              case 1:
                core_xform_cpp_clipInterpolateBottomPlane_FUN_005b9870
                          (&DAT_02c9e4f8 + iVar4,plVar6,&DAT_007c7558 + DAT_007c7554 * 0xc);
                DAT_007c7554 = DAT_007c7554 + 1;
                break;
              case 2:
                plVar11 = (longlong *)(&DAT_007c7558 + DAT_007c7554 * 0xc);
                iVar8 = 0x30;
                plVar10 = plVar6;
                while (7 < iVar8) {
                  lVar1 = *plVar10;
                  plVar10 = plVar10 + 1;
                  *plVar11 = (longlong)ROUND((float10)lVar1);
                  plVar11 = plVar11 + 1;
                  iVar8 = iVar8 + -8;
                }
                if (iVar8 != 0 && -9 < iVar8 + -8) {
                  *(int *)plVar11 = (int)*plVar10;
                  if (4 < iVar8) {
                    *(uint *)((int)plVar11 + (uint)bVar12 * -8 + 4) =
                         *(uint *)((int)plVar10 + (uint)bVar12 * -8 + 4);
                  }
                }
                DAT_007c7554 = DAT_007c7554 + 1;
                core_xform_cpp_clipInterpolateBottomPlane_FUN_005b9870
                          (plVar6,&DAT_02c9e4f8 + iVar4,&DAT_007c7558 + DAT_007c7554 * 0xc);
                DAT_007c7554 = DAT_007c7554 + 1;
              }
              local_1c = local_1c + 1;
              plVar6 = plVar6 + 6;
            } while (local_1c < (int)_DAT_02c9d2f4);
          }
          if (2 < DAT_007c7554) {
            piVar9 = &DAT_007c7558;
            iVar4 = 0;
            if (0 < DAT_007c7554) {
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
              } while (iVar4 < DAT_007c7554);
            }
          }
        }
      }
    }
  }
  return;
}
