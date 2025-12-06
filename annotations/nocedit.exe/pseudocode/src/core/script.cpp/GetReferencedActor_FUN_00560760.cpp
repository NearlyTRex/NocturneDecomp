// Name: core_script.cpp_GetReferencedActor_FUN_00560760
// Address: 00560760
// Address Range: [[00560760, 005607df]]
// Convention: unknown
// Signature: undefined core_script.cpp_GetReferencedActor_FUN_00560760()

#include "nocturne.h"

/* Signature: void core_script.cpp_GetReferencedActor(FILE* param_1, CDemonActor** param_2) */

void core_script_cpp_GetReferencedActor_FUN_00560760(void)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  uint *puVar4;
  FILE *in_stack_00000004;
  uint *in_stack_00000010;
  uint *in_stack_00000014;
  byte *puStack_cc;
  byte auStack_c8 [192];
  
  puVar4 = &DAT_00680d60;
  puVar1 = (uint *)&stack0xffffff30;
  for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000004,"\"%[^\"]\"\n",&stack0xffffff30);
  iVar3 = crt_string_c_stricmp_FUN_005fe7f0((char *)&puStack_cc,"(none)");
  puStack_cc = auStack_c8;
  if (iVar3 == 0) {
    *in_stack_00000010 = 0;
    return;
  }
  pcVar2 = core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
  *in_stack_00000014 = pcVar2;
  return;
}
