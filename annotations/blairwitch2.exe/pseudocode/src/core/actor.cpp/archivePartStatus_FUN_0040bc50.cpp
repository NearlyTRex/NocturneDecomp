// Name: core_actor.cpp_archivePartStatus_FUN_0040bc50
// Address: 0040bc50
// Address Range: [[0040bc50, 0040bede]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archivePartStatus_FUN_0040bc50(CDeformableModelInstance *model_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archivePartStatus_FUN_0040bc50(CDeformableModelInstance *model_ptr,char *property_name)

{
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  int local_14;
  
  if (DAT_007bc038 != 1) {
    _fprintf(DAT_007bc034,"%s{ // %s\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(1);
    _fprintf(DAT_007bc034,"%s%d\n");
    _fprintf(DAT_007bc034,&DAT_005cac35);
    pCVar1 = model_ptr->bone_origins;
    do {
      model_ptr = (CDeformableModelInstance *)&(model_ptr->base).current_motion_index;
      _fprintf(DAT_007bc034,&DAT_005cac38);
    } while (model_ptr != (CDeformableModelInstance *)&pCVar1[2].z);
    _fprintf(DAT_007bc034,&DAT_005cac3c);
    iVar2 = 0;
    _fprintf(DAT_007bc034,&DAT_005cac3e);
    do {
      iVar2 = iVar2 + 1;
      _fprintf(DAT_007bc034,&DAT_005cac41);
    } while (iVar2 < 0x1e);
    _fprintf(DAT_007bc034,&DAT_005cac45);
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(-1);
    _fprintf(DAT_007bc034,&DAT_005cac47);
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
