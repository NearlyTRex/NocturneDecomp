// Name: FUN_0050a610
// Address: 0050a610
// Address Range: [[0050a610, 0050a7c7]]
// Convention: unknown
// Signature: void FUN_0050a610(int param_1)

#include "nocturne.h"

void FUN_0050a610(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  
  FUN_00509020(param_1);
  if (*(int *)(param_1 + 0x207d0) == 0) {
    pcVar4 = (char *)FUN_0040c4f0("CWerewolf");
    pcVar6 = (char *)(param_1 + 0x2074c);
    *(char **)(param_1 + 0x207d0) = pcVar4;
    do {
      cVar3 = *pcVar6;
      *pcVar4 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar4[1] = cVar3;
      pcVar4 = pcVar4 + 2;
    } while (cVar3 != '\0');
    iVar1 = *(int *)(param_1 + 0x207d0);
    *(uint *)(iVar1 + 0x20) = *(uint *)(param_1 + 0x20);
    *(uint *)(iVar1 + 0x24) = *(uint *)(param_1 + 0x24);
    *(uint *)(iVar1 + 0x28) = *(uint *)(param_1 + 0x28);
    *(uint *)(iVar1 + 0x2c) = *(uint *)(param_1 + 0x2c);
    iVar1 = *(int *)(param_1 + 0x207d0);
    if ((uint *)(iVar1 + 0x30) != (uint *)(param_1 + 0x30)) {
      *(uint *)(iVar1 + 0x30) = *(uint *)(param_1 + 0x30);
      *(uint *)(iVar1 + 0x34) = *(uint *)(param_1 + 0x34);
      *(uint *)(iVar1 + 0x38) = *(uint *)(param_1 + 0x38);
    }
    FUN_0054eae0(*(int *)(param_1 + 0x207d0) + 0x158,param_1 + 0x2072c);
    *(uint *)(*(int *)(param_1 + 0x207d0) + 0x27b8) = *(uint *)(param_1 + 0x21404);
    (*(code *)**(uint **)(*(int *)(param_1 + 0x207d0) + 0x154))(*(int *)(param_1 + 0x207d0));
    uVar5 = FUN_004fc310(*(int *)(param_1 + 0x207d0) + 0x158,"transform",1);
    uVar5 = FUN_004fb9c0(uVar5);
    FUN_004fc420(*(int *)(param_1 + 0x207d0) + 0x158,uVar5,0);
  }
  FUN_0054c090(*(int *)(param_1 + 0x207d0) + 0x158);
  FUN_0054dd10(*(int *)(param_1 + 0x207d0) + 0x158);
  iVar1 = param_1 + 0x158;
  FUN_0054c090(iVar1);
  FUN_0054dd10(iVar1);
  FUN_0054e6b0(iVar1);
  iVar2 = param_1 + 0x207d4;
  FUN_004fa9c0(iVar2,0,iVar1);
  FUN_004fa9c0(iVar2,1,*(int *)(param_1 + 0x207d0) + 0x158);
  FUN_004fac10(iVar2);
  *(uint *)(param_1 + 0x21400) = 0;
  FUN_0054c110(iVar1);
  FUN_0054c110(*(int *)(param_1 + 0x207d0) + 0x158);
  return;
}
