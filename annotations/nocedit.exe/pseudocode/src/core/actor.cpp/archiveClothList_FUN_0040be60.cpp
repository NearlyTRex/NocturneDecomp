// Name: core_actor.cpp_archiveClothList_FUN_0040be60
// Address: 0040be60
// Address Range: [[0040be60, 0040bff7]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveClothList_FUN_0040be60(CClothList *cloth_list,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveClothList_FUN_0040be60(CClothList *cloth_list,char *property_name)

{
  int iVar1;
  int iVar2;
  char (*pacVar3) [40];
  
  if (g_ActorReadingMode != 1) {
    _fprintf(g_ActorDataFile,"%s{ // %s\n",g_PropertyNamePrefix,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(1);
    iVar1 = 0;
    _fprintf(g_ActorDataFile,"%s%d // clothCount\n",g_PropertyNamePrefix,cloth_list->count);
    if (0 < cloth_list->count) {
      pacVar3 = cloth_list->filenames;
      do {
        iVar1 = iVar1 + 1;
        _fprintf(g_ActorDataFile,"%s\"%s\"\n",g_PropertyNamePrefix,pacVar3);
        pacVar3 = pacVar3 + 1;
      } while (iVar1 < cloth_list->count);
    }
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(-1);
    _fprintf(g_ActorDataFile,"%s}\n",g_PropertyNamePrefix);
    return;
  }
  do {
    iVar1 = _fgetc(g_ActorDataFile);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("Cloth list opening brace",property_name);
    }
  } while (iVar1 != 10);
  iVar1 = _fscanf(g_ActorDataFile,"%d",cloth_list);
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("cloth count",property_name);
  }
  iVar1 = 0;
  core_actor_cpp_archiveDescription_FUN_0040b290("clothCount",property_name);
  if (0 < cloth_list->count) {
    pacVar3 = cloth_list->filenames;
    do {
      iVar2 = _fscanf(g_ActorDataFile," \"%[^\"]\"\n",pacVar3);
      if (iVar2 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                  ("cloth filename entry",property_name);
      }
      iVar1 = iVar1 + 1;
      pacVar3 = pacVar3 + 1;
    } while (iVar1 < cloth_list->count);
  }
  do {
    while (iVar1 = _fgetc(g_ActorDataFile), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
              ("Cloth list closing brace",property_name);
  } while (iVar1 != 10);
  return;
}
