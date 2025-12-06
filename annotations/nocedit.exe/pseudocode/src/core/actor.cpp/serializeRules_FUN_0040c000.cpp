// Name: core_actor.cpp_serializeRules_FUN_0040c000
// Address: 0040c000
// Address Range: [[0040c000, 0040c1b7]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeRules_FUN_0040c000(void * rules, char * property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_serializeRules_FUN_0040c000(void *rules,char *property_name)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint *in_stack_0000000c;
  int *in_stack_00000010;
  
  if (g_ActorReadingMode != 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s{ // %s\n",g_PropertyNamePrefix,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(1);
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s%d // ruleCount\n",g_PropertyNamePrefix,*in_stack_0000000c);
    iVar1 = 0;
    if (0 < *in_stack_00000010) {
      piVar3 = in_stack_00000010 + 0x7e;
      piVar4 = in_stack_00000010 + 1;
      do {
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (g_ActorDataFile,"%s\"%s\" => \"%s\"\n","%s\"%s\" => \"%s\"\n",g_PropertyNamePrefix,piVar4,
                   piVar3);
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 0x19;
        piVar4 = piVar4 + 0x19;
      } while (iVar1 < *in_stack_00000010);
    }
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(-1);
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s}\n",g_PropertyNamePrefix);
    return;
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("Rule list opening brace",property_name);
    }
  } while (iVar1 != 10);
  iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%d",rules);
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("rule count",property_name);
  }
  core_actor_cpp_serializeDescription_FUN_0040b290("ruleCount",property_name);
  iVar1 = 0;
  if (0 < *in_stack_00000010) {
    piVar3 = in_stack_00000010 + 0x7e;
    piVar4 = in_stack_00000010 + 1;
    do {
      iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (g_ActorDataFile," \"%[^\"]\" => \"%[^\"]\"\n",g_ActorDataFile," \"%[^\"]\" => \"%[^\"]\"\n",piVar4,
                         piVar3);
      if (iVar2 != 2) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("rule",property_name);
      }
      piVar4 = piVar4 + 0x19;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 0x19;
    } while (iVar1 < *in_stack_00000010);
  }
  do {
    while (iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
              ("Rule list closing brace",property_name);
  } while (iVar1 != 10);
  return;
}
