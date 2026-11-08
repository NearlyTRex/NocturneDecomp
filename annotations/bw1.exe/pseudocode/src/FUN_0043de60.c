// Name: FUN_0043de60
// Address: 0043de60
// Address Range: [[0043de60, 0043e5bf]]
// Convention: unknown
// Signature: int * FUN_0043de60(uint param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0043de60(uint param_1,int *param_2)

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
  if (DAT_0061b4c0 == 0) {
    local_28 = (int *)FUN_0053f720(param_2,param_1);
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
        if (((&DAT_00629024)[iVar4 * 0xc] & 0x80000000) != 0) {
          uVar11 = uVar11 + 1;
        }
        piVar6 = piVar6 + 1;
        local_28 = (int *)((int)local_28 + 1);
        uVar8 = uVar8 & (&DAT_00629024)[iVar4 * 0xc];
        cVar7 = (char)uVar8;
      } while ((int)local_28 < (int)param_1);
    }
    if ((uVar11 == param_1) && (cVar7 != '\0')) {
      DAT_007c7554 = uVar11 ^ param_1;
    }
    else {
      if (uVar11 == 0) {
        if (_DAT_01c50948 != 0) {
          iVar4 = 0;
          if (0 < (int)param_1) {
            do {
              iVar1 = *param_2;
              iVar4 = iVar4 + 1;
              param_2 = param_2 + 1;
              *(uint **)(iVar4 * 4 + 0x7c7b54) = &DAT_00629014 + iVar1 * 0xc;
            } while (iVar4 < (int)param_1);
          }
          if (DAT_00713a7c != 0) {
            if ((int)param_1 < 4) {
              iVar4 = FUN_0053dd60(DAT_007c7b58,DAT_007c7b5c,DAT_007c7b60);
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
                  piVar5 = (int *)FUN_0053dd60(DAT_007c7b58,
                                               *(uint *)((int)&DAT_007c7b5c + iVar4),
                                               *(uint *)((int)&DAT_007c7b60 + iVar4));
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
          _DAT_01e7dac8 = _DAT_01e7dac8 + (param_1 - 2);
          piVar6 = (int *)FUN_00582370(&DAT_007c7b58,param_1,_DAT_01c51d14);
          return piVar6;
        }
        DAT_007c7554 = param_1;
        if (0 < (int)param_1) {
          puVar9 = &DAT_007c7558;
          local_28 = (int *)0x0;
          do {
            puVar13 = &DAT_00629014 + *param_2 * 0xc;
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
        DAT_007c8420 = param_1;
        DAT_007c8424 = 0;
        DAT_007c8428 = 0;
        DAT_007c842c = 0;
        DAT_007c7554 = 0;
        local_24 = 0;
        if (0 < (int)param_1) {
          puVar9 = &DAT_007c8a30;
          do {
            puVar13 = &DAT_00629014 + *param_2 * 0xc;
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
        if (0 < (int)DAT_007c8420) {
          piVar6 = &DAT_007c8a30;
          do {
            uVar8 = (int)local_20 + 1;
            if (uVar8 == DAT_007c8420) {
              uVar8 = uVar8 ^ DAT_007c8420;
            }
            piVar5 = &DAT_007c8a30 + uVar8 * 0xc;
            bVar3 = piVar6[2] <= *piVar6;
            if ((int)(&DAT_007c8a38)[uVar8 * 0xc] <= *piVar5) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              piVar5 = piVar6;
              piVar12 = &DAT_007c8430 + DAT_007c8424 * 0xc;
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
              DAT_007c8424 = DAT_007c8424 + 1;
              break;
            case 1:
              FUN_0043cc70(piVar5,piVar6,&DAT_007c8430 + DAT_007c8424 * 0xc);
              DAT_007c8424 = DAT_007c8424 + 1;
              break;
            case 2:
              piVar12 = piVar6;
              piVar14 = &DAT_007c8430 + DAT_007c8424 * 0xc;
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
              DAT_007c8424 = DAT_007c8424 + 1;
              FUN_0043cc70(piVar6,piVar5,&DAT_007c8430 + DAT_007c8424 * 0xc);
              DAT_007c8424 = DAT_007c8424 + 1;
            }
            local_28 = (int *)((int)local_20 + 1);
            piVar6 = piVar6 + 0xc;
            local_20 = local_28;
          } while ((int)local_28 < (int)DAT_007c8420);
        }
        if (2 < (int)DAT_007c8424) {
          local_18 = 0;
          if (0 < (int)DAT_007c8424) {
            piVar6 = &DAT_007c8430;
            do {
              uVar8 = local_18 + 1;
              if (uVar8 == DAT_007c8424) {
                uVar8 = uVar8 ^ DAT_007c8424;
              }
              piVar5 = &DAT_007c8430 + uVar8 * 0xc;
              bVar3 = *piVar6 <= -piVar6[2];
              if (*piVar5 <= (int)-(&DAT_007c8438)[uVar8 * 0xc]) {
                bVar3 = bVar3 | 2;
              }
              local_28 = (int *)(uint)bVar3;
              switch(local_28) {
              case (int *)0x0:
                local_28 = (int *)0x30;
                piVar5 = piVar6;
                piVar12 = &DAT_007c9030 + DAT_007c8428 * 0xc;
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
                DAT_007c8428 = DAT_007c8428 + 1;
                break;
              case (int *)0x1:
                local_28 = (int *)FUN_0043cda0(piVar5,piVar6,&DAT_007c9030 + DAT_007c8428 * 0xc);
                DAT_007c8428 = DAT_007c8428 + 1;
                break;
              case (int *)0x2:
                piVar12 = piVar6;
                piVar14 = &DAT_007c9030 + DAT_007c8428 * 0xc;
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
                DAT_007c8428 = DAT_007c8428 + 1;
                local_28 = (int *)FUN_0043cda0(piVar6,piVar5,&DAT_007c9030 + DAT_007c8428 * 0xc);
                DAT_007c8428 = DAT_007c8428 + 1;
              }
              local_18 = local_18 + 1;
              piVar6 = piVar6 + 0xc;
            } while (local_18 < (int)DAT_007c8424);
          }
          if (2 < (int)DAT_007c8428) {
            local_14 = 0;
            if (0 < (int)DAT_007c8428) {
              puVar9 = &DAT_007c9030;
              do {
                uVar8 = local_14 + 1;
                if (uVar8 == DAT_007c8428) {
                  uVar8 = uVar8 ^ DAT_007c8428;
                }
                bVar3 = (int)puVar9[2] <= (int)puVar9[1];
                if ((int)(&DAT_007c9038)[uVar8 * 0xc] <= (int)(&DAT_007c9034)[uVar8 * 0xc]) {
                  bVar3 = bVar3 | 2;
                }
                local_28 = (int *)(uint)bVar3;
                switch(local_28) {
                case (int *)0x0:
                  local_28 = (int *)0x30;
                  puVar13 = puVar9;
                  puVar15 = &DAT_007c9630 + DAT_007c842c * 0xc;
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
                  DAT_007c842c = DAT_007c842c + 1;
                  break;
                case (int *)0x1:
                  local_28 = (int *)FUN_0043ced0(&DAT_007c9030 + uVar8 * 0xc,puVar9,
                                                 &DAT_007c9630 + DAT_007c842c * 0xc);
                  DAT_007c842c = DAT_007c842c + 1;
                  break;
                case (int *)0x2:
                  puVar13 = puVar9;
                  puVar15 = &DAT_007c9630 + DAT_007c842c * 0xc;
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
                  DAT_007c842c = DAT_007c842c + 1;
                  local_28 = (int *)FUN_0043ced0(puVar9,&DAT_007c9030 + uVar8 * 0xc,
                                                 &DAT_007c9630 + DAT_007c842c * 0xc);
                  DAT_007c842c = DAT_007c842c + 1;
                }
                local_14 = local_14 + 1;
                puVar9 = puVar9 + 0xc;
              } while (local_14 < (int)DAT_007c8428);
            }
            if (2 < (int)DAT_007c842c) {
              local_1c = 0;
              if (0 < (int)DAT_007c842c) {
                puVar9 = &DAT_007c9630;
                do {
                  uVar8 = local_1c + 1;
                  if (uVar8 == DAT_007c842c) {
                    uVar8 = uVar8 ^ DAT_007c842c;
                  }
                  bVar3 = (int)puVar9[1] <= (int)-puVar9[2];
                  if ((int)(&DAT_007c9634)[uVar8 * 0xc] <= (int)-(&DAT_007c9638)[uVar8 * 0xc]) {
                    bVar3 = bVar3 | 2;
                  }
                  local_28 = (int *)(uint)bVar3;
                  switch(local_28) {
                  case (int *)0x0:
                    local_28 = (int *)0x30;
                    puVar13 = puVar9;
                    puVar15 = &DAT_007c7558 + DAT_007c7554 * 0xc;
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
                    DAT_007c7554 = DAT_007c7554 + 1;
                    break;
                  case (int *)0x1:
                    local_28 = (int *)FUN_0043d000(&DAT_007c9630 + uVar8 * 0xc,puVar9,
                                                   &DAT_007c7558 + DAT_007c7554 * 0xc);
                    DAT_007c7554 = DAT_007c7554 + 1;
                    break;
                  case (int *)0x2:
                    puVar13 = puVar9;
                    puVar15 = &DAT_007c7558 + DAT_007c7554 * 0xc;
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
                    DAT_007c7554 = DAT_007c7554 + 1;
                    local_28 = (int *)FUN_0043d000(puVar9,&DAT_007c9630 + uVar8 * 0xc,
                                                   &DAT_007c7558 + DAT_007c7554 * 0xc);
                    DAT_007c7554 = DAT_007c7554 + 1;
                  }
                  local_1c = local_1c + 1;
                  puVar9 = puVar9 + 0xc;
                } while (local_1c < (int)DAT_007c842c);
              }
              if (2 < (int)DAT_007c7554) {
                local_28 = &DAT_007c7558;
                iVar4 = 0;
                if (0 < (int)DAT_007c7554) {
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
                  } while (iVar4 < (int)DAT_007c7554);
                }
              }
            }
          }
        }
      }
      if (2 < (int)DAT_007c7554) {
        piVar6 = (int *)FUN_0053f080(&DAT_007c7558,DAT_007c7554);
        return piVar6;
      }
    }
  }
  return local_28;
}
