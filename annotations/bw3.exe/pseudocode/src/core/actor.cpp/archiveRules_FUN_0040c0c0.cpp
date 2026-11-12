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
  char (*pacVar3) [100];
  char (*pacVar4) [100];
  
  if (DAT_007df9b8 != 1) {
    FUN_005a3140(DAT_007df9b4,"%s{ // %s\n",&DAT_005f0990,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(1);
    FUN_005a3140(DAT_007df9b4,"%s%d // ruleCount\n",&DAT_005f0990,rules->list_size)
    ;
    iVar1 = 0;
    if (0 < rules->list_size) {
      pacVar3 = rules->events;
      pacVar4 = rules->conditions;
      do {
        FUN_005a3140(DAT_007df9b4,"%s\"%s\" => \"%s\"\n",&DAT_005f0990,pacVar4,pacVar3);
        iVar1 = iVar1 + 1;
        pacVar3 = pacVar3 + 1;
        pacVar4 = pacVar4 + 1;
      } while (iVar1 < rules->list_size);
    }
    core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(-1);
    FUN_005a3140(DAT_007df9b4,&DAT_005b5d74,&DAT_005f0990);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_007df9b4);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                ("Rule list opening brace",property_name);
    }
  } while (iVar1 != 10);
  iVar1 = _fscanf(DAT_007df9b4,&DAT_005b5cfc);
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0("rule count",property_name);
  }
  core_actor_cpp_archiveDescription_FUN_0040b350("ruleCount",property_name);
  iVar1 = 0;
  if (0 < rules->list_size) {
    do {
      iVar2 = _fscanf(DAT_007df9b4," \"%[^\"]\" => \"%[^\"]\"\n");
      if (iVar2 != 2) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0(&DAT_005b5d29,property_name);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < rules->list_size);
  }
  do {
    while (iVar1 = _fgetc(DAT_007df9b4), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
              ("Rule list closing brace",property_name);
  } while (iVar1 != 10);
  return;
}
