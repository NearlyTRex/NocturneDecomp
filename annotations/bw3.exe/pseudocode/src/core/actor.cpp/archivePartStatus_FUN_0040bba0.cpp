// Name: core_actor.cpp_archivePartStatus_FUN_0040bba0
// Address: 0040bba0
// Address Range: [[0040bba0, 0040be2e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archivePartStatus_FUN_0040bba0(CDeformableModelInstance *model_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archivePartStatus_FUN_0040bba0(CDeformableModelInstance *model_ptr,char *property_name)

{
  int iVar1;
  int iVar2;
  CDeformableModelInstance *pCVar3;
  byte *puVar4;
  int local_14;
  
  if (DAT_007df9b8 != 1) {
    FUN_005a3140(DAT_007df9b4,"%s{ // %s\n",&DAT_005f0990,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(1);
    FUN_005a3140(DAT_007df9b4,"%s%d\n",&DAT_005f0990,0x3c);
    FUN_005a3140(DAT_007df9b4,&DAT_005b5be4,&DAT_005f0990);
    pCVar3 = model_ptr;
    do {
      puVar4 = &pCVar3->field_0x2140;
      pCVar3 = (CDeformableModelInstance *)&(pCVar3->base).current_motion_index;
      FUN_005a3140(DAT_007df9b4,&DAT_005b5be7,*(uint *)puVar4);
    } while (pCVar3 != (CDeformableModelInstance *)&model_ptr->bone_origins[0xc].z);
    FUN_005a3140(DAT_007df9b4,&DAT_005b5beb);
    iVar1 = 0;
    FUN_005a3140(DAT_007df9b4,&DAT_005b5bed,&DAT_005f0990);
    do {
      puVar4 = &model_ptr->field_0x2230;
      model_ptr = (CDeformableModelInstance *)&(model_ptr->base).current_motion_index;
      iVar1 = iVar1 + 1;
      FUN_005a3140(DAT_007df9b4,&DAT_005b5bf0,*(uint *)puVar4);
    } while (iVar1 < 0x3c);
    FUN_005a3140(DAT_007df9b4,&DAT_005b5bf4);
    core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(-1);
    FUN_005a3140(DAT_007df9b4,&DAT_005b5bf6,&DAT_005f0990);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_007df9b4);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                ("part status opening brace",property_name);
    }
  } while (iVar1 != 10);
  _fscanf(DAT_007df9b4,&DAT_005b5b6a,&local_14);
  core_skeleton_cpp_FUN_0054e670(model_ptr);
  iVar1 = 0;
  if (0 < local_14) {
    puVar4 = &model_ptr->field_0x2140;
    do {
      iVar2 = _fscanf(DAT_007df9b4,&DAT_005b5b6d,puVar4);
      if (iVar2 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                  ("part status entry","description");
      }
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar1 < local_14);
  }
  _fscanf(DAT_007df9b4,&DAT_005b5b8e);
  core_skeleton_cpp_FUN_0054e690(model_ptr);
  iVar1 = 0;
  if (0 < local_14) {
    puVar4 = &model_ptr->field_0x2230;
    do {
      iVar2 = _fscanf(DAT_007df9b4,&DAT_005b5b90,puVar4);
      if (iVar2 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                  ("part texture entry","description");
      }
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar1 < local_14);
  }
  _fscanf(DAT_007df9b4,&DAT_005b5bb2);
  do {
    while (iVar1 = _fgetc(DAT_007df9b4), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
              ("part status info closing brace",property_name);
  } while (iVar1 != 10);
  return;
}
