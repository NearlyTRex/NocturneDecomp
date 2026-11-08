// Name: FUN_0054d3c0
// Address: 0054d3c0
// Address Range: [[0054d3c0, 0054e3ba]]
// Convention: unknown
// Signature: int * FUN_0054d3c0(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0054d3c0(int *param_1,uint param_2)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  byte local_330 [256];
  byte local_230 [256];
  char local_130 [100];
  char local_cc [100];
  byte local_68 [4];
  byte local_64 [4];
  byte local_60 [4];
  byte local_5c [4];
  byte local_58 [4];
  byte local_54 [8];
  byte local_4c [4];
  float local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  
  uVar3 = FUN_00531090("Loading set",0);
  FUN_004fe9c0(0x01D1BD1C,uVar3);
  FUN_0054d370(param_1);
  iVar4 = FUN_00479180("models",param_2,&DAT_005f0490);
  if (iVar4 == 0) {
    _DAT_01d1d400 = "..\\core\\set.cpp";
    _DAT_01d1d404 = 0x15c;
    FUN_005030e0("CDemonSet::Unable to open %s",param_2);
  }
  FUN_005c04b0(iVar4,&DAT_005f04c7,param_1 + 0x56b30);
  FUN_005c04b0(iVar4,&DAT_005f04cb,param_1 + 0x56baa);
  FUN_005c04b0(iVar4,&DAT_005f04cf,local_330);
  FUN_005c04b0(iVar4,&DAT_005f04d3,local_130);
  FUN_005c04b0(iVar4,&DAT_005f04d7,param_1 + 0x53454);
  pfVar6 = (float *)(param_1 + 0x53455);
  if (param_1[0x56b30] < 0x1e) {
    param_1[0x53455] = -0x40800000;
    param_1[0x53456] = -0x40800000;
    param_1[0x53457] = -0x40800000;
    local_48 = SQRT((float)param_1[0x53457] * (float)param_1[0x53457] +
                    *pfVar6 * *pfVar6 + (float)param_1[0x53456] * (float)param_1[0x53456]);
    if (local_48 <= 0.0) {
      param_1[0x53457] = 0;
      param_1[0x53456] = param_1[0x53457];
      *pfVar6 = (float)param_1[0x53456];
      param_1[0x53458] = 0;
    }
    else {
      fVar2 = 1.0 / local_48;
      *pfVar6 = *pfVar6 * fVar2;
      param_1[0x53456] = (int)((float)param_1[0x53456] * fVar2);
      param_1[0x53457] = (int)((float)param_1[0x53457] * fVar2);
      param_1[0x53458] = 0;
    }
  }
  else {
    FUN_005c04b0(iVar4,"%f,%f,%f,%f\n",pfVar6,param_1 + 0x53456,param_1 + 0x53457,
                 param_1 + 0x53458);
  }
  if (param_1[0x56b30] == 0) {
    FUN_005c1180(local_330,0xff,iVar4);
    FUN_005c1180(local_330,0xff,iVar4);
    FUN_005c1180(local_330,0xff,iVar4);
  }
  if (param_1[0x56b30] < 0x11) {
    FUN_005c1180(local_330,0xff,iVar4);
    FUN_005c04b0(iVar4,"%d,%d,%d,%d\n",local_4c,param_1 + 0x56b10,param_1 + 0x56b11,
                 param_1 + 0x56b12);
    FUN_005c1180(local_330,0xff,iVar4);
    FUN_005c04b0(iVar4,"%f,%f,%f\n",param_1 + 0x56b13,param_1 + 0x56b14,param_1 + 0x56b15);
    FUN_005c04b0(iVar4,"%f,%f,%f,%f\n",param_1 + 0x56b16,param_1 + 0x56b17,local_4c,local_4c);
    param_1[0x56b18] = 0x42480000;
  }
  else {
    FUN_00454ab0(param_1 + 0x56b10,iVar4,param_1[0x56b30]);
  }
  FUN_005c1180(local_330,0xff,iVar4);
  FUN_005c04b0(iVar4,"%f,%f\n",0x02C8AFB0 + 1,0x02C8AFB0 + 2);
  if (param_1[0x56b30] < 0x1f) {
    DAT_00625c98 = 0x2000;
    _DAT_02c8afc0 = 0;
    _DAT_02c8afc4 = 0;
    _DAT_00625c94 = 0x3e800000;
  }
  else {
    FUN_005c1180(local_330,0xff,iVar4);
    FUN_005c04b0(iVar4,"%f,%d,%f,%f\n",&DAT_00625c94,&DAT_00625c98,&DAT_02c8afc0,&DAT_02c8afc4);
  }
  FUN_005c1180(local_330,0xff,iVar4);
  FUN_005c04b0(iVar4,"%d,%s\n",param_1 + 0x56b29,param_1 + 0x56b2a);
  if (param_1[0x56b30] < 5) {
    iVar5 = FUN_005c1210(local_130,&DAT_005f052b,4);
    if (iVar5 == 0) {
      *0x02C8AFB0 = 1;
    }
    else {
      *0x02C8AFB0 = 0;
    }
  }
  else {
    FUN_005c1180(local_330,0xff,iVar4);
    FUN_005c04b0(iVar4,&DAT_005f0527,0x02C8AFB0);
  }
  if (param_1[0x56b30] < 6) {
    param_1[0x58590] = 1;
  }
  else {
    FUN_005c1180(local_330,0xff,iVar4);
    FUN_005c04b0(iVar4,&DAT_005f0530,param_1 + 0x58590);
  }
  piVar8 = param_1 + 0x58591;
  if (param_1[0x56b30] < 0xc) {
    pcVar7 = "NITESKY.RAW";
    do {
      cVar1 = *pcVar7;
      *(char *)piVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      *(char *)((int)piVar8 + 1) = cVar1;
      piVar8 = (int *)((int)piVar8 + 2);
    } while (cVar1 != '\0');
    param_1[0x58599] = 0x4000;
  }
  else {
    FUN_005c04b0(iVar4,"%d,%s\n",param_1 + 0x58599,piVar8);
  }
  piVar8 = param_1 + 0x56b99;
  if (param_1[0x56b30] < 0xd) {
    pcVar7 = &DAT_005f054e;
    param_1[0x56b98] = 0;
    do {
      cVar1 = *pcVar7;
      *(char *)piVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      *(char *)((int)piVar8 + 1) = cVar1;
      piVar8 = (int *)((int)piVar8 + 2);
    } while (cVar1 != '\0');
  }
  else {
    FUN_005c1180(local_330,0xff,iVar4);
    FUN_005c04b0(iVar4,"%d,%s\n",param_1 + 0x56b98,piVar8);
  }
  if (param_1[0x56b30] < 0x19) {
    param_1[0x585a0] = 0;
  }
  else {
    FUN_005c1180(local_330,0xff,iVar4);
    FUN_005c04b0(iVar4,&DAT_005f0553,param_1 + 0x585a0);
  }
  if (param_1[0x56b30] < 0x1d) {
    param_1[0x56b2f] = 0;
  }
  else {
    FUN_005c1180(local_330,0xff,iVar4);
    FUN_005c04b0(iVar4,&DAT_005f0557,param_1 + 0x56b2f);
  }
  FUN_00479580(local_130,0,0,local_230,0);
  iVar5 = FUN_005c04e0(local_230,"train");
  uVar3 = 0x02C8AE68;
  if (iVar5 == 0) {
    param_1[0x56b2e] = 1;
    FUN_0059f380(uVar3);
  }
  else {
    FUN_0059f3c0(0x02C8AE68);
    param_1[0x56b2e] = 0;
  }
  if (10 < param_1[0x56b30]) {
    FUN_005c1180(local_330,0xff,iVar4);
  }
  FUN_005c04b0(iVar4,&DAT_005f0561,param_1 + 0x668b);
  iVar5 = 0;
  if (0 < param_1[0x668b]) {
    piVar8 = param_1 + 0x668c;
    do {
      FUN_0055c800(piVar8,iVar4);
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 0x626;
    } while (iVar5 < param_1[0x668b]);
  }
  if (10 < param_1[0x56b30]) {
    FUN_005c1180(local_330,0xff,iVar4);
  }
  FUN_005c04b0(iVar4,&DAT_005f0565,param_1);
  iVar5 = 0;
  if (0 < *param_1) {
    piVar8 = param_1 + 1;
    do {
      FUN_0055c1b0(piVar8,iVar4);
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 0x69;
    } while (iVar5 < *param_1);
  }
  if (param_1[0x56b30] < 1) {
    param_1[0x56bb4] = 0;
    iVar5 = FUN_005c1210(local_130,"mauso",5);
    if (iVar5 == 0) {
      param_1[0x56bb4] = 2;
    }
    iVar5 = FUN_005c1210(local_130,&DAT_005f0599,4);
    if (iVar5 == 0) {
      param_1[0x56bb4] = 0;
    }
    iVar5 = FUN_005c1210(local_130,"smill",5);
    if (iVar5 == 0) {
      param_1[0x56bb4] = 3;
    }
    iVar5 = FUN_005c1210(local_130,"pier59",6);
    if (iVar5 == 0) {
      param_1[0x56bb4] = 0;
    }
    iVar5 = FUN_005c1210(local_130,&DAT_005f05ab,4);
    if (iVar5 == 0) {
      param_1[0x56bb4] = 3;
    }
    param_1[0x56bb5] = 0;
  }
  else {
    FUN_005c1180(local_330,0xff,iVar4);
    FUN_005c04b0(iVar4,&DAT_005f0569,param_1 + 0x56bb4);
    FUN_005c04b0(iVar4,&DAT_005f056d,param_1 + 0x56bb5);
    iVar5 = 0;
    if (0 < param_1[0x56bb5]) {
      local_44 = param_1 + 0x56bb6;
      local_14 = param_1 + 0x56bc6;
      local_34 = param_1 + 0x56bbc;
      local_18 = param_1 + 0x56bb9;
      local_2c = param_1 + 0x56bba;
      local_30 = param_1 + 0x56bbb;
      local_24 = param_1 + 0x56bb8;
      piVar8 = param_1 + 0x56bb7;
      do {
        FUN_005c04b0(iVar4,"%f,%f,%f\n",local_44 + iVar5 * 0x11,piVar8,local_24);
        FUN_005c04b0(iVar4,"%f,%f,%f\n",local_18,local_2c,local_30);
        FUN_005c04b0(iVar4,"%f,%f,%f\n",local_5c,local_54,local_58);
        FUN_0045f3e0(local_34,local_5c);
        piVar8 = piVar8 + 0x11;
        FUN_005c04b0(iVar4,&DAT_005f058f,local_14);
        iVar5 = iVar5 + 1;
        local_14 = local_14 + 0x11;
        local_34 = local_34 + 0x11;
        local_18 = local_18 + 0x11;
        local_30 = local_30 + 0x11;
        local_2c = local_2c + 0x11;
        local_24 = local_24 + 0x11;
      } while (iVar5 < param_1[0x56bb5]);
    }
  }
  if (param_1[0x56b30] < 3) {
    param_1[0x57da5] = 2;
    iVar5 = FUN_005c1210(local_130,"mauso",5);
    if (iVar5 == 0) {
      param_1[0x57da5] = 8;
    }
    iVar5 = FUN_005c1210(local_130,&DAT_005f05ba,4);
    if (iVar5 == 0) {
      param_1[0x57da5] = 3;
    }
    iVar5 = FUN_005c1210(local_130,"smill",5);
    if (iVar5 == 0) {
      param_1[0x57da5] = 2;
    }
    iVar5 = FUN_005c1210(local_130,"pier59",6);
    if (iVar5 == 0) {
      param_1[0x57da5] = 7;
    }
    iVar5 = FUN_005c1210(local_130,"castle",6);
    if (iVar5 == 0) {
      param_1[0x57da5] = 2;
    }
    iVar5 = FUN_005c1210(local_130,&DAT_005f05d3,4);
    if (iVar5 == 0) {
      param_1[0x57da5] = 8;
    }
  }
  else {
    FUN_005c1180(local_330,0xff,iVar4);
    FUN_005c04b0(iVar4,&DAT_005f05b0,param_1 + 0x57da5);
  }
  if (param_1[0x56b30] < 0x18) {
    param_1[0x56b23] = 0;
  }
  else {
    FUN_005c1180(local_330,0xff,iVar4);
    FUN_005c04b0(iVar4,&DAT_005f05d8,param_1 + 0x56b23);
  }
  if ((3 < param_1[0x56b30]) && (param_1[0x56b30] < 10)) {
    FUN_0055b8f0(param_1,iVar4);
  }
  if (param_1[0x56b30] < 5) {
    param_1[0x56d0a] = 0;
  }
  else {
    FUN_005c1180(local_330,0xff,iVar4);
    FUN_005c04b0(iVar4,&DAT_005f05dc,param_1 + 0x56d0a);
    iVar5 = 0;
    if (0 < param_1[0x56d0a]) {
      local_40 = param_1 + 0x56d0b;
      local_20 = param_1 + 0x56d11;
      local_28 = param_1 + 0x56d0f;
      local_1c = param_1 + 0x56d10;
      local_3c = param_1 + 0x56d0c;
      local_38 = param_1 + 0x56d0d;
      piVar8 = param_1 + 0x56d0e;
      do {
        FUN_005c04b0(iVar4,"%f,%f,%f\n",local_40 + iVar5 * 0x11,local_3c,local_38);
        FUN_005c04b0(iVar4,"%f,%f,%f\n",piVar8,local_28,local_1c);
        FUN_005c04b0(iVar4,"%f,%f,%f\n",local_68,local_60,local_64);
        iVar5 = iVar5 + 1;
        FUN_0045f3e0(local_20,local_68);
        piVar8 = piVar8 + 0x11;
        local_20 = local_20 + 0x11;
        local_28 = local_28 + 0x11;
        local_1c = local_1c + 0x11;
        local_3c = local_3c + 0x11;
        local_38 = local_38 + 0x11;
      } while (iVar5 < param_1[0x56d0a]);
    }
    FUN_0055bf10(param_1);
  }
  if (param_1[0x56b30] == 0xe) {
    FUN_005c1180(local_330,0xff,iVar4);
    FUN_005c1180(local_330,0xff,iVar4);
  }
  if (0x13 < param_1[0x56b30]) {
    FUN_005c1180(local_330,0xff,iVar4);
    iVar5 = 0;
    if (0 < *param_1) {
      piVar8 = param_1 + 1;
      do {
        FUN_0055c540(piVar8,iVar4);
        iVar5 = iVar5 + 1;
        piVar8 = piVar8 + 0x69;
      } while (iVar5 < *param_1);
    }
  }
  FUN_005c0d10(iVar4);
  uVar3 = FUN_00531090("Loading set geometry",0);
  FUN_004fe9c0(0x01D1BD1C,uVar3);
  piVar8 = param_1 + 0x5343c;
  iVar4 = FUN_005c04e0(piVar8,local_130);
  if (iVar4 == 0) {
    FUN_00559580(param_1);
  }
  else {
    pcVar7 = local_130;
    piVar10 = piVar8;
    do {
      cVar1 = *pcVar7;
      *(char *)piVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      *(char *)((int)piVar10 + 1) = cVar1;
      piVar10 = (int *)((int)piVar10 + 2);
    } while (cVar1 != '\0');
    iVar4 = FUN_00479180(&DAT_005f0616,piVar8,&DAT_005f0613);
    if (iVar4 == 0) {
      FUN_0057dc40();
      FUN_00401fe0("Warning!  No .GEO file.  Press any key",0,0);
      FUN_005acff0();
      FUN_004032b0();
      FUN_005b2510();
    }
    else {
      FUN_005c0d10(iVar4);
      FUN_0048afa0(&DAT_01fe5c1c,piVar8);
    }
    FUN_00535280();
  }
  uVar3 = FUN_00531090("Loading thumbs",0);
  FUN_004fe9c0(0x01D1BD1C,uVar3);
  pcVar7 = local_cc;
  piVar8 = param_1 + 0x5343c;
  do {
    iVar4 = *piVar8;
    *pcVar7 = (char)iVar4;
    if ((char)iVar4 == '\0') break;
    cVar1 = *(char *)((int)piVar8 + 1);
    piVar8 = (int *)((int)piVar8 + 2);
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar7 = local_cc;
  do {
    pcVar9 = pcVar7;
    if (*pcVar7 == '.') goto LAB_0054debe;
    if (*pcVar7 == '\0') break;
    pcVar9 = pcVar7 + 1;
    if (*pcVar9 == '.') goto LAB_0054debe;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar9 != '\0');
  pcVar9 = (char *)0x0;
LAB_0054debe:
  if (pcVar9 == (char *)0x0) {
    pcVar7 = local_cc;
    do {
      pcVar9 = pcVar7;
      if (*pcVar7 == '\0') goto LAB_0054dee7;
      if (*pcVar7 == '\0') break;
      pcVar9 = pcVar7 + 1;
      if (*pcVar9 == '\0') goto LAB_0054dee7;
      pcVar7 = pcVar7 + 2;
    } while (*pcVar9 != '\0');
    pcVar9 = (char *)0x0;
  }
LAB_0054dee7:
  pcVar7 = &DAT_005f0651;
  do {
    cVar1 = *pcVar7;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  FUN_0055b220(param_1,local_cc);
  if (param_1[0x56b29] != 0) {
    FUN_004668a0(0x1fe5fac,param_1 + 0x56b2a);
  }
  iVar4 = 0;
  piVar8 = param_1;
  if (0 < *param_1) {
    do {
      iVar5 = param_1[0x53454];
      piVar8[0x54] = 0;
      piVar8[0x69] = 1;
      iVar4 = iVar4 + 1;
      piVar8[0x53] = iVar5;
      piVar8 = piVar8 + 0x69;
    } while (iVar4 < *param_1);
  }
  _DAT_02026348 = 1;
  return param_1;
}
