// Name: FUN_005115e0
// Address: 005115e0
// Address Range: [[005115e0, 00511798]]
// Convention: unknown
// Signature: void FUN_005115e0(int param_1)

#include "nocturne.h"

void FUN_005115e0(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  
  FUN_00510510(param_1);
  if (*(int *)(param_1 + 0x24450) == 0) {
    pcVar4 = (char *)FUN_0040c5a0("CWerewolf");
    pcVar6 = (char *)(param_1 + 0x243cc);
    *(char **)(param_1 + 0x24450) = pcVar4;
    do {
      cVar3 = *pcVar6;
      *pcVar4 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar4[1] = cVar3;
      pcVar4 = pcVar4 + 2;
    } while (cVar3 != '\0');
    iVar1 = *(int *)(param_1 + 0x24450);
    *(uint *)(iVar1 + 0x20) = *(uint *)(param_1 + 0x20);
    *(uint *)(iVar1 + 0x24) = *(uint *)(param_1 + 0x24);
    *(uint *)(iVar1 + 0x28) = *(uint *)(param_1 + 0x28);
    *(uint *)(iVar1 + 0x2c) = *(uint *)(param_1 + 0x2c);
    iVar1 = *(int *)(param_1 + 0x24450);
    if ((uint *)(iVar1 + 0x30) != (uint *)(param_1 + 0x30)) {
      *(uint *)(iVar1 + 0x30) = *(uint *)(param_1 + 0x30);
      *(uint *)(iVar1 + 0x34) = *(uint *)(param_1 + 0x34);
      *(uint *)(iVar1 + 0x38) = *(uint *)(param_1 + 0x38);
    }
    FUN_005478b0(*(int *)(param_1 + 0x24450) + 0x2b4,param_1 + 0x243ac);
    *(uint *)(*(int *)(param_1 + 0x24450) + 0x2824) = *(uint *)(param_1 + 0x25084);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x24450) + 0x2b0) + 8))(*(int *)(param_1 + 0x24450));
    uVar5 = FUN_00503860(*(int *)(param_1 + 0x24450) + 0x2b4,"transform",1);
    uVar5 = FUN_00502f10(uVar5);
    FUN_00503980(*(int *)(param_1 + 0x24450) + 0x2b4,uVar5,0);
  }
  FUN_00544e60(*(int *)(param_1 + 0x24450) + 0x2b4);
  FUN_00546ae0(*(int *)(param_1 + 0x24450) + 0x2b4);
  iVar1 = param_1 + 0x2b4;
  FUN_00544e60(iVar1);
  FUN_00546ae0(iVar1);
  FUN_00547480(iVar1);
  iVar2 = param_1 + 0x24454;
  FUN_005b6f80(iVar2,0,iVar1);
  FUN_005b6f80(iVar2,1,*(int *)(param_1 + 0x24450) + 0x2b4);
  FUN_005b71d0(iVar2);
  *(uint *)(param_1 + 0x25080) = 0;
  FUN_00544ee0(iVar1);
  FUN_00544ee0(*(int *)(param_1 + 0x24450) + 0x2b4);
  return;
}
