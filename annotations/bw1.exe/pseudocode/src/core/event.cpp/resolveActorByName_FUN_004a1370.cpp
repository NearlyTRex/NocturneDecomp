// Name: core_event.cpp_resolveActorByName_FUN_004a1370
// Address: 004a1370
// Address Range: [[004a1370, 004a149c]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_004a1370(char *name,uint class_hash,char *class_name)

#include "nocturne.h"

CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_004a1370(char *name,uint class_hash,char *class_name)

{
  char cVar1;
  CHero *actor_ptr;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((name == (char *)0x0) || (*name == '\0')) {
    pcVar3 = "Must specify actor name";
    pcVar4 = g_EventErrorMessageBuffer;
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
    actor_ptr = (CHero *)core_event_cpp_CEventList_getActorByVarName_FUN_004aa1d0
                                   (g_CEventListPtr,name);
  }
  else {
    iVar2 = _stricmp(name,"$");
    if (iVar2 != 0) {
      actor_ptr = (CHero *)core_mission_cpp_CDemonMission_findActorByName_FUN_0051b6c0
                                     (g_CDemonMission_PTR_0061f650,name);
      if (actor_ptr == (CHero *)0x0) {
        _sprintf(g_EventErrorMessageBuffer,"Actor \"%s\" does not exist.");
        return (CDemonActor *)0x0;
      }
      goto LAB_004a13ff;
    }
    if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
      _sprintf(g_EventErrorMessageBuffer,"Can't use '$' actor specifier in multi-player");
      return (CDemonActor *)0x0;
    }
    actor_ptr = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
  }
  if (actor_ptr == (CHero *)0x0) {
    return g_ActorNameSentinel;
  }
LAB_004a13ff:
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040c5d0((CDemonActor *)actor_ptr,class_hash);
  if (iVar2 != 0) {
    return (CDemonActor *)actor_ptr;
  }
  if (*name == '@') {
    return g_ActorNameSentinel;
  }
  core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830((CDemonActor *)actor_ptr);
  _sprintf(g_EventErrorMessageBuffer,"Actor \"%s\" is of type %s, this command requires an actor of type %s.");
  return (CDemonActor *)0x0;
}
