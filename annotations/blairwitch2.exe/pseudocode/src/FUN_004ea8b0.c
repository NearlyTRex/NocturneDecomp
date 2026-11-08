// Name: FUN_004ea8b0
// Address: 004ea8b0
// Address Range: [[004ea8b0, 004ea9fe]]
// Convention: unknown
// Signature: int FUN_004ea8b0(undefined4 param_1)

#include "nocturne.h"

int FUN_004ea8b0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_005899d0(param_1);
  *(uint *)(iVar2 + 0x2b0) = 0x5f9ca4;
  FUN_0044fd70(iVar2 + 0x2b4,0x5dc915);
  *(uint *)(iVar2 + 0x43c) = 6;
  *(uint *)(iVar2 + 0x6f8) = 0xffffffff;
  *(uint *)(iVar2 + 0x6c4) = 0;
  *(uint *)(iVar2 + 0x434) = 0;
  *(uint *)(iVar2 + 0x438) = 0;
  *(uint *)(iVar2 + 0x440) = 0;
  *(uint *)(iVar2 + 0x444) = 0x40a00000;
  *(uint *)(iVar2 + 0x448) = 0;
  *(uint *)(iVar2 + 0x44c) = 0;
  *(uint *)(iVar2 + 0x6d4) = 3;
  *(uint *)(iVar2 + 0x6d8) = 0x41200000;
  *(uint *)(iVar2 + 0x6dc) = 0x41700000;
  *(uint *)(iVar2 + 0x6e0) = 0x3f000000;
  *(uint *)(iVar2 + 0x6e4) = 1;
  pcVar3 = "swordimpactflesh0?.wav";
  *(uint *)(iVar2 + 0x6ec) = 0;
  *(uint *)(iVar2 + 0x6f0) = 0;
  pcVar4 = (char *)(iVar2 + 0x6fc);
  *(uint *)(iVar2 + 0x6f8) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "swordimpactflesh0?.wav";
  pcVar4 = (char *)(iVar2 + 0x760);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "swordimpactrock0?.wav";
  pcVar4 = (char *)(iVar2 + 0x7c4);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return iVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return iVar2;
}
