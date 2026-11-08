// Name: FUN_00551d20
// Address: 00551d20
// Address Range: [[00551d20, 005522c4]]
// Convention: unknown
// Signature: char * FUN_00551d20(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00551d20(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  byte bVar9;
  char *pcVar10;
  char local_23c;
  byte local_23b [511];
  byte local_3c [44];
  
  bVar9 = 0;
  pcVar5 = (char *)0x2cebc24;
  iVar6 = 0;
  do {
    iVar2 = FUN_005a3260(pcVar5,param_1);
    if (iVar2 == 0) goto LAB_00551d58;
    iVar6 = iVar6 + 1;
    pcVar5 = pcVar5 + 0x1b0;
  } while (iVar6 < 0x40);
  pcVar5 = (char *)0x0;
LAB_00551d58:
  if (pcVar5 != (char *)0x0) {
    return pcVar5;
  }
  iVar6 = 0;
  do {
    _DAT_02cebc20 = _DAT_02cebc20 + 1;
    if (0x3f < _DAT_02cebc20) {
      _DAT_02cebc20 = 0;
    }
    iVar2 = _DAT_02cebc20 * 0x1b0;
    if ((((*(int *)(iVar2 + 0x2cebd74) == 0) && (*(int *)(&DAT_02cebd78 + iVar2) == 0)) &&
        (*(int *)(iVar2 + 0x2cebd80) == 0)) && (*(int *)(iVar2 + 0x2cebdd0) == 0)) {
      pcVar5 = (char *)(iVar2 + 0x2cebc24);
      bVar8 = pcVar5 == (char *)0x0;
      goto LAB_00551d88;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x40);
  pcVar5 = (char *)0x0;
  bVar8 = true;
LAB_00551d88:
  if (!bVar8) {
    FUN_00553520(pcVar5);
    if ((DAT_02cdafb0 & 1) == 0) {
      DAT_02cdafb0 = DAT_02cdafb0 | 1;
      FUN_00502750(0x2cd2980);
      FUN_005a3e13(&DAT_00604200);
    }
    iVar6 = FUN_004657f0("sound",param_1);
    pcVar10 = param_1;
    pcVar7 = pcVar5;
    if (0 < iVar6) {
      do {
        cVar1 = *pcVar10;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar7[1] = cVar1;
        pcVar10 = pcVar10 + 2;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      FUN_00465e50(param_1,0,0,0,&local_23c);
      if (local_23c == '.') {
        uVar4 = 0xffffffff;
        pcVar10 = &local_23c;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + (uint)bVar9 * -2 + 1;
        } while (cVar1 != '\0');
        FUN_005a54c0(&local_23c,local_23b,~uVar4 - 1);
      }
      iVar6 = FUN_005a3260(&local_23c,&DAT_005d2895);
      if (iVar6 == 0) {
        FUN_005738c0(local_3c);
        iVar6 = FUN_00573fc0(local_3c,"sound",param_1,1);
        if (iVar6 == 0) {
          _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
          _DAT_01d71de4 = 0x36d;
          FUN_004e4330("Can't open %s",param_1);
        }
        pcVar5[0x178] = '\0';
        pcVar5[0x179] = '\0';
        pcVar5[0x17a] = '\0';
        pcVar5[0x17b] = '\0';
        iVar6 = FUN_00551000(local_3c,pcVar5 + 0x178,pcVar5);
        if (iVar6 != 0) {
          FUN_00551620(pcVar5);
          pcVar5[0x150] = '\0';
          pcVar5[0x151] = '\0';
          pcVar5[0x152] = '\0';
          pcVar5[0x153] = '\0';
          pcVar5[0x154] = '\0';
          pcVar5[0x155] = '\0';
          pcVar5[0x156] = '\0';
          pcVar5[0x157] = '\0';
          pcVar5[0x158] = '\0';
          pcVar5[0x159] = '\0';
          pcVar5[0x15a] = '\0';
          pcVar5[0x15b] = '\0';
          pcVar5[0x15c] = '\0';
          pcVar5[0x15d] = '\0';
          pcVar5[0x15e] = '\0';
          pcVar5[0x15f] = '\0';
          pcVar5[0x160] = -1;
          pcVar5[0x161] = -1;
          pcVar5[0x162] = -1;
          pcVar5[0x163] = -1;
          uVar3 = *(uint *)(pcVar5 + 0x110);
          *(uint *)(pcVar5 + 0x164) = uVar3;
          *(uint *)(pcVar5 + 0x16c) = uVar3;
          *(uint *)(pcVar5 + 0x170) = uVar3;
          uVar3 = FUN_00555900(pcVar5,uVar3);
          *(uint *)(pcVar5 + 0x168) = uVar3;
          iVar6 = FUN_005533b0(pcVar5);
          if (iVar6 != 0) {
            FUN_00573cf0(local_3c,*(uint *)(pcVar5 + 0x178),0);
            iVar6 = FUN_00553660(pcVar5,0,*(uint *)(pcVar5 + 0x110));
            if (iVar6 == 0) {
              pcVar10 = "Failed to lock sample %s\n";
            }
            else {
              iVar2 = FUN_00555900(pcVar5,*(uint *)(pcVar5 + 0x110));
              iVar6 = FUN_00573c00(local_3c,iVar6,iVar2);
              if (iVar6 == iVar2) {
                FUN_00573db0(local_3c);
                if ((*(int *)(pcVar5 + 0x104) == 0x10) && (iVar6 = 0, 0 < *(int *)(pcVar5 + 0x110)))
                {
                  do {
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < *(int *)(pcVar5 + 0x110));
                }
                FUN_00553760(pcVar5);
                FUN_00573a40(local_3c,0);
                goto LAB_005520db;
              }
              pcVar10 = "Error reading file data for %s\n";
            }
            FUN_0055a560(pcVar10,param_1);
          }
        }
        FUN_00573a40(local_3c,0);
      }
      else {
        iVar6 = FUN_005a3260(&local_23c,&DAT_005d28fc);
        if (iVar6 != 0) {
          _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
          _DAT_01d71de4 = 0x40f;
          FUN_004e4330("Unknown sample file format extension: %s",param_1);
LAB_005520db:
          FUN_005a28c0(&local_23c,"SOUND: Loaded sample %s\n",param_1);
          FUN_00581c70(&local_23c);
          return pcVar5;
        }
        FUN_005027b0(0x2cd2980,param_1);
        pcVar5[0x104] = '\x10';
        pcVar5[0x105] = '\0';
        pcVar5[0x106] = '\0';
        pcVar5[0x107] = '\0';
        *(uint *)(pcVar5 + 0x108) = _DAT_02cd2a84;
        uVar3 = _DAT_02cd2a80;
        pcVar5[0x110] = -1;
        pcVar5[0x111] = -1;
        pcVar5[0x112] = -1;
        pcVar5[0x113] = -1;
        *(uint *)(pcVar5 + 0x10c) = uVar3;
        FUN_00551620(pcVar5);
        if (*(int *)(pcVar5 + 0x110) < 0) {
          _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
          _DAT_01d71de4 = 0x3df;
          FUN_004e4330("Don't know length of sample %s",param_1);
        }
        pcVar5[0x150] = '\0';
        pcVar5[0x151] = '\0';
        pcVar5[0x152] = '\0';
        pcVar5[0x153] = '\0';
        pcVar5[0x154] = '\0';
        pcVar5[0x155] = '\0';
        pcVar5[0x156] = '\0';
        pcVar5[0x157] = '\0';
        pcVar5[0x158] = '\0';
        pcVar5[0x159] = '\0';
        pcVar5[0x15a] = '\0';
        pcVar5[0x15b] = '\0';
        pcVar5[0x15c] = '\0';
        pcVar5[0x15d] = '\0';
        pcVar5[0x15e] = '\0';
        pcVar5[0x15f] = '\0';
        pcVar5[0x160] = -1;
        pcVar5[0x161] = -1;
        pcVar5[0x162] = -1;
        pcVar5[0x163] = -1;
        uVar3 = *(uint *)(pcVar5 + 0x110);
        *(uint *)(pcVar5 + 0x164) = uVar3;
        *(uint *)(pcVar5 + 0x16c) = uVar3;
        *(uint *)(pcVar5 + 0x170) = uVar3;
        uVar3 = FUN_00555900(pcVar5,uVar3);
        *(uint *)(pcVar5 + 0x168) = uVar3;
        iVar6 = FUN_005533b0(pcVar5);
        if (iVar6 != 0) {
          iVar6 = FUN_00553660(pcVar5,0,*(uint *)(pcVar5 + 0x110));
          if (iVar6 == 0) {
            FUN_0055a560("Failed to lock sample %s\n",param_1);
          }
          else {
            iVar6 = FUN_00502a80(0x2cd2980,iVar6,*(uint *)(pcVar5 + 0x110));
            if (iVar6 == *(int *)(pcVar5 + 0x110)) {
              FUN_00553760(pcVar5);
              goto LAB_005520db;
            }
            FUN_0055a560("Error decoding file data from %s\n",param_1);
          }
        }
      }
    }
    FUN_00502a10(0x2cd2980);
    FUN_00553520(pcVar5);
    pcVar5 = (char *)0x0;
  }
  return pcVar5;
}
