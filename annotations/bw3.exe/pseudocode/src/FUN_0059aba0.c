// Name: FUN_0059aba0
// Address: 0059aba0
// Address Range: [[0059aba0, 0059adf7]]
// Convention: unknown
// Signature: void FUN_0059aba0(int param_1)

#include "nocturne.h"

void FUN_0059aba0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  FUN_00509020(param_1);
  if (*(int *)(param_1 + 0x27a8) != 0) {
    *(uint *)(param_1 + 0xfc) = 1;
  }
  iVar3 = FUN_0040c4f0("CPryeMorph");
  *(int *)(param_1 + 0x34170) = iVar3;
  FUN_0054eae0(iVar3 + 0x158,"bwp3_prye_morph.dfm");
  FUN_0054e6b0(*(int *)(param_1 + 0x34170) + 0x158);
  FUN_0043f920(param_1 + 0x33fa4);
  FUN_0043fbc0(param_1 + 0x33fa4,param_1 + 0x20,param_1 + 0x30,*(int *)(param_1 + 0x34170) + 0x158);
  FUN_0043fc00(param_1 + 0x2f08,param_1 + 0x20,param_1 + 0x30,0x3d4ccccd,
               *(uint *)(param_1 + 0x2504),*(int *)(param_1 + 0x34170) + 0x158);
  if (*(int *)(param_1 + 0x27a8) != 0) {
    *(uint *)(param_1 + 0xfc) = 1;
  }
  pcVar5 = "prye_morph";
  pcVar6 = *(char **)(param_1 + 0x34170);
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  iVar3 = *(int *)(param_1 + 0x34170);
  *(uint *)(iVar3 + 0x20) = *(uint *)(param_1 + 0x20);
  *(uint *)(iVar3 + 0x24) = *(uint *)(param_1 + 0x24);
  *(uint *)(iVar3 + 0x28) = *(uint *)(param_1 + 0x28);
  *(uint *)(iVar3 + 0x2c) = *(uint *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_1 + 0x34170);
  if ((uint *)(iVar3 + 0x30) != (uint *)(param_1 + 0x30)) {
    *(uint *)(iVar3 + 0x30) = *(uint *)(param_1 + 0x30);
    *(uint *)(iVar3 + 0x34) = *(uint *)(param_1 + 0x34);
    *(uint *)(iVar3 + 0x38) = *(uint *)(param_1 + 0x38);
  }
  *(uint *)(*(int *)(param_1 + 0x34170) + 0x27b8) = 0x3f800000;
  (*(code *)**(uint **)(*(int *)(param_1 + 0x34170) + 0x154))(*(int *)(param_1 + 0x34170));
  uVar4 = FUN_004fc310(*(int *)(param_1 + 0x34170) + 0x158,"stand",1);
  uVar4 = FUN_004fb9c0(uVar4);
  FUN_004fc420(*(int *)(param_1 + 0x34170) + 0x158,uVar4,0);
  FUN_0054c090(*(int *)(param_1 + 0x34170) + 0x158);
  FUN_0054dd10(*(int *)(param_1 + 0x34170) + 0x158);
  iVar3 = param_1 + 0x158;
  FUN_0054c090(iVar3);
  FUN_0054dd10(iVar3);
  FUN_0054e6b0(iVar3);
  iVar1 = param_1 + 0x34174;
  FUN_004fab10(iVar1,1,*(uint *)(param_1 + 0x34138),0);
  FUN_004fa9c0(iVar1,0,iVar3);
  FUN_004fa9c0(iVar1,1,*(int *)(param_1 + 0x34170) + 0x158);
  FUN_004fac10(iVar1);
  *(uint *)(param_1 + 0x34da0) = 0;
  FUN_0054c110(iVar3);
  FUN_0054c110(*(int *)(param_1 + 0x34170) + 0x158);
  *(uint *)(param_1 + 0xfc) = 1;
  *(uint *)(param_1 + 0xf8) = 0;
  return;
}
