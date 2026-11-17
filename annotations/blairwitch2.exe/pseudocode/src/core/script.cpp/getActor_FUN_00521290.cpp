// Name: core_script.cpp_getActor_FUN_00521290
// Address: 00521290
// Address Range: [[00521290, 0052140d]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_script_cpp_getActor_FUN_00521290(char *actor_specifier,uint expected_class_hash,CDemonActorType *expected_class)

#include "nocturne.h"

CDemonActor * __cdecl core_script_cpp_getActor_FUN_00521290(char *actor_specifier,uint expected_class_hash,CDemonActorType *expected_class)

{
  char cVar1;
  int iVar2;
  CHero *actor_ptr;
  char *pcVar3;
  char *pcVar4;
  
  g_ActorLookedUpByVariable = 0;
  if ((actor_specifier == (char *)0x0) || (*actor_specifier == '\0')) {
    pcVar3 = "Must specify actor name";
    pcVar4 = g_CHAR_ARRAY_01e65100;
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
  if (*actor_specifier == '@') {
    iVar2 = core_script_cpp_validateActorVariableName_FUN_00520fd0(actor_specifier);
    if (iVar2 == 0) {
      return (CDemonActor *)0x0;
    }
    g_ActorLookedUpByVariable = 1;
    actor_ptr = (CHero *)core_event_cpp_CEventList_getActorByVarName_FUN_00491860
                                   (g_CEventListPtr,actor_specifier);
    if (actor_ptr == (CHero *)0x0) {
      _sprintf(g_CHAR_ARRAY_01e65100,"Actor variable %s not defined, or doesn't reference an existing actor");
      return (CDemonActor *)0x0;
    }
  }
  else {
    iVar2 = _stricmp(actor_specifier,"$");
    if (iVar2 == 0) {
      if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
        _sprintf(g_CHAR_ARRAY_01e65100,"Can't use '$' actor specifier in multi-player");
        return (CDemonActor *)0x0;
      }
      actor_ptr = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
      if (actor_ptr == (CHero *)0x0) {
        g_ActorLookedUpByVariable = 1;
        _sprintf(g_CHAR_ARRAY_01e65100,"Hero doesn't exist!!?!");
        return (CDemonActor *)0x0;
      }
    }
    else {
      actor_ptr = (CHero *)core_mission_cpp_CDemonMission_findActorByName_FUN_004fc740
                                     (g_CDemonMission_PTR_00618170,actor_specifier);
      if (actor_ptr == (CHero *)0x0) {
        _sprintf(g_CHAR_ARRAY_01e65100,"Actor \"%s\" does not exist.");
        return (CDemonActor *)0x0;
      }
    }
  }
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040c8c0((CDemonActor *)actor_ptr,expected_class_hash);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_getActorClassName_FUN_00408a50((CDemonActor *)actor_ptr);
    _sprintf(g_CHAR_ARRAY_01e65100,"Actor \"%s\" is of type %s, this command requires an actor of type %s.");
    return (CDemonActor *)0x0;
  }
  return (CDemonActor *)actor_ptr;
}
