// Name: FUN_0052c470
// Address: 0052c470
// Address Range: [[0052c470, 0052c4f5]]
// Convention: unknown
// Signature: undefined4 * FUN_0052c470(int param_1)

#include "nocturne.h"

uint * FUN_0052c470(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_005c0357(param_1 + 0x20,2,0x6043c0);
  iVar2 = FUN_0059c8e0(iVar2 + 0x158);
  *(uint *)(iVar2 + -0x178) = 0;
  *(uint *)(iVar2 + -0x174) = 0;
  pcVar3 = "MyComputer";
  *(uint *)(iVar2 + -0x15c) = 0;
  *(uint *)(iVar2 + -0x60) = 0xffffffff;
  pcVar4 = (char *)(iVar2 + -0x170);
  *(uint *)(iVar2 + -0x5c) = 0xffffffff;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -8) = 0;
  return (uint *)(iVar2 + -0x178);
}
