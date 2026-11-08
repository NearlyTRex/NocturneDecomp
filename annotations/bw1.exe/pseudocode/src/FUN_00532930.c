// Name: FUN_00532930
// Address: 00532930
// Address Range: [[00532930, 00532ae7]]
// Convention: unknown
// Signature: void FUN_00532930(int param_1)

#include "nocturne.h"

void FUN_00532930(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  
  FUN_00531720(param_1);
  if (*(int *)(param_1 + 0x1fbc0) == 0) {
    pcVar4 = (char *)FUN_0040c2b0("CWerewolf");
    pcVar6 = (char *)(param_1 + 0x1fb3c);
    *(char **)(param_1 + 0x1fbc0) = pcVar4;
    do {
      cVar3 = *pcVar6;
      *pcVar4 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar4[1] = cVar3;
      pcVar4 = pcVar4 + 2;
    } while (cVar3 != '\0');
    iVar1 = *(int *)(param_1 + 0x1fbc0);
    *(uint *)(iVar1 + 0x20) = *(uint *)(param_1 + 0x20);
    *(uint *)(iVar1 + 0x24) = *(uint *)(param_1 + 0x24);
    *(uint *)(iVar1 + 0x28) = *(uint *)(param_1 + 0x28);
    *(uint *)(iVar1 + 0x2c) = *(uint *)(param_1 + 0x2c);
    iVar1 = *(int *)(param_1 + 0x1fbc0);
    if ((uint *)(iVar1 + 0x30) != (uint *)(param_1 + 0x30)) {
      *(uint *)(iVar1 + 0x30) = *(uint *)(param_1 + 0x30);
      *(uint *)(iVar1 + 0x34) = *(uint *)(param_1 + 0x34);
      *(uint *)(iVar1 + 0x38) = *(uint *)(param_1 + 0x38);
    }
    FUN_00569f50(*(int *)(param_1 + 0x1fbc0) + 0x158,param_1 + 0x1fb1c);
    *(uint *)(*(int *)(param_1 + 0x1fbc0) + 0x27b8) = *(uint *)(param_1 + 0x207f4);
    (*(code *)**(uint **)(*(int *)(param_1 + 0x1fbc0) + 0x154))(*(int *)(param_1 + 0x1fbc0));
    uVar5 = FUN_00524a00(*(int *)(param_1 + 0x1fbc0) + 0x158,"transform",1);
    uVar5 = FUN_005240c0(uVar5);
    FUN_00524b10(*(int *)(param_1 + 0x1fbc0) + 0x158,uVar5,0);
  }
  FUN_00567500(*(int *)(param_1 + 0x1fbc0) + 0x158);
  FUN_00569180(*(int *)(param_1 + 0x1fbc0) + 0x158);
  iVar1 = param_1 + 0x158;
  FUN_00567500(iVar1);
  FUN_00569180(iVar1);
  FUN_00569b20(iVar1);
  iVar2 = param_1 + 0x1fbc4;
  FUN_005230c0(iVar2,0,iVar1);
  FUN_005230c0(iVar2,1,*(int *)(param_1 + 0x1fbc0) + 0x158);
  FUN_00523310(iVar2);
  *(uint *)(param_1 + 0x207f0) = 0;
  FUN_00567580(iVar1);
  FUN_00567580(*(int *)(param_1 + 0x1fbc0) + 0x158);
  return;
}
