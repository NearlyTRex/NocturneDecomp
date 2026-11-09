// Name: core_event.cpp_resolveActorByName_FUN_004a1370
// Address: 004a1370
// Address Range: [[004a1370, 004a149c]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_004a1370(char *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_004a1370(char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  CDemonActor *this_ptr;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
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
  if (*param_1 == '@') {
    this_ptr = core_event_cpp_CEventList_getActorByVarName_FUN_004aa1d0(0x01C51D80,param_1);
  }
  else {
    iVar2 = _stricmp(param_1,&DAT_005dcbef);
    if (iVar2 != 0) {
      this_ptr = core_mission_cpp_FUN_0051b6c0(0x01D2C900,param_1);
      if (this_ptr == (CDemonActor *)0x0) {
        FUN_005bfb40(&DAT_01c56ed0,"Actor \"%s\" does not exist.",param_1);
        return (CDemonActor *)0x0;
      }
      goto LAB_004a13ff;
    }
    if (*(int *)g_CNetGamePtr != 0) {
      FUN_005bfb40(&DAT_01c56ed0,"Can't use '$' actor specifier in multi-player");
      return (CDemonActor *)0x0;
    }
    this_ptr = *(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  }
  if (this_ptr == (CDemonActor *)0x0) {
    return 0x0FFFFFFF;
  }
LAB_004a13ff:
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040c5d0(this_ptr,param_2);
  if (iVar2 != 0) {
    return this_ptr;
  }
  if (*param_1 == '@') {
    return 0x0FFFFFFF;
  }
  pcVar3 = core_actor_cpp_FUN_00408830(this_ptr);
  FUN_005bfb40
            (&DAT_01c56ed0,"Actor \"%s\" is of type %s, this command requires an actor of type %s.",param_1,pcVar3,param_3);
  return (CDemonActor *)0x0;
}
