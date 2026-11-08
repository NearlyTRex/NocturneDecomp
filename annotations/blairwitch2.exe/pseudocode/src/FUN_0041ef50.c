// Name: FUN_0041ef50
// Address: 0041ef50
// Address Range: [[0041ef50, 0041f0ef]]
// Convention: unknown
// Signature: int FUN_0041ef50(undefined4 param_1)

#include "nocturne.h"

int FUN_0041ef50(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00487db0(param_1);
  iVar2 = FUN_005b7f5f(iVar2 + 0x10b00,400,0x5f3fa0);
  iVar2 = FUN_005b7f5f(iVar2 + 0x6404,4,0x5f3fc0);
  *(uint *)(iVar2 + -0x16c54) = 0x5f3e44;
  *(uint *)(iVar2 + -0x640c) = 0;
  *(uint *)(iVar2 + -0x6408) = 0x32;
  FUN_005b77c0(iVar2 + -0x6404,0,0x6400);
  *(uint *)(iVar2 + -4) = 3;
  FUN_0044fd70(iVar2,0x5cc90d);
  FUN_0044fd70(iVar2 + 0x17c,0x5cc917);
  FUN_0044fd70(iVar2 + 0x2f8,0x5cc922);
  FUN_005478b0(iVar2 + -0x16c50,0x5cc92d);
  *(uint *)(iVar2 + 0x830) = 0;
  pcVar3 = (char *)0x5cc936;
  *(uint *)(iVar2 + 0x834) = 0;
  *(uint *)(iVar2 + 0x86c) = 0;
  pcVar4 = (char *)(iVar2 + 0x75d8);
  *(uint *)(iVar2 + 0x75d0) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5cc93b;
  pcVar4 = (char *)(iVar2 + 0x763c);
  *(uint *)(iVar2 + 0x75d4) = 0;
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
  pcVar4 = (char *)(iVar2 + 0x76a0);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x13ad4) = 0x401f5c29;
  *(uint *)(iVar2 + -0x13ad0) = 0x40200000;
  *(uint *)(iVar2 + -0x13ac4) = 0x3fa66666;
  *(uint *)(iVar2 + -0x13ac0) = 0x3fc00000;
  return iVar2 + -0x16f04;
}
