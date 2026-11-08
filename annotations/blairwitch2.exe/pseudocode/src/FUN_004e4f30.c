// Name: FUN_004e4f30
// Address: 004e4f30
// Address Range: [[004e4f30, 004e5070]]
// Convention: unknown
// Signature: int FUN_004e4f30(undefined4 param_1)

#include "nocturne.h"

int FUN_004e4f30(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408790(param_1);
  iVar2 = FUN_0044fc80(iVar2 + 0x2b4);
  iVar2 = FUN_0044fc80(iVar2 + 0x17c);
  iVar2 = FUN_0044fc80(iVar2 + 0x17c);
  iVar2 = FUN_005b7f5f(iVar2 + 0x1a0,0xc,0x5f9ab0);
  iVar2 = FUN_005b7f5f(iVar2 + 0x4b0,0xc,0x5f9ad0);
  iVar2 = FUN_005b7f5f(iVar2 + 0x8a0,2,0x5f9af0);
  *(uint *)(iVar2 + -0x11ec) = 0x5f98d4;
  FUN_0044fd70(iVar2 + -0x11e8,0x5dc4b6);
  FUN_0044fd70(iVar2 + -0x106c,0x5dc4c3);
  FUN_0044fd70(iVar2 + -0xef0,"mirrhack.kfm");
  pcVar3 = "headlite.raw";
  pcVar4 = (char *)(iVar2 + 0x188);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0xd6c) = 0;
  *(uint *)(iVar2 + -0xd70) = *(uint *)(iVar2 + -0xd6c);
  *(uint *)(iVar2 + -0xd74) = *(uint *)(iVar2 + -0xd70);
  *(uint *)(iVar2 + -0xd60) = 0;
  *(uint *)(iVar2 + -0xd64) = *(uint *)(iVar2 + -0xd60);
  *(uint *)(iVar2 + -0xd68) = *(uint *)(iVar2 + -0xd64);
  *(uint *)(iVar2 + -0xd54) = 0;
  *(uint *)(iVar2 + -0xd58) = *(uint *)(iVar2 + -0xd54);
  *(uint *)(iVar2 + -0xd5c) = *(uint *)(iVar2 + -0xd58);
  FUN_004e6010(iVar2 + -0x149c);
  return iVar2 + -0x149c;
}
