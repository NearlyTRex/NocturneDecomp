// Name: FUN_004a9a60
// Address: 004a9a60
// Address Range: [[004a9a60, 004a9be6]]
// Convention: unknown
// Signature: void FUN_004a9a60(int param_1,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a9a60(int param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar2 = FUN_004a9f00(param_1,param_2);
    iVar5 = param_1 + 0x190c;
    if (param_3 == 0) {
      if (-1 < iVar2) {
        iVar4 = *(int *)(param_1 + 0x1908) + -1;
        *(int *)(param_1 + 0x1908) = iVar4;
        FUN_005c25d0(iVar2 * 0x20 + iVar5,iVar2 * 0x20 + 0x20 + iVar5,(iVar4 - iVar2) * 0x20);
        return;
      }
    }
    else if (iVar2 < 0) {
      if (0x27 < *(int *)(param_1 + 0x1908)) {
        iVar2 = FUN_005c157c("events.txt",&DAT_005deb4e);
        if (iVar2 != 0) {
          iVar4 = 0;
          if (0 < *(int *)(param_1 + 0x1908)) {
            do {
              iVar4 = iVar4 + 1;
              FUN_005c03c0(iVar2,&DAT_005deb5c,iVar5);
              iVar5 = iVar5 + 0x20;
            } while (iVar4 < *(int *)(param_1 + 0x1908));
          }
          FUN_005c0d10(iVar2);
        }
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xd8e;
        FUN_005030e0("Too many game flags - check events.txt!");
      }
      uVar3 = 0xffffffff;
      pcVar6 = param_2;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      if (0x1f < ~uVar3 - 1) {
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xd94;
        FUN_005030e0("Event name %s too long!",param_2);
      }
      pcVar6 = (char *)(*(int *)(param_1 + 0x1908) * 0x20 + param_1 + 0x190c);
      do {
        cVar1 = *param_2;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = param_2[1];
        param_2 = param_2 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      FUN_005c2c20(*(int *)(param_1 + 0x1908) * 0x20 + param_1 + 0x190c);
      *(int *)(param_1 + 0x1908) = *(int *)(param_1 + 0x1908) + 1;
      return;
    }
  }
  return;
}
