// Name: FUN_00488fd0
// Address: 00488fd0
// Address Range: [[00488fd0, 00489106]]
// Convention: unknown
// Signature: int FUN_00488fd0(undefined4 param_1)

#include "nocturne.h"

int FUN_00488fd0(uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = FUN_0042ac20(param_1);
  iVar2 = FUN_00462500(iVar2 + 0xced0);
  *(uint *)(iVar2 + -0xcd7c) = 0x5df364;
  uVar3 = FUN_0040ce40(0x3f666666,0x3f8ccccd);
  *(uint *)(iVar2 + -0x100) = 0;
  *(uint *)(iVar2 + -0x7c) = 0;
  *(uint *)(iVar2 + -0xec) = 0;
  *(uint *)(iVar2 + -0xe8) = 0;
  *(uint *)(iVar2 + -0xe4) = 0x42480000;
  *(uint *)(iVar2 + -0xfc) = 1;
  *(uint *)(iVar2 + 0x17c) = 0;
  *(uint *)(iVar2 + -0xf8) = 0;
  *(byte *)(iVar2 + -0xe0) = 0;
  *(uint *)(iVar2 + -0xf4) = 0x42c80000;
  pcVar4 = (char *)0x5bdb7e;
  *(uint *)(iVar2 + -0xf0) = 0;
  pcVar5 = (char *)(iVar2 + -0xcdb0);
  *(uint *)(iVar2 + -0x78) = 0x40c00000;
  *(uint *)(iVar2 + 0x180) = 1;
  *(uint *)(iVar2 + -0x104) = uVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0xa9a4) = 0x3fc90fdb;
  *(uint *)(iVar2 + -0x74) = 0x41200000;
  *(uint *)(iVar2 + -0x70) = 0x3f800000;
  *(uint *)(iVar2 + -0x6c) = 1;
  *(byte *)(iVar2 + -0x68) = 0;
  *(uint *)(iVar2 + -4) = 0;
  return iVar2 + -0xced0;
}
