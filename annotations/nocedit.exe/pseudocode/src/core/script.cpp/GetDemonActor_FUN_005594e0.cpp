// Name: core_script.cpp_GetDemonActor_FUN_005594e0
// Address: 005594e0
// Address Range: [[005594e0, 0055965d]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_script_cpp_GetDemonActor_FUN_005594e0(char *param_1,uint param_2,int param_3)

#include "nocturne.h"

CHero * __cdecl core_script_cpp_GetDemonActor_FUN_005594e0(char *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  CHero *actor_ptr;
  char *pcVar3;
  char *pcVar4;
  
  DAT_0310f4ac = 0;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    pcVar3 = "Must specify actor name";
    pcVar4 = &DAT_0310eca0;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') {
        return (CHero *)0x0;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    return (CHero *)0x0;
  }
  if (*param_1 == '@') {
    iVar2 = core_script_cpp_FUN_00559220(param_1);
    if (iVar2 == 0) {
      return (CHero *)0x0;
    }
    DAT_0310f4ac = 1;
    actor_ptr = (CHero *)core_event_cpp_CEventList_FUN_004b0b80(g_CEventListPtr);
    if (actor_ptr == (CHero *)0x0) {
      sprintf(&DAT_0310eca0,"Actor variable %s not defined, or doesn't reference an existing actor",param_1);
      return (CHero *)0x0;
    }
  }
  else {
    iVar2 = stricmp(param_1,"$");
    if (iVar2 == 0) {
      if (g_CNetGamePtr->connection_type != 0) {
        sprintf(&DAT_0310eca0,"Can't use '$' actor specifier in multi-player");
        return (CHero *)0x0;
      }
      actor_ptr = g_HeroActors[g_LocalHeroIndex];
      if (actor_ptr == (CHero *)0x0) {
        DAT_0310f4ac = 1;
        sprintf(&DAT_0310eca0,"Hero doesn't exist!!?!");
        return (CHero *)0x0;
      }
    }
    else {
      actor_ptr = (CHero *)core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
      if (actor_ptr == (CHero *)0x0) {
        sprintf(&DAT_0310eca0,"Actor \"%s\" does not exist.",param_1);
        return (CHero *)0x0;
      }
    }
  }
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040c760((CDemonActor *)actor_ptr,param_2);
  if (iVar2 == 0) {
    pcVar3 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90((CDemonActor *)actor_ptr);
    sprintf
              (&DAT_0310eca0,"Actor \"%s\" is of type %s, this command requires an actor of type %s.",param_1,pcVar3,param_3);
    return (CHero *)0x0;
  }
  return actor_ptr;
}
