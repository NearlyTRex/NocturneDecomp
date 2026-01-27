// Name: core_script.cpp_GetDemonActor_FUN_005594e0
// Address: 005594e0
// Address Range: [[005594e0, 0055965d]]
// Convention: unknown
// Signature: undefined core_script.cpp_GetDemonActor_FUN_005594e0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_GetDemonActor(uint sActorName, uint param_2,
   char* sExpectedActorType) */

CHero * core_script_cpp_GetDemonActor_FUN_005594e0(void)

{
  char cVar1;
  int iVar2;
  CHero *actor_ptr;
  char *pcVar3;
  char *pcVar4;
  char *in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  DAT_0310f4ac = 0;
  if ((in_stack_00000004 == (char *)0x0) || (*in_stack_00000004 == '\0')) {
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
  if (*in_stack_00000004 == '@') {
    iVar2 = core_script_cpp_CheckingActorVariableName_FUN_00559220();
    if (iVar2 == 0) {
      return (CHero *)0x0;
    }
    DAT_0310f4ac = 1;
    actor_ptr = (CHero *)core_event_cpp_CEventList_FUN_004b0b80(g_CEventListPtr);
    if (actor_ptr == (CHero *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&DAT_0310eca0,"Actor variable %s not defined, or doesn't reference an existing actor",in_stack_00000004);
      return (CHero *)0x0;
    }
  }
  else {
    iVar2 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"$");
    if (iVar2 == 0) {
      if (g_CNetGamePtr->connection_type != 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310eca0,"Can't use '$' actor specifier in multi-player");
        return (CHero *)0x0;
      }
      actor_ptr = g_HeroActors[g_LocalHeroIndex];
      if (actor_ptr == (CHero *)0x0) {
        DAT_0310f4ac = 1;
        crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310eca0,"Hero doesn't exist!!?!");
        return (CHero *)0x0;
      }
    }
    else {
      actor_ptr = (CHero *)core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
      if (actor_ptr == (CHero *)0x0) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&DAT_0310eca0,"Actor \"%s\" does not exist.",in_stack_00000004);
        return (CHero *)0x0;
      }
    }
  }
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040c760((CDemonActor *)actor_ptr,in_stack_00000008);
  if (iVar2 == 0) {
    pcVar3 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90((CDemonActor *)actor_ptr);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&DAT_0310eca0,"Actor \"%s\" is of type %s, this command requires an actor of type %s.",in_stack_00000004,pcVar3,
               in_stack_0000000c);
    return (CHero *)0x0;
  }
  return actor_ptr;
}
