// Name: core_event.cpp_resolveActorByName_FUN_00488d00
// Address: 00488d00
// Address Range: [[00488d00, 00488e2c]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_00488d00(char *name,uint class_hash,char *class_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_00488d00(char *name,uint class_hash,char *class_name)

{
  char cVar1;
  CDemonActor *actor_ptr;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((name == (char *)0x0) || (*name == '\0')) {
    pcVar3 = "Must specify actor name";
    pcVar4 = &DAT_01c3dd10;
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
    actor_ptr = core_event_cpp_CEventList_getActorByVarName_FUN_00491860(0x01C38BC0,name);
  }
  else {
    iVar2 = _stricmp(name,&DAT_005d2e56);
    if (iVar2 != 0) {
      actor_ptr = core_mission_cpp_CDemonMission_findActorByName_FUN_004fc740(0x01D182F0,name);
      if (actor_ptr == (CDemonActor *)0x0) {
        _sprintf(&DAT_01c3dd10,"Actor \"%s\" does not exist.");
        return (CDemonActor *)0x0;
      }
      goto LAB_00488d8f;
    }
    if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
      _sprintf(&DAT_01c3dd10,"Can't use '$' actor specifier in multi-player");
      return (CDemonActor *)0x0;
    }
    actor_ptr = *(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4);
  }
  if (actor_ptr == (CDemonActor *)0x0) {
    return 0x0FFFFFFF;
  }
LAB_00488d8f:
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040c8c0(actor_ptr,class_hash);
  if (iVar2 != 0) {
    return actor_ptr;
  }
  if (*name == '@') {
    return 0x0FFFFFFF;
  }
  core_actor_cpp_FUN_00408a50(actor_ptr,class_name);
  _sprintf(&DAT_01c3dd10,"Actor \"%s\" is of type %s, this command requires an actor of type %s.");
  return (CDemonActor *)0x0;
}
