// Name: core_event.cpp_CEventList_resolveVariable_FUN_004adc10
// Address: 004adc10
// Address Range: [[004adc10, 004adc96]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_resolveVariable_FUN_004adc10(CEventList *this_ptr,char *identifier)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_resolveVariable_FUN_004adc10(CEventList *this_ptr,char *identifier)

{
  int iVar1;
  int iVar2;
  char (*str1) [32];
  
  iVar1 = stricmp(identifier,"TRUE");
  if (iVar1 != 0) {
    iVar1 = 0;
    if (0 < (this_ptr->current_events).count) {
      str1 = (this_ptr->current_events).names;
      do {
        iVar2 = stricmp(*str1,identifier);
        if (iVar2 == 0) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        str1 = str1 + 1;
      } while (iVar1 < (this_ptr->current_events).count);
    }
    iVar1 = core_event_cpp_CEventList_findPersistentEvent_FUN_004b0860(this_ptr,identifier);
    if (((iVar1 < 0) &&
        (iVar1 = core_event_cpp_CEventList_findGameFlag_FUN_004b08b0(this_ptr,identifier), iVar1 < 0
        )) && (iVar1 = core_event_cpp_CEventList_findTimer_FUN_004b0900(this_ptr,identifier),
              iVar1 < 0)) {
      return 0;
    }
  }
  return 1;
}
