// Name: core_event.cpp_FUN_004aa400
// Address: 004aa400
// Address Range: [[004aa400, 004aa52c]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aa400()

#include "nocturne.h"

CHero * core_event_cpp_FUN_004aa400(void)

{
  char cVar1;
  CHero *actor_ptr;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  if ((in_stack_00000004 == (char *)0x0) || (*in_stack_00000004 == '\0')) {
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
  if (*in_stack_00000004 == '@') {
    actor_ptr = (CHero *)core_event_cpp_CEventList_FUN_004b0b80(g_CEventListPtr);
  }
  else {
    iVar2 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"$");
    if (iVar2 != 0) {
      actor_ptr = (CHero *)core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
      if (actor_ptr == (CHero *)0x0) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&DAT_02d0a460,"Actor \"%s\" does not exist.",in_stack_00000004);
        return (CHero *)0x0;
      }
      goto LAB_004aa48f;
    }
    if (g_CNetGamePtr->connection_type != 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02d0a460,"Can't use '$' actor specifier in multi-player");
      return (CHero *)0x0;
    }
    actor_ptr = g_HeroActors[g_LocalHeroIndex];
  }
  if (actor_ptr == (CHero *)0x0) {
    return 0x0FFFFFFF;
  }
LAB_004aa48f:
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040c760((CDemonActor *)actor_ptr,in_stack_00000008);
  if (iVar2 != 0) {
    return actor_ptr;
  }
  if (*in_stack_00000004 == '@') {
    return 0x0FFFFFFF;
  }
  pcVar3 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90((CDemonActor *)actor_ptr);
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&DAT_02d0a460,"Actor \"%s\" is of type %s, this command requires an actor of type %s.",in_stack_00000004,pcVar3,
             in_stack_0000000c);
  return (CHero *)0x0;
}
