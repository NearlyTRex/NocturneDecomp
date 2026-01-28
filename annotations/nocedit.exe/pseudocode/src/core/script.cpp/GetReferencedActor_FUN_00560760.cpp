// Name: core_script.cpp_GetReferencedActor_FUN_00560760
// Address: 00560760
// Address Range: [[00560760, 005607df]]
// Convention: unknown
// Signature: void core_script_cpp_GetReferencedActor_FUN_00560760(void)

#include "nocturne.h"

/* Signature: void core_script.cpp_GetReferencedActor(FILE* param_1, CDemonActor** param_2) */

void core_script_cpp_GetReferencedActor_FUN_00560760(void)

{
  char *pcVar1;
  int iVar2;
  uint *puVar3;
  FILE *in_stack_00000004;
  uint *in_stack_00000008;
  char local_d0 [200];
  
  puVar3 = &DAT_00680d60;
  pcVar1 = local_d0;
  for (iVar2 = 0x32; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    pcVar1 = (char *)((int)pcVar1 + 4);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000004,"\"%[^\"]\"\n",local_d0);
  iVar2 = crt_string_c_stricmp_FUN_005fe7f0(local_d0,"(none)");
  if (iVar2 == 0) {
    *in_stack_00000008 = 0;
    return;
  }
  pcVar1 = core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
  *in_stack_00000008 = pcVar1;
  return;
}
