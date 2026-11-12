// Name: core_event.cpp_resolveActorByName_FUN_004a1370
// Address: 004a1370
// Address Range: [[004a1370, 004a149c]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_004a1370(char *name,uint class_hash,char *class_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_004a1370(char *name,uint class_hash,char *class_name)

{
  char cVar1;
  CDemonActor *actor_ptr;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((name == (char *)0x0) || (*name == '\0')) {
    pcVar3 = "Must specify actor name";
    pcVar4 = &DAT_01c56ed0;
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
    actor_ptr = core_event_cpp_CEventList_getActorByVarName_FUN_004aa1d0(0x01C51D80,name);
  }
  else {
    iVar2 = _stricmp(name,&DAT_005dcbef);
    if (iVar2 != 0) {
      actor_ptr = core_mission_cpp_CDemonMission_findActorByName_FUN_0051b6c0(0x01D2C900,name);
      if (actor_ptr == (CDemonActor *)0x0) {
        _sprintf(&DAT_01c56ed0,"Actor \"%s\" does not exist.");
        return (CDemonActor *)0x0;
      }
      goto LAB_004a13ff;
    }
    if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
      _sprintf(&DAT_01c56ed0,"Can't use '$' actor specifier in multi-player");
      return (CDemonActor *)0x0;
    }
    actor_ptr = *(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  }
  if (actor_ptr == (CDemonActor *)0x0) {
    return 0x0FFFFFFF;
  }
LAB_004a13ff:
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040c5d0(actor_ptr,class_hash);
  if (iVar2 != 0) {
    return actor_ptr;
  }
  if (*name == '@') {
    return 0x0FFFFFFF;
  }
  core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(actor_ptr);
  _sprintf(&DAT_01c56ed0,"Actor \"%s\" is of type %s, this command requires an actor of type %s.");
  return (CDemonActor *)0x0;
}
