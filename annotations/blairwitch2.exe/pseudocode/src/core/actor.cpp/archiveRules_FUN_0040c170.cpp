// Name: core_actor.cpp_archiveRules_FUN_0040c170
// Address: 0040c170
// Address Range: [[0040c170, 0040c327]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveRules_FUN_0040c170(int *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveRules_FUN_0040c170(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (DAT_007bc038 != 1) {
    FUN_005b8010(DAT_007bc034,"%s{ // %s\n",&DAT_00609590,param_2);
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(1);
    FUN_005b8010(DAT_007bc034,"%s%d // ruleCount\n",&DAT_00609590,*param_1);
    iVar1 = 0;
    if (0 < *param_1) {
      piVar3 = param_1 + 0x7e;
      piVar4 = param_1 + 1;
      do {
        FUN_005b8010(DAT_007bc034,"%s\"%s\" => \"%s\"\n",&DAT_00609590,piVar4,piVar3);
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 0x19;
        piVar4 = piVar4 + 0x19;
      } while (iVar1 < *param_1);
    }
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(-1);
    FUN_005b8010(DAT_007bc034,&DAT_005cadc5,&DAT_00609590);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_007bc034);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("Rule list opening brace",param_2);
    }
  } while (iVar1 != 10);
  iVar1 = _fscanf(DAT_007bc034,&DAT_005cad4d,param_1);
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b380("rule count",param_2);
  }
  core_actor_cpp_archiveDescription_FUN_0040b400("ruleCount",param_2);
  iVar1 = 0;
  if (0 < *param_1) {
    piVar3 = param_1 + 0x7e;
    piVar4 = param_1 + 1;
    do {
      iVar2 = _fscanf(DAT_007bc034," \"%[^\"]\" => \"%[^\"]\"\n",piVar4,piVar3);
      if (iVar2 != 2) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b380(&DAT_005cad7a,param_2);
      }
      piVar4 = piVar4 + 0x19;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 0x19;
    } while (iVar1 < *param_1);
  }
  do {
    while (iVar1 = _fgetc(DAT_007bc034), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
              ("Rule list closing brace",param_2);
  } while (iVar1 != 10);
  return;
}
