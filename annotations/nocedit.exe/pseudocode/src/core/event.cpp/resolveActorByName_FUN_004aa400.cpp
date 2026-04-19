// Name: core_event.cpp_resolveActorByName_FUN_004aa400
// Address: 004aa400
// Address Range: [[004aa400, 004aa52c]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_004aa400(char *name,uint class_hash,char *class_name)

#include "nocturne.h"

CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_004aa400(char *name,uint class_hash,char *class_name)

{
  char cVar1;
  CDemonActor *actor_ptr;
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
    actor_ptr = core_event_cpp_CEventList_getActorByVarName_FUN_004b0b80(g_CEventListPtr,name);
  }
  else {
    iVar2 = _stricmp(name,"$");
    if (iVar2 != 0) {
      actor_ptr = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030
                            (g_CDemonMissionPtr,name);
      if ((CHero *)actor_ptr == (CHero *)0x0) {
        _sprintf(g_EventErrorMessageBuffer,"Actor \"%s\" does not exist.",name);
        return (CDemonActor *)0x0;
      }
      goto LAB_004aa48f;
    }
    if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
      _sprintf(g_EventErrorMessageBuffer,"Can't use '$' actor specifier in multi-player");
      return (CDemonActor *)0x0;
    }
    actor_ptr = (CDemonActor *)g_HeroActors[g_LocalHeroIndex];
  }
  if ((CHero *)actor_ptr == (CHero *)0x0) {
    return g_ActorNameSentinel;
  }
LAB_004aa48f:
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040c760(actor_ptr,class_hash);
  if (iVar2 != 0) {
    return (CDemonActor *)(CHero *)actor_ptr;
  }
  if (*name == '@') {
    return g_ActorNameSentinel;
  }
  pcVar3 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(actor_ptr);
  _sprintf(g_EventErrorMessageBuffer,"Actor \"%s\" is of type %s, this command requires an actor of type %s.",name,pcVar3,class_name);
  return (CDemonActor *)0x0;
}
