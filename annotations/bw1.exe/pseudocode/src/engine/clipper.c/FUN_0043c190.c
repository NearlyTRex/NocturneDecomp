// Name: FUN_0043c190
// Address: 0043c190
// Address Range: [[0043c190, 0043cbeb]]
// Convention: unknown
// Signature: undefined4 FUN_0043c190(uint param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043cb5e) */
/* WARNING: Removing unreachable block (ram,0x0043c33f) */
/* WARNING: Removing unreachable block (ram,0x0043c64b) */
/* WARNING: Removing unreachable block (ram,0x0043cace) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0043c190(uint param_1,int *param_2)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  char cVar9;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  byte bVar20;
  int local_14c [31];
  int iStack_d0;
  byte local_cc [128];
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint *local_38;
  int *local_34;
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint uVar10;
  
  bVar20 = 0;
  piVar14 = local_14c;
  uVar10 = 0xffffffff;
  cVar9 = -1;
  iVar6 = 0;
  uVar15 = 0;
  piVar8 = param_2;
  if (0 < (int)param_1) {
    do {
      if (((&DAT_00629024)[*piVar8 * 0xc] & 0x80000000) != 0) {
        uVar15 = uVar15 + 1;
      }
      iVar6 = iVar6 + 1;
      uVar10 = uVar10 & (&DAT_00629024)[*piVar8 * 0xc];
      cVar9 = (char)uVar10;
      piVar8 = piVar8 + 1;
    } while (iVar6 < (int)param_1);
  }
  if ((uVar15 == param_1) && (cVar9 != '\0')) {
    DAT_007c7554 = uVar15 ^ param_1;
  }
  else {
    if (uVar15 == 0) {
      if ((_DAT_01c50948 == 0) || (DAT_00713a74 != 0)) {
        DAT_007c7554 = param_1;
        local_1c = 0;
        if (0 < (int)param_1) {
          plVar12 = (longlong *)&DAT_007c7558;
          do {
            plVar17 = (longlong *)(&DAT_00629014 + *param_2 * 0xc);
            iVar6 = 0x30;
            plVar18 = plVar12;
            while (7 < iVar6) {
              lVar1 = *plVar17;
              plVar17 = plVar17 + 1;
              *plVar18 = (longlong)ROUND((float10)lVar1);
              plVar18 = plVar18 + 1;
              iVar6 = iVar6 + -8;
            }
            if (iVar6 != 0 && -9 < iVar6 + -8) {
              *(int *)plVar18 = (int)*plVar17;
              if (4 < iVar6) {
                *(uint *)((int)plVar18 + 4) = *(uint *)((int)plVar17 + 4);
              }
            }
            param_2 = param_2 + 1;
            local_1c = local_1c + 1;
            plVar12 = plVar12 + 6;
          } while (local_1c < (int)param_1);
        }
        return 0;
      }
      iVar6 = 0;
      if (0 < (int)param_1) {
        do {
          iVar11 = *param_2;
          iVar6 = iVar6 + 1;
          param_2 = param_2 + 1;
          *(uint **)(iVar6 * 4 + 0x7c7b54) = &DAT_00629014 + iVar11 * 0xc;
        } while (iVar6 < (int)param_1);
      }
      if (DAT_00713a7c != 0) {
        if ((int)param_1 < 4) {
          iVar6 = FUN_0053dd60(DAT_007c7b58,DAT_007c7b5c);
          bVar19 = iVar6 == 0;
        }
        else {
          local_4c = param_1 - 2;
          iVar11 = 0;
          iVar6 = local_4c * 4;
          iVar16 = 0;
          if (0 < iVar6) {
            do {
              iVar7 = FUN_0053dd60(DAT_007c7b58,*(uint *)((int)&DAT_007c7b5c + iVar11));
              if (iVar7 == 0) {
                iVar16 = iVar16 + 1;
              }
              iVar11 = iVar11 + 4;
            } while (iVar11 < iVar6);
          }
          bVar19 = iVar16 == local_4c;
        }
        if (bVar19) {
          return 1;
        }
      }
      _DAT_01e7dac8 = _DAT_01e7dac8 + (param_1 - 2);
      FUN_00582370(&DAT_007c7b58,param_1);
      return 1;
    }
    iVar6 = 0;
    if (0 < (int)param_1) {
      do {
        iVar11 = *param_2;
        iVar16 = iVar6 + 1;
        param_2 = param_2 + 1;
        local_14c[iVar6] = (int)(&DAT_00629014 + iVar11 * 0xc);
        iVar6 = iVar16;
      } while (iVar16 < (int)param_1);
    }
    DAT_007c7554 = param_1;
    local_44 = param_1;
    uVar10 = 0;
    DAT_007c841c = 0;
    local_18 = (int)local_cc;
    local_20 = 0;
    piVar8 = (int *)local_14c[param_1 - 1];
    if (0 < (int)param_1) {
      do {
        iVar6 = DAT_007c841c;
        piVar2 = (int *)*piVar14;
        bVar5 = piVar8[2] <= *piVar8;
        if (piVar2[2] <= *piVar2) {
          bVar5 = bVar5 | 2;
        }
        switch(bVar5) {
        case 0:
          uVar3 = uVar10 * 4;
          uVar10 = uVar10 + 1;
          *(int **)(local_18 + uVar3) = piVar8;
          break;
        case 1:
          if (0xb < DAT_007c841c) {
            _DAT_01d1d400 = "..\\engine\\clipper.c";
            _DAT_01d1d404 = 0x5e;
            FUN_005030e0();
          }
          iVar6 = DAT_007c841c * 0x30;
          DAT_007c841c = DAT_007c841c + 1;
          uVar3 = uVar10 * 4;
          uVar10 = uVar10 + 1;
          *(byte **)(local_18 + uVar3) = &DAT_007c81dc + iVar6;
          FUN_0043b4b0(piVar2,piVar8);
          break;
        case 2:
          iVar11 = uVar10 + 1;
          *(int **)(local_18 + uVar10 * 4) = piVar8;
          if (0xb < iVar6) {
            _DAT_01d1d400 = "..\\engine\\clipper.c";
            _DAT_01d1d404 = 0x5e;
            FUN_005030e0();
          }
          iVar6 = DAT_007c841c * 0x30;
          DAT_007c841c = DAT_007c841c + 1;
          uVar10 = uVar10 + 2;
          *(byte **)(local_18 + iVar11 * 4) = &DAT_007c81dc + iVar6;
          FUN_0043b4b0(piVar8,piVar2);
        }
        local_20 = local_20 + 1;
        piVar14 = piVar14 + 1;
        piVar8 = piVar2;
      } while (local_20 < (int)local_44);
    }
    DAT_007c7554 = uVar10;
    if (2 < (int)uVar10) {
      uVar15 = 0;
      local_48 = uVar10;
      local_30 = 0;
      piVar8 = (int *)(&iStack_d0)[uVar10];
      uVar13 = uVar15;
      puVar4 = (uint *)local_cc;
      if (0 < (int)uVar10) {
        do {
          local_38 = puVar4;
          piVar14 = (int *)*local_38;
          bVar5 = *piVar8 <= -piVar8[2];
          if (*piVar14 <= -piVar14[2]) {
            bVar5 = bVar5 | 2;
          }
          uVar15 = uVar13;
          switch(bVar5) {
          case 0:
            uVar15 = uVar13 + 1;
            local_14c[uVar13] = (int)piVar8;
            break;
          case 1:
            if (0xb < DAT_007c841c) {
              _DAT_01d1d400 = "..\\engine\\clipper.c";
              _DAT_01d1d404 = 0x5e;
              FUN_005030e0();
            }
            iVar6 = DAT_007c841c * 0x30;
            uVar15 = uVar13 + 1;
            DAT_007c841c = DAT_007c841c + 1;
            local_14c[uVar13] = (int)(&DAT_007c81dc + iVar6);
            FUN_0043b5b0(piVar14,piVar8);
            break;
          case 2:
            local_14c[uVar13] = (int)piVar8;
            if (0xb < DAT_007c841c) {
              _DAT_01d1d400 = "..\\engine\\clipper.c";
              _DAT_01d1d404 = 0x5e;
              FUN_005030e0();
            }
            iVar6 = DAT_007c841c * 0x30;
            uVar15 = uVar13 + 2;
            DAT_007c841c = DAT_007c841c + 1;
            local_14c[uVar13 + 1] = (int)(&DAT_007c81dc + iVar6);
            FUN_0043b5b0(piVar8,piVar14);
          }
          local_30 = local_30 + 1;
          local_38 = local_38 + 1;
          uVar13 = uVar15;
          piVar8 = piVar14;
          puVar4 = local_38;
        } while (local_30 < (int)local_48);
      }
      DAT_007c7554 = uVar15;
      if (2 < (int)uVar15) {
        uVar10 = 0;
        local_3c = uVar15;
        local_24 = 0;
        iVar6 = local_14c[uVar15 - 1];
        piVar8 = local_14c;
        if (0 < (int)uVar15) {
          do {
            local_2c = piVar8;
            iVar11 = *local_2c;
            bVar5 = *(int *)(iVar6 + 8) <= *(int *)(iVar6 + 4);
            if (*(int *)(iVar11 + 8) <= *(int *)(iVar11 + 4)) {
              bVar5 = bVar5 | 2;
            }
            switch(bVar5) {
            case 0:
              uVar10 = uVar10 + 1;
              (&iStack_d0)[uVar10] = iVar6;
              break;
            case 1:
              if (0xb < DAT_007c841c) {
                _DAT_01d1d400 = "..\\engine\\clipper.c";
                _DAT_01d1d404 = 0x5e;
                FUN_005030e0();
              }
              iVar16 = DAT_007c841c * 0x30;
              uVar10 = uVar10 + 1;
              DAT_007c841c = DAT_007c841c + 1;
              (&iStack_d0)[uVar10] = (int)(&DAT_007c81dc + iVar16);
              FUN_0043b6b0(iVar11,iVar6);
              break;
            case 2:
              (&iStack_d0)[uVar10 + 1] = iVar6;
              if (0xb < DAT_007c841c) {
                _DAT_01d1d400 = "..\\engine\\clipper.c";
                _DAT_01d1d404 = 0x5e;
                FUN_005030e0();
              }
              iVar16 = DAT_007c841c * 0x30;
              uVar10 = uVar10 + 2;
              DAT_007c841c = DAT_007c841c + 1;
              (&iStack_d0)[uVar10] = (int)(&DAT_007c81dc + iVar16);
              FUN_0043b6b0(iVar6,iVar11);
            }
            local_24 = local_24 + 1;
            local_2c = local_2c + 1;
            iVar6 = iVar11;
            piVar8 = local_2c;
          } while (local_24 < (int)local_3c);
        }
        DAT_007c7554 = uVar10;
        if (2 < (int)uVar10) {
          uVar15 = 0;
          local_40 = uVar10;
          local_28 = 0;
          iVar6 = (&iStack_d0)[uVar10];
          uVar13 = uVar15;
          piVar8 = (int *)local_cc;
          if (0 < (int)uVar10) {
            do {
              local_34 = piVar8;
              iVar11 = *local_34;
              bVar5 = *(int *)(iVar6 + 4) <= -*(int *)(iVar6 + 8);
              if (*(int *)(iVar11 + 4) <= -*(int *)(iVar11 + 8)) {
                bVar5 = bVar5 | 2;
              }
              uVar15 = uVar13;
              switch(bVar5) {
              case 0:
                uVar15 = uVar13 + 1;
                local_14c[uVar13] = iVar6;
                break;
              case 1:
                if (0xb < DAT_007c841c) {
                  _DAT_01d1d400 = "..\\engine\\clipper.c";
                  _DAT_01d1d404 = 0x5e;
                  FUN_005030e0();
                }
                iVar16 = DAT_007c841c * 0x30;
                uVar15 = uVar13 + 1;
                DAT_007c841c = DAT_007c841c + 1;
                local_14c[uVar13] = (int)(&DAT_007c81dc + iVar16);
                FUN_0043b7b0(iVar11,iVar6);
                break;
              case 2:
                local_14c[uVar13] = iVar6;
                if (0xb < DAT_007c841c) {
                  _DAT_01d1d400 = "..\\engine\\clipper.c";
                  _DAT_01d1d404 = 0x5e;
                  FUN_005030e0();
                }
                iVar16 = DAT_007c841c * 0x30;
                uVar15 = uVar13 + 2;
                DAT_007c841c = DAT_007c841c + 1;
                local_14c[uVar13 + 1] = (int)(&DAT_007c81dc + iVar16);
                FUN_0043b7b0(iVar6,iVar11);
              }
              local_28 = local_28 + 1;
              local_34 = local_34 + 1;
              uVar13 = uVar15;
              iVar6 = iVar11;
              piVar8 = local_34;
            } while (local_28 < (int)local_40);
          }
          DAT_007c7554 = uVar15;
          if (2 < (int)uVar15) {
            iVar6 = 0;
            if (0 < (int)uVar15) {
              plVar12 = (longlong *)&DAT_007c7558;
              iVar11 = 0;
              do {
                plVar18 = *(longlong **)((int)local_14c + iVar11);
                iVar16 = 0x30;
                plVar17 = plVar12;
                while (7 < iVar16) {
                  lVar1 = *plVar18;
                  plVar18 = plVar18 + 1;
                  *plVar17 = (longlong)ROUND((float10)lVar1);
                  plVar17 = plVar17 + 1;
                  iVar16 = iVar16 + -8;
                }
                if (iVar16 != 0 && -9 < iVar16 + -8) {
                  *(int *)plVar17 = (int)*plVar18;
                  if (4 < iVar16) {
                    *(uint *)((int)plVar17 + (uint)bVar20 * -8 + 4) =
                         *(uint *)((int)plVar18 + (uint)bVar20 * -8 + 4);
                  }
                }
                iVar11 = iVar11 + 4;
                iVar6 = iVar6 + 1;
                plVar12 = plVar12 + 6;
              } while (iVar6 < (int)DAT_007c7554);
            }
            iVar6 = 0;
            if (0x7FFFFFFF != 0) {
              if (0 < (int)DAT_007c7554) {
                iVar11 = 0;
                do {
                  if (iVar6 < *(int *)((int)&DAT_007c7560 + iVar11)) {
                    iVar6 = *(int *)((int)&DAT_007c7560 + iVar11);
                  }
                  iVar11 = iVar11 + 0x30;
                } while (iVar11 < (int)(DAT_007c7554 * 0x30));
              }
              if (0x7FFFFFFF <= iVar6) {
                DAT_007c7bd8 = DAT_007c7554;
                plVar18 = &DAT_007c7be0 + -(uint)bVar20;
                plVar12 = (longlong *)(&DAT_007c755c + (uint)bVar20 * -2);
                DAT_007c7bdc = DAT_007c7558;
                iVar6 = DAT_007c7554 * 0x30 + -4;
                if (iVar6 != 0 && 3 < (int)(DAT_007c7554 * 0x30)) {
                  while (7 < iVar6) {
                    lVar1 = *plVar12;
                    plVar12 = plVar12 + 1;
                    *plVar18 = (longlong)ROUND((float10)lVar1);
                    plVar18 = plVar18 + 1;
                    iVar6 = iVar6 + -8;
                  }
                  if (iVar6 != 0 && -9 < iVar6 + -8) {
                    *(int *)plVar18 = (int)*plVar12;
                    if (4 < iVar6) {
                      *(uint *)((int)plVar18 + (uint)bVar20 * -8 + 4) =
                           *(uint *)((int)plVar12 + (uint)bVar20 * -8 + 4);
                    }
                  }
                }
                DAT_007c7554 = 0;
                local_14 = 0;
                if (0 < (int)DAT_007c7bd8) {
                  plVar12 = (longlong *)&DAT_007c7bdc;
                  do {
                    uVar10 = local_14 + 1;
                    if (uVar10 == DAT_007c7bd8) {
                      uVar10 = uVar10 ^ DAT_007c7bd8;
                    }
                    bVar5 = 0x7FFFFFFF <= (int)plVar12[1];
                    if (0x7FFFFFFF <= *(int *)((int)&DAT_007c7be0 + uVar10 * 0x30 + 4)) {
                      bVar5 = bVar5 | 2;
                    }
                    switch(bVar5) {
                    case 0:
                      plVar17 = (longlong *)(&DAT_007c7558 + DAT_007c7554 * 0xc);
                      iVar6 = 0x30;
                      plVar18 = plVar12;
                      while (7 < iVar6) {
                        lVar1 = *plVar18;
                        plVar18 = plVar18 + 1;
                        *plVar17 = (longlong)ROUND((float10)lVar1);
                        plVar17 = plVar17 + 1;
                        iVar6 = iVar6 + -8;
                      }
                      if (iVar6 != 0 && -9 < iVar6 + -8) {
                        *(int *)plVar17 = (int)*plVar18;
                        if (4 < iVar6) {
                          *(uint *)((int)plVar17 + (uint)bVar20 * -8 + 4) =
                               *(uint *)((int)plVar18 + (uint)bVar20 * -8 + 4);
                        }
                      }
                      DAT_007c7554 = DAT_007c7554 + 1;
                      break;
                    case 1:
                      FUN_0043b8b0(&DAT_007c7bdc + uVar10 * 0xc,plVar12);
                      DAT_007c7554 = DAT_007c7554 + 1;
                      break;
                    case 2:
                      plVar17 = (longlong *)(&DAT_007c7558 + DAT_007c7554 * 0xc);
                      iVar6 = 0x30;
                      plVar18 = plVar12;
                      while (7 < iVar6) {
                        lVar1 = *plVar18;
                        plVar18 = plVar18 + 1;
                        *plVar17 = (longlong)ROUND((float10)lVar1);
                        plVar17 = plVar17 + 1;
                        iVar6 = iVar6 + -8;
                      }
                      if (iVar6 != 0 && -9 < iVar6 + -8) {
                        *(int *)plVar17 = (int)*plVar18;
                        if (4 < iVar6) {
                          *(uint *)((int)plVar17 + (uint)bVar20 * -8 + 4) =
                               *(uint *)((int)plVar18 + (uint)bVar20 * -8 + 4);
                        }
                      }
                      DAT_007c7554 = DAT_007c7554 + 1;
                      FUN_0043b8b0(plVar12,&DAT_007c7bdc + uVar10 * 0xc);
                      DAT_007c7554 = DAT_007c7554 + 1;
                    }
                    local_14 = local_14 + 1;
                    plVar12 = plVar12 + 6;
                  } while (local_14 < (int)DAT_007c7bd8);
                }
              }
            }
            if (2 < (int)DAT_007c7554) {
              iVar6 = 0;
              if (0 < (int)DAT_007c7554) {
                piVar8 = &DAT_007c7558;
                do {
                  iVar11 = piVar8[2];
                  if (iVar11 == 0) {
                    piVar8[2] = 1;
                    *piVar8 = 0;
                    iVar7 = 0;
LAB_0043c6be:
                    piVar8[1] = iVar7;
                  }
                  else {
                    iVar16 = *piVar8;
                    if (iVar11 < iVar16) {
                      *piVar8 = iVar11;
                    }
                    else {
                      iVar7 = -iVar11;
                      if (-iVar16 == iVar11 || iVar7 < iVar16) {
                        iVar16 = piVar8[1];
                        if (piVar8[2] < iVar16) {
                          piVar8[1] = piVar8[2];
                        }
                        else if (-iVar16 != iVar11 && iVar16 <= iVar7) goto LAB_0043c6be;
                      }
                      else {
                        *piVar8 = iVar7;
                      }
                    }
                  }
                  iVar6 = iVar6 + 1;
                  piVar8 = piVar8 + 0xc;
                } while (iVar6 < (int)DAT_007c7554);
              }
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}
