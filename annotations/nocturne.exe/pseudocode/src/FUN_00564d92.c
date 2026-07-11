// Name: FUN_00564d92
// Address: 00564d92
// Address Range: [[00564d92, 00564e3c]]
// Convention: unknown
// Signature: int * FUN_00564d92(undefined4 *param_1,byte param_2,char *param_3,undefined4 param_4,byte param_5)

#include "nocturne.h"

int * FUN_00564d92(uint *param_1,byte param_2,char *param_3,uint param_4,byte param_5)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  
  bVar6 = 0;
  if ((param_2 & 1) == 0) {
    *param_1 = &DAT_005a46b8;
    param_1[0x12] = &DAT_005a46c0;
    iVar5 = FUN_0056b503(param_1 + 0x15);
    param_1 = (uint *)(iVar5 + -0x54);
  }
  if (param_3 == (char *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    if ((param_5 & 0xc) == 0) {
      iVar5 = 0;
    }
    else {
      uVar4 = 0xffffffff;
      pcVar3 = param_3;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar4 - 1;
    }
    pcVar3 = param_3 + iVar5;
  }
  iVar5 = FUN_0056b405(param_1,1,param_3,param_4,pcVar3);
  iVar5 = FUN_0056b4a9(iVar5 + 0x48,1);
  piVar1 = (int *)(iVar5 + -0x48);
  *(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + -4) = *(int *)(*piVar1 + 4);
  *(byte ***)(iVar5 + -4) = &PTR_FUN_005a46cc;
  *(byte ***)(iVar5 + 4) = &PTR_LAB_005a46d4;
  *(byte ***)(iVar5 + -0x20 + *(int *)(*piVar1 + 4)) = &PTR_LAB_005a46dc;
  return piVar1;
}
