// Name: core_actor.cpp_archiveClothList_FUN_0040bce0
// Address: 0040bce0
// Address Range: [[0040bce0, 0040be77]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveClothList_FUN_0040bce0(CClothList *cloth_list,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveClothList_FUN_0040bce0(CClothList *cloth_list,char *property_name)

{
  int iVar1;
  int iVar2;
  char (*pacVar3) [40];
  
  if (DAT_007c3038 != 1) {
    FUN_005c03c0(DAT_007c3034,"%s{ // %s\n",&DAT_006106c0,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(1);
    iVar1 = 0;
    FUN_005c03c0
              (DAT_007c3034,"%s%d // clothCount\n",&DAT_006106c0,cloth_list->count);
    if (0 < cloth_list->count) {
      pacVar3 = cloth_list->filenames;
      do {
        iVar1 = iVar1 + 1;
        FUN_005c03c0(DAT_007c3034,"%s\"%s\"\n",&DAT_006106c0,pacVar3);
        pacVar3 = pacVar3 + 1;
      } while (iVar1 < cloth_list->count);
    }
    core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(-1);
    FUN_005c03c0(DAT_007c3034,&DAT_005d2c93,&DAT_006106c0);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_007c3034);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                ("Cloth list opening brace",property_name);
    }
  } while (iVar1 != 10);
  iVar1 = _fscanf(DAT_007c3034,&DAT_005d2c1a);
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b090("cloth count",property_name);
  }
  iVar1 = 0;
  core_actor_cpp_archiveDescription_FUN_0040b110("clothCount",property_name);
  if (0 < cloth_list->count) {
    do {
      iVar2 = _fscanf(DAT_007c3034," \"%[^\"]\"\n");
      if (iVar2 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                  ("cloth filename entry",property_name);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < cloth_list->count);
  }
  do {
    while (iVar1 = _fgetc(DAT_007c3034), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
              ("Cloth list closing brace",property_name);
  } while (iVar1 != 10);
  return;
}
