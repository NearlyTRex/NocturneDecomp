// Name: core_actor.cpp_archivePartStatus_FUN_0040bba0
// Address: 0040bba0
// Address Range: [[0040bba0, 0040be2e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archivePartStatus_FUN_0040bba0(CDeformableModelInstance *model_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archivePartStatus_FUN_0040bba0(CDeformableModelInstance *model_ptr,char *property_name)

{
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  int local_14;
  
  if (g_ActorReadingMode != 1) {
    _fprintf(g_ActorDataFile,"%s{ // %s\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(1);
    _fprintf(g_ActorDataFile,"%s%d\n");
    _fprintf(g_ActorDataFile,"%s");
    pCVar1 = model_ptr->bone_origins;
    do {
      model_ptr = (CDeformableModelInstance *)&(model_ptr->base).current_motion_index;
      _fprintf(g_ActorDataFile,"%d ");
    } while (model_ptr != (CDeformableModelInstance *)&pCVar1[0xc].z);
    _fprintf(g_ActorDataFile,"\n");
    iVar2 = 0;
    _fprintf(g_ActorDataFile,"%s");
    do {
      iVar2 = iVar2 + 1;
      _fprintf(g_ActorDataFile,"%d ");
    } while (iVar2 < 0x3c);
    _fprintf(g_ActorDataFile,"\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(-1);
    _fprintf(g_ActorDataFile,"%s}\n");
    return;
  }
  do {
    iVar2 = _fgetc(g_ActorDataFile);
    if (iVar2 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                ("part status opening brace",property_name);
    }
  } while (iVar2 != 10);
  _fscanf(g_ActorDataFile,"%d");
  core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_0054e670(model_ptr);
  iVar2 = 0;
  if (0 < local_14) {
    do {
      iVar3 = _fscanf(g_ActorDataFile,"%d");
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                  ("part status entry","description");
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_14);
  }
  _fscanf(g_ActorDataFile," ");
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_0054e690(model_ptr);
  iVar2 = 0;
  if (0 < local_14) {
    do {
      iVar3 = _fscanf(g_ActorDataFile,"%d");
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                  ("part texture entry","description");
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_14);
  }
  _fscanf(g_ActorDataFile," ");
  do {
    while (iVar2 = _fgetc(g_ActorDataFile), -1 < iVar2) {
      if (iVar2 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
              ("part status info closing brace",property_name);
  } while (iVar2 != 10);
  return;
}
