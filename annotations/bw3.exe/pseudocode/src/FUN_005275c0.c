// Name: FUN_005275c0
// Address: 005275c0
// Address Range: [[005275c0, 0052777c]]
// Convention: unknown
// Signature: void FUN_005275c0(int param_1)

#include "nocturne.h"

void FUN_005275c0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  
  FUN_00509020(param_1);
  pcVar4 = (char *)FUN_0040c4f0(param_1 + 0x2076c);
  pcVar6 = (char *)(param_1 + 0x2074c);
  *(char **)(param_1 + 0x20810) = pcVar4;
  do {
    cVar2 = *pcVar6;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  iVar3 = *(int *)(param_1 + 0x20810);
  *(uint *)(iVar3 + 0x20) = *(uint *)(param_1 + 0x20);
  *(uint *)(iVar3 + 0x24) = *(uint *)(param_1 + 0x24);
  *(uint *)(iVar3 + 0x28) = *(uint *)(param_1 + 0x28);
  *(uint *)(iVar3 + 0x2c) = *(uint *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_1 + 0x20810);
  if ((uint *)(iVar3 + 0x30) != (uint *)(param_1 + 0x30)) {
    *(uint *)(iVar3 + 0x30) = *(uint *)(param_1 + 0x30);
    *(uint *)(iVar3 + 0x34) = *(uint *)(param_1 + 0x34);
    *(uint *)(iVar3 + 0x38) = *(uint *)(param_1 + 0x38);
  }
  FUN_0054eae0(*(int *)(param_1 + 0x20810) + 0x158,param_1 + 0x2072c);
  *(uint *)(*(int *)(param_1 + 0x20810) + 0x27b8) = *(uint *)(param_1 + 0x21444);
  (*(code *)**(uint **)(*(int *)(param_1 + 0x20810) + 0x154))(*(int *)(param_1 + 0x20810));
  uVar5 = FUN_004fc310(*(int *)(param_1 + 0x20810) + 0x158,param_1 + 0x2078c,1);
  uVar5 = FUN_004fb9c0(uVar5);
  FUN_004fc420(*(int *)(param_1 + 0x20810) + 0x158,uVar5,0);
  FUN_0054c090(*(int *)(param_1 + 0x20810) + 0x158);
  FUN_0054dd10(*(int *)(param_1 + 0x20810) + 0x158);
  iVar3 = param_1 + 0x158;
  FUN_0054c090(iVar3);
  FUN_0054dd10(iVar3);
  FUN_0054e6b0(iVar3);
  iVar1 = param_1 + 0x20814;
  FUN_004fa9c0(iVar1,0,iVar3);
  FUN_004fa9c0(iVar1,1,*(int *)(param_1 + 0x20810) + 0x158);
  FUN_004fab10(iVar1,0,*(uint *)(param_1 + 0x309c),0);
  FUN_004fac10(iVar1);
  *(uint *)(param_1 + 0x21440) = 0;
  FUN_0054c110(iVar3);
  FUN_0054c110(*(int *)(param_1 + 0x20810) + 0x158);
  return;
}
