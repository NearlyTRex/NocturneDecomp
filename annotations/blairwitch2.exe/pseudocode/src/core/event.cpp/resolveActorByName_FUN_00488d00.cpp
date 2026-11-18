// Name: core_event.cpp_resolveActorByName_FUN_00488d00
// Address: 00488d00
// Address Range: [[00488d00, 00488e2c]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_00488d00(char *name,uint class_hash,char *class_name)

#include "nocturne.h"

CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_00488d00(char *name,uint class_hash,char *class_name)

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
    actor_ptr = (CHero *)core_event_cpp_CEventList_getActorByVarName_FUN_00491860
                                   (g_CEventListPtr,name);
  }
  else {
    iVar2 = _stricmp(name,"$");
    if (iVar2 != 0) {
      actor_ptr = (CHero *)core_mission_cpp_CDemonMission_findActorByName_FUN_004fc740
                                     (g_CDemonMission_PTR_00618170,name);
      if (actor_ptr == (CHero *)0x0) {
        _sprintf(g_EventErrorMessageBuffer,"Actor \"%s\" does not exist.");
        return (CDemonActor *)0x0;
      }
      goto LAB_00488d8f;
    }
    if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
      _sprintf(g_EventErrorMessageBuffer,"Can't use '$' actor specifier in multi-player");
      return (CDemonActor *)0x0;
    }
    actor_ptr = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
  }
  if (actor_ptr == (CHero *)0x0) {
    return g_ActorNameSentinel;
  }
LAB_00488d8f:
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040c8c0((CDemonActor *)actor_ptr,class_hash);
  if (iVar2 != 0) {
    return (CDemonActor *)actor_ptr;
  }
  if (*name == '@') {
    return g_ActorNameSentinel;
  }
  core_actor_cpp_CDemonActor_getActorClassName_FUN_00408a50((CDemonActor *)actor_ptr);
  _sprintf(g_EventErrorMessageBuffer,"Actor \"%s\" is of type %s, this command requires an actor of type %s.");
  return (CDemonActor *)0x0;
}
