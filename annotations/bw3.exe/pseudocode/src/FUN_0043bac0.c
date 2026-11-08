// Name: FUN_0043bac0
// Address: 0043bac0
// Address Range: [[0043bac0, 0043c21f]]
// Convention: unknown
// Signature: int * FUN_0043bac0(uint param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0043bac0(uint param_1,int *param_2)

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
  if (DAT_005fba40 == 0) {
    local_28 = (int *)FUN_00517480(param_2,param_1);
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
        if (((&DAT_0060b024)[iVar4 * 0xc] & 0x80000000) != 0) {
          uVar11 = uVar11 + 1;
        }
        piVar6 = piVar6 + 1;
        local_28 = (int *)((int)local_28 + 1);
        uVar8 = uVar8 & (&DAT_0060b024)[iVar4 * 0xc];
        cVar7 = (char)uVar8;
      } while ((int)local_28 < (int)param_1);
    }
    if ((uVar11 == param_1) && (cVar7 != '\0')) {
      DAT_007e3e88 = uVar11 ^ param_1;
    }
    else {
      if (uVar11 == 0) {
        if (_DAT_01c6cee8 != 0) {
          iVar4 = 0;
          if (0 < (int)param_1) {
            do {
              iVar1 = *param_2;
              iVar4 = iVar4 + 1;
              param_2 = param_2 + 1;
              *(uint **)(iVar4 * 4 + 0x7e4488) = &DAT_0060b014 + iVar1 * 0xc;
            } while (iVar4 < (int)param_1);
          }
          if (DAT_007303fc != 0) {
            if ((int)param_1 < 4) {
              iVar4 = FUN_00515ac0(DAT_007e448c,DAT_007e4490,DAT_007e4494);
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
                  piVar5 = (int *)FUN_00515ac0(DAT_007e448c,
                                               *(uint *)((int)&DAT_007e4490 + iVar4),
                                               *(uint *)((int)&DAT_007e4494 + iVar4));
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
          _DAT_01ed3198 = _DAT_01ed3198 + (param_1 - 2);
          piVar6 = (int *)FUN_00565c40(&DAT_007e448c,param_1,_DAT_01c6e2b4);
          return piVar6;
        }
        DAT_007e3e88 = param_1;
        if (0 < (int)param_1) {
          puVar9 = &DAT_007e3e8c;
          local_28 = (int *)0x0;
          do {
            puVar13 = &DAT_0060b014 + *param_2 * 0xc;
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
        DAT_007e4d54 = param_1;
        DAT_007e4d58 = 0;
        DAT_007e4d5c = 0;
        DAT_007e4d60 = 0;
        DAT_007e3e88 = 0;
        local_24 = 0;
        if (0 < (int)param_1) {
          puVar9 = &DAT_007e5364;
          do {
            puVar13 = &DAT_0060b014 + *param_2 * 0xc;
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
        if (0 < (int)DAT_007e4d54) {
          piVar6 = &DAT_007e5364;
          do {
            uVar8 = (int)local_20 + 1;
            if (uVar8 == DAT_007e4d54) {
              uVar8 = uVar8 ^ DAT_007e4d54;
            }
            piVar5 = &DAT_007e5364 + uVar8 * 0xc;
            bVar3 = piVar6[2] <= *piVar6;
            if ((int)(&DAT_007e536c)[uVar8 * 0xc] <= *piVar5) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              piVar5 = piVar6;
              piVar12 = &DAT_007e4d64 + DAT_007e4d58 * 0xc;
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
              DAT_007e4d58 = DAT_007e4d58 + 1;
              break;
            case 1:
              FUN_0043a8c0(piVar5,piVar6,&DAT_007e4d64 + DAT_007e4d58 * 0xc);
              DAT_007e4d58 = DAT_007e4d58 + 1;
              break;
            case 2:
              piVar12 = piVar6;
              piVar14 = &DAT_007e4d64 + DAT_007e4d58 * 0xc;
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
              DAT_007e4d58 = DAT_007e4d58 + 1;
              FUN_0043a8c0(piVar6,piVar5,&DAT_007e4d64 + DAT_007e4d58 * 0xc);
              DAT_007e4d58 = DAT_007e4d58 + 1;
            }
            local_28 = (int *)((int)local_20 + 1);
            piVar6 = piVar6 + 0xc;
            local_20 = local_28;
          } while ((int)local_28 < (int)DAT_007e4d54);
        }
        if (2 < (int)DAT_007e4d58) {
          local_18 = 0;
          if (0 < (int)DAT_007e4d58) {
            piVar6 = &DAT_007e4d64;
            do {
              uVar8 = local_18 + 1;
              if (uVar8 == DAT_007e4d58) {
                uVar8 = uVar8 ^ DAT_007e4d58;
              }
              piVar5 = &DAT_007e4d64 + uVar8 * 0xc;
              bVar3 = *piVar6 <= -piVar6[2];
              if (*piVar5 <= (int)-(&DAT_007e4d6c)[uVar8 * 0xc]) {
                bVar3 = bVar3 | 2;
              }
              local_28 = (int *)(uint)bVar3;
              switch(local_28) {
              case (int *)0x0:
                local_28 = (int *)0x30;
                piVar5 = piVar6;
                piVar12 = &DAT_007e5964 + DAT_007e4d5c * 0xc;
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
                DAT_007e4d5c = DAT_007e4d5c + 1;
                break;
              case (int *)0x1:
                local_28 = (int *)FUN_0043a9f0(piVar5,piVar6,&DAT_007e5964 + DAT_007e4d5c * 0xc);
                DAT_007e4d5c = DAT_007e4d5c + 1;
                break;
              case (int *)0x2:
                piVar12 = piVar6;
                piVar14 = &DAT_007e5964 + DAT_007e4d5c * 0xc;
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
                DAT_007e4d5c = DAT_007e4d5c + 1;
                local_28 = (int *)FUN_0043a9f0(piVar6,piVar5,&DAT_007e5964 + DAT_007e4d5c * 0xc);
                DAT_007e4d5c = DAT_007e4d5c + 1;
              }
              local_18 = local_18 + 1;
              piVar6 = piVar6 + 0xc;
            } while (local_18 < (int)DAT_007e4d58);
          }
          if (2 < (int)DAT_007e4d5c) {
            local_14 = 0;
            if (0 < (int)DAT_007e4d5c) {
              puVar9 = &DAT_007e5964;
              do {
                uVar8 = local_14 + 1;
                if (uVar8 == DAT_007e4d5c) {
                  uVar8 = uVar8 ^ DAT_007e4d5c;
                }
                bVar3 = (int)puVar9[2] <= (int)puVar9[1];
                if ((int)(&DAT_007e596c)[uVar8 * 0xc] <= (int)(&DAT_007e5968)[uVar8 * 0xc]) {
                  bVar3 = bVar3 | 2;
                }
                local_28 = (int *)(uint)bVar3;
                switch(local_28) {
                case (int *)0x0:
                  local_28 = (int *)0x30;
                  puVar13 = puVar9;
                  puVar15 = &DAT_007e5f64 + DAT_007e4d60 * 0xc;
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
                  DAT_007e4d60 = DAT_007e4d60 + 1;
                  break;
                case (int *)0x1:
                  local_28 = (int *)FUN_0043ab20(&DAT_007e5964 + uVar8 * 0xc,puVar9,
                                                 &DAT_007e5f64 + DAT_007e4d60 * 0xc);
                  DAT_007e4d60 = DAT_007e4d60 + 1;
                  break;
                case (int *)0x2:
                  puVar13 = puVar9;
                  puVar15 = &DAT_007e5f64 + DAT_007e4d60 * 0xc;
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
                  DAT_007e4d60 = DAT_007e4d60 + 1;
                  local_28 = (int *)FUN_0043ab20(puVar9,&DAT_007e5964 + uVar8 * 0xc,
                                                 &DAT_007e5f64 + DAT_007e4d60 * 0xc);
                  DAT_007e4d60 = DAT_007e4d60 + 1;
                }
                local_14 = local_14 + 1;
                puVar9 = puVar9 + 0xc;
              } while (local_14 < (int)DAT_007e4d5c);
            }
            if (2 < (int)DAT_007e4d60) {
              local_1c = 0;
              if (0 < (int)DAT_007e4d60) {
                puVar9 = &DAT_007e5f64;
                do {
                  uVar8 = local_1c + 1;
                  if (uVar8 == DAT_007e4d60) {
                    uVar8 = uVar8 ^ DAT_007e4d60;
                  }
                  bVar3 = (int)puVar9[1] <= (int)-puVar9[2];
                  if (*(int *)(&DAT_007e5f68 + uVar8 * 0x30) <= (int)-(&DAT_007e5f6c)[uVar8 * 0xc])
                  {
                    bVar3 = bVar3 | 2;
                  }
                  local_28 = (int *)(uint)bVar3;
                  switch(local_28) {
                  case (int *)0x0:
                    local_28 = (int *)0x30;
                    puVar13 = puVar9;
                    puVar15 = &DAT_007e3e8c + DAT_007e3e88 * 0xc;
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
                    DAT_007e3e88 = DAT_007e3e88 + 1;
                    break;
                  case (int *)0x1:
                    local_28 = (int *)FUN_0043ac50(&DAT_007e5f64 + uVar8 * 0xc,puVar9,
                                                   &DAT_007e3e8c + DAT_007e3e88 * 0xc);
                    DAT_007e3e88 = DAT_007e3e88 + 1;
                    break;
                  case (int *)0x2:
                    puVar13 = puVar9;
                    puVar15 = &DAT_007e3e8c + DAT_007e3e88 * 0xc;
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
                    DAT_007e3e88 = DAT_007e3e88 + 1;
                    local_28 = (int *)FUN_0043ac50(puVar9,&DAT_007e5f64 + uVar8 * 0xc,
                                                   &DAT_007e3e8c + DAT_007e3e88 * 0xc);
                    DAT_007e3e88 = DAT_007e3e88 + 1;
                  }
                  local_1c = local_1c + 1;
                  puVar9 = puVar9 + 0xc;
                } while (local_1c < (int)DAT_007e4d60);
              }
              if (2 < (int)DAT_007e3e88) {
                local_28 = &DAT_007e3e8c;
                iVar4 = 0;
                if (0 < (int)DAT_007e3e88) {
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
                  } while (iVar4 < (int)DAT_007e3e88);
                }
              }
            }
          }
        }
      }
      if (2 < (int)DAT_007e3e88) {
        piVar6 = (int *)FUN_00516de0(&DAT_007e3e8c,DAT_007e3e88);
        return piVar6;
      }
    }
  }
  return local_28;
}
