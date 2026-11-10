// Name: core_script.cpp_getActor_FUN_00521290
// Address: 00521290
// Address Range: [[00521290, 0052140d]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_script_cpp_getActor_FUN_00521290(char *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * __cdecl core_script_cpp_getActor_FUN_00521290(char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  char *pcVar5;
  
  _DAT_01e6590c = 0;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    pcVar4 = "Must specify actor name";
    pcVar5 = &DAT_01e65100;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') {
        return (CDemonActor *)0x0;
      }
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    return (CDemonActor *)0x0;
  }
  if (*param_1 == '@') {
    iVar2 = core_script_cpp_validateActorVariableName_FUN_00520fd0(param_1);
    if (iVar2 == 0) {
      return (CDemonActor *)0x0;
    }
    _DAT_01e6590c = 1;
    pCVar3 = core_event_cpp_CEventList_getActorByVarName_FUN_00491860(0x01C38BC0,param_1);
    if (pCVar3 == (CDemonActor *)0x0) {
      _sprintf(&DAT_01e65100,"Actor variable %s not defined, or doesn't reference an existing actor");
      return (CDemonActor *)0x0;
    }
  }
  else {
    iVar2 = _stricmp(param_1,&DAT_005e2d27);
    if (iVar2 == 0) {
      if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
        _sprintf(&DAT_01e65100,"Can't use '$' actor specifier in multi-player");
        return (CDemonActor *)0x0;
      }
      pCVar3 = *(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4);
      if (pCVar3 == (CDemonActor *)0x0) {
        _DAT_01e6590c = 1;
        _sprintf(&DAT_01e65100,"Hero doesn't exist!!?!");
        return (CDemonActor *)0x0;
      }
    }
    else {
      pCVar3 = core_mission_cpp_CDemonMission_findActorByName_FUN_004fc740(0x01D182F0,param_1);
      if (pCVar3 == (CDemonActor *)0x0) {
        _sprintf(&DAT_01e65100,"Actor \"%s\" does not exist.");
        return (CDemonActor *)0x0;
      }
    }
  }
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040c8c0(pCVar3,param_2);
  if (iVar2 == 0) {
    core_actor_cpp_FUN_00408a50(pCVar3,param_3);
    _sprintf(&DAT_01e65100,"Actor \"%s\" is of type %s, this command requires an actor of type %s.");
    return (CDemonActor *)0x0;
  }
  return pCVar3;
}
