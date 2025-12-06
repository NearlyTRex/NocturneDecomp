// Name: core_actor.cpp_serializeClothList_FUN_0040be60
// Address: 0040be60
// Address Range: [[0040be60, 0040bff7]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeClothList_FUN_0040be60(CClothList * cloth_list, char * property_name)

#include "nocturne.h"

void __cdecl
core_actor_cpp_serializeClothList_FUN_0040be60(CClothList *cloth_list,char *property_name)

{
  int iVar1;
  int iVar2;
  CClothList *pCVar3;
  
  if (g_ActorReadingMode != 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s{ // %s\n",g_PropertyNamePrefix,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(1);
    iVar1 = 0;
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s%d // clothCount\n",g_PropertyNamePrefix,
               *(uint *)cloth_list);
    if (0 < *(int *)cloth_list) {
      pCVar3 = cloth_list + 4;
      do {
        iVar1 = iVar1 + 1;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (g_ActorDataFile,"%s\"%s\"\n","%s\"%s\"\n",g_PropertyNamePrefix,pCVar3);
        pCVar3 = pCVar3 + 0x28;
      } while (iVar1 < *(int *)cloth_list);
    }
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(-1);
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s}\n",g_PropertyNamePrefix);
    return;
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("Cloth list opening brace",property_name);
    }
  } while (iVar1 != 10);
  iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%d",cloth_list);
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("cloth count",property_name);
  }
  iVar1 = 0;
  core_actor_cpp_serializeDescription_FUN_0040b290("clothCount",property_name);
  if (0 < *(int *)cloth_list) {
    pCVar3 = cloth_list + 4;
    do {
      iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (g_ActorDataFile," \"%[^\"]\"\n",g_ActorDataFile," \"%[^\"]\"\n",pCVar3);
      if (iVar2 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                  ("cloth filename entry",property_name);
      }
      iVar1 = iVar1 + 1;
      pCVar3 = pCVar3 + 0x28;
    } while (iVar1 < *(int *)cloth_list);
  }
  do {
    while (iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
              ("Cloth list closing brace",property_name);
  } while (iVar1 != 10);
  return;
}
