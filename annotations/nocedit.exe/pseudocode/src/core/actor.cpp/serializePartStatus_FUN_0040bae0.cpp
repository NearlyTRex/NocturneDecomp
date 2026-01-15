// Name: core_actor.cpp_serializePartStatus_FUN_0040bae0
// Address: 0040bae0
// Address Range: [[0040bae0, 0040bd6e]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializePartStatus_FUN_0040bae0(void * part, char * property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_serializePartStatus_FUN_0040bae0(void *part,char *property_name)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int local_14;
  
  if (g_ActorReadingMode != 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s{ // %s\n",g_PropertyNamePrefix,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(1);
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s%d\n",g_PropertyNamePrefix,0x1e);
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s",g_PropertyNamePrefix);
    pvVar4 = part;
    do {
      puVar1 = (uint *)((int)pvVar4 + 0x2140);
      pvVar4 = (void *)((int)pvVar4 + 4);
      crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%d ",*puVar1);
    } while (pvVar4 != (void *)((int)part + 0x78));
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"\n");
    iVar2 = 0;
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s",g_PropertyNamePrefix);
    do {
      puVar1 = (uint *)((int)part + 0x21b8);
      part = (void *)((int)part + 4);
      iVar2 = iVar2 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%d ",*puVar1);
    } while (iVar2 < 0x1e);
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(-1);
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s}\n",g_PropertyNamePrefix);
    return;
  }
  do {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
    if (iVar2 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("part status opening brace",property_name);
    }
  } while (iVar2 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%d",&local_14);
  core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(part);
  iVar2 = 0;
  if (0 < local_14) {
    iVar5 = (int)part + 0x2140;
    do {
      iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%d",iVar5);
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                  ("part status entry","description");
      }
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar2 < local_14);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile," ");
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430(part);
  iVar2 = 0;
  if (0 < local_14) {
    iVar5 = (int)part + 0x21b8;
    do {
      iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%d",iVar5);
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                  ("part texture entry","description");
      }
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar2 < local_14);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile," ");
  do {
    while (iVar2 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile), -1 < iVar2) {
      if (iVar2 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
              ("part status info closing brace",property_name);
  } while (iVar2 != 10);
  return;
}
