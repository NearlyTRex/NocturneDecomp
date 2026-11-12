// Name: core_actor.cpp_archiveClothList_FUN_0040bf20
// Address: 0040bf20
// Address Range: [[0040bf20, 0040c0b7]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveClothList_FUN_0040bf20(CClothList *cloth_list,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveClothList_FUN_0040bf20(CClothList *cloth_list,char *property_name)

{
  int iVar1;
  int iVar2;
  char (*pacVar3) [40];
  
  if (DAT_007df9b8 != 1) {
    FUN_005a3140(DAT_007df9b4,"%s{ // %s\n",&DAT_005f0990,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(1);
    iVar1 = 0;
    FUN_005a3140
              (DAT_007df9b4,"%s%d // clothCount\n",&DAT_005f0990,cloth_list->count);
    if (0 < cloth_list->count) {
      pacVar3 = cloth_list->filenames;
      do {
        iVar1 = iVar1 + 1;
        FUN_005a3140(DAT_007df9b4,"%s\"%s\"\n",&DAT_005f0990,pacVar3);
        pacVar3 = pacVar3 + 1;
      } while (iVar1 < cloth_list->count);
    }
    core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(-1);
    FUN_005a3140(DAT_007df9b4,&DAT_005b5cdf,&DAT_005f0990);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_007df9b4);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                ("Cloth list opening brace",property_name);
    }
  } while (iVar1 != 10);
  iVar1 = _fscanf(DAT_007df9b4,&DAT_005b5c66);
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0("cloth count",property_name);
  }
  iVar1 = 0;
  core_actor_cpp_archiveDescription_FUN_0040b350("clothCount",property_name);
  if (0 < cloth_list->count) {
    do {
      iVar2 = _fscanf(DAT_007df9b4," \"%[^\"]\"\n");
      if (iVar2 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                  ("cloth filename entry",property_name);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < cloth_list->count);
  }
  do {
    while (iVar1 = _fgetc(DAT_007df9b4), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
              ("Cloth list closing brace",property_name);
  } while (iVar1 != 10);
  return;
}
