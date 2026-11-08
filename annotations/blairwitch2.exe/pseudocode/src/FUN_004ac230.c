// Name: FUN_004ac230
// Address: 004ac230
// Address Range: [[004ac230, 004ac262] [004ac2b9, 004ac2e2] [004ac432, 004ac454]]
// Convention: unknown
// Signature: void FUN_004ac230(int param_1)

#include "nocturne.h"

void FUN_004ac230(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  FUN_00408a80(param_1);
  *(byte *)(param_1 + 700) = 0;
  *(uint *)(param_1 + 0x5e4) = 0;
  switch(*(uint *)(param_1 + 0x2b4)) {
  case 0:
    FUN_0044fd70(param_1 + 0x2e0,"frankxbed.kfm");
    pcVar2 = "frankxbed.pth";
    pcVar3 = (char *)(param_1 + 700);
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    FUN_0044fd70(param_1 + 0x468,"frankxbody.kfm");
    FUN_0044fd00(param_1 + 0x468);
    break;
  case 1:
    FUN_0044fd70(param_1 + 0x2e0,"frankxcrn1.kfm");
    *(uint *)(param_1 + 0x5e4) = 0xae;
    break;
  case 2:
    FUN_0044fd70(param_1 + 0x2e0,"frankxcrn2.kfm");
    *(uint *)(param_1 + 0x5e4) = 0x8c;
    break;
  case 3:
    FUN_0044fd70(param_1 + 0x2e0,"frankxcrn3.kfm");
    *(uint *)(param_1 + 0x5e4) = 0x16a;
    break;
  case 4:
    FUN_0044fd70(param_1 + 0x2e0,"frankxstch.kfm");
    break;
  case 5:
    FUN_0044fd70(param_1 + 0x2e0,"frankxarm.kfm");
    break;
  case 6:
    FUN_0044fd70(param_1 + 0x2e0,"frankxflap1.kfm");
    pcVar2 = "frankxflap1.pth";
    pcVar3 = (char *)(param_1 + 700);
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    break;
  case 7:
    FUN_0044fd70(param_1 + 0x2e0,"frankxflap2.kfm");
    pcVar2 = "frankxflap2.pth";
    pcVar3 = (char *)(param_1 + 700);
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    break;
  case 8:
    FUN_0044fd70(param_1 + 0x2e0,"frankxramp.kfm");
    pcVar2 = "frankxramp.pth";
    pcVar3 = (char *)(param_1 + 700);
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
  }
  FUN_0044fd00(param_1 + 0x2e0);
  if (*(char *)(param_1 + 700) != '\0') {
    FUN_00438af0(param_1 + 0x45c,param_1 + 700);
    FUN_004accb0(param_1);
    return;
  }
  FUN_004accb0(param_1);
  return;
}
