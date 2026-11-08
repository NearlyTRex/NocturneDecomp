// Name: FUN_004a9d70
// Address: 004a9d70
// Address Range: [[004a9d70, 004a9e74]]
// Convention: unknown
// Signature: void FUN_004a9d70(int param_1,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a9d70(int param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar3 = FUN_004a9fa0(param_1,param_2);
  if (iVar3 < 0) {
    if (param_3 != 0) {
      if (9 < *(int *)(param_1 + 0x337c)) {
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xe09;
        FUN_005030e0("CEventList::setCounter - too many counters!");
      }
      pcVar5 = (char *)(param_1 + 0x3380 + *(int *)(param_1 + 0x337c) * 0x20);
      do {
        cVar2 = *param_2;
        *pcVar5 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = param_2[1];
        param_2 = param_2 + 2;
        pcVar5[1] = cVar2;
        pcVar5 = pcVar5 + 2;
      } while (cVar2 != '\0');
      *(int *)(param_1 + 0x34c0 + *(int *)(param_1 + 0x337c) * 4) = param_3;
      *(int *)(param_1 + 0x337c) = *(int *)(param_1 + 0x337c) + 1;
      return;
    }
  }
  else {
    iVar1 = iVar3 * 4;
    if (param_3 == 0) {
      iVar4 = *(int *)(param_1 + 0x337c) + -1;
      *(int *)(param_1 + 0x337c) = iVar4;
      FUN_005c25d0(iVar3 * 0x20 + param_1 + 0x3380,iVar3 * 0x20 + 0x20 + param_1 + 0x3380,
                   (iVar4 - iVar3) * 0x20);
      FUN_005c25d0(param_1 + 0x34c0 + iVar1,iVar1 + 4 + param_1 + 0x34c0,
                   (*(int *)(param_1 + 0x337c) - iVar3) * 4);
      return;
    }
    *(int *)(iVar1 + 0x34c0 + param_1) = param_3;
  }
  return;
}
