// Name: core_actor.cpp_archivePartStatus_FUN_0040cbf0
// Address: 0040cbf0
// Address Range: [[0040cbf0, 0040ce7e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archivePartStatus_FUN_0040cbf0(CDeformableModelInstance *model_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archivePartStatus_FUN_0040cbf0(CDeformableModelInstance *model_ptr,char *property_name)

{
  SPartInstanceData *pSVar1;
  int iVar2;
  int iVar3;
  CDeformableModelInstance *pCVar4;
  int local_14;
  
  if (DAT_00763e88 != 1) {
    _fprintf(DAT_00763e84,"%s{ // %s\n",&DAT_005acc90,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(1);
    _fprintf(DAT_00763e84,"%s%d\n",&DAT_005acc90,0x1e);
    _fprintf(DAT_00763e84,"%s",&DAT_005acc90);
    pCVar4 = model_ptr;
    do {
      pSVar1 = &pCVar4->part_data;
      pCVar4 = (CDeformableModelInstance *)&(pCVar4->motion_controller).current_motion_index;
      _fprintf(DAT_00763e84,"%d ",pSVar1->visibility_flags[0]);
    } while (pCVar4 != (CDeformableModelInstance *)&model_ptr->transformed_vertices[2].z);
    _fprintf(DAT_00763e84,"\n");
    iVar2 = 0;
    _fprintf(DAT_00763e84,"%s",&DAT_005acc90);
    do {
      pSVar1 = &model_ptr->part_data;
      model_ptr = (CDeformableModelInstance *)&(model_ptr->motion_controller).current_motion_index;
      iVar2 = iVar2 + 1;
      _fprintf(DAT_00763e84,"%d ",pSVar1->texture_set_indices[0]);
    } while (iVar2 < 0x1e);
    _fprintf(DAT_00763e84,"\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(-1);
    _fprintf(DAT_00763e84,"%s}\n",&DAT_005acc90);
    return;
  }
  do {
    iVar2 = _fgetc(DAT_00763e84);
    if (iVar2 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                ("part status opening brace",property_name);
    }
  } while (iVar2 != 10);
  _fscanf(DAT_00763e84,"%d");
  core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90(model_ptr);
  iVar2 = 0;
  if (0 < local_14) {
    do {
      iVar3 = _fscanf(DAT_00763e84,"%d");
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                  ("part status entry","description");
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_14);
  }
  _fscanf(DAT_00763e84," ");
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_0051dcb0(model_ptr);
  iVar2 = 0;
  if (0 < local_14) {
    do {
      iVar3 = _fscanf(DAT_00763e84,"%d");
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                  ("part texture entry","description");
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_14);
  }
  _fscanf(DAT_00763e84," ");
  do {
    while (iVar2 = _fgetc(DAT_00763e84), -1 < iVar2) {
      if (iVar2 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
              ("part status info closing brace",property_name);
  } while (iVar2 != 10);
  return;
}
