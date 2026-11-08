// Name: FUN_004d6990
// Address: 004d6990
// Address Range: [[004d6990, 004d724d]]
// Convention: unknown
// Signature: void FUN_004d6990(int param_1,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d6990(int param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *puVar8;
  char *pcVar9;
  byte *pbVar10;
  uint *puVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  char local_570 [260];
  byte local_46c [260];
  byte local_368 [256];
  byte local_268 [256];
  uint local_168 [50];
  byte local_a0 [4];
  byte local_9c [48];
  byte local_6c [44];
  byte local_40 [8];
  byte local_38 [4];
  int local_34;
  uint local_30;
  int local_2c;
  char *local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  bVar14 = 0;
  FUN_005c25c0("save\\$$SAVE$$.TMP");
  *(uint *)(param_1 + 0x250) = 1;
  FUN_005c2238(&DAT_01cd05c0,0,0,0,local_368);
  iVar2 = FUN_005c04e0(local_368,&DAT_005e2faf);
  if ((iVar2 == 0) || (iVar2 = FUN_005c04e0(local_368,&DAT_005e2fb3), iVar2 == 0)) {
    pcVar9 = local_570;
    pcVar6 = &DAT_01cd05c0;
    do {
      cVar1 = *pcVar6;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
  }
  else {
    local_570[0] = '\0';
  }
  FUN_004bdaa0(0x01CC8004);
  local_30 = _DAT_01c3eb50;
  if (param_3 != 0) {
    _DAT_01c3eb50 = _DAT_0152d244;
  }
  local_28 = (char *)(param_1 + 0x9fc);
  local_24 = param_1 + 0x274;
  local_2c = param_1 + 0x26c;
  local_20 = param_1 + 0x268;
  local_1c = param_1 + 0x270;
  do {
    pcVar9 = param_2;
    pcVar6 = local_570;
    if (param_2 == (char *)0x0) {
      uVar5 = FUN_00531090("Select file to load",&DAT_005e2fbe,"*.noc",local_570,1);
      iVar2 = FUN_00494fd0(0x01C3EB54,uVar5);
      if (iVar2 == 0) {
LAB_004d6e32:
        _DAT_01c3eb50 = local_30;
        FUN_004bdaa0(0x01CC8004);
        *(uint *)(param_1 + 0x250) = 0;
        FUN_005c25c0("save\\$$SAVE$$.TMP");
        return;
      }
    }
    else {
      do {
        cVar1 = *pcVar9;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar6[1] = cVar1;
        pcVar9 = pcVar9 + 2;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
    }
    FUN_004a9a00(0x01C51D80);
    FUN_004fe840(0x01D1BD1C,9,0,0xffffffff);
    iVar2 = FUN_00479180(&DAT_005e2fda,local_570,&DAT_005e2fd7);
    local_18 = FUN_005c2e90(iVar2);
    uVar5 = 1;
    iVar3 = FUN_005c04e0(&DAT_01cd05c0,local_570);
    if (iVar3 != 0) {
      pcVar6 = &DAT_01cd05c0;
      pcVar9 = local_570;
      do {
        cVar1 = *pcVar9;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      uVar5 = 0;
    }
    if (param_3 == 0) {
      uVar5 = 1;
    }
    FUN_005c0b10(local_38,4,1,iVar2);
    FUN_005c170c(iVar2,local_18,0);
    iVar4 = 4;
    bVar12 = false;
    iVar3 = 0;
    bVar13 = true;
    pbVar7 = local_38;
    pbVar10 = &DAT_0061d98c;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar12 = *pbVar7 < *pbVar10;
      bVar13 = *pbVar7 == *pbVar10;
      pbVar7 = pbVar7 + (uint)bVar14 * -2 + 1;
      pbVar10 = pbVar10 + (uint)bVar14 * -2 + 1;
    } while (bVar13);
    if (!bVar13) {
      iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
    }
    if (iVar3 == 0) {
LAB_004d6be4:
      FUN_005c0d10(iVar2);
      FUN_005a08d0(local_6c);
      FUN_005a17d0(local_40);
      FUN_005bfb40(local_46c,"%s\\%s",&DAT_005e2fe3,local_570);
      iVar2 = FUN_005a0f60(local_6c,local_46c,1);
      if (iVar2 == 0) {
        uVar5 = FUN_00531090("Can't open saved game file.");
        FUN_004943a0(0x01C3EB54,uVar5);
        FUN_005a1860(local_40,0);
        FUN_005a0a50(local_6c,0);
        return;
      }
      FUN_005a0d00(local_6c,4,0);
      iVar2 = FUN_005a19e0(local_40,"save\\$$SAVE$$.TMP",&DAT_005e300a);
      if (iVar2 == 0) {
        uVar5 = FUN_00531090("Can't create temp file to load saved game file.");
        FUN_004943a0(0x01C3EB54,uVar5);
        FUN_005a1860(local_40,0);
        FUN_005a0a50(local_6c,0);
        return;
      }
      FUN_004436b0(local_a0,0x8000,8);
      FUN_004436f0(local_a0);
      FUN_00443730(local_a0,local_6c,local_40);
      FUN_00443790(local_a0,local_40);
      FUN_005a0dc0(local_6c);
      FUN_005a19b0(local_40);
      iVar2 = FUN_005c157c("save\\$$SAVE$$.TMP",&DAT_005e303d);
      if (iVar2 == 0) {
        _DAT_01d1d400 = "..\\core\\game.cpp";
        _DAT_01d1d404 = 0x1050;
        FUN_005030e0("Can't reopen %s","save\\$$SAVE$$.TMP");
      }
      FUN_00442f90(local_9c,0);
      FUN_00442bb0(local_a0,1);
      FUN_005a1860(local_40,0);
      FUN_005a0a50(local_6c,0);
    }
    else {
      iVar4 = 3;
      bVar12 = false;
      iVar3 = 0;
      bVar13 = true;
      pbVar7 = local_38;
      pbVar10 = &DAT_005e2fdf;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar12 = *pbVar7 < *pbVar10;
        bVar13 = *pbVar7 == *pbVar10;
        pbVar7 = pbVar7 + (uint)bVar14 * -2 + 1;
        pbVar10 = pbVar10 + (uint)bVar14 * -2 + 1;
      } while (bVar13);
      if (!bVar13) {
        iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      }
      if (iVar3 == 0) goto LAB_004d6be4;
    }
    FUN_005c1180(local_268,0xff,iVar2);
    iVar3 = FUN_005c1210(local_268,"CInventory",10);
    if (iVar3 == 0) {
      FUN_005c0d10(iVar2);
      FUN_004942e0(0x01C3EB54,"Can't load old save game file %s.  Sorry.",local_570);
    }
    else {
      FUN_005c04b0(iVar2,&DAT_005e3096,&local_34);
      if (local_34 < 3) {
        FUN_005c0d10(iVar2);
        FUN_004942e0(0x01C3EB54,"Can't load old save game file %s.  Sorry.",local_570);
      }
      else {
        FUN_0051a4f0(0x01D2C900,iVar2,uVar5);
        FUN_005c1180(local_268,0xff,iVar2);
        FUN_005c04b0(iVar2,"%d, %d\n",&DAT_01d06aa0,&DAT_01d06ab4);
        local_14 = 0;
        if (0 < _DAT_01d06aa0) {
          iVar3 = 0;
          do {
            pcVar9 = "(file corrupt)";
            puVar11 = local_168;
            for (iVar4 = 0x32; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar11 = *(uint *)pcVar9;
              pcVar9 = pcVar9 + ((uint)bVar14 * -2 + 1) * 4;
              puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
            }
            FUN_005c04b0(iVar2,"%[^\n]\n",local_168);
            uVar5 = FUN_0051b6c0(0x01D2C900,local_168,_DAT_01d06b10);
            iVar4 = FUN_0040c600(uVar5);
            *(int *)(iVar3 + 0x1d06aa4) = iVar4;
            if (iVar4 == 0) {
              FUN_005c0d10(iVar2);
              FUN_004943a0(0x01C3EB54,"Can't find hero %s.  Sorry.",local_168);
            }
            local_14 = local_14 + 1;
            iVar3 = iVar3 + 4;
          } while (local_14 < _DAT_01d06aa0);
        }
        iVar3 = FUN_0051bdc0(0x01D2C900);
        if (iVar3 == 0) goto LAB_004d6e32;
        FUN_004aa610(0x01C51D80,iVar2);
        FUN_0054b3e0(0x01E81C80,iVar2);
        if (local_34 < 4) {
          FUN_004e5c00(0x01CD0E3C);
        }
        else if (local_34 == 4) {
          FUN_004e6680(0x01CD0E3C,iVar2);
        }
        if (local_34 < 7) {
          FUN_004b4b30(0x01C57074);
        }
        else {
          FUN_004b7370(0x01C57074,iVar2);
        }
        if (local_34 < 6) {
          _DAT_01cd06c0 = 0;
        }
        else {
          FUN_005c1180(local_268,0xff,iVar2);
          iVar3 = 1;
          FUN_005c04b0(iVar2,&DAT_005e30ef,&DAT_01cd06c4);
          if (0 < _DAT_01cd06c4) {
            puVar8 = &DAT_01cd06c8;
            do {
              iVar3 = iVar3 + 1;
              FUN_005c04b0(iVar2,&DAT_005e30f3,puVar8);
              puVar8 = puVar8 + 4;
            } while (iVar3 <= _DAT_01cd06c4);
          }
          _DAT_01cd06c0 = 1;
        }
        if (7 < local_34) {
          FUN_005c1180(local_268,0xff,iVar2);
          FUN_005c04b0(iVar2,"%f,%f,%d,%d\n",local_1c,local_20,local_2c,local_24);
        }
        if (8 < local_34) {
          FUN_00555e30(0x01E82168,iVar2);
        }
        if (9 < local_34) {
          FUN_004bebc0(0x01CC8004,iVar2);
        }
        FUN_005c0d10(iVar2);
        if (param_3 == 0) {
          return;
        }
        FUN_0051bad0(0x01D2C900);
        if (*(int *)(param_1 + 0x9f8) == 0) goto LAB_004d6e32;
        param_2 = local_28;
        *(uint *)(param_1 + 0x9f8) = 0;
      }
    }
  } while( true );
}
