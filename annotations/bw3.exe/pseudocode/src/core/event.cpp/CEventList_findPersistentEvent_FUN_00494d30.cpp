// Name: core_event.cpp_CEventList_findPersistentEvent_FUN_00494d30
// Address: 00494d30
// Address Range: [[00494d30, 00494d7a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_findPersistentEvent_FUN_00494d30(CEventList *this_ptr,char *name)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_findPersistentEvent_FUN_00494d30(CEventList *this_ptr,char *name)

{
  int iVar1;
  int iVar2;
  CEventList *str1;
  
  iVar2 = 0;
  if (0 < *(int *)(this_ptr + 0x258c)) {
    str1 = this_ptr + 0x2590;
    do {
      iVar1 = _stricmp((char *)str1,name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x20;
    } while (iVar2 < *(int *)(this_ptr + 0x258c));
  }
  return -1;
}
