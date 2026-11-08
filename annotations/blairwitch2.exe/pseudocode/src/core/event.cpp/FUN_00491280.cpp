// Name: FUN_00491280
// Address: 00491280
// Address Range: [[00491280, 004913f2]]
// Convention: unknown
// Signature: void FUN_00491280(int param_1,char *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00491280(int param_1,char *param_2,float param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  if ((double)param_3 < 0.0) {
    _DAT_01d046a0 = "..\\core\\event.cpp";
    _DAT_01d046a4 = 0xd6f;
    FUN_004e4500("CEventList::setTimerEvent - invalid duration for %s: %f",param_2,(double)param_3);
  }
  iVar3 = FUN_004915e0(param_1,param_2);
  if (iVar3 < 0) {
    if (0.0 < param_3) {
      if (9 < *(int *)(param_1 + 0x3210)) {
        _DAT_01d046a0 = "..\\core\\event.cpp";
        _DAT_01d046a4 = 0xd90;
        FUN_004e4500("CEventList::setTimerEvent - too many timers!");
      }
      pcVar5 = (char *)(*(int *)(param_1 + 0x3210) * 0x20 + param_1 + 0x3214);
      do {
        cVar2 = *param_2;
        *pcVar5 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = param_2[1];
        param_2 = param_2 + 2;
        pcVar5[1] = cVar2;
        pcVar5 = pcVar5 + 2;
      } while (cVar2 != '\0');
      *(float *)(param_1 + 0x3354 + *(int *)(param_1 + 0x3210) * 4) = param_3;
      *(int *)(param_1 + 0x3210) = *(int *)(param_1 + 0x3210) + 1;
      return;
    }
  }
  else {
    iVar1 = iVar3 * 4;
    if (param_3 <= 0.0) {
      iVar4 = *(int *)(param_1 + 0x3210) + -1;
      *(int *)(param_1 + 0x3210) = iVar4;
      FUN_005ba1f0(param_1 + 0x3214 + iVar3 * 0x20,iVar3 * 0x20 + 0x20 + param_1 + 0x3214,
                   (iVar4 - iVar3) * 0x20);
      FUN_005ba1f0(param_1 + 0x3354 + iVar1,iVar1 + 4 + param_1 + 0x3354,
                   (*(int *)(param_1 + 0x3210) - iVar3) * 4);
      return;
    }
    *(float *)(iVar1 + 0x3354 + param_1) = param_3;
  }
  return;
}
