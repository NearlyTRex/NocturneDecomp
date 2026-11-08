// Name: FUN_004e94f0
// Address: 004e94f0
// Address Range: [[004e94f0, 004ea26b]]
// Convention: unknown
// Signature: void FUN_004e94f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e94f0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  float local_a28;
  float local_a24;
  float local_a20;
  byte local_a1c [960];
  char local_65c [264];
  int local_554;
  byte local_544 [280];
  char local_42c [256];
  char local_32c [256];
  char local_22c [256];
  char local_12c [256];
  uint local_2c;
  int local_28;
  uint local_24;
  char *local_20;
  char *local_1c;
  float local_18;
  char *local_14;
  
  bVar11 = 0;
  local_2c = 0;
  FUN_004b4430(0x01D2130C);
  iVar7 = 0x1d74a50;
  iVar2 = 0;
  do {
    *(int *)(iVar2 + 0x1d75450) = iVar7;
    iVar2 = iVar2 + 4;
    iVar7 = iVar7 + 0x100;
  } while (iVar2 != 0x28);
  do {
    FUN_004b4440(0x01D2130C);
    iVar2 = 0x01ED78C8;
    *(uint *)(0x01ED78C8 + 0x15ae84) = 1;
    FUN_0053b100(iVar2,50000,50000,0x10000);
    *(uint *)(0x01ED78C8 + 0x15ae94) = 0xdac;
    FUN_004f9670(0x1d72cb0);
    *(uint *)(0x01ED78C8 + 0x15ae84) = 0;
    iVar2 = FUN_00558840();
    if ((iVar2 < 0) || (iVar7 = FUN_00558430(), iVar7 <= iVar2)) {
      local_554 = 0;
      local_65c[0] = '\0';
    }
    else {
      FUN_005584c0(iVar2,local_65c);
    }
    pcVar3 = (char *)FUN_00508960(">Device : " + 1);
    pcVar8 = (char *)0x1d74a50;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar3 = local_65c;
    iVar2 = -1;
    pcVar8 = (char *)0x1d74a50;
    do {
      pcVar9 = pcVar8;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar3;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    pcVar8 = (char *)FUN_00508960("Sound : ");
    local_24 = 0x1d74b50;
    pcVar3 = (char *)0x1d74b50;
    do {
      cVar1 = *pcVar8;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    iVar2 = FUN_00556750();
    if (iVar2 == 0) {
      pcVar3 = &DAT_005c776f;
    }
    else {
      pcVar3 = "Muted";
    }
    pcVar8 = (char *)FUN_00508960(pcVar3);
    iVar2 = -1;
    pcVar3 = (char *)0x1d74b50;
    do {
      pcVar9 = pcVar3;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar9 = pcVar3 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar8;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    iVar2 = FUN_00556e30(0);
    local_1c = (char *)0x1d74c50;
    if (iVar2 == 0) {
      uVar4 = FUN_00508960("Sound Effects Volume : Off");
      FUN_005a28c0(local_1c,uVar4);
    }
    else {
      uVar4 = FUN_00508960("Sound Effects Volume : ");
      FUN_005a28c0(0x1d74c50,uVar4);
      local_14 = (char *)FUN_00556d20(0);
      fVar12 = ((float10)(float)local_14 * (float10)_DAT_005c78b2) / (float10)_DAT_005e2924 +
               (float10)_DAT_005c78b6;
      FUN_005a3120();
      local_14 = (char *)(int)ROUND(fVar12);
      FUN_005a28c0(local_42c,&DAT_005c778a,local_14);
      pcVar8 = local_1c;
      pcVar3 = local_42c;
      iVar2 = -1;
      pcVar9 = local_1c;
      do {
        pcVar10 = pcVar9;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar3;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar3 = (char *)FUN_00508960(&DAT_005c778d);
      iVar2 = -1;
      do {
        pcVar9 = pcVar8;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar3;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
    }
    iVar2 = FUN_00556e30(2);
    pcVar3 = (char *)0x1d74d50;
    local_28 = 4;
    if (iVar2 == 0) {
      uVar4 = FUN_00508960("Dialog Volume : Off");
      FUN_005a28c0(0x1d74d50,uVar4);
      iVar2 = 4;
    }
    else {
      pcVar8 = (char *)FUN_00508960("Dialog Volume : ");
      do {
        cVar1 = *pcVar8;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      local_14 = (char *)FUN_00556d20(2);
      fVar12 = ((float10)(float)local_14 * (float10)_DAT_005c78b2) / (float10)_DAT_005e2928 +
               (float10)_DAT_005c78b6;
      FUN_005a3120();
      local_14 = (char *)(int)ROUND(fVar12);
      FUN_005a28c0(local_12c,&DAT_005c77bc,local_14);
      pcVar3 = local_12c;
      iVar2 = -1;
      pcVar8 = (char *)0x1d74d50;
      do {
        pcVar9 = pcVar8;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar3;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar8 = (char *)FUN_00508960(&DAT_005c77bf);
      iVar2 = -1;
      pcVar3 = (char *)0x1d74d50;
      do {
        pcVar9 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar9 = pcVar3 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar8;
        *pcVar9 = cVar1;
        iVar2 = local_28;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
    }
    iVar7 = FUN_00556e30(1);
    local_20 = (char *)(iVar2 * 0x100 + 0x1d74a50);
    if (iVar7 == 0) {
      uVar4 = FUN_00508960("Music Volume : Off");
      FUN_005a28c0(local_20,uVar4);
    }
    else {
      pcVar8 = (char *)FUN_00508960("Music Volume : ");
      pcVar3 = local_20;
      do {
        cVar1 = *pcVar8;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      local_14 = (char *)FUN_00556d20(1);
      fVar12 = ((float10)(float)local_14 * (float10)_DAT_005c78b2) / (float10)_DAT_005e2920 +
               (float10)_DAT_005c78b6;
      FUN_005a3120();
      local_14 = (char *)(int)ROUND(fVar12);
      FUN_005a28c0(local_32c,&DAT_005c77e6,local_14);
      pcVar8 = local_20;
      pcVar3 = local_32c;
      iVar7 = -1;
      pcVar9 = local_20;
      do {
        pcVar10 = pcVar9;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar3;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar3 = (char *)FUN_00508960(&DAT_005c77e9);
      iVar7 = -1;
      do {
        pcVar9 = pcVar8;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar3;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
    }
    pcVar9 = (char *)FUN_00508960("Output Rate : ");
    pcVar3 = (char *)((iVar2 + 1) * 0x100 + 0x1d74a50);
    pcVar8 = pcVar3;
    do {
      cVar1 = *pcVar9;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    local_14 = pcVar3;
    uVar4 = FUN_00558390();
    FUN_005a28c0(local_22c,&DAT_005c780e,uVar4);
    pcVar8 = local_22c;
    iVar7 = -1;
    pcVar9 = pcVar3;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar8;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    pcVar8 = (char *)FUN_00508960(&DAT_005c7811);
    iVar7 = -1;
    do {
      pcVar9 = pcVar3;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar3 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar8;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    pcVar9 = (char *)FUN_00508960("Output Quality : ");
    pcVar3 = (char *)((iVar2 + 2) * 0x100 + 0x1d74a50);
    pcVar8 = pcVar3;
    do {
      cVar1 = *pcVar9;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    local_14 = pcVar3;
    uVar4 = FUN_00558370();
    FUN_005a28c0(local_22c,&DAT_005c7826,uVar4);
    pcVar8 = local_22c;
    iVar7 = -1;
    pcVar9 = pcVar3;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar8;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    pcVar8 = (char *)FUN_00508960(&DAT_005c7829);
    iVar7 = -1;
    do {
      pcVar9 = pcVar3;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar3 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar8;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    uVar5 = FUN_005583b0();
    if (((uVar5 == 0) || (uVar5 < 2)) || (uVar5 != 2)) {
      pcVar3 = "Output Type : Mono";
    }
    else {
      pcVar3 = "Output Type : Stereo";
    }
    uVar4 = FUN_00508960(pcVar3);
    iVar7 = iVar2 + 4;
    FUN_005a28c0((iVar2 + 3) * 0x100 + 0x1d74a50,uVar4);
    if (0 < local_554) {
      iVar6 = FUN_005586e0();
      pcVar3 = (char *)(iVar7 * 0x100 + 0x1d74a50);
      if (iVar6 < 1) {
        pcVar8 = "Hardware Mixing: Off";
      }
      else {
        pcVar8 = "Hardware Mixing: Enabled";
      }
      pcVar8 = (char *)FUN_00508960(pcVar8);
      do {
        cVar1 = *pcVar8;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      iVar7 = iVar2 + 5;
    }
    _DAT_01d737e0 = _DAT_01d737e0 + _DAT_01c5fad0 * 0x18;
    if (0x7ffff < _DAT_01d737e0) {
      _DAT_01d737e0 = _DAT_01d737e0 + -0x80000;
    }
    uVar4 = FUN_00508960("Sound Options");
    uVar4 = FUN_004e7860(0x1d75450,iVar7,&local_2c,200,uVar4);
    FUN_0057a8a0();
    local_18 = 0.2;
    switch(uVar4) {
    case 0:
      FUN_004831c0(local_a1c);
      for (iVar2 = 0; iVar7 = FUN_00558430(), iVar2 < iVar7; iVar2 = iVar2 + 1) {
        FUN_005584c0(iVar2,local_544);
        FUN_00482070(local_a1c,local_544);
      }
      uVar4 = FUN_00558840(0);
      iVar2 = FUN_00483450(local_a1c,"Select sound device",uVar4);
      if (-1 < iVar2) {
        FUN_005587e0();
        FUN_00558640(iVar2);
        FUN_00558730();
        iVar2 = FUN_005586d0();
        if (0 < iVar2) {
          FUN_00558290(0x10,2,0xac44);
        }
        FUN_005607d0(0x02CF5680);
      }
      FUN_004832b0(local_a1c,0);
      break;
    case 1:
      iVar2 = FUN_00556750();
      FUN_00556760(iVar2 == 0);
      iVar2 = FUN_00556750();
      if (iVar2 == 0) {
        FUN_005607d0(0x02CF5680);
      }
      break;
    case 2:
      local_14 = (char *)FUN_00556d20(0);
      local_a28 = (float)local_14 / _DAT_005e2924;
      if (_DAT_01d737d4 == 1) {
        iVar2 = FUN_00556e30(0);
        if (iVar2 == 0) {
          FUN_00556db0(0,1);
          local_a28 = 1.0;
        }
        else {
          local_a28 = local_a28 - local_18;
          if (local_a28 < (float)_DAT_005c78de) {
LAB_004e9e11:
            local_a28 = 0.0;
            FUN_00556db0(0,0);
          }
        }
      }
      else {
        iVar2 = FUN_00556e30(0);
        if (iVar2 == 0) {
          FUN_00556db0(0,1);
          local_a28 = local_18;
        }
        else {
          local_a28 = local_a28 + local_18;
          if ((float)_DAT_005c78c6 < local_a28) goto LAB_004e9e11;
          if ((float)_DAT_005c78ce < local_a28) {
            local_a28 = 1.0;
          }
        }
      }
      FUN_00556c90(0,local_a28 * _DAT_005e2924);
      FUN_00555fd0();
      FUN_00555f00(1);
      FUN_00556240("colt45-0.wav");
      FUN_00556050();
      break;
    case 3:
      local_14 = (char *)FUN_00556d20(2);
      local_a20 = (float)local_14 / _DAT_005e2928;
      if (_DAT_01d737d4 == 1) {
        iVar2 = FUN_00556e30(2);
        if (iVar2 == 0) {
          FUN_00556db0(2,1);
          local_a20 = 1.0;
        }
        else {
          local_a20 = local_a20 - local_18;
          if (local_a20 < (float)_DAT_005c78de) {
LAB_004e9f3d:
            local_a20 = 0.0;
            FUN_00556db0(2,0);
          }
        }
      }
      else {
        iVar2 = FUN_00556e30(2);
        if (iVar2 == 0) {
          FUN_00556db0(2,1);
          local_a20 = local_18;
        }
        else {
          local_a20 = local_a20 + local_18;
          if ((float)_DAT_005c78c6 < local_a20) goto LAB_004e9f3d;
          if ((float)_DAT_005c78ce < local_a20) {
            local_a20 = 1.0;
          }
        }
      }
      FUN_00556c90(2,local_a20 * _DAT_005e2928);
      break;
    case 4:
      local_14 = (char *)FUN_00556d20(1);
      local_a24 = (float)local_14 / _DAT_005e2920;
      if (_DAT_01d737d4 == 1) {
        iVar2 = FUN_00556e30(1);
        if (iVar2 == 0) {
          FUN_00556db0(1,1);
          FUN_005607d0(0x02CF5680);
          local_a24 = 1.0;
        }
        else {
          local_a24 = local_a24 + _DAT_005c78d6;
          if (local_a24 < (float)_DAT_005c78de) {
LAB_004ea042:
            local_a24 = 0.0;
            FUN_00556db0(1,0);
          }
        }
      }
      else {
        iVar2 = FUN_00556e30(1);
        if (iVar2 == 0) {
          FUN_00556db0(1,1);
          FUN_005607d0(0x02CF5680);
          local_a24 = 0.2;
        }
        else {
          local_a24 = local_a24 + _DAT_005c78be;
          if ((float)_DAT_005c78c6 < local_a24) goto LAB_004ea042;
          if (_DAT_005c78ce < (double)local_a24) {
            local_a24 = 1.0;
          }
        }
      }
      FUN_00556c90(1,local_a24 * _DAT_005e2920);
      break;
    case 5:
      iVar2 = FUN_00558390();
      if (_DAT_01d737d4 == 1) {
        if (iVar2 == 0x5622) {
LAB_004ea121:
          iVar2 = 0x2b2a;
        }
        else if (iVar2 == 0xac44) {
          iVar2 = 0x5622;
        }
        else {
          iVar2 = 0xac44;
        }
      }
      else if (iVar2 < 0x5622) {
        iVar2 = 0x5622;
      }
      else {
        if (0xac43 < iVar2) goto LAB_004ea121;
        iVar2 = 0xac44;
      }
      iVar7 = FUN_005586d0();
      if (0 < iVar7) {
        iVar2 = 0xac44;
      }
      iVar7 = FUN_00558390();
      if (iVar2 != iVar7) {
        FUN_00558250();
        FUN_00558410(iVar2);
        FUN_005607d0(0x02CF5680);
      }
      break;
    case 6:
      iVar2 = FUN_00558370();
      if (iVar2 == 0x10) {
        iVar2 = 8;
      }
      else {
        iVar2 = 0x10;
      }
      iVar7 = FUN_005586d0();
      if (0 < iVar7) {
        iVar2 = 0x10;
      }
      iVar7 = FUN_00558370();
      if (iVar2 != iVar7) {
        FUN_00558250();
        FUN_005583d0(iVar2);
        FUN_005607d0(0x02CF5680);
      }
      break;
    case 7:
      iVar2 = FUN_005583b0();
      iVar2 = (iVar2 == 1) + 1;
      iVar7 = FUN_005586d0();
      if (0 < iVar7) {
        iVar2 = 2;
      }
      iVar7 = FUN_005583b0();
      if (iVar2 != iVar7) {
        FUN_00558250();
        FUN_005583f0(iVar2);
        FUN_005607d0(0x02CF5680);
      }
      break;
    case 8:
      FUN_005587e0();
      iVar2 = FUN_005586e0();
      if (iVar2 < 1) {
        uVar4 = 2;
      }
      else {
        uVar4 = 0;
      }
      FUN_005586f0(uVar4);
      FUN_00558730();
      FUN_005607d0(0x02CF5680);
    }
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
    if (iVar2 != 0) {
      return;
    }
  } while( true );
}
