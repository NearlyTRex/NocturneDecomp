// Name: FUN_004f7490
// Address: 004f7490
// Address Range: [[004f7490, 004f752b]]
// Convention: unknown
// Signature: void FUN_004f7490(int param_1,undefined4 param_2,char *param_3)

#include "nocturne.h"

void FUN_004f7490(int param_1,uint param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int local_14;
  
  iVar5 = -1;
  uVar4 = 0xffffffff;
  pcVar6 = param_3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  for (iVar3 = *(int *)(param_1 + 0x143c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x14c)) {
    iVar2 = FUN_005a3f90(iVar3,param_3,~uVar4 - 1);
    if (((iVar2 == 0) &&
        (iVar2 = FUN_005a5b9c(iVar3 + (~uVar4 - 1),&DAT_005c8c3a,&local_14), iVar2 == 1)) &&
       (iVar5 < local_14)) {
      iVar5 = local_14;
    }
  }
  do {
    iVar5 = iVar5 + 1;
    FUN_005a28c0(param_2,&DAT_005c8c3d,param_3,iVar5);
    iVar3 = FUN_004f6e90(param_1,param_2);
  } while (iVar3 != 0);
  return;
}
