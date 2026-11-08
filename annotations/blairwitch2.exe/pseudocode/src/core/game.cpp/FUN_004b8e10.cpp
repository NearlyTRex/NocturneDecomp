// Name: FUN_004b8e10
// Address: 004b8e10
// Address Range: [[004b8e10, 004b8fc4]]
// Convention: unknown
// Signature: void FUN_004b8e10(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b8e10(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar2 = (char *)FUN_0040c5a0(param_1);
  iVar3 = FUN_0040c840(pcVar2,".@CMeleeAxe" + 2);
  if (iVar3 == 0) {
    iVar3 = FUN_0040c840(pcVar2,"CBoxActor");
    if (iVar3 == 0) {
      FUN_004fcda0(0x01D182F0,pcVar2);
    }
    else {
      pcVar4 = (char *)FUN_0040c8f0(pcVar2,DAT_007bc9e8);
      pcVar6 = param_2;
      pcVar5 = pcVar4;
      if (param_2 != (char *)0x0) {
        do {
          cVar1 = *pcVar6;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar5[1] = cVar1;
          pcVar6 = pcVar6 + 2;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        (**(code **)(*(int *)(pcVar4 + 0x2b0) + 8))(pcVar4);
        iVar3 = FUN_005b8c30(param_2,"Lantern");
        if (iVar3 == 0) {
          FUN_0044fd70(pcVar4 + 0x2b4,"Lantern.kfm");
        }
        FUN_0044fd00(pcVar4 + 0x2b4);
        pcVar4[0x470] = '\x02';
        pcVar4[0x471] = '\0';
        pcVar4[0x472] = '\0';
        pcVar4[0x473] = '\0';
        iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        goto LAB_004b8edb;
      }
    }
  }
  else {
    pcVar5 = &DAT_005d79fd;
    pcVar6 = pcVar2;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  (**(code **)(*(int *)(pcVar2 + 0x2b0) + 8))(pcVar2);
  iVar3 = FUN_0040c8f0(pcVar2,_DAT_02661f38);
  if (iVar3 == 0) {
    _DAT_01d046a0 = "..\\core\\game.cpp";
    _DAT_01d046a4 = 0xb63;
    FUN_004e4500("giveHeroWeapon - This is not a weapon");
  }
  *(uint *)(iVar3 + 0x6c4) = 500;
  (**(code **)(*(int *)(pcVar2 + 0x2b0) + 0x90))
            (pcVar2,*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4));
  iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  pcVar4 = pcVar2;
LAB_004b8edb:
  FUN_004dadb0(iVar3 + 0x2437c,pcVar4,1,0);
  return;
}
