// Name: core_actor.cpp_archivePartStatus_FUN_0040bae0
// Address: 0040bae0
// MANUAL RECONSTRUCTION
// Address Range: [[0040bae0, 0040bd6e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archivePartStatus_FUN_0040bae0(CDeformableModelInstance *model_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archivePartStatus_FUN_0040bae0(CDeformableModelInstance *model_ptr,char *property_name)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SPartInstanceData *pSVar4;
  int *piVar5;
  int local_14;


  if (g_ActorReadingMode != 1) {
    _fprintf(g_ActorDataFile,"%s{ // %s\n",g_PropertyNamePrefix,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(1);
    _fprintf(g_ActorDataFile,"%s%d\n",g_PropertyNamePrefix,0x1e);
    _fprintf(g_ActorDataFile,"%s",g_PropertyNamePrefix);
    for (iVar4 = 0; iVar4 < 0x1e; iVar4 = iVar4 + 1) {
      _fprintf(g_ActorDataFile,"%d ",model_ptr->part_data.visibility_flags[iVar4]);
    }
    _fprintf(g_ActorDataFile,"\n");
    _fprintf(g_ActorDataFile,"%s",g_PropertyNamePrefix);
    for (iVar4 = 0; iVar4 < 0x1e; iVar4 = iVar4 + 1) {
      _fprintf(g_ActorDataFile,"%d ",model_ptr->part_data.texture_set_indices[iVar4]);
    }
    _fprintf(g_ActorDataFile,"\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(-1);
    _fprintf(g_ActorDataFile,"%s}\n",g_PropertyNamePrefix);
    return;
  }
  do {
    iVar1 = _fgetc(g_ActorDataFile);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("part status opening brace",property_name);
    }
  } while (iVar1 != 10);
  _fscanf(g_ActorDataFile,"%d",&local_14);
  core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(model_ptr);
  iVar4 = 0;
  if (0 < local_14) {
    pSVar4 = &model_ptr->part_data;
    do {
      iVar2 = _fscanf(g_ActorDataFile,"%d",&pSVar4->visibility_flags[0]);
      if (iVar2 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                  ("part status entry","description");
      }
      iVar4 = iVar4 + 1;
      pSVar4 = (SPartInstanceData *)(pSVar4->visibility_flags + 1);
    } while (iVar4 < local_14);
  }
  _fscanf(g_ActorDataFile," ");
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430(model_ptr);
  iVar4 = 0;
  if (0 < local_14) {
    piVar5 = (model_ptr->part_data).texture_set_indices;
    do {
      iVar3 = _fscanf(g_ActorDataFile,"%d",piVar5);
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                  ("part texture entry","description");
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < local_14);
  }
  _fscanf(g_ActorDataFile," ");
  do {
    while (iVar4 = _fgetc(g_ActorDataFile), -1 < iVar4) {
      if (iVar4 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
              ("part status info closing brace",property_name);
  } while (iVar4 != 10);
  return;
}
