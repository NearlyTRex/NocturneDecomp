// Name: core_actor.cpp_archivePartStatus_FUN_0040bc50
// Address: 0040bc50
// Address Range: [[0040bc50, 0040bede]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archivePartStatus_FUN_0040bc50(CDeformableModelInstance *model_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archivePartStatus_FUN_0040bc50(CDeformableModelInstance *model_ptr,char *property_name)

{
  SPartInstanceData *pSVar1;
  int iVar2;
  int iVar3;
  CDeformableModelInstance *pCVar4;
  int local_14;
  
  if (DAT_007bc038 != 1) {
    FUN_005b8010(DAT_007bc034,"%s{ // %s\n",&DAT_00609590,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(1);
    FUN_005b8010(DAT_007bc034,"%s%d\n",&DAT_00609590,0x1e);
    FUN_005b8010(DAT_007bc034,&DAT_005cac35,&DAT_00609590);
    pCVar4 = model_ptr;
    do {
      pSVar1 = &pCVar4->part_data;
      pCVar4 = (CDeformableModelInstance *)&(pCVar4->base).current_motion_index;
      FUN_005b8010(DAT_007bc034,&DAT_005cac38,pSVar1->visibility_flags[0]);
    } while (pCVar4 != (CDeformableModelInstance *)&model_ptr->bone_origins[2].z);
    FUN_005b8010(DAT_007bc034,&DAT_005cac3c);
    iVar2 = 0;
    FUN_005b8010(DAT_007bc034,&DAT_005cac3e,&DAT_00609590);
    do {
      pSVar1 = &model_ptr->part_data;
      model_ptr = (CDeformableModelInstance *)&(model_ptr->base).current_motion_index;
      iVar2 = iVar2 + 1;
      FUN_005b8010(DAT_007bc034,&DAT_005cac41,pSVar1->texture_set_indices[0]);
    } while (iVar2 < 0x1e);
    FUN_005b8010(DAT_007bc034,&DAT_005cac45);
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(-1);
    FUN_005b8010(DAT_007bc034,&DAT_005cac47,&DAT_00609590);
    return;
  }
  do {
    iVar2 = _fgetc(DAT_007bc034);
    if (iVar2 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("part status opening brace",property_name);
    }
  } while (iVar2 != 10);
  _fscanf(DAT_007bc034,&DAT_005cabbb);
  core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_00547440(model_ptr);
  iVar2 = 0;
  if (0 < local_14) {
    do {
      iVar3 = _fscanf(DAT_007bc034,&DAT_005cabbe);
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                  ("part status entry","description");
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_14);
  }
  _fscanf(DAT_007bc034,&DAT_005cabdf);
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_00547460(model_ptr);
  iVar2 = 0;
  if (0 < local_14) {
    do {
      iVar3 = _fscanf(DAT_007bc034,&DAT_005cabe1);
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                  ("part texture entry","description");
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_14);
  }
  _fscanf(DAT_007bc034,&DAT_005cac03);
  do {
    while (iVar2 = _fgetc(DAT_007bc034), -1 < iVar2) {
      if (iVar2 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
              ("part status info closing brace",property_name);
  } while (iVar2 != 10);
  return;
}
