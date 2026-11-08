// Name: FUN_004bbf70
// Address: 004bbf70
// Address Range: [[004bbf70, 004bc830]]
// Convention: unknown
// Signature: void FUN_004bbf70(int param_1,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bbf70(int param_1,char *param_2,int param_3)

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
  char local_56c [260];
  byte local_468 [260];
  byte local_364 [256];
  byte local_264 [256];
  uint local_164 [50];
  byte local_9c [4];
  byte local_98 [48];
  byte local_68 [40];
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
  FUN_005ba1e0("save\\$$SAVE$$.TMP");
  *(uint *)(param_1 + 0x250) = 1;
  FUN_005b9e58(&DAT_01cb7b50,0,0,0,local_364);
  iVar2 = FUN_005b8130(local_364,&DAT_005d852a);
  if ((iVar2 == 0) || (iVar2 = FUN_005b8130(local_364,&DAT_005d852e), iVar2 == 0)) {
    pcVar9 = local_56c;
    pcVar6 = &DAT_01cb7b50;
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
    local_56c[0] = '\0';
  }
  FUN_004a50b0(0x01CAF56C);
  local_30 = _DAT_01c25590;
  if (param_3 != 0) {
    _DAT_01c25590 = _DAT_01511cc0;
  }
  local_28 = (char *)(param_1 + 0x9ec);
  local_24 = param_1 + 0x274;
  local_2c = param_1 + 0x26c;
  local_20 = param_1 + 0x268;
  local_1c = param_1 + 0x270;
  do {
    pcVar9 = param_2;
    pcVar6 = local_56c;
    if (param_2 == (char *)0x0) {
      uVar5 = FUN_0050fe80("Select file to load",&DAT_005d8539,"*.noc",local_56c,1);
      iVar2 = FUN_0047c970(0x01C25594,uVar5);
      if (iVar2 == 0) {
LAB_004bc415:
        _DAT_01c25590 = local_30;
        FUN_004a50b0(0x01CAF56C);
        *(uint *)(param_1 + 0x250) = 0;
        FUN_005ba1e0("save\\$$SAVE$$.TMP");
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
    FUN_004910b0(0x01C38BC0);
    FUN_0055b1f0();
    FUN_004e1480(0x01D03000,9,0,0xffffffff);
    iVar2 = FUN_00460c70(&DAT_005d8555,local_56c,&DAT_005d8552);
    local_18 = FUN_005baab0(iVar2);
    uVar5 = 1;
    iVar3 = FUN_005b8130(&DAT_01cb7b50,local_56c);
    if (iVar3 != 0) {
      pcVar6 = &DAT_01cb7b50;
      pcVar9 = local_56c;
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
    FUN_005b87c0(local_38,4,1,iVar2);
    FUN_005b929c(iVar2,local_18,0);
    iVar4 = 4;
    bVar12 = false;
    iVar3 = 0;
    bVar13 = true;
    pbVar7 = local_38;
    pbVar10 = &DAT_006164dc;
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
LAB_004bc1c9:
      FUN_005b89c0(iVar2);
      FUN_0057cd50(local_68);
      FUN_0057db80(local_40);
      FUN_005b7790(local_468,"%s\\%s",&DAT_005d855e,local_56c);
      iVar2 = FUN_0057d320(local_68,local_468);
      if (iVar2 == 0) {
        uVar5 = FUN_0050fe80("Can't open saved game file.");
        FUN_0047be40(0x01C25594,uVar5);
        FUN_0057dc10(local_40,0);
        FUN_0057cec0(local_68,0);
        return;
      }
      FUN_0057d0c0(local_68,4,0);
      iVar2 = FUN_0057dd90(local_40,"save\\$$SAVE$$.TMP",&DAT_005d8585);
      if (iVar2 == 0) {
        uVar5 = FUN_0050fe80("Can't create temp file to load saved game file.");
        FUN_0047be40(0x01C25594,uVar5);
        FUN_0057dc10(local_40,0);
        FUN_0057cec0(local_68,0);
        return;
      }
      FUN_00434990(local_9c,0x8000,8);
      FUN_004349d0(local_9c);
      FUN_00434a10(local_9c,local_68,local_40);
      FUN_00434a70(local_9c,local_40);
      FUN_0057d180(local_68);
      FUN_0057dd60(local_40);
      iVar2 = FUN_005b910c("save\\$$SAVE$$.TMP",&DAT_005d85b8);
      if (iVar2 == 0) {
        _DAT_01d046a0 = "..\\core\\game.cpp";
        _DAT_01d046a4 = 0x106f;
        FUN_004e4500("Can't reopen %s","save\\$$SAVE$$.TMP");
      }
      FUN_00434270(local_98,0);
      FUN_00433e90(local_9c,1);
      FUN_0057dc10(local_40,0);
      FUN_0057cec0(local_68,0);
    }
    else {
      iVar4 = 3;
      bVar12 = false;
      iVar3 = 0;
      bVar13 = true;
      pbVar7 = local_38;
      pbVar10 = &DAT_005d855a;
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
      if (iVar3 == 0) goto LAB_004bc1c9;
    }
    FUN_005b9600(local_264,0xff,iVar2);
    iVar3 = FUN_005b8da0(local_264,"CInventory",10);
    if (iVar3 == 0) {
      FUN_005b89c0(iVar2);
      FUN_0047bda0(0x01C25594,"Can't load old save game file %s.  Sorry.",local_56c);
    }
    else {
      FUN_005b8100(iVar2,&DAT_005d8611,&local_34);
      if (local_34 < 3) {
        FUN_005b89c0(iVar2);
        FUN_0047bda0(0x01C25594,"Can't load old save game file %s.  Sorry.",local_56c);
      }
      else {
        FUN_004fb590(0x01D182F0,iVar2,uVar5);
        FUN_005b9600(local_264,0xff,iVar2);
        FUN_005b8100(iVar2,"%d, %d\n",&DAT_01cedee0,&DAT_01cedef4);
        local_14 = 0;
        if (0 < _DAT_01cedee0) {
          iVar3 = 0;
          do {
            pcVar9 = "(file corrupt)";
            puVar11 = local_164;
            for (iVar4 = 0x32; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar11 = *(uint *)pcVar9;
              pcVar9 = pcVar9 + ((uint)bVar14 * -2 + 1) * 4;
              puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
            }
            FUN_005b8100(iVar2,"%[^\n]\n",local_164);
            uVar5 = FUN_004fc740(0x01D182F0,local_164,_DAT_01cedf50);
            iVar4 = FUN_0040c8f0(uVar5);
            *(int *)(iVar3 + 0x1cedee4) = iVar4;
            if (iVar4 == 0) {
              FUN_005b89c0(iVar2);
              FUN_0047be40(0x01C25594,"Can't find hero %s.  Sorry.",local_164);
            }
            local_14 = local_14 + 1;
            iVar3 = iVar3 + 4;
          } while (local_14 < _DAT_01cedee0);
        }
        iVar3 = FUN_004fce00(0x01D182F0);
        if (iVar3 == 0) goto LAB_004bc415;
        FUN_00491ca0(0x01C38BC0,iVar2);
        FUN_0052a0d0(0x01E65CD0,iVar2);
        if (local_34 < 4) {
          FUN_004c93f0(0x01CB8284);
        }
        else if (local_34 == 4) {
          FUN_004c9e70(0x01CB8284,iVar2);
        }
        if (local_34 < 7) {
          FUN_0049c190(0x01C3DEB4);
        }
        else {
          FUN_0049ea80(0x01C3DEB4,iVar2);
        }
        if (local_34 < 6) {
          _DAT_01cb7c50 = 0;
        }
        else {
          FUN_005b9600(local_264,0xff,iVar2);
          iVar3 = 1;
          FUN_005b8100(iVar2,&DAT_005d866a,&DAT_01cb7c54);
          if (0 < _DAT_01cb7c54) {
            puVar8 = &DAT_01cb7c58;
            do {
              iVar3 = iVar3 + 1;
              FUN_005b8100(iVar2,&DAT_005d866e,puVar8);
              puVar8 = puVar8 + 4;
            } while (iVar3 <= _DAT_01cb7c54);
          }
          _DAT_01cb7c50 = 1;
        }
        if (7 < local_34) {
          FUN_005b9600(local_264,0xff,iVar2);
          FUN_005b8100(iVar2,"%f,%f,%d,%d\n",local_1c,local_20,local_2c,local_24);
        }
        if (8 < local_34) {
          FUN_00534a90(0x01E661B8,iVar2);
        }
        if (9 < local_34) {
          FUN_004a61b0(0x01CAF56C,iVar2);
        }
        FUN_005b89c0(iVar2);
        if (param_3 == 0) {
          return;
        }
        FUN_004fcb00(0x01D182F0);
        if (*(int *)(param_1 + 0x9e8) == 0) goto LAB_004bc415;
        param_2 = local_28;
        *(uint *)(param_1 + 0x9e8) = 0;
      }
    }
  } while( true );
}
