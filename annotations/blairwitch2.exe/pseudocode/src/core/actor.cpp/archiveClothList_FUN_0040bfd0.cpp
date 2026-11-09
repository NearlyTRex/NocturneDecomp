// Name: core_actor.cpp_archiveClothList_FUN_0040bfd0
// Address: 0040bfd0
// Address Range: [[0040bfd0, 0040c167]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveClothList_FUN_0040bfd0(int *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveClothList_FUN_0040bfd0(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_007bc038 != 1) {
    FUN_005b8010(DAT_007bc034,"%s{ // %s\n",&DAT_00609590,param_2);
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(1);
    iVar1 = 0;
    FUN_005b8010(DAT_007bc034,"%s%d // clothCount\n",&DAT_00609590,*param_1);
    if (0 < *param_1) {
      piVar3 = param_1 + 1;
      do {
        iVar1 = iVar1 + 1;
        FUN_005b8010(DAT_007bc034,"%s\"%s\"\n",&DAT_00609590,piVar3);
        piVar3 = piVar3 + 10;
      } while (iVar1 < *param_1);
    }
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(-1);
    FUN_005b8010(DAT_007bc034,&DAT_005cad30,&DAT_00609590);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_007bc034);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("Cloth list opening brace",param_2);
    }
  } while (iVar1 != 10);
  iVar1 = _fscanf(DAT_007bc034,&DAT_005cacb7,param_1);
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b380("cloth count",param_2);
  }
  iVar1 = 0;
  core_actor_cpp_archiveDescription_FUN_0040b400("clothCount",param_2);
  if (0 < *param_1) {
    piVar3 = param_1 + 1;
    do {
      iVar2 = _fscanf(DAT_007bc034," \"%[^\"]\"\n",piVar3);
      if (iVar2 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                  ("cloth filename entry",param_2);
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 10;
    } while (iVar1 < *param_1);
  }
  do {
    while (iVar1 = _fgetc(DAT_007bc034), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
              ("Cloth list closing brace",param_2);
  } while (iVar1 != 10);
  return;
}
