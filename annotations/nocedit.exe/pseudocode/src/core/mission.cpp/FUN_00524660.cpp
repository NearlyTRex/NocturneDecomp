// Name: core_mission.cpp_FUN_00524660
// Address: 00524660
// Address Range: [[00524660, 005246fb]]
// Convention: __cdecl
// Signature: void core_mission.cpp_FUN_00524660(void)

#include "nocturne.h"

void __cdecl core_mission_cpp_FUN_00524660(void)

{
  char cVar1;
  CDemonActor *str1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  CDemonMission *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  int local_14;
  
  iVar5 = -1;
  uVar4 = 0xffffffff;
  pcVar3 = in_stack_0000000c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  for (str1 = in_stack_00000004->first_actor; str1 != (CDemonActor *)0x0; str1 = str1->next_actor) {
    iVar2 = crt_string_c_strnicmp_FUN_005ff070(str1->actor_name,in_stack_0000000c,~uVar4 - 1);
    if (((iVar2 == 0) &&
        (iVar2 = crt_stdio_c_sscanf_FUN_0060013c
                           (str1->actor_name + (~uVar4 - 1),"%d",&local_14), iVar2 == 1)) &&
       (iVar5 < local_14)) {
      iVar5 = local_14;
    }
  }
  do {
    crt_stdio_c_sprintf_FUN_005fdbd0(in_stack_00000008,"%s%d");
    pcVar3 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000004);
  } while (pcVar3 != (char *)0x0);
  return;
}
