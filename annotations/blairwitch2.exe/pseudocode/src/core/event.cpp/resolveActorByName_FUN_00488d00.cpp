// Name: core_event.cpp_resolveActorByName_FUN_00488d00
// Address: 00488d00
// Address Range: [[00488d00, 00488e2c]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_00488d00(char *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_00488d00(char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  CDemonActor *pCVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    pcVar5 = "Must specify actor name";
    pcVar6 = &DAT_01c3dd10;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') {
        return (CDemonActor *)0x0;
      }
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    return (CDemonActor *)0x0;
  }
  if (*param_1 == '@') {
    pCVar2 = core_event_cpp_CEventList_getActorByVarName_FUN_00491860(0x01C38BC0,param_1);
  }
  else {
    iVar3 = _stricmp(param_1,&DAT_005d2e56);
    if (iVar3 != 0) {
      pCVar2 = core_mission_cpp_FUN_004fc740(0x01D182F0,param_1);
      if (pCVar2 == (CDemonActor *)0x0) {
        FUN_005b7790(&DAT_01c3dd10,"Actor \"%s\" does not exist.",param_1);
        return (CDemonActor *)0x0;
      }
      goto LAB_00488d8f;
    }
    if (*(int *)g_CNetGamePtr != 0) {
      FUN_005b7790(&DAT_01c3dd10,"Can't use '$' actor specifier in multi-player");
      return (CDemonActor *)0x0;
    }
    pCVar2 = *(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4);
  }
  if (pCVar2 == (CDemonActor *)0x0) {
    return 0x0FFFFFFF;
  }
LAB_00488d8f:
  iVar3 = core_actor_cpp_isOfClassHash_FUN_0040c8c0(pCVar2,param_2);
  if (iVar3 != 0) {
    return pCVar2;
  }
  if (*param_1 == '@') {
    return 0x0FFFFFFF;
  }
  uVar4 = core_actor_cpp_FUN_00408a50(pCVar2,param_3);
  FUN_005b7790(&DAT_01c3dd10,"Actor \"%s\" is of type %s, this command requires an actor of type %s.",param_1,uVar4);
  return (CDemonActor *)0x0;
}
