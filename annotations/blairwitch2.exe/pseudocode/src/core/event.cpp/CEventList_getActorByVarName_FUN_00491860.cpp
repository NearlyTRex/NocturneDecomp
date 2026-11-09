// Name: core_event.cpp_CEventList_getActorByVarName_FUN_00491860
// Address: 00491860
// Address Range: [[00491860, 004918ce]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_event_cpp_CEventList_getActorByVarName_FUN_00491860(CEventList *this_ptr,char *name)

#include "nocturne.h"

CDemonActor * __cdecl core_event_cpp_CEventList_getActorByVarName_FUN_00491860(CEventList *this_ptr,char *name)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = core_event_cpp_CEventList_findActorVariable_FUN_004918d0(this_ptr,name);
  if (-1 < iVar1) {
    iVar3 = 0;
    for (iVar4 = 0; iVar4 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar4 = iVar4 + 1) {
      iVar2 = _stricmp
                        (*(char **)(&g_CDemonSetPtr->field_0x14d168 + iVar3),
                         (char *)(this_ptr + iVar1 * 0x1e + 0x37da));
      if (iVar2 == 0) {
        return *(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + iVar3);
      }
      iVar3 = iVar3 + 4;
    }
  }
  return (CDemonActor *)0x0;
}
