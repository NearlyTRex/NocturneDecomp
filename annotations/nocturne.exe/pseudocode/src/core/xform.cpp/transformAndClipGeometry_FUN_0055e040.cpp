// Name: core_xform.cpp_transformAndClipGeometry_FUN_0055e040
// Address: 0055e040
// Address Range: [[0055e040, 0055e774]]
// Convention: unknown
// Signature: int * core_xform_cpp_transformAndClipGeometry_FUN_0055e040(uint param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0055e645) */
/* WARNING: Removing unreachable block (ram,0x0055e5ab) */
/* WARNING: Removing unreachable block (ram,0x0055e511) */
/* WARNING: Removing unreachable block (ram,0x0055e131) */
/* WARNING: Removing unreachable block (ram,0x0055e1e8) */
/* WARNING: Removing unreachable block (ram,0x0055e2b2) */
/* WARNING: Removing unreachable block (ram,0x0055e377) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * core_xform_cpp_transformAndClipGeometry_FUN_0055e040(uint param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  byte bVar13;
  int *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar13 = 0;
  local_28 = (int *)0x0;
  iVar8 = 0;
  piVar9 = param_2;
  if (0 < (int)param_1) {
    do {
      if (((&DAT_005c5024)[*piVar9 * 0xc] & 0x80000000) != 0) {
        iVar8 = iVar8 + 1;
      }
      local_28 = (int *)((int)local_28 + 1);
      piVar9 = piVar9 + 1;
    } while ((int)local_28 < (int)param_1);
  }
  if (iVar8 == 0) {
    DAT_00766c70 = param_1;
    if (0 < (int)param_1) {
      plVar6 = (longlong *)&DAT_00766c74;
      local_24 = (int *)0x0;
      do {
        iVar8 = 0x30;
        plVar10 = (longlong *)(&DAT_005c5014 + *param_2 * 0xc);
        plVar12 = plVar6;
        if (((uint)plVar6 & 7) != 0) {
          plVar12 = (longlong *)((int)plVar6 + 4);
          plVar10 = (longlong *)(&DAT_005c5018 + *param_2 * 0xc);
          *(int *)plVar6 = (int)*(longlong *)(&DAT_005c5014 + *param_2 * 0xc);
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
            *(uint *)((int)plVar12 + 4) = *(uint *)((int)plVar10 + 4);
          }
        }
        param_2 = param_2 + 1;
        local_28 = (int *)((int)local_24 + 1);
        plVar6 = plVar6 + 6;
        local_24 = local_28;
      } while ((int)local_28 < (int)param_1);
    }
  }
  else {
    _DAT_02de3130 = param_1;
    iVar8 = 0;
    _DAT_02de3134 = 0;
    _DAT_02de3138 = 0;
    _DAT_02de313c = 0;
    DAT_00766c70 = 0;
    if (0 < (int)param_1) {
      plVar6 = (longlong *)&DAT_02de3740;
      local_28 = param_2;
      do {
        plVar12 = (longlong *)(&DAT_005c5014 + *local_28 * 0xc);
        iVar5 = 0x30;
        plVar10 = plVar6;
        while (7 < iVar5) {
          lVar1 = *plVar12;
          plVar12 = plVar12 + 1;
          *plVar10 = (longlong)ROUND((float10)lVar1);
          plVar10 = plVar10 + 1;
          iVar5 = iVar5 + -8;
        }
        if (iVar5 != 0 && -9 < iVar5 + -8) {
          *(int *)plVar10 = (int)*plVar12;
          if (4 < iVar5) {
            *(uint *)((int)plVar10 + 4) = *(uint *)((int)plVar12 + 4);
          }
        }
        iVar8 = iVar8 + 1;
        local_28 = local_28 + 1;
        plVar6 = plVar6 + 6;
      } while (iVar8 < (int)param_1);
    }
    local_20 = 0;
    if (0 < (int)_DAT_02de3130) {
      plVar6 = (longlong *)&DAT_02de3740;
      do {
        uVar4 = local_20 + 1;
        if (uVar4 == _DAT_02de3130) {
          uVar4 = uVar4 ^ _DAT_02de3130;
        }
        piVar9 = (int *)(&DAT_02de3740 + uVar4 * 0x30);
        bVar3 = (int)plVar6[1] <= (int)*plVar6;
        if (*(int *)(&DAT_02de3748 + uVar4 * 0x30) <= *piVar9) {
          bVar3 = bVar3 | 2;
        }
        local_28 = (int *)(uint)bVar3;
        switch(local_28) {
        case (int *)0x0:
          plVar12 = (longlong *)(&DAT_02de3140 + _DAT_02de3134 * 0x30);
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
          _DAT_02de3134 = _DAT_02de3134 + 1;
          break;
        case (int *)0x1:
          local_28 = (int *)core_xform_cpp_clipInterpolateRightPlane_FUN_0055d6b0
                                      (piVar9,plVar6,&DAT_02de3140 + _DAT_02de3134 * 0x30);
          _DAT_02de3134 = _DAT_02de3134 + 1;
          break;
        case (int *)0x2:
          plVar12 = (longlong *)(&DAT_02de3140 + _DAT_02de3134 * 0x30);
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
          _DAT_02de3134 = _DAT_02de3134 + 1;
          local_28 = (int *)core_xform_cpp_clipInterpolateRightPlane_FUN_0055d6b0
                                      (plVar6,piVar9,&DAT_02de3140 + _DAT_02de3134 * 0x30);
          _DAT_02de3134 = _DAT_02de3134 + 1;
        }
        local_20 = local_20 + 1;
        plVar6 = plVar6 + 6;
      } while (local_20 < (int)_DAT_02de3130);
    }
    if (2 < (int)_DAT_02de3134) {
      local_28 = (int *)0x0;
      local_18 = 0;
      if (0 < (int)_DAT_02de3134) {
        plVar6 = (longlong *)&DAT_02de3140;
        do {
          uVar4 = local_18 + 1;
          if (uVar4 == _DAT_02de3134) {
            uVar4 = uVar4 ^ _DAT_02de3134;
          }
          piVar9 = (int *)(&DAT_02de3140 + uVar4 * 0x30);
          bVar3 = (int)*plVar6 <= -(int)plVar6[1];
          if (*piVar9 <= -*(int *)(&DAT_02de3148 + uVar4 * 0x30)) {
            bVar3 = bVar3 | 2;
          }
          local_28 = (int *)(uint)bVar3;
          switch(local_28) {
          case (int *)0x0:
            plVar12 = (longlong *)(_DAT_02de3138 * 0x30 + 0x2de3d40);
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
            _DAT_02de3138 = _DAT_02de3138 + 1;
            break;
          case (int *)0x1:
            local_28 = (int *)core_xform_cpp_clipInterpolateLeftPlane_FUN_0055d770
                                        (piVar9,plVar6,_DAT_02de3138 * 0x30 + 0x2de3d40);
            _DAT_02de3138 = _DAT_02de3138 + 1;
            break;
          case (int *)0x2:
            plVar12 = (longlong *)(_DAT_02de3138 * 0x30 + 0x2de3d40);
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
            _DAT_02de3138 = _DAT_02de3138 + 1;
            local_28 = (int *)core_xform_cpp_clipInterpolateLeftPlane_FUN_0055d770
                                        (plVar6,piVar9,_DAT_02de3138 * 0x30 + 0x2de3d40);
            _DAT_02de3138 = _DAT_02de3138 + 1;
          }
          local_18 = local_18 + 1;
          plVar6 = plVar6 + 6;
        } while (local_18 < (int)_DAT_02de3134);
      }
      if (2 < (int)_DAT_02de3138) {
        local_14 = 0;
        if (0 < (int)_DAT_02de3138) {
          plVar6 = (longlong *)0x2de3d40;
          do {
            uVar4 = local_14 + 1;
            if (uVar4 == _DAT_02de3138) {
              uVar4 = uVar4 ^ _DAT_02de3138;
            }
            iVar8 = uVar4 * 0x30;
            bVar3 = (int)plVar6[1] <= *(int *)((int)plVar6 + 4);
            if (*(int *)(&DAT_02de3d48 + iVar8) <= *(int *)(&DAT_02de3d44 + iVar8)) {
              bVar3 = bVar3 | 2;
            }
            local_28 = (int *)(uint)bVar3;
            switch(local_28) {
            case (int *)0x0:
              plVar12 = (longlong *)(&DAT_02de4340 + _DAT_02de313c * 0x30);
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
              _DAT_02de313c = _DAT_02de313c + 1;
              break;
            case (int *)0x1:
              local_28 = (int *)core_xform_cpp_clipInterpolateTopPlane_FUN_0055d830
                                          (iVar8 + 0x2de3d40,plVar6,
                                           &DAT_02de4340 + _DAT_02de313c * 0x30);
              _DAT_02de313c = _DAT_02de313c + 1;
              break;
            case (int *)0x2:
              plVar12 = (longlong *)(&DAT_02de4340 + _DAT_02de313c * 0x30);
              iVar5 = 0x30;
              plVar10 = plVar6;
              while (7 < iVar5) {
                lVar1 = *plVar10;
                plVar10 = plVar10 + 1;
                *plVar12 = (longlong)ROUND((float10)lVar1);
                plVar12 = plVar12 + 1;
                iVar5 = iVar5 + -8;
              }
              if (iVar5 != 0 && -9 < iVar5 + -8) {
                *(int *)plVar12 = (int)*plVar10;
                if (4 < iVar5) {
                  *(uint *)((int)plVar12 + (uint)bVar13 * -8 + 4) =
                       *(uint *)((int)plVar10 + (uint)bVar13 * -8 + 4);
                }
              }
              _DAT_02de313c = _DAT_02de313c + 1;
              local_28 = (int *)core_xform_cpp_clipInterpolateTopPlane_FUN_0055d830
                                          (plVar6,iVar8 + 0x2de3d40,
                                           &DAT_02de4340 + _DAT_02de313c * 0x30);
              _DAT_02de313c = _DAT_02de313c + 1;
            }
            local_14 = local_14 + 1;
            plVar6 = plVar6 + 6;
          } while (local_14 < (int)_DAT_02de3138);
        }
        if (2 < (int)_DAT_02de313c) {
          local_1c = 0;
          if (0 < (int)_DAT_02de313c) {
            plVar6 = (longlong *)&DAT_02de4340;
            do {
              uVar4 = local_1c + 1;
              if (uVar4 == _DAT_02de313c) {
                uVar4 = uVar4 ^ _DAT_02de313c;
              }
              iVar8 = uVar4 * 0x30;
              bVar3 = *(int *)((int)plVar6 + 4) <= -(int)plVar6[1];
              if (*(int *)(&DAT_02de4344 + iVar8) <= -*(int *)(&DAT_02de4348 + iVar8)) {
                bVar3 = bVar3 | 2;
              }
              local_28 = (int *)(uint)bVar3;
              switch(local_28) {
              case (int *)0x0:
                plVar11 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
                iVar8 = 0x30;
                plVar10 = plVar6;
                plVar12 = plVar11;
                if (((uint)plVar11 & 7) != 0) {
                  plVar12 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar13 * -2);
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
                DAT_00766c70 = DAT_00766c70 + 1;
                break;
              case (int *)0x1:
                local_28 = (int *)core_xform_cpp_clipInterpolateBottomPlane_FUN_0055d8f0
                                            (&DAT_02de4340 + iVar8,plVar6,
                                             &DAT_00766c74 + DAT_00766c70 * 0xc);
                DAT_00766c70 = DAT_00766c70 + 1;
                break;
              case (int *)0x2:
                plVar11 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
                iVar5 = 0x30;
                plVar10 = plVar6;
                plVar12 = plVar11;
                if (((uint)plVar11 & 7) != 0) {
                  plVar12 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar13 * -2);
                  plVar10 = (longlong *)((int)plVar6 + (uint)bVar13 * -8 + 4);
                  *(int *)plVar11 = (int)*plVar6;
                  iVar5 = 0x2c;
                }
                while (7 < iVar5) {
                  lVar1 = *plVar10;
                  plVar10 = plVar10 + 1;
                  *plVar12 = (longlong)ROUND((float10)lVar1);
                  plVar12 = plVar12 + 1;
                  iVar5 = iVar5 + -8;
                }
                if (iVar5 != 0 && -9 < iVar5 + -8) {
                  *(int *)plVar12 = (int)*plVar10;
                  if (4 < iVar5) {
                    *(uint *)((int)plVar12 + (uint)bVar13 * -8 + 4) =
                         *(uint *)((int)plVar10 + (uint)bVar13 * -8 + 4);
                  }
                }
                DAT_00766c70 = DAT_00766c70 + 1;
                local_28 = (int *)core_xform_cpp_clipInterpolateBottomPlane_FUN_0055d8f0
                                            (plVar6,&DAT_02de4340 + iVar8,
                                             &DAT_00766c74 + DAT_00766c70 * 0xc);
                DAT_00766c70 = DAT_00766c70 + 1;
              }
              local_1c = local_1c + 1;
              plVar6 = plVar6 + 6;
            } while (local_1c < (int)_DAT_02de313c);
          }
          if (2 < (int)DAT_00766c70) {
            local_28 = &DAT_00766c74;
            iVar8 = 0;
            if (0 < (int)DAT_00766c70) {
              do {
                iVar5 = local_28[2];
                if (iVar5 == 0) {
                  local_28[2] = 1;
                  *local_28 = 0;
                  local_28[1] = 0;
                }
                else if (iVar5 < *local_28) {
                  *local_28 = iVar5;
                }
                else {
                  iVar7 = -iVar5;
                  if (-*local_28 == iVar5 || iVar7 < *local_28) {
                    iVar2 = local_28[1];
                    if (iVar5 < iVar2) {
                      local_28[1] = iVar5;
                    }
                    else if (-iVar2 != iVar5 && iVar2 <= iVar7) {
                      local_28[1] = iVar7;
                    }
                  }
                  else {
                    *local_28 = iVar7;
                  }
                }
                iVar8 = iVar8 + 1;
                local_28 = local_28 + 0xc;
              } while (iVar8 < (int)DAT_00766c70);
            }
          }
        }
      }
    }
  }
  return local_28;
}
