// Name: FUN_004bdfb0
// Address: 004bdfb0
// Address Range: [[004bdfb0, 004be8c5]]
// Convention: unknown
// Signature: void FUN_004bdfb0(int param_1,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bdfb0(int param_1,char *param_2,int param_3)

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
  char local_578 [260];
  byte local_474 [260];
  byte local_370 [256];
  byte local_270 [256];
  uint local_170 [50];
  byte local_a8 [4];
  byte local_a4 [48];
  byte local_74 [44];
  byte local_48 [8];
  int local_40;
  byte local_3c [4];
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  char *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  bVar14 = 0;
  FUN_005a54b0("save\\$$SAVE$$.TMP");
  *(uint *)(param_1 + 600) = 1;
  FUN_005a5128(&DAT_01d225c8,0,0,0,local_370);
  iVar2 = FUN_005a3260(local_370,&DAT_005c3662);
  if ((iVar2 == 0) || (iVar2 = FUN_005a3260(local_370,&DAT_005c3666), iVar2 == 0)) {
    pcVar9 = local_578;
    pcVar6 = &DAT_01d225c8;
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
    local_578[0] = '\0';
  }
  FUN_004ab7a0(0x01D1A05C);
  local_34 = _DAT_01c5b0e0;
  if (param_3 != 0) {
    _DAT_01c5b0e0 = _DAT_01549aa8;
  }
  local_24 = (char *)(param_1 + 0xa7c);
  local_20 = param_1 + 0x298;
  local_30 = param_1 + 0x27c;
  local_40 = param_1 + 0x274;
  local_2c = param_1 + 0x294;
  local_28 = param_1 + 0x270;
  local_1c = param_1 + 0x278;
  do {
    pcVar9 = param_2;
    pcVar6 = local_578;
    if (param_2 == (char *)0x0) {
      uVar5 = FUN_00508960("Select file to load",&DAT_005c3671,"*.sav",local_578,1);
      iVar2 = FUN_0047db70(0x01C5B0E4,uVar5);
      if (iVar2 == 0) {
LAB_004be478:
        _DAT_01c5b0e0 = local_34;
        FUN_004ab7a0(0x01D1A05C);
        *(uint *)(param_1 + 600) = 0;
        FUN_005a54b0("save\\$$SAVE$$.TMP");
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
    FUN_00494880(0x01C6E360);
    FUN_004dfc50(0x01D70AB8,9,0,0xffffffff);
    iVar2 = FUN_004659c0(&DAT_005c368d,local_578,&DAT_005c368a);
    local_18 = FUN_005a5d00(iVar2);
    uVar5 = 1;
    iVar3 = FUN_005a3260(&DAT_01d225c8,local_578);
    if (iVar3 != 0) {
      pcVar6 = &DAT_01d225c8;
      pcVar9 = local_578;
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
    FUN_005a3890(local_3c,4,1,iVar2);
    FUN_005a457c(iVar2,local_18,0);
    iVar4 = 4;
    bVar12 = false;
    iVar3 = 0;
    bVar13 = true;
    pbVar7 = local_3c;
    pbVar10 = &DAT_005fea0c;
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
LAB_004be22a:
      FUN_005a3a90(iVar2);
      FUN_005738c0(local_74);
      FUN_005747c0(local_48);
      FUN_005a28c0(local_474,"%s\\%s",&DAT_005c3696,local_578);
      iVar2 = FUN_00573f50(local_74,local_474,1);
      if (iVar2 == 0) {
        uVar5 = FUN_00508960("Can't open saved game file.");
        FUN_0047cf40(0x01C5B0E4,uVar5);
        FUN_00574850(local_48,0);
        FUN_00573a40(local_74,0);
        return;
      }
      FUN_00573cf0(local_74,4,0);
      iVar2 = FUN_005749d0(local_48,"save\\$$SAVE$$.TMP",&DAT_005c36bd);
      if (iVar2 == 0) {
        uVar5 = FUN_00508960("Can't create temp file to load saved game file.");
        FUN_0047cf40(0x01C5B0E4,uVar5);
        FUN_00574850(local_48,0);
        FUN_00573a40(local_74,0);
        return;
      }
      FUN_00441310(local_a8,0x8000,8);
      FUN_00441350(local_a8);
      FUN_00441390(local_a8,local_74,local_48);
      FUN_004413f0(local_a8,local_48);
      FUN_00573db0(local_74);
      FUN_005749a0(local_48);
      iVar2 = FUN_005a43ec("save\\$$SAVE$$.TMP",&DAT_005c36f0);
      if (iVar2 == 0) {
        _DAT_01d71de0 = "..\\core\\game.cpp";
        _DAT_01d71de4 = 0x1079;
        FUN_004e4330("Can't reopen %s","save\\$$SAVE$$.TMP");
      }
      FUN_00440bf0(local_a4,0);
      FUN_00440810(local_a8,1);
      FUN_00574850(local_48,0);
      FUN_00573a40(local_74,0);
    }
    else {
      iVar4 = 3;
      bVar12 = false;
      iVar3 = 0;
      bVar13 = true;
      pbVar7 = local_3c;
      pbVar10 = &DAT_005c3692;
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
      if (iVar3 == 0) goto LAB_004be22a;
    }
    FUN_005a3f00(local_270,0xff,iVar2);
    iVar3 = FUN_005a3f90(local_270,"CInventory",10);
    if (iVar3 == 0) {
      FUN_005a3a90(iVar2);
      FUN_0047ce80(0x01C5B0E4,"Can't load old save game file %s.  Sorry.",local_578);
    }
    else {
      FUN_005a3230(iVar2,&DAT_005c3749,&local_38);
      if (local_38 < 3) {
        FUN_005a3a90(iVar2);
        FUN_0047ce80(0x01C5B0E4,"Can't load old save game file %s.  Sorry.",local_578);
      }
      else {
        FUN_004f5cc0(0x01D81080,iVar2,uVar5);
        FUN_005a3f00(local_270,0xff,iVar2);
        FUN_005a3230(iVar2,"%d, %d\n",&DAT_01d5ba00,&DAT_01d5ba14);
        local_14 = 0;
        if (0 < _DAT_01d5ba00) {
          iVar3 = 0;
          do {
            pcVar9 = "(file corrupt)";
            puVar11 = local_170;
            for (iVar4 = 0x32; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar11 = *(uint *)pcVar9;
              pcVar9 = pcVar9 + ((uint)bVar14 * -2 + 1) * 4;
              puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
            }
            FUN_005a3230(iVar2,"%[^\n]\n",local_170);
            uVar5 = FUN_004f6e90(0x01D81080,local_170,_DAT_01d5ba70);
            iVar4 = FUN_0040c840(uVar5);
            *(int *)(iVar3 + 0x1d5ba04) = iVar4;
            if (iVar4 == 0) {
              FUN_005a3a90(iVar2);
              FUN_0047cf40(0x01C5B0E4,"Can't find hero %s.  Sorry.",local_170);
            }
            local_14 = local_14 + 1;
            iVar3 = iVar3 + 4;
          } while (local_14 < _DAT_01d5ba00);
        }
        iVar3 = FUN_004f7590(0x01D81080);
        if (iVar3 == 0) goto LAB_004be478;
        FUN_00495490(0x01C6E360,iVar2);
        FUN_00530ad0(0x01ED73E0,iVar2);
        if (local_38 < 4) {
          FUN_004ce560(0x01D22E44);
        }
        else if (local_38 == 4) {
          FUN_004cf010(0x01D22E44,iVar2);
        }
        if (local_38 < 7) {
          FUN_004a1480(0x01C73654);
        }
        else {
          FUN_004a4030(0x01C73654,iVar2);
        }
        if (local_38 < 6) {
          _DAT_01d226c8 = 0;
        }
        else {
          FUN_005a3f00(local_270,0xff,iVar2);
          iVar3 = 1;
          FUN_005a3230(iVar2,&DAT_005c37a2,&DAT_01d226cc);
          if (0 < _DAT_01d226cc) {
            puVar8 = &DAT_01d226d0;
            do {
              iVar3 = iVar3 + 1;
              FUN_005a3230(iVar2,&DAT_005c37a6,puVar8);
              puVar8 = puVar8 + 4;
            } while (iVar3 <= _DAT_01d226cc);
          }
          _DAT_01d226c8 = 1;
        }
        if (7 < local_38) {
          FUN_005a3f00(local_270,0xff,iVar2);
          FUN_005a3230(iVar2,"%f,%f,%f,%d,%d\n",local_1c,local_28,local_2c,local_40,local_30);
        }
        FUN_005a3230(iVar2,&DAT_005c37ba,local_20);
        if (8 < local_38) {
          FUN_0053b7f0(0x01ED78C8,iVar2);
        }
        if (9 < local_38) {
          FUN_004ac900(0x01D1A05C,iVar2);
        }
        FUN_0048c150(0x01C6E360,"JustLoadedGame");
        FUN_005a3a90(iVar2);
        if (param_3 == 0) {
          return;
        }
        FUN_004f72a0(0x01D81080);
        if (*(int *)(param_1 + 0xa78) == 0) goto LAB_004be478;
        param_2 = local_24;
        *(uint *)(param_1 + 0xa78) = 0;
      }
    }
  } while( true );
}
