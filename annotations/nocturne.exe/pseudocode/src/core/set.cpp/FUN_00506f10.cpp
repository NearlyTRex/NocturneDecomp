// Name: FUN_00506f10
// Address: 00506f10
// Address Range: [[00506f10, 00507c77]]
// Convention: unknown
// Signature: int FUN_00506f10(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00506f10(int *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  byte local_228 [256];
  char local_128 [100];
  char local_c4 [100];
  byte local_60 [4];
  byte local_5c [4];
  byte local_58 [4];
  byte local_54 [4];
  byte local_50 [4];
  byte local_4c [4];
  byte local_48 [4];
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
  
  uVar2 = FUN_004ee370("Loading set",0);
  FUN_004c59e0(0x01CC3160,uVar2);
  FUN_00506ec0(param_1);
  iVar3 = FUN_00456a60("models",param_2,&DAT_00590104);
  if (iVar3 == 0) {
    _DAT_01cc4800 = "..\\core\\set.cpp";
    _DAT_01cc4804 = 0x11b;
    FUN_004c8440("CDemonSet::Unable to open %s",param_2);
  }
  FUN_00563350(iVar3,&DAT_0059013b,param_1 + 0x56a31);
  FUN_00563350(iVar3,&DAT_0059013f,param_1 + 0x56aab);
  FUN_00563350(iVar3,&DAT_00590143,local_228);
  FUN_00563350(iVar3,&DAT_00590147,local_128);
  FUN_00563350(iVar3,&DAT_0059014b,param_1 + 0x5335a);
  if (param_1[0x56a31] == 0) {
    FUN_00564b20(local_228,0xff,iVar3);
    FUN_00564b20(local_228,0xff,iVar3);
    FUN_00564b20(local_228,0xff,iVar3);
  }
  if (param_1[0x56a31] < 0x11) {
    FUN_00564b20(local_228,0xff,iVar3);
    FUN_00563350(iVar3,"%d,%d,%d,%d\n",local_48,param_1 + 0x56a12,param_1 + 0x56a13,
                 param_1 + 0x56a14);
    FUN_00564b20(local_228,0xff,iVar3);
    FUN_00563350(iVar3,"%f,%f,%f\n",param_1 + 0x56a15,param_1 + 0x56a16,param_1 + 0x56a17);
    FUN_00563350(iVar3,"%f,%f,%f,%f\n",param_1 + 0x56a18,param_1 + 0x56a19,local_48,local_48)
    ;
    param_1[0x56a1a] = 0x42480000;
  }
  else {
    FUN_00447d10(param_1 + 0x56a12,iVar3,param_1[0x56a31]);
  }
  FUN_00564b20(local_228,0xff,iVar3);
  FUN_00563350(iVar3,"%f,%f\n",0x02DD1210 + 1,0x02DD1210 + 2);
  FUN_00564b20(local_228,0xff,iVar3);
  FUN_00563350(iVar3,"%d,%s\n",param_1 + 0x56a2b,param_1 + 0x56a2c);
  if (param_1[0x56a31] < 5) {
    iVar4 = FUN_00564bc0(local_128,&DAT_00590185,4);
    if (iVar4 == 0) {
      *0x02DD1210 = 1;
    }
    else {
      *0x02DD1210 = 0;
    }
  }
  else {
    FUN_00564b20(local_228,0xff,iVar3);
    FUN_00563350(iVar3,&DAT_00590181,0x02DD1210);
  }
  if (param_1[0x56a31] < 6) {
    param_1[0x58490] = 1;
  }
  else {
    FUN_00564b20(local_228,0xff,iVar3);
    FUN_00563350(iVar3,&DAT_0059018a,param_1 + 0x58490);
  }
  piVar6 = param_1 + 0x58491;
  if (param_1[0x56a31] < 0xc) {
    pcVar5 = "NITESKY.RAW";
    do {
      cVar1 = *pcVar5;
      *(char *)piVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      *(char *)((int)piVar6 + 1) = cVar1;
      piVar6 = (int *)((int)piVar6 + 2);
    } while (cVar1 != '\0');
    param_1[0x58499] = 0x4000;
  }
  else {
    FUN_00563350(iVar3,"%d,%s\n",param_1 + 0x58499,piVar6);
  }
  piVar6 = param_1 + 0x56a9a;
  if (param_1[0x56a31] < 0xd) {
    pcVar5 = &DAT_005901a8;
    param_1[0x56a99] = 0;
    do {
      cVar1 = *pcVar5;
      *(char *)piVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      *(char *)((int)piVar6 + 1) = cVar1;
      piVar6 = (int *)((int)piVar6 + 2);
    } while (cVar1 != '\0');
  }
  else {
    FUN_00564b20(local_228,0xff,iVar3);
    FUN_00563350(iVar3,"%d,%s\n",param_1 + 0x56a99,piVar6);
  }
  if (param_1[0x56a31] < 0x19) {
    param_1[0x584a0] = 0;
  }
  else {
    FUN_00564b20(local_228,0xff,iVar3);
    FUN_00563350(iVar3,&DAT_005901ad,param_1 + 0x584a0);
  }
  iVar4 = FUN_00564bc0(local_128,"train",5);
  uVar2 = 0x02DD10C8;
  if (iVar4 == 0) {
    param_1[0x56a30] = 1;
    FUN_005492b0(uVar2);
  }
  else {
    FUN_005492f0(0x02DD10C8);
    param_1[0x56a30] = 0;
  }
  if (10 < param_1[0x56a31]) {
    FUN_00564b20(local_228,0xff,iVar3);
  }
  iVar4 = 0;
  FUN_00563350(iVar3,&DAT_005901b7,param_1 + 0x6591);
  if (0 < param_1[0x6591]) {
    piVar6 = param_1 + 0x6592;
    do {
      iVar4 = iVar4 + 1;
      FUN_00514a70(piVar6,iVar3);
      piVar6 = piVar6 + 0x626;
    } while (iVar4 < param_1[0x6591]);
  }
  if (10 < param_1[0x56a31]) {
    FUN_00564b20(local_228,0xff,iVar3);
  }
  iVar4 = 0;
  FUN_00563350(iVar3,&DAT_005901bb,param_1);
  if (0 < *param_1) {
    piVar6 = param_1 + 1;
    do {
      iVar4 = iVar4 + 1;
      FUN_005144e0(piVar6,iVar3);
      piVar6 = piVar6 + 0x68;
    } while (iVar4 < *param_1);
  }
  if (param_1[0x56a31] < 1) {
    param_1[0x56ab4] = 0;
    iVar4 = FUN_00564bc0(local_128,"mauso",5);
    if (iVar4 == 0) {
      param_1[0x56ab4] = 2;
    }
    iVar4 = FUN_00564bc0(local_128,&DAT_005901ef,4);
    if (iVar4 == 0) {
      param_1[0x56ab4] = 0;
    }
    iVar4 = FUN_00564bc0(local_128,"smill",5);
    if (iVar4 == 0) {
      param_1[0x56ab4] = 3;
    }
    iVar4 = FUN_00564bc0(local_128,"pier59",6);
    if (iVar4 == 0) {
      param_1[0x56ab4] = 0;
    }
    iVar4 = FUN_00564bc0(local_128,&DAT_00590201,4);
    if (iVar4 == 0) {
      param_1[0x56ab4] = 3;
    }
    param_1[0x56ab5] = 0;
  }
  else {
    FUN_00564b20(local_228,0xff,iVar3);
    FUN_00563350(iVar3,&DAT_005901bf,param_1 + 0x56ab4);
    iVar4 = 0;
    FUN_00563350(iVar3,&DAT_005901c3,param_1 + 0x56ab5);
    if (0 < param_1[0x56ab5]) {
      local_38 = param_1 + 0x56ab6;
      local_40 = param_1 + 0x56ac6;
      piVar6 = param_1 + 0x56abc;
      local_18 = param_1 + 0x56ab9;
      local_2c = param_1 + 0x56aba;
      local_28 = param_1 + 0x56abb;
      local_20 = param_1 + 0x56ab7;
      local_44 = param_1 + 0x56ab8;
      do {
        FUN_00563350(iVar3,"%f,%f,%f\n",local_38 + iVar4 * 0x11,local_20,local_44);
        FUN_00563350(iVar3,"%f,%f,%f\n",local_18,local_2c,local_28);
        FUN_00563350(iVar3,"%f,%f,%f\n",local_54,local_4c,local_50);
        FUN_0044d7a0(piVar6,local_54);
        iVar4 = iVar4 + 1;
        FUN_00563350(iVar3,&DAT_005901e5,local_40);
        piVar6 = piVar6 + 0x11;
        local_40 = local_40 + 0x11;
        local_18 = local_18 + 0x11;
        local_2c = local_2c + 0x11;
        local_28 = local_28 + 0x11;
        local_20 = local_20 + 0x11;
        local_44 = local_44 + 0x11;
      } while (iVar4 < param_1[0x56ab5]);
    }
  }
  if (param_1[0x56a31] < 3) {
    param_1[0x57ca5] = 2;
    iVar4 = FUN_00564bc0(local_128,"mauso",5);
    if (iVar4 == 0) {
      param_1[0x57ca5] = 8;
    }
    iVar4 = FUN_00564bc0(local_128,&DAT_00590210,4);
    if (iVar4 == 0) {
      param_1[0x57ca5] = 3;
    }
    iVar4 = FUN_00564bc0(local_128,"smill",5);
    if (iVar4 == 0) {
      param_1[0x57ca5] = 2;
    }
    iVar4 = FUN_00564bc0(local_128,"pier59",6);
    if (iVar4 == 0) {
      param_1[0x57ca5] = 7;
    }
    iVar4 = FUN_00564bc0(local_128,"castle",6);
    if (iVar4 == 0) {
      param_1[0x57ca5] = 2;
    }
    iVar4 = FUN_00564bc0(local_128,&DAT_00590229,4);
    if (iVar4 == 0) {
      param_1[0x57ca5] = 8;
    }
  }
  else {
    FUN_00564b20(local_228,0xff,iVar3);
    FUN_00563350(iVar3,&DAT_00590206,param_1 + 0x57ca5);
  }
  if (param_1[0x56a31] < 0x18) {
    param_1[0x56a25] = 0;
  }
  else {
    FUN_00564b20(local_228,0xff,iVar3);
    FUN_00563350(iVar3,&DAT_0059022e,param_1 + 0x56a25);
  }
  if ((3 < param_1[0x56a31]) && (param_1[0x56a31] < 10)) {
    FUN_00513ce0(param_1,iVar3);
  }
  if (param_1[0x56a31] < 5) {
    param_1[0x56c0a] = 0;
  }
  else {
    FUN_00564b20(local_228,0xff,iVar3);
    iVar4 = 0;
    FUN_00563350(iVar3,&DAT_00590232,param_1 + 0x56c0a);
    if (0 < param_1[0x56c0a]) {
      local_34 = param_1 + 0x56c0b;
      piVar6 = param_1 + 0x56c11;
      local_1c = param_1 + 0x56c0e;
      local_3c = param_1 + 0x56c0f;
      local_30 = param_1 + 0x56c10;
      local_24 = param_1 + 0x56c0c;
      local_14 = param_1 + 0x56c0d;
      do {
        FUN_00563350(iVar3,"%f,%f,%f\n",local_34 + iVar4 * 0x11,local_24,local_14);
        FUN_00563350(iVar3,"%f,%f,%f\n",local_1c,local_3c,local_30);
        FUN_00563350(iVar3,"%f,%f,%f\n",local_60,local_58,local_5c);
        iVar4 = iVar4 + 1;
        FUN_0044d7a0(piVar6,local_60);
        piVar6 = piVar6 + 0x11;
        local_1c = local_1c + 0x11;
        local_3c = local_3c + 0x11;
        local_30 = local_30 + 0x11;
        local_24 = local_24 + 0x11;
        local_14 = local_14 + 0x11;
      } while (iVar4 < param_1[0x56c0a]);
    }
    FUN_005141f0(param_1);
  }
  if (param_1[0x56a31] == 0xe) {
    FUN_00564b20(local_228,0xff,iVar3);
    FUN_00564b20(local_228,0xff,iVar3);
  }
  if (0x13 < param_1[0x56a31]) {
    iVar4 = 0;
    FUN_00564b20(local_228,0xff,iVar3);
    if (0 < *param_1) {
      piVar6 = param_1 + 1;
      do {
        iVar4 = iVar4 + 1;
        FUN_00514800(piVar6,iVar3);
        piVar6 = piVar6 + 0x68;
      } while (iVar4 < *param_1);
    }
  }
  FUN_00563380(iVar3);
  uVar2 = FUN_004ee370("Loading set geometry",0);
  FUN_004c59e0(0x01CC3160,uVar2);
  piVar6 = param_1 + 0x53342;
  iVar3 = FUN_00564520(piVar6,local_128);
  if (iVar3 == 0) {
    FUN_00511b30(param_1);
  }
  else {
    pcVar5 = local_128;
    piVar8 = piVar6;
    do {
      cVar1 = *pcVar5;
      *(char *)piVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      *(char *)((int)piVar8 + 1) = cVar1;
      piVar8 = (int *)((int)piVar8 + 2);
    } while (cVar1 != '\0');
    iVar3 = FUN_00456a60(&DAT_0059026c,piVar6,&DAT_00590269);
    if (iVar3 == 0) {
      FUN_0052ee70();
      FUN_00402600("Warning!  No .GEO file.  Press any key",0,0);
      FUN_00553910();
      FUN_00403f50();
      FUN_00558b00();
    }
    else {
      FUN_00563380(iVar3);
      FUN_00467890(&DAT_01fba938,piVar6);
    }
    FUN_004f1e90();
  }
  uVar2 = FUN_004ee370("Loading thumbs",0);
  pcVar5 = local_c4;
  FUN_004c59e0(0x01CC3160,uVar2);
  piVar6 = param_1 + 0x53342;
  do {
    iVar3 = *piVar6;
    *pcVar5 = (char)iVar3;
    if ((char)iVar3 == '\0') break;
    cVar1 = *(char *)((int)piVar6 + 1);
    piVar6 = (int *)((int)piVar6 + 2);
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar5 = local_c4;
  do {
    pcVar7 = pcVar5;
    if (*pcVar5 == '.') goto LAB_00507898;
    if (*pcVar5 == '\0') break;
    pcVar7 = pcVar5 + 1;
    if (*pcVar7 == '.') goto LAB_00507898;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_00507898:
  if (pcVar7 == (char *)0x0) {
    pcVar5 = local_c4;
    do {
      pcVar7 = pcVar5;
      if (*pcVar5 == '\0') goto LAB_005078c1;
      if (*pcVar5 == '\0') break;
      pcVar7 = pcVar5 + 1;
      if (*pcVar7 == '\0') goto LAB_005078c1;
      pcVar5 = pcVar5 + 2;
    } while (*pcVar7 != '\0');
    pcVar7 = (char *)0x0;
  }
LAB_005078c1:
  pcVar5 = &DAT_005902a7;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar3 = FUN_00513610(param_1,local_c4);
  if (param_1[0x56a2b] != 0) {
    iVar3 = FUN_00452650(0x1fbacc8,param_1 + 0x56a2c);
  }
  iVar4 = 0;
  piVar6 = param_1;
  if (0 < *param_1) {
    do {
      iVar3 = param_1[0x5335a];
      piVar6[0x53] = 0;
      piVar6[0x68] = 1;
      iVar4 = iVar4 + 1;
      piVar6[0x52] = iVar3;
      iVar3 = *param_1;
      piVar6 = piVar6 + 0x68;
    } while (iVar4 < iVar3);
  }
  return iVar3;
}
