// Name: core_event.cpp_CEventList_findActorVariable_FUN_004b0bf0
// Address: 004b0bf0
// Address Range: [[004b0bf0, 004b0c3a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_findActorVariable_FUN_004b0bf0(CEventList *this_ptr,char *name)

#include "nocturne.h"

int __cdecl
core_event_cpp_CEventList_findActorVariable_FUN_004b0bf0(CEventList *this_ptr,char *name)

{
  int iVar1;
  int iVar2;
  char (*str1) [30];
  
  iVar2 = 0;
  if (0 < (this_ptr->actor_vars).count) {
    str1 = (this_ptr->actor_vars).var_names;
    do {
      iVar1 = stricmp(*str1,name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < (this_ptr->actor_vars).count);
  }
  return -1;
}
