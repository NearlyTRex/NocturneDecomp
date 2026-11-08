// Name: FUN_004879e0
// Address: 004879e0
// Address Range: [[004879e0, 00487ba4]]
// Convention: unknown
// Signature: int FUN_004879e0(undefined4 param_1)

#include "nocturne.h"

int FUN_004879e0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408600(param_1);
  iVar2 = FUN_00462500(iVar2 + 0x248);
  *(uint *)(iVar2 + -0xf4) = 0x5df244;
  *(uint *)(iVar2 + -0xec) = 0x3f800000;
  pcVar3 = (char *)0x5bd9ed;
  *(uint *)(iVar2 + -0xe8) = 0x3f800000;
  *(uint *)(iVar2 + -0xe4) = 0x3f800000;
  pcVar4 = (char *)(iVar2 + -0xdc);
  *(uint *)(iVar2 + -0xf0) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5bd9f2;
  pcVar4 = (char *)(iVar2 + -0x78);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x21c) = 0;
  *(uint *)(iVar2 + 0x220) = 0x3dcccccd;
  *(uint *)(iVar2 + -0xe0) = 1;
  *(uint *)(iVar2 + -0xc) = 0xff;
  *(uint *)(iVar2 + -8) = 0;
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + -0x10) = 1;
  *(uint *)(iVar2 + -0x14) = 0;
  *(uint *)(iVar2 + 0x224) = 0;
  FUN_004625f0(iVar2,"stalrock.kfm");
  *(uint *)(iVar2 + 0x17c) = 0x41a00000;
  *(uint *)(iVar2 + 0x180) = 0x42c80000;
  *(uint *)(iVar2 + 0x184) = 0x3f800000;
  *(uint *)(iVar2 + 0x188) = 0;
  *(uint *)(iVar2 + 0x18c) = 0x4000;
  *(uint *)(iVar2 + 400) = 0x10000;
  *(uint *)(iVar2 + 0x194) = 0xffff;
  *(uint *)(iVar2 + 0x198) = 0x3ecccccd;
  *(uint *)(iVar2 + 0x1ac) = 0x42480000;
  *(uint *)(iVar2 + 0x19c) = 0;
  *(uint *)(iVar2 + 0x1a0) = 0;
  *(uint *)(iVar2 + 0x1a4) = 1;
  *(uint *)(iVar2 + 0x1a8) = 0;
  *(byte *)(iVar2 + 0x1b0) = 0;
  *(uint *)(iVar2 + 0x218) = 1;
  *(uint *)(iVar2 + 0x268) = 0;
  *(uint *)(iVar2 + 0x270) = 0;
  *(uint *)(iVar2 + 0x274) = 0x3f800000;
  return iVar2 + -0x248;
}
