// Name: core_actor.cpp_serializePartStatus_FUN_0040bae0
// Address: 0040bae0
// Address Range: [[0040bae0, 0040bd6e]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializePartStatus_FUN_0040bae0(void * part, char * property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_serializePartStatus_FUN_0040bae0(void *part,char *property_name)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  char *pcStack0000000c;
  
  if (g_ActorReadingMode != 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s{ // %s\n",g_PropertyNamePrefix,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(1);
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s%d\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s");
    pvVar1 = (void *)((int)part + 0x78);
    do {
      part = (void *)((int)part + 4);
      crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%d ");
    } while (part != pvVar1);
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"\n");
    iVar2 = 0;
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s");
    do {
      iVar2 = iVar2 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%d ");
    } while (iVar2 < 0x1e);
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(-1);
    pcStack0000000c = g_PropertyNamePrefix;
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s}\n");
    return;
  }
  do {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
    if (iVar2 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("part status opening brace",property_name);
    }
  } while (iVar2 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%d",&stack0xffffffec);
  core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(part);
  iVar2 = 0;
  if (0 < unaff_EDI) {
    do {
      iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%d");
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                  ("part status entry","description");
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_EDI);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile," ");
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430(part);
  iVar2 = 0;
  if (0 < unaff_EBX) {
    do {
      iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%d");
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                  ("part texture entry","description");
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_EBX);
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
