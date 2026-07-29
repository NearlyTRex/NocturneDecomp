// Name: core_actor.cpp_archiveClothList_FUN_0040cf70
// Address: 0040cf70
// Address Range: [[0040cf70, 0040d107]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveClothList_FUN_0040cf70(CClothList *cloth_list,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveClothList_FUN_0040cf70(CClothList *cloth_list,char *property_name)

{
  int iVar1;
  int iVar2;
  char (*pacVar3) [40];
  
  if (DAT_00763e88 != 1) {
    _fprintf(DAT_00763e84,"%s{ // %s\n",&DAT_005acc90,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(1);
    iVar1 = 0;
    _fprintf(DAT_00763e84,"%s%d // clothCount\n",&DAT_005acc90,cloth_list->count);
    if (0 < cloth_list->count) {
      pacVar3 = cloth_list->filenames;
      do {
        iVar1 = iVar1 + 1;
        _fprintf(DAT_00763e84,"%s\"%s\"\n",&DAT_005acc90,pacVar3);
        pacVar3 = pacVar3 + 1;
      } while (iVar1 < cloth_list->count);
    }
    core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(-1);
    _fprintf(DAT_00763e84,"%s}\n",&DAT_005acc90);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_00763e84);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                ("Cloth list opening brace",property_name);
    }
  } while (iVar1 != 10);
  iVar1 = _fscanf(DAT_00763e84,"%d");
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040c320("cloth count",property_name);
  }
  iVar1 = 0;
  core_actor_cpp_archiveDescription_FUN_0040c3a0("clothCount",property_name);
  if (0 < cloth_list->count) {
    do {
      iVar2 = _fscanf(DAT_00763e84," \"%[^\"]\"\n");
      if (iVar2 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                  ("cloth filename entry",property_name);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < cloth_list->count);
  }
  do {
    while (iVar1 = _fgetc(DAT_00763e84), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
              ("Cloth list closing brace",property_name);
  } while (iVar1 != 10);
  return;
}
