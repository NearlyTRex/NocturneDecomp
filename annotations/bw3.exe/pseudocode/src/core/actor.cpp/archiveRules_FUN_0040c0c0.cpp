// Name: core_actor.cpp_archiveRules_FUN_0040c0c0
// Address: 0040c0c0
// Address Range: [[0040c0c0, 0040c277]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveRules_FUN_0040c0c0(CRuleList *rules,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveRules_FUN_0040c0c0(CRuleList *rules,char *property_name)

{
  int iVar1;
  int iVar2;
  
  if (g_INT_007df9b8 != 1) {
    _fprintf(g_FILE_PTR_007df9b4,"%s{ // %s\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(1);
    _fprintf(g_FILE_PTR_007df9b4,"%s%d // ruleCount\n");
    iVar1 = 0;
    if (0 < rules->list_size) {
      do {
        _fprintf(g_FILE_PTR_007df9b4,"%s\"%s\" => \"%s\"\n");
        iVar1 = iVar1 + 1;
      } while (iVar1 < rules->list_size);
    }
    core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(-1);
    _fprintf(g_FILE_PTR_007df9b4,"%s}\n");
    return;
  }
  do {
    iVar1 = _fgetc(g_FILE_PTR_007df9b4);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                ("Rule list opening brace",property_name);
    }
  } while (iVar1 != 10);
  iVar1 = _fscanf(g_FILE_PTR_007df9b4,"%d");
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0("rule count",property_name);
  }
  core_actor_cpp_archiveDescription_FUN_0040b350("ruleCount",property_name);
  iVar1 = 0;
  if (0 < rules->list_size) {
    do {
      iVar2 = _fscanf(g_FILE_PTR_007df9b4," \"%[^\"]\" => \"%[^\"]\"\n");
      if (iVar2 != 2) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0("rule",property_name);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < rules->list_size);
  }
  do {
    while (iVar1 = _fgetc(g_FILE_PTR_007df9b4), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
              ("Rule list closing brace",property_name);
  } while (iVar1 != 10);
  return;
}
