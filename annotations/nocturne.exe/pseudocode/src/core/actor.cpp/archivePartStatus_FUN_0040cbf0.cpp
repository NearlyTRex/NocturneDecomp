// Name: core_actor.cpp_archivePartStatus_FUN_0040cbf0
// Address: 0040cbf0
// Address Range: [[0040cbf0, 0040ce7e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archivePartStatus_FUN_0040cbf0(CDeformableModelInstance *model_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archivePartStatus_FUN_0040cbf0(CDeformableModelInstance *model_ptr,char *property_name)

{
  int iVar1;
  int iVar2;
  CDeformableModelInstance *pCVar3;
  SPartInstanceData *pSVar4;
  int *piVar5;
  int local_14;
  
  if (DAT_00763e88 != 1) {
    _fprintf(DAT_00763e84,"%s{ // %s\n",&DAT_005acc90,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(1);
    _fprintf(DAT_00763e84,"%s%d\n",&DAT_005acc90,0x1e);
    _fprintf(DAT_00763e84,"%s",&DAT_005acc90);
    pCVar3 = model_ptr;
    do {
      pSVar4 = &pCVar3->part_data;
      pCVar3 = (CDeformableModelInstance *)&(pCVar3->motion_controller).current_motion_index;
      _fprintf(DAT_00763e84,"%d ",pSVar4->visibility_flags[0]);
    } while (pCVar3 != (CDeformableModelInstance *)&model_ptr->transformed_vertices[2].z);
    _fprintf(DAT_00763e84,"\n");
    iVar1 = 0;
    _fprintf(DAT_00763e84,"%s",&DAT_005acc90);
    do {
      pSVar4 = &model_ptr->part_data;
      model_ptr = (CDeformableModelInstance *)&(model_ptr->motion_controller).current_motion_index;
      iVar1 = iVar1 + 1;
      _fprintf(DAT_00763e84,"%d ",pSVar4->texture_set_indices[0]);
    } while (iVar1 < 0x1e);
    _fprintf(DAT_00763e84,"\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(-1);
    _fprintf(DAT_00763e84,"%s}\n",&DAT_005acc90);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_00763e84);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                ("part status opening brace",property_name);
    }
  } while (iVar1 != 10);
  _fscanf(DAT_00763e84,"%d",&local_14);
  core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90(model_ptr);
  iVar1 = 0;
  if (0 < local_14) {
    pSVar4 = &model_ptr->part_data;
    do {
      iVar2 = _fscanf(DAT_00763e84,"%d",pSVar4);
      if (iVar2 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                  ("part status entry","description");
      }
      iVar1 = iVar1 + 1;
      pSVar4 = (SPartInstanceData *)(pSVar4->visibility_flags + 1);
    } while (iVar1 < local_14);
  }
  _fscanf(DAT_00763e84," ");
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_0051dcb0(model_ptr);
  iVar1 = 0;
  if (0 < local_14) {
    piVar5 = (model_ptr->part_data).texture_set_indices;
    do {
      iVar2 = _fscanf(DAT_00763e84,"%d",piVar5);
      if (iVar2 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                  ("part texture entry","description");
      }
      iVar1 = iVar1 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar1 < local_14);
  }
  _fscanf(DAT_00763e84," ");
  do {
    while (iVar1 = _fgetc(DAT_00763e84), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
              ("part status info closing brace",property_name);
  } while (iVar1 != 10);
  return;
}
