// Name: FUN_0051bcc0
// Address: 0051bcc0
// Address Range: [[0051bcc0, 0051bd5b]]
// Convention: unknown
// Signature: void FUN_0051bcc0(int param_1,undefined4 param_2,char *param_3)

#include "nocturne.h"

void FUN_0051bcc0(int param_1,uint param_2,char *param_3)

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
  for (iVar3 = *(int *)(param_1 + 0x1118); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x14c)) {
    iVar2 = FUN_005c1210(iVar3,param_3,~uVar4 - 1);
    if (((iVar2 == 0) &&
        (iVar2 = FUN_005c2cac(iVar3 + (~uVar4 - 1),"%d",&local_14), iVar2 == 1)) &&
       (iVar5 < local_14)) {
      iVar5 = local_14;
    }
  }
  do {
    iVar5 = iVar5 + 1;
    FUN_005bfb40(param_2,"%s%d",param_3,iVar5);
    iVar3 = FUN_0051b6c0(param_1,param_2);
  } while (iVar3 != 0);
  return;
}
