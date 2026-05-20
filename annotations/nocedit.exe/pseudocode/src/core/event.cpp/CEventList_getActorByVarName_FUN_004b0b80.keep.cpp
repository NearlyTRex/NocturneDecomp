// Name: core_event.cpp_CEventList_getActorByVarName_FUN_004b0b80
// Address: 004b0b80
// MANUAL RECONSTRUCTION
// Address Range: [[004b0b80, 004b0bee]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_event_cpp_CEventList_getActorByVarName_FUN_004b0b80(CEventList *this_ptr,char *name)

#include "nocturne.h"

CDemonActor * __cdecl core_event_cpp_CEventList_getActorByVarName_FUN_004b0b80(CEventList *this_ptr,char *name)

{
  int iVar1;
  int iVar2;
  int iVar4;

  iVar1 = core_event_cpp_CEventList_findActorVariable_FUN_004b0bf0(this_ptr,name);
  if (-1 < iVar1) {
    for (iVar4 = 0; iVar4 < g_CDemonSetPtr->actor_count; iVar4 = iVar4 + 1) {
      iVar2 = _stricmp
                        (g_CDemonSetPtr->actors[iVar4]->actor_name,
                         (this_ptr->actor_vars).actor_names[iVar1]);
      if (iVar2 == 0) {
        return g_CDemonSetPtr->actors[iVar4];
      }
    }
  }
  return (CDemonActor *)0x0;
}
