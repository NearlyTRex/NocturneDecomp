// Name: core_actor.cpp_archiveRules_FUN_0040c170
// Address: 0040c170
// Address Range: [[0040c170, 0040c327]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveRules_FUN_0040c170(CRuleList *rules,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveRules_FUN_0040c170(CRuleList *rules,char *property_name)

{
  int iVar1;
  int iVar2;
  
  if (DAT_007bc038 != 1) {
    _fprintf(DAT_007bc034,"%s{ // %s\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(1);
    _fprintf(DAT_007bc034,"%s%d // ruleCount\n");
    iVar1 = 0;
    if (0 < rules->list_size) {
      do {
        _fprintf(DAT_007bc034,"%s\"%s\" => \"%s\"\n");
        iVar1 = iVar1 + 1;
      } while (iVar1 < rules->list_size);
    }
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(-1);
    _fprintf(DAT_007bc034,&DAT_005cadc5);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_007bc034);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("Rule list opening brace",property_name);
    }
  } while (iVar1 != 10);
  iVar1 = _fscanf(DAT_007bc034,&DAT_005cad4d);
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b380("rule count",property_name);
  }
  core_actor_cpp_archiveDescription_FUN_0040b400("ruleCount",property_name);
  iVar1 = 0;
  if (0 < rules->list_size) {
    do {
      iVar2 = _fscanf(DAT_007bc034," \"%[^\"]\" => \"%[^\"]\"\n");
      if (iVar2 != 2) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b380(&DAT_005cad7a,property_name);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < rules->list_size);
  }
  do {
    while (iVar1 = _fgetc(DAT_007bc034), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
              ("Rule list closing brace",property_name);
  } while (iVar1 != 10);
  return;
}
