// Name: core_event.cpp_FUN_004aa400
// Address: 004aa400
// Address Range: [[004aa400, 004aa52c]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_event_cpp_FUN_004aa400(char *param_1,uint param_2,int param_3)

#include "nocturne.h"

CHero * __cdecl core_event_cpp_FUN_004aa400(char *param_1,uint param_2,int param_3)

{
  char cVar1;
  CHero *actor_ptr;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    pcVar3 = "Must specify actor name";
    pcVar4 = &DAT_02d0a460;
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
    actor_ptr = (CHero *)core_event_cpp_CEventList_FUN_004b0b80(g_CEventListPtr);
  }
  else {
    iVar2 = stricmp(param_1,"$");
    if (iVar2 != 0) {
      actor_ptr = (CHero *)core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
      if (actor_ptr == (CHero *)0x0) {
        sprintf(&DAT_02d0a460,"Actor \"%s\" does not exist.",param_1);
        return (CHero *)0x0;
      }
      goto LAB_004aa48f;
    }
    if (g_CNetGamePtr->connection_type != 0) {
      sprintf(&DAT_02d0a460,"Can't use '$' actor specifier in multi-player");
      return (CHero *)0x0;
    }
    actor_ptr = g_HeroActors[g_LocalHeroIndex];
  }
  if (actor_ptr == (CHero *)0x0) {
    return 0x0FFFFFFF;
  }
LAB_004aa48f:
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040c760((CDemonActor *)actor_ptr,param_2);
  if (iVar2 != 0) {
    return actor_ptr;
  }
  if (*param_1 == '@') {
    return 0x0FFFFFFF;
  }
  pcVar3 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90((CDemonActor *)actor_ptr);
  sprintf
            (&DAT_02d0a460,"Actor \"%s\" is of type %s, this command requires an actor of type %s.",param_1,pcVar3,param_3);
  return (CHero *)0x0;
}
