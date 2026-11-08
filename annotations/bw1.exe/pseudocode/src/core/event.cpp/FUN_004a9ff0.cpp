// Name: FUN_004a9ff0
// Address: 004a9ff0
// Address Range: [[004a9ff0, 004aa1ca]]
// Convention: unknown
// Signature: void FUN_004a9ff0(int param_1,char *param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a9ff0(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  
  if ((param_3 != (char *)0x0) && (*param_3 == '\0')) {
    _DAT_01d1d400 = "..\\core\\event.cpp";
    _DAT_01d1d404 = 0xe82;
    uVar3 = FUN_00408830(param_3);
    FUN_005030e0("Tried to assign actor var %s an actor of type %s with no name",param_2,uVar3);
  }
  iVar4 = FUN_004aa240(param_1,param_2);
  if (iVar4 < 0) {
    if (param_3 != (char *)0x0) {
      if (0x18 < *(int *)(param_1 + 0x34e8)) {
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xe8f;
        FUN_005030e0("CEventList::setActorVariable - already too many actor variables.  Max is %d.",0x19);
      }
      pcVar6 = (char *)(param_1 + 0x34ec + *(int *)(param_1 + 0x34e8) * 0x1e);
      do {
        cVar1 = *param_2;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = param_2[1];
        param_2 = param_2 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar6 = (char *)(param_1 + 0x37da + *(int *)(param_1 + 0x34e8) * 0x1e);
      do {
        cVar1 = *param_3;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = param_3[1];
        param_3 = param_3 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      *(int *)(param_1 + 0x34e8) = *(int *)(param_1 + 0x34e8) + 1;
      return;
    }
  }
  else {
    pcVar5 = (char *)(param_1 + 0x37da + iVar4 * 0x1e);
    pcVar6 = (char *)(param_1 + 0x34ec + iVar4 * 0x1e);
    if (param_3 == (char *)0x0) {
      iVar7 = *(int *)(param_1 + 0x34e8) + -1;
      *(int *)(param_1 + 0x34e8) = iVar7;
      iVar2 = (iVar4 + 1) * 0x1e;
      FUN_005c25d0(pcVar6,param_1 + 0x34ec + iVar2,(iVar7 - iVar4) * 0x1e);
      FUN_005c25d0(pcVar5,iVar2 + param_1 + 0x37da,(*(int *)(param_1 + 0x34e8) - iVar4) * 0x1e);
      return;
    }
    do {
      cVar1 = *param_2;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    do {
      cVar1 = *param_3;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = param_3[1];
      param_3 = param_3 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  return;
}
