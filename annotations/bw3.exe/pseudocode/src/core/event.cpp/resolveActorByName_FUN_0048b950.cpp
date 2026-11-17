// Name: core_event.cpp_resolveActorByName_FUN_0048b950
// Address: 0048b950
// Address Range: [[0048b950, 0048ba7c]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_0048b950(char *name,uint class_hash,char *class_name)

#include "nocturne.h"

CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_0048b950(char *name,uint class_hash,char *class_name)

{
  char cVar1;
  CHero *actor_ptr;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((name == (char *)0x0) || (*name == '\0')) {
    pcVar3 = "Must specify actor name";
    pcVar4 = g_CHAR_ARRAY_01c734b0;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') {
        return (CDemonActor *)0x0;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    return (CDemonActor *)0x0;
  }
  if (*name == '@') {
    actor_ptr = (CHero *)core_event_cpp_CEventList_getActorByVarName_FUN_00495050
                                   (g_CEventList_PTR_005fba60,name);
  }
  else {
    iVar2 = _stricmp(name,"$");
    if (iVar2 != 0) {
      actor_ptr = (CHero *)core_mission_cpp_CDemonMission_findActorByName_FUN_004f6e90
                                     (g_CDemonMission_PTR_00600530,name);
      if (actor_ptr == (CHero *)0x0) {
        _sprintf(g_CHAR_ARRAY_01c734b0,"Actor \"%s\" does not exist.");
        return (CDemonActor *)0x0;
      }
      goto LAB_0048b9df;
    }
    if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
      _sprintf(g_CHAR_ARRAY_01c734b0,"Can't use '$' actor specifier in multi-player");
      return (CDemonActor *)0x0;
    }
    actor_ptr = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
  }
  if (actor_ptr == (CHero *)0x0) {
    return g_CDemonActor_PTR_005df604;
  }
LAB_0048b9df:
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040c810((CDemonActor *)actor_ptr,class_hash);
  if (iVar2 != 0) {
    return (CDemonActor *)actor_ptr;
  }
  if (*name == '@') {
    return g_CDemonActor_PTR_005df604;
  }
  core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870((CDemonActor *)actor_ptr);
  _sprintf(g_CHAR_ARRAY_01c734b0,"Actor \"%s\" is of type %s, this command requires an actor of type %s.");
  return (CDemonActor *)0x0;
}
