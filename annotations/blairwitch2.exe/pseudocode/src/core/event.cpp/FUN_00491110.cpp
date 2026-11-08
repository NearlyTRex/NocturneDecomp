// Name: FUN_00491110
// Address: 00491110
// Address Range: [[00491110, 00491233]]
// Convention: unknown
// Signature: void FUN_00491110(int param_1,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00491110(int param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar2 = FUN_00491590(param_1,param_2);
    if (param_3 == 0) {
      if (-1 < iVar2) {
        iVar4 = *(int *)(param_1 + 0x1908) + -1;
        *(int *)(param_1 + 0x1908) = iVar4;
        FUN_005ba1f0(iVar2 * 0x20 + param_1 + 0x190c,iVar2 * 0x20 + 0x20 + param_1 + 0x190c,
                     (iVar4 - iVar2) * 0x20);
        return;
      }
    }
    else if (iVar2 < 0) {
      if (9 < *(int *)(param_1 + 0x1908)) {
        _DAT_01d046a0 = "..\\core\\event.cpp";
        _DAT_01d046a4 = 0xd3d;
        FUN_004e4500("Too many game flags!");
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
        _DAT_01d046a4 = 0xd43;
        FUN_004e4500("Event name %s too long!",param_2);
      }
      pcVar5 = (char *)(*(int *)(param_1 + 0x1908) * 0x20 + param_1 + 0x190c);
      do {
        cVar1 = *param_2;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = param_2[1];
        param_2 = param_2 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      FUN_005ba840(param_1 + 0x190c + *(int *)(param_1 + 0x1908) * 0x20);
      *(int *)(param_1 + 0x1908) = *(int *)(param_1 + 0x1908) + 1;
      return;
    }
  }
  return;
}
