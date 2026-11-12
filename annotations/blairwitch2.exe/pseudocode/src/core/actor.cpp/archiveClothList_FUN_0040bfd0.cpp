// Name: core_actor.cpp_archiveClothList_FUN_0040bfd0
// Address: 0040bfd0
// Address Range: [[0040bfd0, 0040c167]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveClothList_FUN_0040bfd0(CClothList *cloth_list,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveClothList_FUN_0040bfd0(CClothList *cloth_list,char *property_name)

{
  int iVar1;
  int iVar2;
  char (*pacVar3) [40];
  
  if (DAT_007bc038 != 1) {
    FUN_005b8010(DAT_007bc034,"%s{ // %s\n",&DAT_00609590,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(1);
    iVar1 = 0;
    FUN_005b8010
              (DAT_007bc034,"%s%d // clothCount\n",&DAT_00609590,cloth_list->count);
    if (0 < cloth_list->count) {
      pacVar3 = cloth_list->filenames;
      do {
        iVar1 = iVar1 + 1;
        FUN_005b8010(DAT_007bc034,"%s\"%s\"\n",&DAT_00609590,pacVar3);
        pacVar3 = pacVar3 + 1;
      } while (iVar1 < cloth_list->count);
    }
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(-1);
    FUN_005b8010(DAT_007bc034,&DAT_005cad30,&DAT_00609590);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_007bc034);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("Cloth list opening brace",property_name);
    }
  } while (iVar1 != 10);
  iVar1 = _fscanf(DAT_007bc034,&DAT_005cacb7);
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b380("cloth count",property_name);
  }
  iVar1 = 0;
  core_actor_cpp_archiveDescription_FUN_0040b400("clothCount",property_name);
  if (0 < cloth_list->count) {
    do {
      iVar2 = _fscanf(DAT_007bc034," \"%[^\"]\"\n");
      if (iVar2 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                  ("cloth filename entry",property_name);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < cloth_list->count);
  }
  do {
    while (iVar1 = _fgetc(DAT_007bc034), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
              ("Cloth list closing brace",property_name);
  } while (iVar1 != 10);
  return;
}
