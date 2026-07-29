// Name: core_actor.cpp_archiveRules_FUN_0040d110
// Address: 0040d110
// Address Range: [[0040d110, 0040d2c7]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveRules_FUN_0040d110(CRuleList *rules,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveRules_FUN_0040d110(CRuleList *rules,char *property_name)

{
  int iVar1;
  int iVar2;
  char (*pacVar3) [100];
  char (*pacVar4) [100];
  
  if (DAT_00763e88 != 1) {
    _fprintf(DAT_00763e84,"%s{ // %s\n",&DAT_005acc90,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(1);
    _fprintf(DAT_00763e84,"%s%d // ruleCount\n",&DAT_005acc90,rules->list_size);
    iVar1 = 0;
    if (0 < rules->list_size) {
      pacVar3 = rules->events;
      pacVar4 = rules->conditions;
      do {
        _fprintf(DAT_00763e84,"%s\"%s\" => \"%s\"\n",&DAT_005acc90,pacVar4,pacVar3);
        iVar1 = iVar1 + 1;
        pacVar3 = pacVar3 + 1;
        pacVar4 = pacVar4 + 1;
      } while (iVar1 < rules->list_size);
    }
    core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(-1);
    _fprintf(DAT_00763e84,"%s}\n",&DAT_005acc90);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_00763e84);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                ("Rule list opening brace",property_name);
    }
  } while (iVar1 != 10);
  iVar1 = _fscanf(DAT_00763e84,"%d");
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040c320("rule count",property_name);
  }
  core_actor_cpp_archiveDescription_FUN_0040c3a0("ruleCount",property_name);
  iVar1 = 0;
  if (0 < rules->list_size) {
    do {
      iVar2 = _fscanf(DAT_00763e84," \"%[^\"]\" => \"%[^\"]\"\n");
      if (iVar2 != 2) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040c320("rule",property_name);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < rules->list_size);
  }
  do {
    while (iVar1 = _fgetc(DAT_00763e84), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
              ("Rule list closing brace",property_name);
  } while (iVar1 != 10);
  return;
}
