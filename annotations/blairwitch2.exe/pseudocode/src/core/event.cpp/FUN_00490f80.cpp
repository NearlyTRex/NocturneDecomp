// Name: FUN_00490f80
// Address: 00490f80
// Address Range: [[00490f80, 004910a3]]
// Convention: unknown
// Signature: void FUN_00490f80(int param_1,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00490f80(int param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar2 = FUN_00491540(param_1,param_2);
    if (param_3 == 0) {
      if (-1 < iVar2) {
        iVar4 = *(int *)(param_1 + 0x258c) + -1;
        *(int *)(param_1 + 0x258c) = iVar4;
        FUN_005ba1f0(iVar2 * 0x20 + param_1 + 0x2590,iVar2 * 0x20 + 0x20 + param_1 + 0x2590,
                     (iVar4 - iVar2) * 0x20);
        return;
      }
    }
    else if (iVar2 < 0) {
      if (99 < *(int *)(param_1 + 0x258c)) {
        _DAT_01d046a0 = "..\\core\\event.cpp";
        _DAT_01d046a4 = 0xcee;
        FUN_004e4500("Too many persistent events!");
      }
      uVar3 = 0xffffffff;
      pcVar5 = param_2;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
      } while (cVar1 != '\0');
      if (0x1f < ~uVar3 - 1) {
        _DAT_01d046a0 = "..\\core\\event.cpp";
        _DAT_01d046a4 = 0xcf4;
        FUN_004e4500("Event name %s too long!",param_2);
      }
      pcVar5 = (char *)(*(int *)(param_1 + 0x258c) * 0x20 + param_1 + 0x2590);
      do {
        cVar1 = *param_2;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = param_2[1];
        param_2 = param_2 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      FUN_005ba840(param_1 + 0x2590 + *(int *)(param_1 + 0x258c) * 0x20);
      *(int *)(param_1 + 0x258c) = *(int *)(param_1 + 0x258c) + 1;
      return;
    }
  }
  return;
}
