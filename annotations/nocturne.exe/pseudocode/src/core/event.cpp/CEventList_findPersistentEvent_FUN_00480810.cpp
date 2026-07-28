// Name: core_event.cpp_CEventList_findPersistentEvent_FUN_00480810
// Address: 00480810
// Address Range: [[00480810, 0048085a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_findPersistentEvent_FUN_00480810(CEventList *this_ptr,char *name)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_findPersistentEvent_FUN_00480810(CEventList *this_ptr,char *name)

{
  int iVar1;
  int iVar2;
  char (*str1) [32];
  
  iVar2 = 0;
  if (0 < (this_ptr->persistent_events).count) {
    str1 = (this_ptr->persistent_events).names;
    do {
      iVar1 = _stricmp(*str1,name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < (this_ptr->persistent_events).count);
  }
  return -1;
}
