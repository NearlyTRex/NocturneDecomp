// Name: FUN_00503d70
// Address: 00503d70
// Address Range: [[00503d70, 00503df5]]
// Convention: unknown
// Signature: undefined4 * FUN_00503d70(int param_1)

#include "nocturne.h"

uint * FUN_00503d70(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_005a30d7(param_1 + 0x20,2,0x5e2d60);
  iVar2 = FUN_0056f8d0(iVar2 + 0x160);
  *(uint *)(iVar2 + -0x180) = 0;
  *(uint *)(iVar2 + -0x17c) = 0;
  pcVar3 = "MyComputer";
  *(uint *)(iVar2 + -0x164) = 0;
  *(uint *)(iVar2 + -0x60) = 0xffffffff;
  pcVar4 = (char *)(iVar2 + -0x178);
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
  return (uint *)(iVar2 + -0x180);
}
