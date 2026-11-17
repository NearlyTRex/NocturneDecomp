// Name: core_actor.cpp_archiveRules_FUN_0040be80
// Address: 0040be80
// Address Range: [[0040be80, 0040c037]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveRules_FUN_0040be80(CRuleList *rules,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveRules_FUN_0040be80(CRuleList *rules,char *property_name)

{
  int iVar1;
  int iVar2;
  
  if (g_ActorReadingMode != 1) {
    _fprintf(g_ActorDataFile,"%s{ // %s\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(1);
    _fprintf(g_ActorDataFile,"%s%d // ruleCount\n");
    iVar1 = 0;
    if (0 < rules->list_size) {
      do {
        _fprintf(g_ActorDataFile,"%s\"%s\" => \"%s\"\n");
        iVar1 = iVar1 + 1;
      } while (iVar1 < rules->list_size);
    }
    core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(-1);
    _fprintf(g_ActorDataFile,"%s}\n");
    return;
  }
  do {
    iVar1 = _fgetc(g_ActorDataFile);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                ("Rule list opening brace",property_name);
    }
  } while (iVar1 != 10);
  iVar1 = _fscanf(g_ActorDataFile,"%d");
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b090("rule count",property_name);
  }
  core_actor_cpp_archiveDescription_FUN_0040b110("ruleCount",property_name);
  iVar1 = 0;
  if (0 < rules->list_size) {
    do {
      iVar2 = _fscanf(g_ActorDataFile," \"%[^\"]\" => \"%[^\"]\"\n");
      if (iVar2 != 2) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b090("rule",property_name);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < rules->list_size);
  }
  do {
    while (iVar1 = _fgetc(g_ActorDataFile), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
              ("Rule list closing brace",property_name);
  } while (iVar1 != 10);
  return;
}
