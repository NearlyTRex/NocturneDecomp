// Name: core_actor.cpp_archivePartStatus_FUN_0040bc50
// Address: 0040bc50
// Address Range: [[0040bc50, 0040bede]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archivePartStatus_FUN_0040bc50(CDeformableModelInstance *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archivePartStatus_FUN_0040bc50(CDeformableModelInstance *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  CDeformableModelInstance *pCVar3;
  SPartInstanceData *pSVar4;
  int *piVar5;
  int local_14;
  
  if (DAT_007bc038 != 1) {
    FUN_005b8010(DAT_007bc034,"%s{ // %s\n",&DAT_00609590,param_2);
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(1);
    FUN_005b8010(DAT_007bc034,"%s%d\n",&DAT_00609590,0x1e);
    FUN_005b8010(DAT_007bc034,&DAT_005cac35,&DAT_00609590);
    pCVar3 = param_1;
    do {
      pSVar4 = &pCVar3->part_data;
      pCVar3 = (CDeformableModelInstance *)&(pCVar3->base).current_motion_index;
      FUN_005b8010(DAT_007bc034,&DAT_005cac38,pSVar4->visibility_flags[0]);
    } while (pCVar3 != (CDeformableModelInstance *)&param_1->bone_origins[2].z);
    FUN_005b8010(DAT_007bc034,&DAT_005cac3c);
    iVar1 = 0;
    FUN_005b8010(DAT_007bc034,&DAT_005cac3e,&DAT_00609590);
    do {
      pSVar4 = &param_1->part_data;
      param_1 = (CDeformableModelInstance *)&(param_1->base).current_motion_index;
      iVar1 = iVar1 + 1;
      FUN_005b8010(DAT_007bc034,&DAT_005cac41,pSVar4->texture_set_indices[0]);
    } while (iVar1 < 0x1e);
    FUN_005b8010(DAT_007bc034,&DAT_005cac45);
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(-1);
    FUN_005b8010(DAT_007bc034,&DAT_005cac47,&DAT_00609590);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_007bc034);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("part status opening brace",param_2);
    }
  } while (iVar1 != 10);
  _fscanf(DAT_007bc034,&DAT_005cabbb,&local_14);
  core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_00547440(param_1);
  iVar1 = 0;
  if (0 < local_14) {
    pSVar4 = &param_1->part_data;
    do {
      iVar2 = _fscanf(DAT_007bc034,&DAT_005cabbe,pSVar4);
      if (iVar2 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                  ("part status entry","description");
      }
      iVar1 = iVar1 + 1;
      pSVar4 = (SPartInstanceData *)(pSVar4->visibility_flags + 1);
    } while (iVar1 < local_14);
  }
  _fscanf(DAT_007bc034,&DAT_005cabdf);
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_00547460(param_1);
  iVar1 = 0;
  if (0 < local_14) {
    piVar5 = (param_1->part_data).texture_set_indices;
    do {
      iVar2 = _fscanf(DAT_007bc034,&DAT_005cabe1,piVar5);
      if (iVar2 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                  ("part texture entry","description");
      }
      iVar1 = iVar1 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar1 < local_14);
  }
  _fscanf(DAT_007bc034,&DAT_005cac03);
  do {
    while (iVar1 = _fgetc(DAT_007bc034), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
              ("part status info closing brace",param_2);
  } while (iVar1 != 10);
  return;
}
