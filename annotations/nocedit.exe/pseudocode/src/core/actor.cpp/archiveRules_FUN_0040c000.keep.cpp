// Name: core_actor.cpp_archiveRules_FUN_0040c000
// Address: 0040c000
// MANUAL RECONSTRUCTION
// Address Range: [[0040c000, 0040c1b7]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveRules_FUN_0040c000(CRuleList *rules,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveRules_FUN_0040c000(CRuleList *rules,char *property_name)

{
  int iVar1;
  int iVar2;
  char (*pacVar3) [100];
  char (*pacVar4) [100];
  
  if (g_ActorReadingMode != 1) {
    _fprintf(g_ActorDataFile,"%s{ // %s\n",g_PropertyNamePrefix,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(1);
    _fprintf(g_ActorDataFile,"%s%d // ruleCount\n",g_PropertyNamePrefix,rules->list_size);
    iVar1 = 0;
    if (0 < rules->list_size) {
      pacVar3 = rules->events;
      pacVar4 = rules->conditions;
      do {
        _fprintf(g_ActorDataFile,"%s\"%s\" => \"%s\"\n",g_PropertyNamePrefix,*pacVar4,*pacVar3);
        iVar1 = iVar1 + 1;
        pacVar3 = pacVar3 + 1;
        pacVar4 = pacVar4 + 1;
      } while (iVar1 < rules->list_size);
    }
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(-1);
    _fprintf(g_ActorDataFile,"%s}\n",g_PropertyNamePrefix);
    return;
  }
  do {
    iVar1 = _fgetc(g_ActorDataFile);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("Rule list opening brace",property_name);
    }
  } while (iVar1 != 10);
  iVar1 = _fscanf(g_ActorDataFile,"%d",&rules->list_size);
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("rule count",property_name);
  }
  core_actor_cpp_archiveDescription_FUN_0040b290("ruleCount",property_name);
  iVar1 = 0;
  if (0 < rules->list_size) {
    pacVar3 = rules->events;
    pacVar4 = rules->conditions;
    do {
      iVar2 = _fscanf(g_ActorDataFile," \"%[^\"]\" => \"%[^\"]\"\n",*pacVar4,*pacVar3);
      if (iVar2 != 2) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("rule",property_name);
      }
      pacVar4 = pacVar4 + 1;
      iVar1 = iVar1 + 1;
      pacVar3 = pacVar3 + 1;
    } while (iVar1 < rules->list_size);
  }
  do {
    while (iVar1 = _fgetc(g_ActorDataFile), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
              ("Rule list closing brace",property_name);
  } while (iVar1 != 10);
  return;
}
