// Name: core_event.cpp_CEventList_getActorByVarName_FUN_00480b30
// Address: 00480b30
// Address Range: [[00480b30, 00480b9e]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_event_cpp_CEventList_getActorByVarName_FUN_00480b30(CEventList *this_ptr,char *name)

#include "nocturne.h"

CDemonActor * __cdecl core_event_cpp_CEventList_getActorByVarName_FUN_00480b30(CEventList *this_ptr,char *name)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = core_event_cpp_CEventList_findActorVariable_FUN_00480ba0(this_ptr,name);
  if (-1 < iVar1) {
    iVar3 = 0;
    for (iVar4 = 0; iVar4 < *(int *)(0x01E57284 + 0x14cd6c); iVar4 = iVar4 + 1) {
      iVar2 = _stricmp
                        (*(char **)(iVar3 + 0x14cd70 + 0x01E57284),
                         (this_ptr->actor_vars).actor_names[iVar1]);
      if (iVar2 == 0) {
        return *(CDemonActor **)(iVar3 + 0x14cd70 + 0x01E57284);
      }
      iVar3 = iVar3 + 4;
    }
  }
  return (CDemonActor *)0x0;
}
