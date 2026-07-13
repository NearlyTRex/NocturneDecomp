// Name: FUN_004946c0
// Address: 004946c0
// Address Range: [[004946c0, 004948e4]]
// Convention: unknown
// Signature: void FUN_004946c0(int param_1)

#include "nocturne.h"

void FUN_004946c0(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  FUN_00409fc0(param_1);
  *(byte *)(param_1 + 0x158) = 0;
  *(uint *)(param_1 + 0x480) = 0;
  switch(*(uint *)(param_1 + 0x150)) {
  case 0:
    FUN_00454580(param_1 + 0x17c,"frankxbed.kfm");
    pcVar2 = "frankxbed.pth";
    pcVar3 = (char *)(param_1 + 0x158);
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    FUN_00454580(param_1 + 0x304,"frankxbody.kfm");
    FUN_00454510(param_1 + 0x304);
    break;
  case 1:
    FUN_00454580(param_1 + 0x17c,"frankxcrn1.kfm");
    *(uint *)(param_1 + 0x480) = 0xae;
    break;
  case 2:
    FUN_00454580(param_1 + 0x17c,"frankxcrn2.kfm");
    *(uint *)(param_1 + 0x480) = 0x8c;
    break;
  case 3:
    FUN_00454580(param_1 + 0x17c,"frankxcrn3.kfm");
    *(uint *)(param_1 + 0x480) = 0x16a;
    break;
  case 4:
    FUN_00454580(param_1 + 0x17c,"frankxstch.kfm");
    break;
  case 5:
    FUN_00454580(param_1 + 0x17c,"frankxarm.kfm");
    break;
  case 6:
    FUN_00454580(param_1 + 0x17c,"frankxflap1.kfm");
    pcVar2 = "frankxflap1.pth";
    pcVar3 = (char *)(param_1 + 0x158);
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
    FUN_00454580(param_1 + 0x17c,"frankxflap2.kfm");
    pcVar2 = "frankxflap2.pth";
    pcVar3 = (char *)(param_1 + 0x158);
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
    FUN_00454580(param_1 + 0x17c,"frankxramp.kfm");
    pcVar2 = "frankxramp.pth";
    pcVar3 = (char *)(param_1 + 0x158);
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
  FUN_00454510(param_1 + 0x17c);
  if (*(char *)(param_1 + 0x158) != '\0') {
    FUN_0043b690(param_1 + 0x2f8,param_1 + 0x158);
    FUN_004950a0(param_1);
    return;
  }
  FUN_004950a0(param_1);
  return;
}
