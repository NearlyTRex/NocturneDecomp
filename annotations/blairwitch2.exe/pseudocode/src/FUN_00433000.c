// Name: FUN_00433000
// Address: 00433000
// Address Range: [[00433000, 0043375f]]
// Convention: unknown
// Signature: int * FUN_00433000(uint param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00433000(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  byte bVar16;
  int *local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint uVar8;
  
  bVar16 = 0;
  if (DAT_006141e0 == 0) {
    local_28 = (int *)FUN_0051e130(param_2,param_1);
  }
  else {
    uVar8 = 0xffffffff;
    cVar7 = -1;
    uVar11 = 0;
    local_28 = (int *)0x0;
    piVar6 = param_2;
    if (0 < (int)param_1) {
      do {
        iVar4 = *piVar6;
        if (((&DAT_00622024)[iVar4 * 0xc] & 0x80000000) != 0) {
          uVar11 = uVar11 + 1;
        }
        piVar6 = piVar6 + 1;
        local_28 = (int *)((int)local_28 + 1);
        uVar8 = uVar8 & (&DAT_00622024)[iVar4 * 0xc];
        cVar7 = (char)uVar8;
      } while ((int)local_28 < (int)param_1);
    }
    if ((uVar11 == param_1) && (cVar7 != '\0')) {
      DAT_007bee30 = uVar11 ^ param_1;
    }
    else {
      if (uVar11 == 0) {
        if (_DAT_01c37788 != 0) {
          iVar4 = 0;
          if (0 < (int)param_1) {
            do {
              iVar1 = *param_2;
              iVar4 = iVar4 + 1;
              param_2 = param_2 + 1;
              *(uint **)(iVar4 * 4 + 0x7bf430) = &DAT_00622014 + iVar1 * 0xc;
            } while (iVar4 < (int)param_1);
          }
          if (DAT_0070ca7c != 0) {
            if ((int)param_1 < 4) {
              iVar4 = FUN_0051c760(DAT_007bf434,DAT_007bf438,DAT_007bf43c);
              if (iVar4 == 0) {
                return (int *)0x0;
              }
            }
            else {
              piVar6 = (int *)(param_1 - 2);
              iVar4 = 0;
              piVar12 = (int *)0x0;
              piVar5 = piVar6;
              if (0 < (int)piVar6 * 4) {
                do {
                  piVar5 = (int *)FUN_0051c760(DAT_007bf434,
                                               *(uint *)((int)&DAT_007bf438 + iVar4),
                                               *(uint *)((int)&DAT_007bf43c + iVar4));
                  if (piVar5 == (int *)0x0) {
                    piVar12 = (int *)((int)piVar12 + 1);
                  }
                  iVar4 = iVar4 + 4;
                } while (iVar4 < (int)piVar6 * 4);
              }
              if (piVar12 == piVar6) {
                return piVar5;
              }
            }
          }
          _DAT_01e61b58 = _DAT_01e61b58 + (param_1 - 2);
          piVar6 = (int *)FUN_0055f920(&DAT_007bf434,param_1,_DAT_01c38b54);
          return piVar6;
        }
        DAT_007bee30 = param_1;
        if (0 < (int)param_1) {
          puVar9 = &DAT_007bee34;
          local_28 = (int *)0x0;
          do {
            puVar13 = &DAT_00622014 + *param_2 * 0xc;
            puVar15 = puVar9;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar15 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar15 = puVar15 + 1;
            }
            for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(byte *)puVar15 = *(byte *)puVar13;
              puVar13 = (uint *)((int)puVar13 + 1);
              puVar15 = (uint *)((int)puVar15 + 1);
            }
            param_2 = param_2 + 1;
            local_28 = (int *)((int)local_28 + 1);
            puVar9 = puVar9 + 0xc;
          } while ((int)local_28 < (int)param_1);
        }
      }
      else {
        DAT_007bfcfc = param_1;
        DAT_007bfd00 = 0;
        DAT_007bfd04 = 0;
        DAT_007bfd08 = 0;
        DAT_007bee30 = 0;
        local_24 = 0;
        if (0 < (int)param_1) {
          puVar9 = &DAT_007c030c;
          do {
            puVar13 = &DAT_00622014 + *param_2 * 0xc;
            puVar15 = puVar9;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar15 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar15 = puVar15 + 1;
            }
            for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(byte *)puVar15 = *(byte *)puVar13;
              puVar13 = (uint *)((int)puVar13 + 1);
              puVar15 = (uint *)((int)puVar15 + 1);
            }
            param_2 = param_2 + 1;
            local_24 = local_24 + 1;
            puVar9 = puVar9 + 0xc;
          } while (local_24 < (int)param_1);
          local_28 = (int *)0x30;
        }
        local_20 = (int *)0x0;
        if (0 < (int)DAT_007bfcfc) {
          piVar6 = &DAT_007c030c;
          do {
            uVar8 = (int)local_20 + 1;
            if (uVar8 == DAT_007bfcfc) {
              uVar8 = uVar8 ^ DAT_007bfcfc;
            }
            piVar5 = &DAT_007c030c + uVar8 * 0xc;
            bVar3 = piVar6[2] <= *piVar6;
            if ((int)(&DAT_007c0314)[uVar8 * 0xc] <= *piVar5) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              piVar5 = piVar6;
              piVar12 = &DAT_007bfd0c + DAT_007bfd00 * 0xc;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar12 = *piVar5;
                piVar5 = piVar5 + (uint)bVar16 * -2 + 1;
                piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
              }
              for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(char *)piVar12 = (char)*piVar5;
                piVar5 = (int *)((int)piVar5 + (uint)bVar16 * -2 + 1);
                piVar12 = (int *)((int)piVar12 + (uint)bVar16 * -2 + 1);
              }
              DAT_007bfd00 = DAT_007bfd00 + 1;
              break;
            case 1:
              FUN_00431e10(piVar5,piVar6,&DAT_007bfd0c + DAT_007bfd00 * 0xc);
              DAT_007bfd00 = DAT_007bfd00 + 1;
              break;
            case 2:
              piVar12 = piVar6;
              piVar14 = &DAT_007bfd0c + DAT_007bfd00 * 0xc;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar14 = *piVar12;
                piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
                piVar14 = piVar14 + (uint)bVar16 * -2 + 1;
              }
              for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(char *)piVar14 = (char)*piVar12;
                piVar12 = (int *)((int)piVar12 + (uint)bVar16 * -2 + 1);
                piVar14 = (int *)((int)piVar14 + (uint)bVar16 * -2 + 1);
              }
              DAT_007bfd00 = DAT_007bfd00 + 1;
              FUN_00431e10(piVar6,piVar5,&DAT_007bfd0c + DAT_007bfd00 * 0xc);
              DAT_007bfd00 = DAT_007bfd00 + 1;
            }
            local_28 = (int *)((int)local_20 + 1);
            piVar6 = piVar6 + 0xc;
            local_20 = local_28;
          } while ((int)local_28 < (int)DAT_007bfcfc);
        }
        if (2 < (int)DAT_007bfd00) {
          local_18 = 0;
          if (0 < (int)DAT_007bfd00) {
            piVar6 = &DAT_007bfd0c;
            do {
              uVar8 = local_18 + 1;
              if (uVar8 == DAT_007bfd00) {
                uVar8 = uVar8 ^ DAT_007bfd00;
              }
              piVar5 = &DAT_007bfd0c + uVar8 * 0xc;
              bVar3 = *piVar6 <= -piVar6[2];
              if (*piVar5 <= (int)-(&DAT_007bfd14)[uVar8 * 0xc]) {
                bVar3 = bVar3 | 2;
              }
              local_28 = (int *)(uint)bVar3;
              switch(local_28) {
              case (int *)0x0:
                local_28 = (int *)0x30;
                piVar5 = piVar6;
                piVar12 = &DAT_007c090c + DAT_007bfd04 * 0xc;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *piVar12 = *piVar5;
                  piVar5 = piVar5 + (uint)bVar16 * -2 + 1;
                  piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
                }
                for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(char *)piVar12 = (char)*piVar5;
                  piVar5 = (int *)((int)piVar5 + (uint)bVar16 * -2 + 1);
                  piVar12 = (int *)((int)piVar12 + (uint)bVar16 * -2 + 1);
                }
                DAT_007bfd04 = DAT_007bfd04 + 1;
                break;
              case (int *)0x1:
                local_28 = (int *)FUN_00431f40(piVar5,piVar6,&DAT_007c090c + DAT_007bfd04 * 0xc);
                DAT_007bfd04 = DAT_007bfd04 + 1;
                break;
              case (int *)0x2:
                piVar12 = piVar6;
                piVar14 = &DAT_007c090c + DAT_007bfd04 * 0xc;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *piVar14 = *piVar12;
                  piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
                  piVar14 = piVar14 + (uint)bVar16 * -2 + 1;
                }
                for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(char *)piVar14 = (char)*piVar12;
                  piVar12 = (int *)((int)piVar12 + (uint)bVar16 * -2 + 1);
                  piVar14 = (int *)((int)piVar14 + (uint)bVar16 * -2 + 1);
                }
                DAT_007bfd04 = DAT_007bfd04 + 1;
                local_28 = (int *)FUN_00431f40(piVar6,piVar5,&DAT_007c090c + DAT_007bfd04 * 0xc);
                DAT_007bfd04 = DAT_007bfd04 + 1;
              }
              local_18 = local_18 + 1;
              piVar6 = piVar6 + 0xc;
            } while (local_18 < (int)DAT_007bfd00);
          }
          if (2 < (int)DAT_007bfd04) {
            local_14 = 0;
            if (0 < (int)DAT_007bfd04) {
              puVar9 = &DAT_007c090c;
              do {
                uVar8 = local_14 + 1;
                if (uVar8 == DAT_007bfd04) {
                  uVar8 = uVar8 ^ DAT_007bfd04;
                }
                bVar3 = (int)puVar9[2] <= (int)puVar9[1];
                if ((int)(&DAT_007c0914)[uVar8 * 0xc] <= (int)(&DAT_007c0910)[uVar8 * 0xc]) {
                  bVar3 = bVar3 | 2;
                }
                local_28 = (int *)(uint)bVar3;
                switch(local_28) {
                case (int *)0x0:
                  local_28 = (int *)0x30;
                  puVar13 = puVar9;
                  puVar15 = &DAT_007c0f0c + DAT_007bfd08 * 0xc;
                  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *puVar15 = *puVar13;
                    puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                    puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
                  }
                  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *(byte *)puVar15 = *(byte *)puVar13;
                    puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                    puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
                  }
                  DAT_007bfd08 = DAT_007bfd08 + 1;
                  break;
                case (int *)0x1:
                  local_28 = (int *)FUN_00432070(&DAT_007c090c + uVar8 * 0xc,puVar9,
                                                 &DAT_007c0f0c + DAT_007bfd08 * 0xc);
                  DAT_007bfd08 = DAT_007bfd08 + 1;
                  break;
                case (int *)0x2:
                  puVar13 = puVar9;
                  puVar15 = &DAT_007c0f0c + DAT_007bfd08 * 0xc;
                  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *puVar15 = *puVar13;
                    puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                    puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
                  }
                  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *(byte *)puVar15 = *(byte *)puVar13;
                    puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                    puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
                  }
                  DAT_007bfd08 = DAT_007bfd08 + 1;
                  local_28 = (int *)FUN_00432070(puVar9,&DAT_007c090c + uVar8 * 0xc,
                                                 &DAT_007c0f0c + DAT_007bfd08 * 0xc);
                  DAT_007bfd08 = DAT_007bfd08 + 1;
                }
                local_14 = local_14 + 1;
                puVar9 = puVar9 + 0xc;
              } while (local_14 < (int)DAT_007bfd04);
            }
            if (2 < (int)DAT_007bfd08) {
              local_1c = 0;
              if (0 < (int)DAT_007bfd08) {
                puVar9 = &DAT_007c0f0c;
                do {
                  uVar8 = local_1c + 1;
                  if (uVar8 == DAT_007bfd08) {
                    uVar8 = uVar8 ^ DAT_007bfd08;
                  }
                  bVar3 = (int)puVar9[1] <= (int)-puVar9[2];
                  if (*(int *)(&DAT_007c0f10 + uVar8 * 0x30) <= (int)-(&DAT_007c0f14)[uVar8 * 0xc])
                  {
                    bVar3 = bVar3 | 2;
                  }
                  local_28 = (int *)(uint)bVar3;
                  switch(local_28) {
                  case (int *)0x0:
                    local_28 = (int *)0x30;
                    puVar13 = puVar9;
                    puVar15 = &DAT_007bee34 + DAT_007bee30 * 0xc;
                    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar15 = *puVar13;
                      puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                      puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
                    }
                    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *(byte *)puVar15 = *(byte *)puVar13;
                      puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                      puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
                    }
                    DAT_007bee30 = DAT_007bee30 + 1;
                    break;
                  case (int *)0x1:
                    local_28 = (int *)FUN_004321a0(&DAT_007c0f0c + uVar8 * 0xc,puVar9,
                                                   &DAT_007bee34 + DAT_007bee30 * 0xc);
                    DAT_007bee30 = DAT_007bee30 + 1;
                    break;
                  case (int *)0x2:
                    puVar13 = puVar9;
                    puVar15 = &DAT_007bee34 + DAT_007bee30 * 0xc;
                    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar15 = *puVar13;
                      puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                      puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
                    }
                    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *(byte *)puVar15 = *(byte *)puVar13;
                      puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                      puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
                    }
                    DAT_007bee30 = DAT_007bee30 + 1;
                    local_28 = (int *)FUN_004321a0(puVar9,&DAT_007c0f0c + uVar8 * 0xc,
                                                   &DAT_007bee34 + DAT_007bee30 * 0xc);
                    DAT_007bee30 = DAT_007bee30 + 1;
                  }
                  local_1c = local_1c + 1;
                  puVar9 = puVar9 + 0xc;
                } while (local_1c < (int)DAT_007bfd08);
              }
              if (2 < (int)DAT_007bee30) {
                local_28 = &DAT_007bee34;
                iVar4 = 0;
                if (0 < (int)DAT_007bee30) {
                  do {
                    iVar1 = local_28[2];
                    if (iVar1 == 0) {
                      local_28[2] = 1;
                      *local_28 = 0;
                      local_28[1] = 0;
                    }
                    else if (iVar1 < *local_28) {
                      *local_28 = iVar1;
                    }
                    else {
                      iVar10 = -iVar1;
                      if (-*local_28 == iVar1 || iVar10 < *local_28) {
                        iVar2 = local_28[1];
                        if (local_28[2] < iVar2) {
                          local_28[1] = local_28[2];
                        }
                        else if (-iVar2 != iVar1 && iVar2 <= iVar10) {
                          local_28[1] = iVar10;
                        }
                      }
                      else {
                        *local_28 = iVar10;
                      }
                    }
                    iVar4 = iVar4 + 1;
                    local_28 = local_28 + 0xc;
                  } while (iVar4 < (int)DAT_007bee30);
                }
              }
            }
          }
        }
      }
      if (2 < (int)DAT_007bee30) {
        piVar6 = (int *)FUN_0051da80(&DAT_007bee34,DAT_007bee30);
        return piVar6;
      }
    }
  }
  return local_28;
}
