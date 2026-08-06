// Name: core_script.cpp_getActor_FUN_004fe180
// Address: 004fe180
// Address Range: [[004fe180, 004fe2fd]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_script_cpp_getActor_FUN_004fe180(char *actor_specifier,uint expected_class_hash,CDemonActorType *expected_class)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * __cdecl core_script_cpp_getActor_FUN_004fe180(char *actor_specifier,uint expected_class_hash,CDemonActorType *expected_class)

{
  char cVar1;
  int iVar2;
  CDemonActor *actor_ptr;
  char *pcVar3;
  char *pcVar4;
  
  _DAT_01e56c2c = 0;
  if ((actor_specifier == (char *)0x0) || (*actor_specifier == '\0')) {
    pcVar3 = "Must specify actor name";
    pcVar4 = &DAT_01e56420;
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
    iVar2 = core_script_cpp_validateActorVariableName_FUN_004fdec0(actor_specifier);
    if (iVar2 == 0) {
      return (CDemonActor *)0x0;
    }
    _DAT_01e56c2c = 1;
    actor_ptr = core_event_cpp_CEventList_getActorByVarName_FUN_00480b30
                          (0x01C03A10,actor_specifier);
    if (actor_ptr == (CDemonActor *)0x0) {
      _sprintf(&DAT_01e56420,"Actor variable %s not defined, or doesn't reference an existing actor",actor_specifier);
      return (CDemonActor *)0x0;
    }
  }
  else {
    iVar2 = _stricmp(actor_specifier,"$");
    if (iVar2 == 0) {
      if (g_CNetGame_PTR_005bdee0->connection_type != CONNECTION_NONE) {
        _sprintf(&DAT_01e56420,"Can't use '$' actor specifier in multi-player");
        return (CDemonActor *)0x0;
      }
      actor_ptr = *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      if (actor_ptr == (CDemonActor *)0x0) {
        _DAT_01e56c2c = 1;
        _sprintf(&DAT_01e56420,"Hero doesn't exist!!?!");
        return (CDemonActor *)0x0;
      }
    }
    else {
      actor_ptr = core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0
                            (g_CDemonMission_PTR_005baf90,actor_specifier);
      if (actor_ptr == (CDemonActor *)0x0) {
        _sprintf(&DAT_01e56420,"Actor \"%s\" does not exist.",actor_specifier);
        return (CDemonActor *)0x0;
      }
    }
  }
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040d860(actor_ptr,expected_class_hash);
  if (iVar2 == 0) {
    pcVar3 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(actor_ptr);
    _sprintf(&DAT_01e56420,"Actor \"%s\" is of type %s, this command requires an actor of type %s.",actor_specifier,pcVar3,
               expected_class);
    return (CDemonActor *)0x0;
  }
  return actor_ptr;
}
