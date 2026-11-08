// Name: FUN_0054c1c0
// Address: 0054c1c0
// Address Range: [[0054c1c0, 0054c764]]
// Convention: unknown
// Signature: char * FUN_0054c1c0(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_0054c1c0(char *param_1)

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
  char local_238;
  byte local_237 [511];
  byte local_38 [40];
  
  bVar9 = 0;
  pcVar5 = (char *)0x2641924;
  iVar6 = 0;
  do {
    iVar2 = FUN_005b8130(pcVar5,param_1);
    if (iVar2 == 0) goto LAB_0054c1f8;
    iVar6 = iVar6 + 1;
    pcVar5 = pcVar5 + 0x1ac;
  } while (iVar6 < 0x40);
  pcVar5 = (char *)0x0;
LAB_0054c1f8:
  if (pcVar5 != (char *)0x0) {
    return pcVar5;
  }
  iVar6 = 0;
  do {
    _DAT_02641920 = _DAT_02641920 + 1;
    if (0x3f < _DAT_02641920) {
      _DAT_02641920 = 0;
    }
    iVar2 = _DAT_02641920 * 0x1ac;
    if ((((*(int *)(iVar2 + 0x2641a74) == 0) && (*(int *)(&DAT_02641a78 + iVar2) == 0)) &&
        (*(int *)(iVar2 + 0x2641a80) == 0)) && (*(int *)(iVar2 + 0x2641acc) == 0)) {
      pcVar5 = (char *)(iVar2 + 0x2641924);
      bVar8 = pcVar5 == (char *)0x0;
      goto LAB_0054c228;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x40);
  pcVar5 = (char *)0x0;
  bVar8 = true;
LAB_0054c228:
  if (!bVar8) {
    FUN_0054d9b0(pcVar5);
    if ((DAT_02630cb0 & 1) == 0) {
      DAT_02630cb0 = DAT_02630cb0 | 1;
      FUN_00509c70(0x2628680);
      FUN_005b8d8c(&DAT_0061bc70);
    }
    iVar6 = FUN_00460aa0("sound",param_1);
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
      FUN_00461070(param_1,0,0,0,&local_238);
      if (local_238 == '.') {
        uVar4 = 0xffffffff;
        pcVar10 = &local_238;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + (uint)bVar9 * -2 + 1;
        } while (cVar1 != '\0');
        FUN_005ba1f0(&local_238,local_237,~uVar4 - 1);
      }
      iVar6 = FUN_005b8130(&local_238,&DAT_005e7db1);
      if (iVar6 == 0) {
        FUN_0057cd50(local_38);
        iVar6 = FUN_0057d390(local_38,"sound",param_1);
        if (iVar6 == 0) {
          _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
          _DAT_01d046a4 = 0x36b;
          FUN_004e4500("Can't open %s",param_1);
        }
        pcVar5[0x178] = '\0';
        pcVar5[0x179] = '\0';
        pcVar5[0x17a] = '\0';
        pcVar5[0x17b] = '\0';
        iVar6 = FUN_0054b4a0(local_38,pcVar5 + 0x178,pcVar5);
        if (iVar6 != 0) {
          FUN_0054bac0(pcVar5);
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
          uVar3 = FUN_0054fd90(pcVar5,uVar3);
          *(uint *)(pcVar5 + 0x168) = uVar3;
          iVar6 = FUN_0054d840(pcVar5);
          if (iVar6 != 0) {
            FUN_0057d0c0(local_38,*(uint *)(pcVar5 + 0x178),0);
            iVar6 = FUN_0054daf0(pcVar5,0,*(uint *)(pcVar5 + 0x110));
            if (iVar6 == 0) {
              pcVar10 = "Failed to lock sample %s\n";
            }
            else {
              iVar2 = FUN_0054fd90(pcVar5,*(uint *)(pcVar5 + 0x110));
              iVar6 = FUN_0057cfe0(local_38,iVar6,iVar2);
              if (iVar6 == iVar2) {
                FUN_0057d180(local_38);
                if ((*(int *)(pcVar5 + 0x104) == 0x10) && (iVar6 = 0, 0 < *(int *)(pcVar5 + 0x110)))
                {
                  do {
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < *(int *)(pcVar5 + 0x110));
                }
                FUN_0054dbf0(pcVar5);
                FUN_0057cec0(local_38,0);
                goto LAB_0054c57b;
              }
              pcVar10 = "Error reading file data for %s\n";
            }
            FUN_005549c0(pcVar10,param_1);
          }
        }
        FUN_0057cec0(local_38,0);
      }
      else {
        iVar6 = FUN_005b8130(&local_238,&DAT_005e7e18);
        if (iVar6 != 0) {
          _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
          _DAT_01d046a4 = 0x40d;
          FUN_004e4500("Unknown sample file format extension: %s",param_1);
LAB_0054c57b:
          FUN_005b7790(&local_238,"SOUND: Loaded sample %s\n",param_1);
          FUN_0058ffc0(&local_238);
          return pcVar5;
        }
        FUN_00509cd0(0x2628680,param_1);
        pcVar5[0x104] = '\x10';
        pcVar5[0x105] = '\0';
        pcVar5[0x106] = '\0';
        pcVar5[0x107] = '\0';
        *(uint *)(pcVar5 + 0x108) = _DAT_02628784;
        uVar3 = _DAT_02628780;
        pcVar5[0x110] = -1;
        pcVar5[0x111] = -1;
        pcVar5[0x112] = -1;
        pcVar5[0x113] = -1;
        *(uint *)(pcVar5 + 0x10c) = uVar3;
        FUN_0054bac0(pcVar5);
        if (*(int *)(pcVar5 + 0x110) < 0) {
          _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
          _DAT_01d046a4 = 0x3dd;
          FUN_004e4500("Don't know length of sample %s",param_1);
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
        uVar3 = FUN_0054fd90(pcVar5,uVar3);
        *(uint *)(pcVar5 + 0x168) = uVar3;
        iVar6 = FUN_0054d840(pcVar5);
        if (iVar6 != 0) {
          iVar6 = FUN_0054daf0(pcVar5,0,*(uint *)(pcVar5 + 0x110));
          if (iVar6 == 0) {
            FUN_005549c0("Failed to lock sample %s\n",param_1);
          }
          else {
            iVar6 = FUN_00509fa0(0x2628680,iVar6,*(uint *)(pcVar5 + 0x110));
            if (iVar6 == *(int *)(pcVar5 + 0x110)) {
              FUN_0054dbf0(pcVar5);
              goto LAB_0054c57b;
            }
            FUN_005549c0("Error decoding file data from %s\n",param_1);
          }
        }
      }
    }
    FUN_00509f30(0x2628680);
    FUN_0054d9b0(pcVar5);
    pcVar5 = (char *)0x0;
  }
  return pcVar5;
}
