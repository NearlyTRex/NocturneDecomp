// Name: core_event.cpp_CEventList_findActorVariable_FUN_004aa240
// Address: 004aa240
// Address Range: [[004aa240, 004aa28a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_findActorVariable_FUN_004aa240(CEventList *this_ptr,char *name)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_findActorVariable_FUN_004aa240(CEventList *this_ptr,char *name)

{
  int iVar1;
  int iVar2;
  CEventList *str1;
  
  iVar2 = 0;
  if (0 < *(int *)(this_ptr + 0x34e8)) {
    str1 = this_ptr + 0x34ec;
    do {
      iVar1 = _stricmp((char *)str1,name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x1e;
    } while (iVar2 < *(int *)(this_ptr + 0x34e8));
  }
  return -1;
}
