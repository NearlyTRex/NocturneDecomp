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
  char (*pacVar3) [100];
  char (*pacVar4) [100];
  
  if (DAT_007c3038 != 1) {
    FUN_005c03c0(DAT_007c3034,"%s{ // %s\n",&DAT_006106c0,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(1);
    FUN_005c03c0(DAT_007c3034,"%s%d // ruleCount\n",&DAT_006106c0,rules->list_size)
    ;
    iVar1 = 0;
    if (0 < rules->list_size) {
      pacVar3 = rules->events;
      pacVar4 = rules->conditions;
      do {
        FUN_005c03c0(DAT_007c3034,"%s\"%s\" => \"%s\"\n",&DAT_006106c0,pacVar4,pacVar3);
        iVar1 = iVar1 + 1;
        pacVar3 = pacVar3 + 1;
        pacVar4 = pacVar4 + 1;
      } while (iVar1 < rules->list_size);
    }
    core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(-1);
    FUN_005c03c0(DAT_007c3034,&DAT_005d2d28,&DAT_006106c0);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_007c3034);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                ("Rule list opening brace",property_name);
    }
  } while (iVar1 != 10);
  iVar1 = _fscanf(DAT_007c3034,&DAT_005d2cb0);
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b090("rule count",property_name);
  }
  core_actor_cpp_archiveDescription_FUN_0040b110("ruleCount",property_name);
  iVar1 = 0;
  if (0 < rules->list_size) {
    do {
      iVar2 = _fscanf(DAT_007c3034," \"%[^\"]\" => \"%[^\"]\"\n");
      if (iVar2 != 2) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b090(&DAT_005d2cdd,property_name);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < rules->list_size);
  }
  do {
    while (iVar1 = _fgetc(DAT_007c3034), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
              ("Rule list closing brace",property_name);
  } while (iVar1 != 10);
  return;
}
