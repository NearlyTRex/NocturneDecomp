// Name: FUN_00587cd0
// Address: 00587cd0
// Address Range: [[00587cd0, 00588404]]
// Convention: unknown
// Signature: int * FUN_00587cd0(uint param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005882d5) */
/* WARNING: Removing unreachable block (ram,0x0058823b) */
/* WARNING: Removing unreachable block (ram,0x005881a1) */
/* WARNING: Removing unreachable block (ram,0x00587dc1) */
/* WARNING: Removing unreachable block (ram,0x00587e78) */
/* WARNING: Removing unreachable block (ram,0x00587f42) */
/* WARNING: Removing unreachable block (ram,0x00588007) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00587cd0(uint param_1,int *param_2)

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
      if (((&DAT_0060b024)[*piVar9 * 0xc] & 0x80000000) != 0) {
        iVar8 = iVar8 + 1;
      }
      local_28 = (int *)((int)local_28 + 1);
      piVar9 = piVar9 + 1;
    } while ((int)local_28 < (int)param_1);
  }
  if (iVar8 == 0) {
    DAT_007e3e88 = param_1;
    if (0 < (int)param_1) {
      plVar6 = (longlong *)&DAT_007e3e8c;
      local_24 = (int *)0x0;
      do {
        iVar8 = 0x30;
        plVar10 = (longlong *)(&DAT_0060b014 + *param_2 * 0xc);
        plVar12 = plVar6;
        if (((uint)plVar6 & 7) != 0) {
          plVar12 = (longlong *)((int)plVar6 + 4);
          plVar10 = (longlong *)(&DAT_0060b018 + *param_2 * 0xc);
          *(int *)plVar6 = (int)*(longlong *)(&DAT_0060b014 + *param_2 * 0xc);
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
    _DAT_02d22ff8 = param_1;
    iVar8 = 0;
    _DAT_02d22ffc = 0;
    _DAT_02d23000 = 0;
    _DAT_02d23004 = 0;
    DAT_007e3e88 = 0;
    if (0 < (int)param_1) {
      plVar6 = (longlong *)&DAT_02d23608;
      local_28 = param_2;
      do {
        plVar12 = (longlong *)(&DAT_0060b014 + *local_28 * 0xc);
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
    if (0 < (int)_DAT_02d22ff8) {
      plVar6 = (longlong *)&DAT_02d23608;
      do {
        uVar4 = local_20 + 1;
        if (uVar4 == _DAT_02d22ff8) {
          uVar4 = uVar4 ^ _DAT_02d22ff8;
        }
        piVar9 = (int *)(&DAT_02d23608 + uVar4 * 0x30);
        bVar3 = (int)plVar6[1] <= (int)*plVar6;
        if (*(int *)(&DAT_02d23610 + uVar4 * 0x30) <= *piVar9) {
          bVar3 = bVar3 | 2;
        }
        local_28 = (int *)(uint)bVar3;
        switch(local_28) {
        case (int *)0x0:
          plVar12 = (longlong *)(&DAT_02d23008 + _DAT_02d22ffc * 0x30);
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
          _DAT_02d22ffc = _DAT_02d22ffc + 1;
          break;
        case (int *)0x1:
          local_28 = (int *)FUN_00587340(piVar9,plVar6,&DAT_02d23008 + _DAT_02d22ffc * 0x30);
          _DAT_02d22ffc = _DAT_02d22ffc + 1;
          break;
        case (int *)0x2:
          plVar12 = (longlong *)(&DAT_02d23008 + _DAT_02d22ffc * 0x30);
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
          _DAT_02d22ffc = _DAT_02d22ffc + 1;
          local_28 = (int *)FUN_00587340(plVar6,piVar9,&DAT_02d23008 + _DAT_02d22ffc * 0x30);
          _DAT_02d22ffc = _DAT_02d22ffc + 1;
        }
        local_20 = local_20 + 1;
        plVar6 = plVar6 + 6;
      } while (local_20 < (int)_DAT_02d22ff8);
    }
    if (2 < (int)_DAT_02d22ffc) {
      local_28 = (int *)0x0;
      local_18 = 0;
      if (0 < (int)_DAT_02d22ffc) {
        plVar6 = (longlong *)&DAT_02d23008;
        do {
          uVar4 = local_18 + 1;
          if (uVar4 == _DAT_02d22ffc) {
            uVar4 = uVar4 ^ _DAT_02d22ffc;
          }
          piVar9 = (int *)(&DAT_02d23008 + uVar4 * 0x30);
          bVar3 = (int)*plVar6 <= -(int)plVar6[1];
          if (*piVar9 <= -*(int *)(&DAT_02d23010 + uVar4 * 0x30)) {
            bVar3 = bVar3 | 2;
          }
          local_28 = (int *)(uint)bVar3;
          switch(local_28) {
          case (int *)0x0:
            plVar12 = (longlong *)(_DAT_02d23000 * 0x30 + 0x2d23c08);
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
            _DAT_02d23000 = _DAT_02d23000 + 1;
            break;
          case (int *)0x1:
            local_28 = (int *)FUN_00587400(piVar9,plVar6,_DAT_02d23000 * 0x30 + 0x2d23c08);
            _DAT_02d23000 = _DAT_02d23000 + 1;
            break;
          case (int *)0x2:
            plVar12 = (longlong *)(_DAT_02d23000 * 0x30 + 0x2d23c08);
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
            _DAT_02d23000 = _DAT_02d23000 + 1;
            local_28 = (int *)FUN_00587400(plVar6,piVar9,_DAT_02d23000 * 0x30 + 0x2d23c08);
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
            uVar4 = local_14 + 1;
            if (uVar4 == _DAT_02d23000) {
              uVar4 = uVar4 ^ _DAT_02d23000;
            }
            iVar8 = uVar4 * 0x30;
            bVar3 = (int)plVar6[1] <= *(int *)((int)plVar6 + 4);
            if (*(int *)(&DAT_02d23c10 + iVar8) <= *(int *)(&DAT_02d23c0c + iVar8)) {
              bVar3 = bVar3 | 2;
            }
            local_28 = (int *)(uint)bVar3;
            switch(local_28) {
            case (int *)0x0:
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
              break;
            case (int *)0x1:
              local_28 = (int *)FUN_005874c0(iVar8 + 0x2d23c08,plVar6,
                                             &DAT_02d24208 + _DAT_02d23004 * 0x30);
              _DAT_02d23004 = _DAT_02d23004 + 1;
              break;
            case (int *)0x2:
              plVar12 = (longlong *)(&DAT_02d24208 + _DAT_02d23004 * 0x30);
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
              _DAT_02d23004 = _DAT_02d23004 + 1;
              local_28 = (int *)FUN_005874c0(plVar6,iVar8 + 0x2d23c08,
                                             &DAT_02d24208 + _DAT_02d23004 * 0x30);
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
              uVar4 = local_1c + 1;
              if (uVar4 == _DAT_02d23004) {
                uVar4 = uVar4 ^ _DAT_02d23004;
              }
              iVar8 = uVar4 * 0x30;
              bVar3 = *(int *)((int)plVar6 + 4) <= -(int)plVar6[1];
              if (*(int *)(&DAT_02d2420c + iVar8) <= -*(int *)(&DAT_02d24210 + iVar8)) {
                bVar3 = bVar3 | 2;
              }
              local_28 = (int *)(uint)bVar3;
              switch(local_28) {
              case (int *)0x0:
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
                break;
              case (int *)0x1:
                local_28 = (int *)FUN_00587580(&DAT_02d24208 + iVar8,plVar6,
                                               &DAT_007e3e8c + DAT_007e3e88 * 0xc);
                DAT_007e3e88 = DAT_007e3e88 + 1;
                break;
              case (int *)0x2:
                plVar11 = (longlong *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc);
                iVar5 = 0x30;
                plVar10 = plVar6;
                plVar12 = plVar11;
                if (((uint)plVar11 & 7) != 0) {
                  plVar12 = (longlong *)(&DAT_007e3e90 + DAT_007e3e88 * 0xc + (uint)bVar13 * -2);
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
                DAT_007e3e88 = DAT_007e3e88 + 1;
                local_28 = (int *)FUN_00587580(plVar6,&DAT_02d24208 + iVar8,
                                               &DAT_007e3e8c + DAT_007e3e88 * 0xc);
                DAT_007e3e88 = DAT_007e3e88 + 1;
              }
              local_1c = local_1c + 1;
              plVar6 = plVar6 + 6;
            } while (local_1c < (int)_DAT_02d23004);
          }
          if (2 < (int)DAT_007e3e88) {
            local_28 = &DAT_007e3e8c;
            iVar8 = 0;
            if (0 < (int)DAT_007e3e88) {
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
              } while (iVar8 < (int)DAT_007e3e88);
            }
          }
        }
      }
    }
  }
  return local_28;
}
