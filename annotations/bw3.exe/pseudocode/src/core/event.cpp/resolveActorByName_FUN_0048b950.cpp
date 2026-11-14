// Name: core_event.cpp_resolveActorByName_FUN_0048b950
// Address: 0048b950
// Address Range: [[0048b950, 0048ba7c]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_0048b950(char *name,uint class_hash,char *class_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_0048b950(char *name,uint class_hash,char *class_name)

{
  char cVar1;
  CDemonActor *actor_ptr;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((name == (char *)0x0) || (*name == '\0')) {
    pcVar3 = "Must specify actor name";
    pcVar4 = &DAT_01c734b0;
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
    actor_ptr = core_event_cpp_CEventList_getActorByVarName_FUN_00495050(0x01C6E360,name);
  }
  else {
    iVar2 = _stricmp(name,&DAT_005bdde3);
    if (iVar2 != 0) {
      actor_ptr = core_mission_cpp_CDemonMission_findActorByName_FUN_004f6e90(0x01D81080,name);
      if (actor_ptr == (CDemonActor *)0x0) {
        _sprintf(&DAT_01c734b0,"Actor \"%s\" does not exist.");
        return (CDemonActor *)0x0;
      }
      goto LAB_0048b9df;
    }
    if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
      _sprintf(&DAT_01c734b0,"Can't use '$' actor specifier in multi-player");
      return (CDemonActor *)0x0;
    }
    actor_ptr = *(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  }
  if (actor_ptr == (CDemonActor *)0x0) {
    return 0x0FFFFFFF;
  }
LAB_0048b9df:
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040c810(actor_ptr,class_hash);
  if (iVar2 != 0) {
    return actor_ptr;
  }
  if (*name == '@') {
    return 0x0FFFFFFF;
  }
  core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(actor_ptr);
  _sprintf(&DAT_01c734b0,"Actor \"%s\" is of type %s, this command requires an actor of type %s.");
  return (CDemonActor *)0x0;
}
