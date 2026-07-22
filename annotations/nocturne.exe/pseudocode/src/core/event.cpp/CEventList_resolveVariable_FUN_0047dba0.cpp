// Name: core_event.cpp_CEventList_resolveVariable_FUN_0047dba0
// Address: 0047dba0
// Address Range: [[0047dba0, 0047dc26]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_event_cpp_CEventList_resolveVariable_FUN_0047dba0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint __cdecl core_event_cpp_CEventList_resolveVariable_FUN_0047dba0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = _stricmp(param_2,"TRUE");
  if (iVar1 != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xc84)) {
      iVar3 = param_1 + 0xc88;
      do {
        iVar2 = _stricmp(iVar3,param_2);
        if (iVar2 == 0) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x20;
      } while (iVar1 < *(int *)(param_1 + 0xc84));
    }
    iVar1 = core_event_cpp_CEventList_findPersistentEvent_FUN_00480810(param_1,param_2);
    if (((iVar1 < 0) &&
        (iVar1 = core_event_cpp_CEventList_findGameFlag_FUN_00480860(param_1,param_2), iVar1 < 0))
       && (iVar1 = core_event_cpp_CEventList_findTimer_FUN_004808b0(param_1,param_2), iVar1 < 0)) {
      return 0;
    }
  }
  return 1;
}
