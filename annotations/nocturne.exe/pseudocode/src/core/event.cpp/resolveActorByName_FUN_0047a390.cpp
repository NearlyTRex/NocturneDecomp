// Name: core_event.cpp_resolveActorByName_FUN_0047a390
// Address: 0047a390
// Address Range: [[0047a390, 0047a4bc]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_0047a390(char *name,uint class_hash,char *class_name)

#include "nocturne.h"

CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_0047a390(char *name,uint class_hash,char *class_name)

{
  char cVar1;
  CHero *actor_ptr;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((name == (char *)0x0) || (*name == '\0')) {
    pcVar3 = "Must specify actor name";
    pcVar4 = &DAT_01c08b60;
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
    actor_ptr = (CHero *)core_event_cpp_CEventList_getActorByVarName_FUN_00480b30(0x01C03A10,name)
    ;
  }
  else {
    iVar2 = _stricmp(name,"$");
    if (iVar2 != 0) {
      actor_ptr = (CHero *)core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0
                                     (g_CDemonMission_PTR_005baf90,name);
      if (actor_ptr == (CHero *)0x0) {
        _sprintf(&DAT_01c08b60,"Actor \"%s\" does not exist.",name);
        return (CDemonActor *)0x0;
      }
      goto LAB_0047a41f;
    }
    if (g_CNetGame_PTR_005bdee0->connection_type != CONNECTION_NONE) {
      _sprintf(&DAT_01c08b60,"Can't use '$' actor specifier in multi-player");
      return (CDemonActor *)0x0;
    }
    actor_ptr = g_HeroActors[g_LocalHeroIndex];
  }
  if (actor_ptr == (CHero *)0x0) {
    return 0x0FFFFFFF;
  }
LAB_0047a41f:
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040d860((CDemonActor *)actor_ptr,class_hash);
  if (iVar2 != 0) {
    return (CDemonActor *)actor_ptr;
  }
  if (*name == '@') {
    return 0x0FFFFFFF;
  }
  pcVar3 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0((CDemonActor *)actor_ptr);
  _sprintf(&DAT_01c08b60,"Actor \"%s\" is of type %s, this command requires an actor of type %s.",name,pcVar3,class_name);
  return (CDemonActor *)0x0;
}
