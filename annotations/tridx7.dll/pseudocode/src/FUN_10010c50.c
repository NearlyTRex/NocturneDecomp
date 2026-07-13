// Name: FUN_10010c50
// Address: 10010c50
// Address Range: [[10010c50, 10010ce5]]
// Convention: unknown
// Signature: int FUN_10010c50(char *param_1)

#include "nocturne.h"

int FUN_10010c50(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  if (DAT_10016d80 == (int *)0x0) {
    if ((DAT_10016d88 != 0) && (iVar2 = FUN_10010d30(), iVar2 != 0)) {
      return 0;
    }
    if (DAT_10016d80 == (int *)0x0) {
      return 0;
    }
  }
  if (param_1 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar6 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    iVar2 = *DAT_10016d80;
    piVar5 = DAT_10016d80;
    while (iVar2 != 0) {
      uVar4 = 0xffffffff;
      pcVar6 = (char *)*piVar5;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      if (((uVar3 < ~uVar4 - 1) && (*(char *)(uVar3 + *piVar5) == '=')) &&
         (iVar2 = FUN_10010cf0(*piVar5,param_1,uVar3), iVar2 == 0)) {
        return *piVar5 + 1 + uVar3;
      }
      piVar5 = piVar5 + 1;
      iVar2 = *piVar5;
    }
  }
  return 0;
}
