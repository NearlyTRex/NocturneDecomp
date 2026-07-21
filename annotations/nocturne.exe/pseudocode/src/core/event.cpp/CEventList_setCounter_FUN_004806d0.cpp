// Name: core_event.cpp_CEventList_setCounter_FUN_004806d0
// Address: 004806d0
// Address Range: [[004806d0, 004807d4]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setCounter_FUN_004806d0(int param_1,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_event_cpp_CEventList_setCounter_FUN_004806d0(int param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar3 = core_event_cpp_CEventList_findCounter_FUN_00480900(param_1,param_2);
  if (iVar3 < 0) {
    if (param_3 != 0) {
      if (9 < *(int *)(param_1 + 0x337c)) {
        _DAT_01cc4800 = "..\\core\\event.cpp";
        _DAT_01cc4804 = 0xab2;
        FUN_004c8440("CEventList::setCounter - too many counters!");
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
      memmove
                (iVar3 * 0x20 + param_1 + 0x3380,iVar3 * 0x20 + 0x20 + param_1 + 0x3380,
                 (iVar4 - iVar3) * 0x20);
      memmove
                (param_1 + 0x34c0 + iVar1,iVar1 + 4 + param_1 + 0x34c0,
                 (*(int *)(param_1 + 0x337c) - iVar3) * 4);
      return;
    }
    *(int *)(iVar1 + 0x34c0 + param_1) = param_3;
  }
  return;
}
