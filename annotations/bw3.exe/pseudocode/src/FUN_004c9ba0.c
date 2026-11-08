// Name: FUN_004c9ba0
// Address: 004c9ba0
// Address Range: [[004c9ba0, 004c9cd4]]
// Convention: unknown
// Signature: int FUN_004c9ba0(undefined4 param_1)

#include "nocturne.h"

int FUN_004c9ba0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408600(param_1);
  iVar2 = FUN_004f3fc0(iVar2 + 0x21c);
  iVar2 = FUN_005a30d7(iVar2 + 0x1a0,0x19,&DAT_005db0f0);
  *(uint *)(iVar2 + -0x268) = 0x5e0be4;
  pcVar3 = "HEADLITE.RAW";
  *(uint *)(iVar2 + -0x264) = 0x40800000;
  *(uint *)(iVar2 + -0x260) = 0x40800000;
  pcVar4 = (char *)(iVar2 + -0x250);
  *(uint *)(iVar2 + -0x25c) = 0x3dcccccd;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x254) = 0;
  *(uint *)(iVar2 + -600) = 0xd;
  *(uint *)(iVar2 + -0x210) = 0x8000;
  *(uint *)(iVar2 + -0x20c) = 0;
  pcVar3 = (char *)0x5c444c;
  *(byte *)(iVar2 + -0x208) = 0;
  pcVar4 = (char *)(iVar2 + -0x80);
  *(uint *)(iVar2 + -0x1a4) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "7YEARS.RAW";
  pcVar4 = (char *)(iVar2 + -0x10);
  *(uint *)(iVar2 + -0x1c) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x14) = 0;
  *(uint *)(iVar2 + -0x18) = 0xd;
  *(uint *)(iVar2 + 0x7b0) = 0;
  return iVar2 + -0x3bc;
}
