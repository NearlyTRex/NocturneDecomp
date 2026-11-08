// Name: FUN_00594f40
// Address: 00594f40
// Address Range: [[00594f40, 00595674]]
// Convention: unknown
// Signature: int * FUN_00594f40(uint param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00594f40(uint param_1,int *param_2)

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
      if (((&DAT_00622024)[*piVar9 * 0xc] & 0x80000000) != 0) {
        iVar8 = iVar8 + 1;
      }
      local_28 = (int *)((int)local_28 + 1);
      piVar9 = piVar9 + 1;
    } while ((int)local_28 < (int)param_1);
  }
  if (iVar8 == 0) {
    DAT_007bee30 = param_1;
    if (0 < (int)param_1) {
      plVar6 = (longlong *)&DAT_007bee34;
      local_24 = (int *)0x0;
      do {
        iVar8 = 0x30;
        plVar10 = (longlong *)(&DAT_00622014 + *param_2 * 0xc);
        plVar12 = plVar6;
        if (((uint)plVar6 & 7) != 0) {
          plVar12 = (longlong *)((int)plVar6 + 4);
          plVar10 = (longlong *)(&DAT_00622018 + *param_2 * 0xc);
          *(int *)plVar6 = (int)*(longlong *)(&DAT_00622014 + *param_2 * 0xc);
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
    _DAT_02665a5c = param_1;
    iVar8 = 0;
    _DAT_02665a60 = 0;
    _DAT_02665a64 = 0;
    _DAT_02665a68 = 0;
    DAT_007bee30 = 0;
    if (0 < (int)param_1) {
      plVar6 = (longlong *)&DAT_0266606c;
      local_28 = param_2;
      do {
        iVar5 = 0x30;
        plVar10 = (longlong *)(&DAT_00622014 + *local_28 * 0xc);
        plVar12 = plVar6;
        if (((uint)plVar6 & 7) != 0) {
          plVar12 = (longlong *)((int)plVar6 + 4);
          plVar10 = (longlong *)(&DAT_00622018 + *local_28 * 0xc);
          *(int *)plVar6 = (int)*(longlong *)(&DAT_00622014 + *local_28 * 0xc);
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
            *(uint *)((int)plVar12 + 4) = *(uint *)((int)plVar10 + 4);
          }
        }
        iVar8 = iVar8 + 1;
        local_28 = local_28 + 1;
        plVar6 = plVar6 + 6;
      } while (iVar8 < (int)param_1);
    }
    local_20 = 0;
    if (0 < (int)_DAT_02665a5c) {
      plVar6 = (longlong *)&DAT_0266606c;
      do {
        uVar4 = local_20 + 1;
        if (uVar4 == _DAT_02665a5c) {
          uVar4 = uVar4 ^ _DAT_02665a5c;
        }
        piVar9 = (int *)(&DAT_0266606c + uVar4 * 0x30);
        bVar3 = (int)plVar6[1] <= (int)*plVar6;
        if (*(int *)(&DAT_02666074 + uVar4 * 0x30) <= *piVar9) {
          bVar3 = bVar3 | 2;
        }
        local_28 = (int *)(uint)bVar3;
        switch(local_28) {
        case (int *)0x0:
          plVar11 = (longlong *)(&DAT_02665a6c + _DAT_02665a60 * 0x30);
          iVar8 = 0x30;
          plVar10 = plVar6;
          plVar12 = plVar11;
          if (((uint)plVar11 & 7) != 0) {
            plVar12 = (longlong *)(&DAT_02665a70 + (uint)bVar13 * -8 + _DAT_02665a60 * 0x30);
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
          _DAT_02665a60 = _DAT_02665a60 + 1;
          break;
        case (int *)0x1:
          local_28 = (int *)FUN_005945b0(piVar9,plVar6,&DAT_02665a6c + _DAT_02665a60 * 0x30);
          _DAT_02665a60 = _DAT_02665a60 + 1;
          break;
        case (int *)0x2:
          plVar11 = (longlong *)(&DAT_02665a6c + _DAT_02665a60 * 0x30);
          iVar8 = 0x30;
          plVar10 = plVar6;
          plVar12 = plVar11;
          if (((uint)plVar11 & 7) != 0) {
            plVar12 = (longlong *)(&DAT_02665a70 + (uint)bVar13 * -8 + _DAT_02665a60 * 0x30);
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
          _DAT_02665a60 = _DAT_02665a60 + 1;
          local_28 = (int *)FUN_005945b0(plVar6,piVar9,&DAT_02665a6c + _DAT_02665a60 * 0x30);
          _DAT_02665a60 = _DAT_02665a60 + 1;
        }
        local_20 = local_20 + 1;
        plVar6 = plVar6 + 6;
      } while (local_20 < (int)_DAT_02665a5c);
    }
    if (2 < (int)_DAT_02665a60) {
      local_28 = (int *)0x0;
      local_18 = 0;
      if (0 < (int)_DAT_02665a60) {
        plVar6 = (longlong *)&DAT_02665a6c;
        do {
          uVar4 = local_18 + 1;
          if (uVar4 == _DAT_02665a60) {
            uVar4 = uVar4 ^ _DAT_02665a60;
          }
          piVar9 = (int *)(&DAT_02665a6c + uVar4 * 0x30);
          bVar3 = (int)*plVar6 <= -(int)plVar6[1];
          if (*piVar9 <= -*(int *)(&DAT_02665a74 + uVar4 * 0x30)) {
            bVar3 = bVar3 | 2;
          }
          local_28 = (int *)(uint)bVar3;
          switch(local_28) {
          case (int *)0x0:
            plVar11 = (longlong *)(_DAT_02665a64 * 0x30 + 0x266666c);
            iVar8 = 0x30;
            plVar10 = plVar6;
            plVar12 = plVar11;
            if (((uint)plVar11 & 7) != 0) {
              plVar12 = (longlong *)(&DAT_02666670 + (uint)bVar13 * -8 + _DAT_02665a64 * 0x30);
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
            _DAT_02665a64 = _DAT_02665a64 + 1;
            break;
          case (int *)0x1:
            local_28 = (int *)FUN_00594670(piVar9,plVar6,_DAT_02665a64 * 0x30 + 0x266666c);
            _DAT_02665a64 = _DAT_02665a64 + 1;
            break;
          case (int *)0x2:
            plVar11 = (longlong *)(_DAT_02665a64 * 0x30 + 0x266666c);
            iVar8 = 0x30;
            plVar10 = plVar6;
            plVar12 = plVar11;
            if (((uint)plVar11 & 7) != 0) {
              plVar12 = (longlong *)(&DAT_02666670 + (uint)bVar13 * -8 + _DAT_02665a64 * 0x30);
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
            _DAT_02665a64 = _DAT_02665a64 + 1;
            local_28 = (int *)FUN_00594670(plVar6,piVar9,_DAT_02665a64 * 0x30 + 0x266666c);
            _DAT_02665a64 = _DAT_02665a64 + 1;
          }
          local_18 = local_18 + 1;
          plVar6 = plVar6 + 6;
        } while (local_18 < (int)_DAT_02665a60);
      }
      if (2 < (int)_DAT_02665a64) {
        local_14 = 0;
        if (0 < (int)_DAT_02665a64) {
          plVar6 = (longlong *)0x266666c;
          do {
            uVar4 = local_14 + 1;
            if (uVar4 == _DAT_02665a64) {
              uVar4 = uVar4 ^ _DAT_02665a64;
            }
            iVar8 = uVar4 * 0x30;
            bVar3 = (int)plVar6[1] <= *(int *)((int)plVar6 + 4);
            if (*(int *)(&DAT_02666674 + iVar8) <= *(int *)(&DAT_02666670 + iVar8)) {
              bVar3 = bVar3 | 2;
            }
            local_28 = (int *)(uint)bVar3;
            switch(local_28) {
            case (int *)0x0:
              plVar11 = (longlong *)(&DAT_02666c6c + _DAT_02665a68 * 0x30);
              iVar8 = 0x30;
              plVar10 = plVar6;
              plVar12 = plVar11;
              if (((uint)plVar11 & 7) != 0) {
                plVar12 = (longlong *)(&DAT_02666c70 + (uint)bVar13 * -8 + _DAT_02665a68 * 0x30);
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
              _DAT_02665a68 = _DAT_02665a68 + 1;
              break;
            case (int *)0x1:
              local_28 = (int *)FUN_00594730(iVar8 + 0x266666c,plVar6,
                                             &DAT_02666c6c + _DAT_02665a68 * 0x30);
              _DAT_02665a68 = _DAT_02665a68 + 1;
              break;
            case (int *)0x2:
              plVar11 = (longlong *)(&DAT_02666c6c + _DAT_02665a68 * 0x30);
              iVar5 = 0x30;
              plVar10 = plVar6;
              plVar12 = plVar11;
              if (((uint)plVar11 & 7) != 0) {
                plVar12 = (longlong *)(&DAT_02666c70 + (uint)bVar13 * -8 + _DAT_02665a68 * 0x30);
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
              _DAT_02665a68 = _DAT_02665a68 + 1;
              local_28 = (int *)FUN_00594730(plVar6,iVar8 + 0x266666c,
                                             &DAT_02666c6c + _DAT_02665a68 * 0x30);
              _DAT_02665a68 = _DAT_02665a68 + 1;
            }
            local_14 = local_14 + 1;
            plVar6 = plVar6 + 6;
          } while (local_14 < (int)_DAT_02665a64);
        }
        if (2 < (int)_DAT_02665a68) {
          local_1c = 0;
          if (0 < (int)_DAT_02665a68) {
            plVar6 = (longlong *)&DAT_02666c6c;
            do {
              uVar4 = local_1c + 1;
              if (uVar4 == _DAT_02665a68) {
                uVar4 = uVar4 ^ _DAT_02665a68;
              }
              iVar8 = uVar4 * 0x30;
              bVar3 = *(int *)((int)plVar6 + 4) <= -(int)plVar6[1];
              if (*(int *)(&DAT_02666c70 + iVar8) <= -*(int *)(&DAT_02666c74 + iVar8)) {
                bVar3 = bVar3 | 2;
              }
              local_28 = (int *)(uint)bVar3;
              switch(local_28) {
              case (int *)0x0:
                plVar11 = (longlong *)(&DAT_007bee34 + DAT_007bee30 * 0xc);
                iVar8 = 0x30;
                plVar10 = plVar6;
                plVar12 = plVar11;
                if (((uint)plVar11 & 7) != 0) {
                  plVar12 = (longlong *)(&DAT_007bee38 + DAT_007bee30 * 0xc + (uint)bVar13 * -2);
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
                DAT_007bee30 = DAT_007bee30 + 1;
                break;
              case (int *)0x1:
                local_28 = (int *)FUN_005947f0(&DAT_02666c6c + iVar8,plVar6,
                                               &DAT_007bee34 + DAT_007bee30 * 0xc);
                DAT_007bee30 = DAT_007bee30 + 1;
                break;
              case (int *)0x2:
                plVar11 = (longlong *)(&DAT_007bee34 + DAT_007bee30 * 0xc);
                iVar5 = 0x30;
                plVar10 = plVar6;
                plVar12 = plVar11;
                if (((uint)plVar11 & 7) != 0) {
                  plVar12 = (longlong *)(&DAT_007bee38 + DAT_007bee30 * 0xc + (uint)bVar13 * -2);
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
                DAT_007bee30 = DAT_007bee30 + 1;
                local_28 = (int *)FUN_005947f0(plVar6,&DAT_02666c6c + iVar8,
                                               &DAT_007bee34 + DAT_007bee30 * 0xc);
                DAT_007bee30 = DAT_007bee30 + 1;
              }
              local_1c = local_1c + 1;
              plVar6 = plVar6 + 6;
            } while (local_1c < (int)_DAT_02665a68);
          }
          if (2 < (int)DAT_007bee30) {
            local_28 = &DAT_007bee34;
            iVar8 = 0;
            if (0 < (int)DAT_007bee30) {
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
              } while (iVar8 < (int)DAT_007bee30);
            }
          }
        }
      }
    }
  }
  return local_28;
}
