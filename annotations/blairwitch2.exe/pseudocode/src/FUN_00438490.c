// Name: FUN_00438490
// Address: 00438490
// Address Range: [[00438490, 00438546]]
// Convention: unknown
// Signature: int FUN_00438490(undefined4 param_1)

#include "nocturne.h"

int FUN_00438490(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_005180b0(param_1);
  *(uint *)(iVar2 + 0x2b0) = 0x5f4854;
  pcVar3 = (char *)0x5cdf8c;
  *(uint *)(iVar2 + 0x884) = 0x3f800000;
  *(uint *)(iVar2 + 0x88c) = 0x3f800000;
  *(uint *)(iVar2 + 0x888) = 0x3dcccccd;
  pcVar4 = (char *)(iVar2 + 0x89c);
  *(uint *)(iVar2 + 0x964) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5cdf91;
  pcVar4 = (char *)(iVar2 + 0x900);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x890) = 0;
  *(uint *)(iVar2 + 0x894) = 0;
  *(uint *)(iVar2 + 0x898) = 0x3f800000;
  *(byte *)(iVar2 + 0x968) = 0;
  return iVar2;
}
