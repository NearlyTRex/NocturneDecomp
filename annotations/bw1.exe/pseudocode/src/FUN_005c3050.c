// Name: FUN_005c3050
// Address: 005c3050
// Address Range: [[005c3050, 005c30aa]]
// Convention: unknown
// Signature: int FUN_005c3050(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005c3050(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  
  if ((_DAT_02c9f6d4 != (int *)0x0) && (param_1 != (char *)0x0)) {
    uVar4 = 0xffffffff;
    pcVar7 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar5 = ~uVar4 - 1;
    for (piVar6 = _DAT_02c9f6d4; iVar2 = *piVar6, iVar2 != 0; piVar6 = piVar6 + 1) {
      iVar3 = FUN_005c9ea0(iVar2,param_1,iVar5);
      if ((iVar3 == 0) && (*(char *)(iVar5 + iVar2) == '=')) {
        return ~uVar4 + iVar2;
      }
    }
  }
  return 0;
}
