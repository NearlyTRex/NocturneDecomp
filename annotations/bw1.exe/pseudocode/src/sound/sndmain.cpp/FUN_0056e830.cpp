// Name: FUN_0056e830
// Address: 0056e830
// Address Range: [[0056e830, 0056edd4]]
// Convention: unknown
// Signature: char * FUN_0056e830(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_0056e830(char *param_1)

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
  pcVar5 = (char *)0x2c78ff4;
  iVar6 = 0;
  do {
    iVar2 = FUN_005c04e0(pcVar5,param_1);
    if (iVar2 == 0) goto LAB_0056e868;
    iVar6 = iVar6 + 1;
    pcVar5 = pcVar5 + 0x1b0;
  } while (iVar6 < 0x40);
  pcVar5 = (char *)0x0;
LAB_0056e868:
  if (pcVar5 != (char *)0x0) {
    return pcVar5;
  }
  iVar6 = 0;
  do {
    _DAT_02c78ff0 = _DAT_02c78ff0 + 1;
    if (0x3f < _DAT_02c78ff0) {
      _DAT_02c78ff0 = 0;
    }
    iVar2 = _DAT_02c78ff0 * 0x1b0;
    if ((((*(int *)(iVar2 + 0x2c79144) == 0) && (*(int *)(&DAT_02c79148 + iVar2) == 0)) &&
        (*(int *)(iVar2 + 0x2c79150) == 0)) && (*(int *)(iVar2 + 0x2c791a0) == 0)) {
      pcVar5 = (char *)(iVar2 + 0x2c78ff4);
      bVar8 = pcVar5 == (char *)0x0;
      goto LAB_0056e898;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x40);
  pcVar5 = (char *)0x0;
  bVar8 = true;
LAB_0056e898:
  if (!bVar8) {
    FUN_00570020(pcVar5);
    if ((DAT_02c68380 & 1) == 0) {
      DAT_02c68380 = DAT_02c68380 | 1;
      FUN_0052ae40(0x2c5fd50);
      FUN_005c1093(&DAT_006232c0);
    }
    iVar6 = FUN_00478fb0("sound",param_1);
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
      FUN_00479580(param_1,0,0,0,&local_23c);
      if (local_23c == '.') {
        uVar4 = 0xffffffff;
        pcVar10 = &local_23c;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + (uint)bVar9 * -2 + 1;
        } while (cVar1 != '\0');
        FUN_005c25d0(&local_23c,local_23b,~uVar4 - 1);
      }
      iVar6 = FUN_005c04e0(&local_23c,&DAT_005f2fab);
      if (iVar6 == 0) {
        FUN_005a08d0(local_3c);
        iVar6 = FUN_005a0fd0(local_3c,"sound",param_1,1);
        if (iVar6 == 0) {
          _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
          _DAT_01d1d404 = 0x36b;
          FUN_005030e0("Can't open %s",param_1);
        }
        pcVar5[0x178] = '\0';
        pcVar5[0x179] = '\0';
        pcVar5[0x17a] = '\0';
        pcVar5[0x17b] = '\0';
        iVar6 = FUN_0056db10(local_3c,pcVar5 + 0x178,pcVar5);
        if (iVar6 != 0) {
          FUN_0056e130(pcVar5);
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
          uVar3 = FUN_00572400(pcVar5,uVar3);
          *(uint *)(pcVar5 + 0x168) = uVar3;
          iVar6 = FUN_0056feb0(pcVar5);
          if (iVar6 != 0) {
            FUN_005a0d00(local_3c,*(uint *)(pcVar5 + 0x178),0);
            iVar6 = FUN_00570160(pcVar5,0,*(uint *)(pcVar5 + 0x110));
            if (iVar6 == 0) {
              pcVar10 = "Failed to lock sample %s\n";
            }
            else {
              iVar2 = FUN_00572400(pcVar5,*(uint *)(pcVar5 + 0x110));
              iVar6 = FUN_005a0c10(local_3c,iVar6,iVar2);
              if (iVar6 == iVar2) {
                FUN_005a0dc0(local_3c);
                if ((*(int *)(pcVar5 + 0x104) == 0x10) && (iVar6 = 0, 0 < *(int *)(pcVar5 + 0x110)))
                {
                  do {
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < *(int *)(pcVar5 + 0x110));
                }
                FUN_00570260(pcVar5);
                FUN_005a0a50(local_3c,0);
                goto LAB_0056ebeb;
              }
              pcVar10 = "Error reading file data for %s\n";
            }
            FUN_005773f0(pcVar10,param_1);
          }
        }
        FUN_005a0a50(local_3c,0);
      }
      else {
        iVar6 = FUN_005c04e0(&local_23c,&DAT_005f3012);
        if (iVar6 != 0) {
          _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
          _DAT_01d1d404 = 0x40d;
          FUN_005030e0("Unknown sample file format extension: %s",param_1);
LAB_0056ebeb:
          FUN_005bfb40(&local_23c,"SOUND: Loaded sample %s\n",param_1);
          FUN_005b3a90(&local_23c);
          return pcVar5;
        }
        FUN_0052aea0(0x2c5fd50,param_1);
        pcVar5[0x104] = '\x10';
        pcVar5[0x105] = '\0';
        pcVar5[0x106] = '\0';
        pcVar5[0x107] = '\0';
        *(uint *)(pcVar5 + 0x108) = _DAT_02c5fe54;
        uVar3 = _DAT_02c5fe50;
        pcVar5[0x110] = -1;
        pcVar5[0x111] = -1;
        pcVar5[0x112] = -1;
        pcVar5[0x113] = -1;
        *(uint *)(pcVar5 + 0x10c) = uVar3;
        FUN_0056e130(pcVar5);
        if (*(int *)(pcVar5 + 0x110) < 0) {
          _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
          _DAT_01d1d404 = 0x3dd;
          FUN_005030e0("Don't know length of sample %s",param_1);
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
        uVar3 = FUN_00572400(pcVar5,uVar3);
        *(uint *)(pcVar5 + 0x168) = uVar3;
        iVar6 = FUN_0056feb0(pcVar5);
        if (iVar6 != 0) {
          iVar6 = FUN_00570160(pcVar5,0,*(uint *)(pcVar5 + 0x110));
          if (iVar6 == 0) {
            FUN_005773f0("Failed to lock sample %s\n",param_1);
          }
          else {
            iVar6 = FUN_0052b170(0x2c5fd50,iVar6,*(uint *)(pcVar5 + 0x110));
            if (iVar6 == *(int *)(pcVar5 + 0x110)) {
              FUN_00570260(pcVar5);
              goto LAB_0056ebeb;
            }
            FUN_005773f0("Error decoding file data from %s\n",param_1);
          }
        }
      }
    }
    FUN_0052b100(0x2c5fd50);
    FUN_00570020(pcVar5);
    pcVar5 = (char *)0x0;
  }
  return pcVar5;
}
