// Name: FUN_00576350
// Address: 00576350
// Address Range: [[00576350, 005764a7]]
// Convention: unknown
// Signature: int FUN_00576350(undefined4 param_1)

#include "nocturne.h"

int FUN_00576350(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408600(param_1);
  iVar2 = FUN_00462500(iVar2 + 0x158);
  iVar2 = FUN_004a59b0(iVar2 + 0x26c);
  iVar2 = FUN_00462500(iVar2 + 0x2a8);
  pcVar3 = (char *)0x5d7081;
  *(uint *)(iVar2 + -0x518) = 0x5e5d74;
  FUN_004625f0(iVar2 + -0x514,"vsslbase.kfm");
  *(uint *)(iVar2 + -0x398) = 0;
  *(uint *)(iVar2 + -0x394) = 0;
  pcVar4 = (char *)(iVar2 + -0x38c);
  *(uint *)(iVar2 + -0x390) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x2c4) = 0;
  *(uint *)(iVar2 + -0x2c0) = 0;
  pcVar3 = (char *)0x5d7086;
  *(uint *)(iVar2 + -0x2b0) = 0;
  pcVar4 = (char *)(iVar2 + -0x328);
  *(uint *)(iVar2 + -0x2b4) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -700) = 0x41200000;
  *(uint *)(iVar2 + -0x2ac) = 1;
  *(uint *)(iVar2 + -0x2b8) = 0;
  *(uint *)(iVar2 + -4) = 0;
  FUN_004625f0(iVar2,0x5d708b);
  *(uint *)(iVar2 + 0x17c) = 1;
  *(uint *)(iVar2 + -0x570) = 1;
  *(uint *)(iVar2 + 0x180) = 0;
  *(uint *)(iVar2 + 0x184) = 0;
  return iVar2 + -0x66c;
}
