// Name: FUN_00431330
// Address: 00431330
// Address Range: [[00431330, 00431d8b]]
// Convention: unknown
// Signature: undefined4 FUN_00431330(uint param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00431bc1) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00431330(uint param_1,int *param_2)

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
  longlong *plVar19;
  bool bVar20;
  byte bVar21;
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
  
  bVar21 = 0;
  piVar14 = local_14c;
  uVar10 = 0xffffffff;
  cVar9 = -1;
  iVar6 = 0;
  uVar15 = 0;
  piVar8 = param_2;
  if (0 < (int)param_1) {
    do {
      if (((&DAT_00622024)[*piVar8 * 0xc] & 0x80000000) != 0) {
        uVar15 = uVar15 + 1;
      }
      iVar6 = iVar6 + 1;
      uVar10 = uVar10 & (&DAT_00622024)[*piVar8 * 0xc];
      cVar9 = (char)uVar10;
      piVar8 = piVar8 + 1;
    } while (iVar6 < (int)param_1);
  }
  if ((uVar15 == param_1) && (cVar9 != '\0')) {
    DAT_007bee30 = uVar15 ^ param_1;
  }
  else {
    if (uVar15 == 0) {
      if ((_DAT_01c37788 == 0) || (DAT_0070ca74 != 0)) {
        DAT_007bee30 = param_1;
        local_1c = 0;
        if (0 < (int)param_1) {
          plVar12 = (longlong *)&DAT_007bee34;
          do {
            iVar6 = 0x30;
            plVar19 = (longlong *)(&DAT_00622014 + *param_2 * 0xc);
            plVar17 = plVar12;
            if (((uint)plVar12 & 7) != 0) {
              plVar17 = (longlong *)((int)plVar12 + 4);
              plVar19 = (longlong *)(&DAT_00622018 + *param_2 * 0xc);
              *(int *)plVar12 = (int)*(longlong *)(&DAT_00622014 + *param_2 * 0xc);
              iVar6 = 0x2c;
            }
            while (7 < iVar6) {
              lVar1 = *plVar19;
              plVar19 = plVar19 + 1;
              *plVar17 = (longlong)ROUND((float10)lVar1);
              plVar17 = plVar17 + 1;
              iVar6 = iVar6 + -8;
            }
            if (iVar6 != 0 && -9 < iVar6 + -8) {
              *(int *)plVar17 = (int)*plVar19;
              if (4 < iVar6) {
                *(uint *)((int)plVar17 + 4) = *(uint *)((int)plVar19 + 4);
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
          *(uint **)(iVar6 * 4 + 0x7bf430) = &DAT_00622014 + iVar11 * 0xc;
        } while (iVar6 < (int)param_1);
      }
      if (DAT_0070ca7c != 0) {
        if ((int)param_1 < 4) {
          iVar6 = FUN_0051c760(DAT_007bf434,DAT_007bf438);
          bVar20 = iVar6 == 0;
        }
        else {
          local_4c = param_1 - 2;
          iVar11 = 0;
          iVar6 = local_4c * 4;
          iVar16 = 0;
          if (0 < iVar6) {
            do {
              iVar7 = FUN_0051c760(DAT_007bf434,*(uint *)((int)&DAT_007bf438 + iVar11));
              if (iVar7 == 0) {
                iVar16 = iVar16 + 1;
              }
              iVar11 = iVar11 + 4;
            } while (iVar11 < iVar6);
          }
          bVar20 = iVar16 == local_4c;
        }
        if (bVar20) {
          return 1;
        }
      }
      _DAT_01e61b58 = _DAT_01e61b58 + (param_1 - 2);
      FUN_0055f920(&DAT_007bf434,param_1);
      return 1;
    }
    iVar6 = 0;
    if (0 < (int)param_1) {
      do {
        iVar11 = *param_2;
        iVar16 = iVar6 + 1;
        param_2 = param_2 + 1;
        local_14c[iVar6] = (int)(&DAT_00622014 + iVar11 * 0xc);
        iVar6 = iVar16;
      } while (iVar16 < (int)param_1);
    }
    DAT_007bee30 = param_1;
    local_44 = param_1;
    uVar10 = 0;
    DAT_007bfcf8 = 0;
    local_18 = (int)local_cc;
    local_20 = 0;
    piVar8 = (int *)local_14c[param_1 - 1];
    if (0 < (int)param_1) {
      do {
        iVar6 = DAT_007bfcf8;
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
          if (0xb < DAT_007bfcf8) {
            _DAT_01d046a0 = "..\\engine\\clipper.c";
            _DAT_01d046a4 = 0x5e;
            FUN_004e4500();
          }
          iVar6 = DAT_007bfcf8 * 0x30;
          DAT_007bfcf8 = DAT_007bfcf8 + 1;
          uVar3 = uVar10 * 4;
          uVar10 = uVar10 + 1;
          *(byte **)(local_18 + uVar3) = &DAT_007bfab8 + iVar6;
          FUN_00430650(piVar2,piVar8);
          break;
        case 2:
          iVar11 = uVar10 + 1;
          *(int **)(local_18 + uVar10 * 4) = piVar8;
          if (0xb < iVar6) {
            _DAT_01d046a0 = "..\\engine\\clipper.c";
            _DAT_01d046a4 = 0x5e;
            FUN_004e4500();
          }
          iVar6 = DAT_007bfcf8 * 0x30;
          DAT_007bfcf8 = DAT_007bfcf8 + 1;
          uVar10 = uVar10 + 2;
          *(byte **)(local_18 + iVar11 * 4) = &DAT_007bfab8 + iVar6;
          FUN_00430650(piVar8,piVar2);
        }
        local_20 = local_20 + 1;
        piVar14 = piVar14 + 1;
        piVar8 = piVar2;
      } while (local_20 < (int)local_44);
    }
    DAT_007bee30 = uVar10;
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
            if (0xb < DAT_007bfcf8) {
              _DAT_01d046a0 = "..\\engine\\clipper.c";
              _DAT_01d046a4 = 0x5e;
              FUN_004e4500();
            }
            iVar6 = DAT_007bfcf8 * 0x30;
            uVar15 = uVar13 + 1;
            DAT_007bfcf8 = DAT_007bfcf8 + 1;
            local_14c[uVar13] = (int)(&DAT_007bfab8 + iVar6);
            FUN_00430750(piVar14,piVar8);
            break;
          case 2:
            local_14c[uVar13] = (int)piVar8;
            if (0xb < DAT_007bfcf8) {
              _DAT_01d046a0 = "..\\engine\\clipper.c";
              _DAT_01d046a4 = 0x5e;
              FUN_004e4500();
            }
            iVar6 = DAT_007bfcf8 * 0x30;
            uVar15 = uVar13 + 2;
            DAT_007bfcf8 = DAT_007bfcf8 + 1;
            local_14c[uVar13 + 1] = (int)(&DAT_007bfab8 + iVar6);
            FUN_00430750(piVar8,piVar14);
          }
          local_30 = local_30 + 1;
          local_38 = local_38 + 1;
          uVar13 = uVar15;
          piVar8 = piVar14;
          puVar4 = local_38;
        } while (local_30 < (int)local_48);
      }
      DAT_007bee30 = uVar15;
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
              if (0xb < DAT_007bfcf8) {
                _DAT_01d046a0 = "..\\engine\\clipper.c";
                _DAT_01d046a4 = 0x5e;
                FUN_004e4500();
              }
              iVar16 = DAT_007bfcf8 * 0x30;
              uVar10 = uVar10 + 1;
              DAT_007bfcf8 = DAT_007bfcf8 + 1;
              (&iStack_d0)[uVar10] = (int)(&DAT_007bfab8 + iVar16);
              FUN_00430850(iVar11,iVar6);
              break;
            case 2:
              (&iStack_d0)[uVar10 + 1] = iVar6;
              if (0xb < DAT_007bfcf8) {
                _DAT_01d046a0 = "..\\engine\\clipper.c";
                _DAT_01d046a4 = 0x5e;
                FUN_004e4500();
              }
              iVar16 = DAT_007bfcf8 * 0x30;
              uVar10 = uVar10 + 2;
              DAT_007bfcf8 = DAT_007bfcf8 + 1;
              (&iStack_d0)[uVar10] = (int)(&DAT_007bfab8 + iVar16);
              FUN_00430850(iVar6,iVar11);
            }
            local_24 = local_24 + 1;
            local_2c = local_2c + 1;
            iVar6 = iVar11;
            piVar8 = local_2c;
          } while (local_24 < (int)local_3c);
        }
        DAT_007bee30 = uVar10;
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
                if (0xb < DAT_007bfcf8) {
                  _DAT_01d046a0 = "..\\engine\\clipper.c";
                  _DAT_01d046a4 = 0x5e;
                  FUN_004e4500();
                }
                iVar16 = DAT_007bfcf8 * 0x30;
                uVar15 = uVar13 + 1;
                DAT_007bfcf8 = DAT_007bfcf8 + 1;
                local_14c[uVar13] = (int)(&DAT_007bfab8 + iVar16);
                FUN_00430950(iVar11,iVar6);
                break;
              case 2:
                local_14c[uVar13] = iVar6;
                if (0xb < DAT_007bfcf8) {
                  _DAT_01d046a0 = "..\\engine\\clipper.c";
                  _DAT_01d046a4 = 0x5e;
                  FUN_004e4500();
                }
                iVar16 = DAT_007bfcf8 * 0x30;
                uVar15 = uVar13 + 2;
                DAT_007bfcf8 = DAT_007bfcf8 + 1;
                local_14c[uVar13 + 1] = (int)(&DAT_007bfab8 + iVar16);
                FUN_00430950(iVar6,iVar11);
              }
              local_28 = local_28 + 1;
              local_34 = local_34 + 1;
              uVar13 = uVar15;
              iVar6 = iVar11;
              piVar8 = local_34;
            } while (local_28 < (int)local_40);
          }
          DAT_007bee30 = uVar15;
          if (2 < (int)uVar15) {
            iVar6 = 0;
            if (0 < (int)uVar15) {
              plVar12 = (longlong *)&DAT_007bee34;
              iVar11 = 0;
              do {
                plVar19 = *(longlong **)((int)local_14c + iVar11);
                iVar16 = 0x30;
                plVar17 = plVar19;
                plVar18 = plVar12;
                if (((uint)plVar12 & 7) != 0) {
                  plVar18 = (longlong *)((int)plVar12 + (uint)bVar21 * -8 + 4);
                  plVar17 = (longlong *)((int)plVar19 + (uint)bVar21 * -8 + 4);
                  *(int *)plVar12 = (int)*plVar19;
                  iVar16 = 0x2c;
                }
                while (7 < iVar16) {
                  lVar1 = *plVar17;
                  plVar17 = plVar17 + 1;
                  *plVar18 = (longlong)ROUND((float10)lVar1);
                  plVar18 = plVar18 + 1;
                  iVar16 = iVar16 + -8;
                }
                if (iVar16 != 0 && -9 < iVar16 + -8) {
                  *(int *)plVar18 = (int)*plVar17;
                  if (4 < iVar16) {
                    *(uint *)((int)plVar18 + (uint)bVar21 * -8 + 4) =
                         *(uint *)((int)plVar17 + (uint)bVar21 * -8 + 4);
                  }
                }
                iVar11 = iVar11 + 4;
                iVar6 = iVar6 + 1;
                plVar12 = plVar12 + 6;
              } while (iVar6 < (int)DAT_007bee30);
            }
            iVar6 = 0;
            if (0x7FFFFFFF != 0) {
              if (0 < (int)DAT_007bee30) {
                iVar11 = 0;
                do {
                  if (iVar6 < *(int *)((int)&DAT_007bee3c + iVar11)) {
                    iVar6 = *(int *)((int)&DAT_007bee3c + iVar11);
                  }
                  iVar11 = iVar11 + 0x30;
                } while (iVar11 < (int)(DAT_007bee30 * 0x30));
              }
              if (0x7FFFFFFF <= iVar6) {
                DAT_007bf4b4 = DAT_007bee30;
                plVar12 = (longlong *)&DAT_007bee34;
                plVar19 = (longlong *)&DAT_007bf4b8;
                iVar6 = DAT_007bee30 * 0x30;
                while (7 < iVar6) {
                  lVar1 = *plVar12;
                  plVar12 = plVar12 + 1;
                  *plVar19 = (longlong)ROUND((float10)lVar1);
                  plVar19 = plVar19 + 1;
                  iVar6 = iVar6 + -8;
                }
                if (iVar6 != 0 && -9 < iVar6 + -8) {
                  *(int *)plVar19 = (int)*plVar12;
                  if (4 < iVar6) {
                    *(uint *)((int)plVar19 + (uint)bVar21 * -8 + 4) =
                         *(uint *)((int)plVar12 + (uint)bVar21 * -8 + 4);
                  }
                }
                DAT_007bee30 = 0;
                local_14 = 0;
                if (0 < (int)DAT_007bf4b4) {
                  plVar12 = (longlong *)&DAT_007bf4b8;
                  do {
                    uVar10 = local_14 + 1;
                    if (uVar10 == DAT_007bf4b4) {
                      uVar10 = uVar10 ^ DAT_007bf4b4;
                    }
                    bVar5 = 0x7FFFFFFF <= (int)plVar12[1];
                    if (0x7FFFFFFF <= (int)(&DAT_007bf4c0)[uVar10 * 0xc]) {
                      bVar5 = bVar5 | 2;
                    }
                    switch(bVar5) {
                    case 0:
                      plVar18 = (longlong *)(&DAT_007bee34 + DAT_007bee30 * 0xc);
                      iVar6 = 0x30;
                      plVar19 = plVar12;
                      plVar17 = plVar18;
                      if (((uint)plVar18 & 7) != 0) {
                        plVar17 = (longlong *)
                                  (&DAT_007bee38 + DAT_007bee30 * 0xc + (uint)bVar21 * -2);
                        plVar19 = (longlong *)((int)plVar12 + (uint)bVar21 * -8 + 4);
                        *(int *)plVar18 = (int)*plVar12;
                        iVar6 = 0x2c;
                      }
                      while (7 < iVar6) {
                        lVar1 = *plVar19;
                        plVar19 = plVar19 + 1;
                        *plVar17 = (longlong)ROUND((float10)lVar1);
                        plVar17 = plVar17 + 1;
                        iVar6 = iVar6 + -8;
                      }
                      if (iVar6 != 0 && -9 < iVar6 + -8) {
                        *(int *)plVar17 = (int)*plVar19;
                        if (4 < iVar6) {
                          *(uint *)((int)plVar17 + (uint)bVar21 * -8 + 4) =
                               *(uint *)((int)plVar19 + (uint)bVar21 * -8 + 4);
                        }
                      }
                      DAT_007bee30 = DAT_007bee30 + 1;
                      break;
                    case 1:
                      FUN_00430a50(&DAT_007bf4b8 + uVar10 * 0xc,plVar12);
                      DAT_007bee30 = DAT_007bee30 + 1;
                      break;
                    case 2:
                      plVar18 = (longlong *)(&DAT_007bee34 + DAT_007bee30 * 0xc);
                      iVar6 = 0x30;
                      plVar19 = plVar12;
                      plVar17 = plVar18;
                      if (((uint)plVar18 & 7) != 0) {
                        plVar17 = (longlong *)
                                  (&DAT_007bee38 + DAT_007bee30 * 0xc + (uint)bVar21 * -2);
                        plVar19 = (longlong *)((int)plVar12 + (uint)bVar21 * -8 + 4);
                        *(int *)plVar18 = (int)*plVar12;
                        iVar6 = 0x2c;
                      }
                      while (7 < iVar6) {
                        lVar1 = *plVar19;
                        plVar19 = plVar19 + 1;
                        *plVar17 = (longlong)ROUND((float10)lVar1);
                        plVar17 = plVar17 + 1;
                        iVar6 = iVar6 + -8;
                      }
                      if (iVar6 != 0 && -9 < iVar6 + -8) {
                        *(int *)plVar17 = (int)*plVar19;
                        if (4 < iVar6) {
                          *(uint *)((int)plVar17 + (uint)bVar21 * -8 + 4) =
                               *(uint *)((int)plVar19 + (uint)bVar21 * -8 + 4);
                        }
                      }
                      DAT_007bee30 = DAT_007bee30 + 1;
                      FUN_00430a50(plVar12,&DAT_007bf4b8 + uVar10 * 0xc);
                      DAT_007bee30 = DAT_007bee30 + 1;
                    }
                    local_14 = local_14 + 1;
                    plVar12 = plVar12 + 6;
                  } while (local_14 < (int)DAT_007bf4b4);
                }
              }
            }
            if (2 < (int)DAT_007bee30) {
              iVar6 = 0;
              if (0 < (int)DAT_007bee30) {
                piVar8 = &DAT_007bee34;
                do {
                  iVar11 = piVar8[2];
                  if (iVar11 == 0) {
                    piVar8[2] = 1;
                    *piVar8 = 0;
                    iVar7 = 0;
LAB_0043185e:
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
                        else if (-iVar16 != iVar11 && iVar16 <= iVar7) goto LAB_0043185e;
                      }
                      else {
                        *piVar8 = iVar7;
                      }
                    }
                  }
                  iVar6 = iVar6 + 1;
                  piVar8 = piVar8 + 0xc;
                } while (iVar6 < (int)DAT_007bee30);
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
