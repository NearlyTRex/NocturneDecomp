// Name: core_event.cpp_CEventList_resolveVariable_FUN_0047dba0
// Address: 0047dba0
// Address Range: [[0047dba0, 0047dc26]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_resolveVariable_FUN_0047dba0(CEventList *this_ptr,char *identifier)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_resolveVariable_FUN_0047dba0(CEventList *this_ptr,char *identifier)

{
  int iVar1;
  int iVar2;
  char (*str1) [32];
  
  iVar1 = _stricmp(identifier,"TRUE");
  if (iVar1 != 0) {
    iVar1 = 0;
    if (0 < (this_ptr->current_events).count) {
      str1 = (this_ptr->current_events).names;
      do {
        iVar2 = _stricmp(*str1,identifier);
        if (iVar2 == 0) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        str1 = str1 + 1;
      } while (iVar1 < (this_ptr->current_events).count);
    }
    iVar1 = core_event_cpp_CEventList_findPersistentEvent_FUN_00480810(this_ptr,identifier);
    if (((iVar1 < 0) &&
        (iVar1 = core_event_cpp_CEventList_findGameFlag_FUN_00480860(this_ptr,identifier), iVar1 < 0
        )) && (iVar1 = core_event_cpp_CEventList_findTimer_FUN_004808b0(this_ptr,identifier),
              iVar1 < 0)) {
      return 0;
    }
  }
  return 1;
}
