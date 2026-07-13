// Name: FUN_004ef6d0
// Address: 004ef6d0
// Address Range: [[004ef6d0, 004ef887]]
// Convention: unknown
// Signature: void FUN_004ef6d0(int param_1)

#include "nocturne.h"

void FUN_004ef6d0(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  
  FUN_004ee9e0(param_1);
  if (*(int *)(param_1 + 0x1f678) == 0) {
    pcVar4 = (char *)FUN_0040d540("CWerewolf");
    pcVar6 = (char *)(param_1 + 0x1f5f4);
    *(char **)(param_1 + 0x1f678) = pcVar4;
    do {
      cVar3 = *pcVar6;
      *pcVar4 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar4[1] = cVar3;
      pcVar4 = pcVar4 + 2;
    } while (cVar3 != '\0');
    iVar1 = *(int *)(param_1 + 0x1f678);
    *(uint *)(iVar1 + 0x20) = *(uint *)(param_1 + 0x20);
    *(uint *)(iVar1 + 0x24) = *(uint *)(param_1 + 0x24);
    *(uint *)(iVar1 + 0x28) = *(uint *)(param_1 + 0x28);
    *(uint *)(iVar1 + 0x2c) = *(uint *)(param_1 + 0x2c);
    iVar1 = *(int *)(param_1 + 0x1f678);
    if ((uint *)(iVar1 + 0x30) != (uint *)(param_1 + 0x30)) {
      *(uint *)(iVar1 + 0x30) = *(uint *)(param_1 + 0x30);
      *(uint *)(iVar1 + 0x34) = *(uint *)(param_1 + 0x34);
      *(uint *)(iVar1 + 0x38) = *(uint *)(param_1 + 0x38);
    }
    FUN_0051e0c0(*(int *)(param_1 + 0x1f678) + 0x150,param_1 + 0x1f5d4);
    *(uint *)(*(int *)(param_1 + 0x1f678) + 0x2614) = *(uint *)(param_1 + 0x202ac);
    (*(code *)**(uint **)(*(int *)(param_1 + 0x1f678) + 0x14c))(*(int *)(param_1 + 0x1f678));
    uVar5 = FUN_004e1890(*(int *)(param_1 + 0x1f678) + 0x150,"transform",1);
    uVar5 = FUN_004e1010(uVar5);
    FUN_004e1990(*(int *)(param_1 + 0x1f678) + 0x150,uVar5,0);
  }
  FUN_0051b800(*(int *)(param_1 + 0x1f678) + 0x150);
  FUN_0051d3c0(*(int *)(param_1 + 0x1f678) + 0x150);
  iVar1 = param_1 + 0x150;
  FUN_0051b800(iVar1);
  FUN_0051d3c0(iVar1);
  FUN_0051dcd0(iVar1);
  iVar2 = param_1 + 0x1f67c;
  FUN_004e0170(iVar2,0,iVar1);
  FUN_004e0170(iVar2,1,*(int *)(param_1 + 0x1f678) + 0x150);
  FUN_004e03c0(iVar2);
  *(uint *)(param_1 + 0x202a8) = 0;
  FUN_0051b880(iVar1);
  FUN_0051b880(*(int *)(param_1 + 0x1f678) + 0x150);
  return;
}
