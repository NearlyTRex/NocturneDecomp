// Name: FUN_004946f0
// Address: 004946f0
// Address Range: [[004946f0, 00494876]]
// Convention: unknown
// Signature: void FUN_004946f0(int param_1,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004946f0(int param_1,char *param_2,int param_3)

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
    iVar2 = FUN_00494d30(param_1,param_2);
    iVar5 = param_1 + 0x2590;
    if (param_3 == 0) {
      if (-1 < iVar2) {
        iVar4 = *(int *)(param_1 + 0x258c) + -1;
        *(int *)(param_1 + 0x258c) = iVar4;
        FUN_005a54c0(iVar2 * 0x20 + iVar5,iVar2 * 0x20 + 0x20 + iVar5,(iVar4 - iVar2) * 0x20);
        return;
      }
    }
    else if (iVar2 < 0) {
      if (99 < *(int *)(param_1 + 0x258c)) {
        iVar2 = FUN_005a43ec("events.txt",&DAT_005bfdf0);
        if (iVar2 != 0) {
          iVar4 = 0;
          if (0 < *(int *)(param_1 + 0x258c)) {
            do {
              iVar4 = iVar4 + 1;
              FUN_005a3140(iVar2,&DAT_005bfdfe,iVar5);
              iVar5 = iVar5 + 0x20;
            } while (iVar4 < *(int *)(param_1 + 0x258c));
          }
          FUN_005a3a90(iVar2);
        }
        _DAT_01d71de0 = "..\\core\\event.cpp";
        _DAT_01d71de4 = 0xdea;
        FUN_004e4330("Too many persistent events - check events.txt");
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
        _DAT_01d71de0 = "..\\core\\event.cpp";
        _DAT_01d71de4 = 0xdf0;
        FUN_004e4330("Event name %s too long!",param_2);
      }
      pcVar6 = (char *)(*(int *)(param_1 + 0x258c) * 0x20 + param_1 + 0x2590);
      do {
        cVar1 = *param_2;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = param_2[1];
        param_2 = param_2 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      FUN_005a5b10(*(int *)(param_1 + 0x258c) * 0x20 + param_1 + 0x2590);
      *(int *)(param_1 + 0x258c) = *(int *)(param_1 + 0x258c) + 1;
      return;
    }
  }
  return;
}
