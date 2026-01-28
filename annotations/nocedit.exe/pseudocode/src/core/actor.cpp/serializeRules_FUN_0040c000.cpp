// Name: core_actor.cpp_serializeRules_FUN_0040c000
// Address: 0040c000
// Address Range: [[0040c000, 0040c1b7]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_serializeRules_FUN_0040c000(void *rules,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_serializeRules_FUN_0040c000(void *rules,char *property_name)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (g_ActorReadingMode != 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s{ // %s\n",g_PropertyNamePrefix,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(1);
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s%d // ruleCount\n",g_PropertyNamePrefix,*(uint *)rules);
    iVar1 = 0;
    if (0 < *(int *)rules) {
      iVar3 = (int)rules + 0x1f8;
      iVar4 = (int)rules + 4;
      do {
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (g_ActorDataFile,"%s\"%s\" => \"%s\"\n",g_PropertyNamePrefix,iVar4,iVar3);
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 100;
        iVar4 = iVar4 + 100;
      } while (iVar1 < *(int *)rules);
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
  if (0 < *(int *)rules) {
    iVar3 = (int)rules + 0x1f8;
    iVar4 = (int)rules + 4;
    do {
      iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile," \"%[^\"]\" => \"%[^\"]\"\n",iVar4,iVar3);
      if (iVar2 != 2) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("rule",property_name);
      }
      iVar4 = iVar4 + 100;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 100;
    } while (iVar1 < *(int *)rules);
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
