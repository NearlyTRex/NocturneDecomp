// Name: core_event.cpp_CEventList_setActorVariable_FUN_00480950
// Address: 00480950
// Address Range: [[00480950, 00480b2a]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setActorVariable_FUN_00480950(int param_1,char *param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_event_cpp_CEventList_setActorVariable_FUN_00480950(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  
  if ((param_3 != (char *)0x0) && (*param_3 == '\0')) {
    _DAT_01cc4800 = "..\\core\\event.cpp";
    _DAT_01cc4804 = 0xb2b;
    uVar3 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(param_3);
    FUN_004c8440("Tried to assign actor var %s an actor of type %s with no name",param_2,uVar3);
  }
  iVar4 = core_event_cpp_CEventList_findActorVariable_FUN_00480ba0(param_1,param_2);
  if (iVar4 < 0) {
    if (param_3 != (char *)0x0) {
      if (0x18 < *(int *)(param_1 + 0x34e8)) {
        _DAT_01cc4800 = "..\\core\\event.cpp";
        _DAT_01cc4804 = 0xb38;
        FUN_004c8440("CEventList::setActorVariable - already too many actor variables.  Max is %d.",0x19);
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
      memmove(pcVar6,param_1 + 0x34ec + iVar2,(iVar7 - iVar4) * 0x1e);
      memmove
                (pcVar5,iVar2 + param_1 + 0x37da,(*(int *)(param_1 + 0x34e8) - iVar4) * 0x1e);
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
