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
  
  if (DAT_007df9b8 != 1) {
    _fprintf(DAT_007df9b4,"%s{ // %s\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(1);
    _fprintf(DAT_007df9b4,"%s%d\n");
    _fprintf(DAT_007df9b4,&DAT_005b5be4);
    pCVar1 = model_ptr->bone_origins;
    do {
      model_ptr = (CDeformableModelInstance *)&(model_ptr->base).current_motion_index;
      _fprintf(DAT_007df9b4,&DAT_005b5be7);
    } while (model_ptr != (CDeformableModelInstance *)&pCVar1[0xc].z);
    _fprintf(DAT_007df9b4,&DAT_005b5beb);
    iVar2 = 0;
    _fprintf(DAT_007df9b4,&DAT_005b5bed);
    do {
      iVar2 = iVar2 + 1;
      _fprintf(DAT_007df9b4,&DAT_005b5bf0);
    } while (iVar2 < 0x3c);
    _fprintf(DAT_007df9b4,&DAT_005b5bf4);
    core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(-1);
    _fprintf(DAT_007df9b4,&DAT_005b5bf6);
    return;
  }
  do {
    iVar2 = _fgetc(DAT_007df9b4);
    if (iVar2 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                ("part status opening brace",property_name);
    }
  } while (iVar2 != 10);
  _fscanf(DAT_007df9b4,&DAT_005b5b6a);
  core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_0054e670(model_ptr);
  iVar2 = 0;
  if (0 < local_14) {
    do {
      iVar3 = _fscanf(DAT_007df9b4,&DAT_005b5b6d);
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                  ("part status entry","description");
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_14);
  }
  _fscanf(DAT_007df9b4,&DAT_005b5b8e);
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_0054e690(model_ptr);
  iVar2 = 0;
  if (0 < local_14) {
    do {
      iVar3 = _fscanf(DAT_007df9b4,&DAT_005b5b90);
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                  ("part texture entry","description");
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_14);
  }
  _fscanf(DAT_007df9b4,&DAT_005b5bb2);
  do {
    while (iVar2 = _fgetc(DAT_007df9b4), -1 < iVar2) {
      if (iVar2 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
              ("part status info closing brace",property_name);
  } while (iVar2 != 10);
  return;
}
