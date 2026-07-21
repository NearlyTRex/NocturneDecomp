// Name: core_event.cpp_resolveActorByName_FUN_0047a390
// Address: 0047a390
// Address Range: [[0047a390, 0047a4bc]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_resolveActorByName_FUN_0047a390(char *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_event_cpp_resolveActorByName_FUN_0047a390(char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    pcVar5 = "Must specify actor name";
    pcVar6 = &DAT_01c08b60;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    return 0;
  }
  if (*param_1 == '@') {
    iVar2 = core_event_cpp_CEventList_getActorByVarName_FUN_00480b30(0x01C03A10,param_1);
  }
  else {
    iVar2 = _stricmp(param_1,&DAT_0057f3de);
    if (iVar2 != 0) {
      iVar2 = core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0(0x01CC9450,param_1);
      if (iVar2 == 0) {
        _sprintf(&DAT_01c08b60,"Actor \"%s\" does not exist.",param_1);
        return 0;
      }
      goto LAB_0047a41f;
    }
    if (*0x01CEA280 != 0) {
      _sprintf(&DAT_01c08b60,"Can't use '$' actor specifier in multi-player");
      return 0;
    }
    iVar2 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  }
  if (iVar2 == 0) {
    return 0x0FFFFFFF;
  }
LAB_0047a41f:
  iVar3 = core_actor_cpp_isOfClassHash_FUN_0040d860(iVar2,param_2);
  if (iVar3 != 0) {
    return iVar2;
  }
  if (*param_1 == '@') {
    return 0x0FFFFFFF;
  }
  uVar4 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(iVar2,param_3);
  _sprintf(&DAT_01c08b60,"Actor \"%s\" is of type %s, this command requires an actor of type %s.",param_1,uVar4);
  return 0;
}
