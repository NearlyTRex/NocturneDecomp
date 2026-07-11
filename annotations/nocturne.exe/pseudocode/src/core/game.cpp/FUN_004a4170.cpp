// Name: FUN_004a4170
// Address: 004a4170
// Address Range: [[004a4170, 004a4ad3]]
// Convention: unknown
// Signature: void FUN_004a4170(int param_1,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a4170(int param_1,char *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *puVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  uint *puVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  byte local_638 [260];
  char local_534 [260];
  byte local_430 [256];
  byte local_330 [256];
  uint local_230 [50];
  byte local_168 [68];
  byte local_124 [32];
  int local_104;
  byte local_e8 [68];
  byte local_a4 [28];
  int local_88;
  byte local_6c [4];
  byte local_68 [44];
  byte local_3c [4];
  int local_38;
  int local_34;
  uint local_30;
  char *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  bVar15 = 0;
  FUN_005657c0("save\\$$SAVE$$.TMP");
  *(uint *)(param_1 + 0x234) = 1;
  FUN_00566498(&DAT_01c78598,0,0,0,local_430);
  iVar3 = FUN_00564520(local_430,&DAT_00583c33);
  if ((iVar3 == 0) || (iVar3 = FUN_00564520(local_430,&DAT_00583c37), iVar3 == 0)) {
    pcVar8 = &DAT_01c78598;
    pcVar10 = local_534;
    do {
      cVar1 = *pcVar8;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
  }
  else {
    local_534[0] = '\0';
  }
  local_30 = _DAT_01bcd070;
  if (param_3 != 0) {
    _DAT_01bcd070 = _DAT_014b9900;
  }
  local_2c = (char *)(param_1 + 0x9c8);
  local_28 = param_1 + 0x254;
  local_20 = param_1 + 0x24c;
  local_24 = param_1 + 0x248;
  local_1c = param_1 + 0x250;
  do {
    if (param_2 == (char *)0x0) {
      uVar6 = FUN_004ee370("Select file to load",&DAT_00583c42,"*.noc",local_534,1
                          );
      iVar3 = FUN_00470550(0x01BCD074,uVar6);
      if (iVar3 == 0) {
LAB_004a4674:
        _DAT_01bcd070 = local_30;
        *(uint *)(param_1 + 0x234) = 0;
        FUN_005657c0("save\\$$SAVE$$.TMP");
        return;
      }
    }
    else {
      pcVar10 = local_534;
      pcVar8 = param_2;
      do {
        cVar1 = *pcVar8;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    FUN_00480410(0x01C03A10);
    FUN_004c5640(0x01CC3160,9,0,0xffffffff);
    iVar3 = FUN_00456a60(&DAT_00583c5e,local_534,&DAT_00583c5b);
    local_18 = FUN_00566e70(iVar3);
    uVar6 = 1;
    iVar4 = FUN_00564520(&DAT_01c78598,local_534);
    if (iVar4 != 0) {
      pcVar10 = local_534;
      pcVar8 = &DAT_01c78598;
      do {
        cVar1 = *pcVar10;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      uVar6 = 0;
    }
    if (param_3 == 0) {
      uVar6 = 1;
    }
    FUN_005636d0(local_3c,4,1,iVar3);
    FUN_0056582c(iVar3,local_18,0);
    iVar5 = 4;
    bVar13 = false;
    iVar4 = 0;
    bVar14 = true;
    pbVar9 = local_3c;
    pbVar11 = &DAT_005b9384;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar13 = *pbVar9 < *pbVar11;
      bVar14 = *pbVar9 == *pbVar11;
      pbVar9 = pbVar9 + (uint)bVar15 * -2 + 1;
      pbVar11 = pbVar11 + (uint)bVar15 * -2 + 1;
    } while (bVar14);
    if (!bVar14) {
      iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
    }
    if (iVar4 == 0) {
LAB_004a43cc:
      FUN_00563380(iVar3);
      local_34 = FUN_004568c0(&DAT_00583c67,local_534);
      local_34 = local_34 + -4;
      FUN_005652fe(local_168,0);
      FUN_0056536a(local_e8,0);
      FUN_00563c90(local_638,"%s\\%s",&DAT_00583c6c,local_534);
      uVar2 = 0x000001A4;
      FUN_00565eb5(local_168,local_638,0x121,0x000001A4);
      FUN_00565f14(local_124,4);
      if (local_104 != 0) {
        uVar6 = FUN_004ee370("Can't open saved game file.");
        FUN_0046fcd0(0x01BCD074,uVar6);
        FUN_005651ca(local_e8,0);
        FUN_00565264(local_168,0);
        return;
      }
      FUN_00565eb5(local_e8,"save\\$$SAVE$$.TMP",0x112,uVar2);
      if (local_88 != 0) {
        uVar6 = FUN_004ee370("Can't create temp file to load saved game file.");
        FUN_0046fcd0(0x01BCD074,uVar6);
        FUN_005651ca(local_e8,0);
        FUN_00565264(local_168,0);
        return;
      }
      FUN_004399f0(local_6c,0x8000,8);
      FUN_00439a30(local_6c);
      FUN_00439a70(local_6c,local_124,&local_34,local_a4);
      FUN_00439af0(local_6c,local_a4);
      FUN_00565e59(local_168);
      FUN_00565e59(local_e8);
      if (local_34 != 0) {
        uVar6 = FUN_004ee370("Error writing temp file to load saved game.");
        FUN_0046fcd0(0x01BCD074,uVar6);
        FUN_00439370(local_68,0);
        FUN_00438f30(local_6c,1);
        FUN_005651ca(local_e8,0);
        FUN_00565264(local_168,0);
        return;
      }
      iVar3 = FUN_0056568c("save\\$$SAVE$$.TMP",&DAT_00583cef);
      if (iVar3 == 0) {
        _DAT_01cc4800 = "..\\core\\game.cpp";
        _DAT_01cc4804 = 0xe2f;
        FUN_004c8440("Can't reopen %s","save\\$$SAVE$$.TMP");
      }
      FUN_00439370(local_68,0);
      FUN_00438f30(local_6c,1);
      FUN_005651ca(local_e8,0);
      FUN_00565264(local_168,0);
    }
    else {
      iVar5 = 3;
      bVar13 = false;
      iVar4 = 0;
      bVar14 = true;
      pbVar9 = local_3c;
      pbVar11 = &DAT_00583c63;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar13 = *pbVar9 < *pbVar11;
        bVar14 = *pbVar9 == *pbVar11;
        pbVar9 = pbVar9 + (uint)bVar15 * -2 + 1;
        pbVar11 = pbVar11 + (uint)bVar15 * -2 + 1;
      } while (bVar14);
      if (!bVar14) {
        iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      }
      if (iVar4 == 0) goto LAB_004a43cc;
    }
    FUN_00564b20(local_330,0xff,iVar3);
    iVar4 = FUN_00564bc0(local_330,"CInventory",10);
    if (iVar4 == 0) {
      FUN_00563380(iVar3);
      FUN_0046fe60(0x01BCD074,"Can't load old save game file %s.  Sorry.",local_534);
    }
    else {
      FUN_00563350(iVar3,&DAT_00583d48,&local_38);
      if (local_38 < 3) {
        FUN_00563380(iVar3);
        FUN_0046fe60(0x01BCD074,"Can't load old save game file %s.  Sorry.",local_534);
      }
      else {
        FUN_004d7fe0(0x01CC9450,iVar3,uVar6);
        FUN_00564b20(local_330,0xff,iVar3);
        iVar4 = 0;
        FUN_00563350(iVar3,"%d, %d\n",&DAT_01cae0d4,&DAT_01cae0e8);
        local_14 = 0;
        if (0 < _DAT_01cae0d4) {
          do {
            pcVar10 = "(file corrupt)";
            puVar12 = local_230;
            for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar12 = *(uint *)pcVar10;
              pcVar10 = pcVar10 + ((uint)bVar15 * -2 + 1) * 4;
              puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
            }
            FUN_00563350(iVar3,"%[^\n]\n",local_230);
            uVar6 = FUN_004d90a0(0x01CC9450,local_230,_DAT_01cae124);
            iVar5 = FUN_0040d890(uVar6);
            *(int *)(iVar4 + 0x1cae0d8) = iVar5;
            if (iVar5 == 0) {
              FUN_00563380(iVar3);
              FUN_0046fcd0(0x01BCD074,"Can't find hero %s.  Sorry.",local_230);
            }
            local_14 = local_14 + 1;
            iVar4 = iVar4 + 4;
          } while (local_14 < _DAT_01cae0d4);
        }
        iVar4 = FUN_004d9780(0x01CC9450);
        if (iVar4 == 0) goto LAB_004a4674;
        FUN_00480f70(0x01C03A10,iVar3);
        FUN_005052c0(0x01E56DA0,iVar3);
        if (local_38 < 4) {
          FUN_004afdb0(0x01C78C7C);
        }
        else if (local_38 == 4) {
          FUN_004b0820(0x01C78C7C,iVar3);
        }
        if (local_38 < 7) {
          FUN_0048a150(0x01C08D04);
        }
        else {
          FUN_0048c7d0(0x01C08D04,iVar3);
        }
        if (local_38 < 6) {
          _DAT_01c78698 = 0;
        }
        else {
          FUN_00564b20(local_330,0xff,iVar3);
          iVar4 = 1;
          FUN_00563350(iVar3,&DAT_00583da1,&DAT_01c7869c);
          if (0 < _DAT_01c7869c) {
            puVar7 = &DAT_01c786a0;
            do {
              iVar4 = iVar4 + 1;
              FUN_00563350(iVar3,&DAT_00583da5,puVar7);
              puVar7 = puVar7 + 4;
            } while (iVar4 <= _DAT_01c7869c);
          }
          _DAT_01c78698 = 1;
        }
        if (7 < local_38) {
          FUN_00564b20(local_330,0xff,iVar3);
          FUN_00563350(iVar3,"%f,%f,%d,%d\n",local_1c,local_24,local_20,local_28);
        }
        if (8 < local_38) {
          FUN_0050e920(0x01E57284,iVar3);
        }
        FUN_00563380(iVar3);
        if (param_3 == 0) {
          return;
        }
        FUN_004d9440(0x01CC9450);
        if (*(int *)(param_1 + 0x9c4) == 0) goto LAB_004a4674;
        param_2 = local_2c;
        *(uint *)(param_1 + 0x9c4) = 0;
      }
    }
  } while( true );
}
