// Name: core_event.cpp_CEventList_getActorByVarName_FUN_004b0b80
// Address: 004b0b80
// Address Range: [[004b0b80, 004b0bee]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_event_cpp_CEventList_getActorByVarName_FUN_004b0b80(CEventList *this_ptr,char *name)

#include "nocturne.h"

CDemonActor * __cdecl core_event_cpp_CEventList_getActorByVarName_FUN_004b0b80(CEventList *this_ptr,char *name)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = core_event_cpp_CEventList_findActorVariable_FUN_004b0bf0(this_ptr,name);
  if (-1 < iVar1) {
    iVar3 = 0;
    for (iVar4 = 0; iVar4 < (int)g_CDemonSetPtr->actor_list_ptr; iVar4 = iVar4 + 1) {
      iVar2 = stricmp
                        (*(char **)(g_CDemonSetPtr->actor_list_data + iVar3),
                         (this_ptr->actor_vars).actor_names[iVar1]);
      if (iVar2 == 0) {
        return *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar3);
      }
      iVar3 = iVar3 + 4;
    }
  }
  return (CDemonActor *)0x0;
}
