// Name: FUN_00511410
// Address: 00511410
// Address Range: [[00511410, 005114e1]]
// Convention: unknown
// Signature: int FUN_00511410(undefined4 param_1)

#include "nocturne.h"

int FUN_00511410(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00510460(param_1);
  pcVar3 = (char *)0x5e15e2;
  iVar2 = FUN_005b6e60(iVar2 + 0x24454);
  pcVar4 = (char *)(iVar2 + -0xa8);
  *(byte **)(iVar2 + -0x241a4) = &DAT_005fa924;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "false";
  pcVar4 = (char *)(iVar2 + -0x10c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "nameMePlease";
  *(uint *)(iVar2 + -4) = 0;
  FUN_005478b0(iVar2 + -0x241a0,"trainman.dfm");
  pcVar4 = (char *)(iVar2 + -0x88);
  *(uint *)(iVar2 + 0xc30) = 0x3f800000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(byte *)(iVar2 + -0x68) = 0;
  return iVar2 + -0x24454;
}
