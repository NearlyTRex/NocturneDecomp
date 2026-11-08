// Name: FUN_00447750
// Address: 00447750
// Address Range: [[00447750, 00447806]]
// Convention: unknown
// Signature: int FUN_00447750(undefined4 param_1)

#include "nocturne.h"

int FUN_00447750(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00539400(param_1);
  *(uint *)(iVar2 + 0x154) = 0x5fdf64;
  pcVar3 = (char *)0x5d70f8;
  *(uint *)(iVar2 + 0x728) = 0x3f800000;
  *(uint *)(iVar2 + 0x730) = 0x3f800000;
  *(uint *)(iVar2 + 0x72c) = 0x3dcccccd;
  pcVar4 = (char *)(iVar2 + 0x740);
  *(uint *)(iVar2 + 0x808) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5d70fd;
  pcVar4 = (char *)(iVar2 + 0x7a4);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x734) = 0;
  *(uint *)(iVar2 + 0x738) = 0;
  *(uint *)(iVar2 + 0x73c) = 0x3f800000;
  *(byte *)(iVar2 + 0x80c) = 0;
  return iVar2;
}
