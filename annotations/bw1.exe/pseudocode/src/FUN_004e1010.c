// Name: FUN_004e1010
// Address: 004e1010
// Address Range: [[004e1010, 004e1144]]
// Convention: unknown
// Signature: int FUN_004e1010(undefined4 param_1)

#include "nocturne.h"

int FUN_004e1010(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004085c0(param_1);
  iVar2 = FUN_005187f0(iVar2 + 0x1ec);
  iVar2 = FUN_005c0357(iVar2 + 0x1a0,0x19,&DAT_005fb430);
  *(uint *)(iVar2 + -0x238) = 0x601474;
  pcVar3 = "HEADLITE.RAW";
  *(uint *)(iVar2 + -0x234) = 0x40800000;
  *(uint *)(iVar2 + -0x230) = 0x40800000;
  pcVar4 = (char *)(iVar2 + -0x220);
  *(uint *)(iVar2 + -0x22c) = 0x3dcccccd;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x224) = 0;
  *(uint *)(iVar2 + -0x228) = 0xd;
  *(uint *)(iVar2 + -0x210) = 0x8000;
  *(uint *)(iVar2 + -0x20c) = 0;
  pcVar3 = "true";
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
  return iVar2 + -0x38c;
}
