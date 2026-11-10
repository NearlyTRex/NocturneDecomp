// Name: core_actor.cpp_archivePartStatus_FUN_0040b960
// Address: 0040b960
// Address Range: [[0040b960, 0040bbee]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archivePartStatus_FUN_0040b960(CDeformableModelInstance *model_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archivePartStatus_FUN_0040b960(CDeformableModelInstance *model_ptr,char *property_name)

{
  int iVar1;
  int iVar2;
  CDeformableModelInstance *pCVar3;
  byte *puVar4;
  int local_14;
  
  if (DAT_007c3038 != 1) {
    FUN_005c03c0(DAT_007c3034,"%s{ // %s\n",&DAT_006106c0,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(1);
    FUN_005c03c0(DAT_007c3034,"%s%d\n",&DAT_006106c0,0x3c);
    FUN_005c03c0(DAT_007c3034,&DAT_005d2b98,&DAT_006106c0);
    pCVar3 = model_ptr;
    do {
      puVar4 = &pCVar3->field_0x2140;
      pCVar3 = (CDeformableModelInstance *)&(pCVar3->base).current_motion_index;
      FUN_005c03c0(DAT_007c3034,&DAT_005d2b9b,*(uint *)puVar4);
    } while (pCVar3 != (CDeformableModelInstance *)&model_ptr->bone_origins[0xc].z);
    FUN_005c03c0(DAT_007c3034,&DAT_005d2b9f);
    iVar1 = 0;
    FUN_005c03c0(DAT_007c3034,&DAT_005d2ba1,&DAT_006106c0);
    do {
      puVar4 = &model_ptr->field_0x2230;
      model_ptr = (CDeformableModelInstance *)&(model_ptr->base).current_motion_index;
      iVar1 = iVar1 + 1;
      FUN_005c03c0(DAT_007c3034,&DAT_005d2ba4,*(uint *)puVar4);
    } while (iVar1 < 0x3c);
    FUN_005c03c0(DAT_007c3034,&DAT_005d2ba8);
    core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(-1);
    FUN_005c03c0(DAT_007c3034,&DAT_005d2baa,&DAT_006106c0);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_007c3034);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                ("part status opening brace",property_name);
    }
  } while (iVar1 != 10);
  _fscanf(DAT_007c3034,&DAT_005d2b1e,&local_14);
  core_skeleton_cpp_FUN_00569ae0(model_ptr);
  iVar1 = 0;
  if (0 < local_14) {
    puVar4 = &model_ptr->field_0x2140;
    do {
      iVar2 = _fscanf(DAT_007c3034,&DAT_005d2b21,puVar4);
      if (iVar2 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                  ("part status entry","description");
      }
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar1 < local_14);
  }
  _fscanf(DAT_007c3034,&DAT_005d2b42);
  core_skeleton_cpp_FUN_00569b00(model_ptr);
  iVar1 = 0;
  if (0 < local_14) {
    puVar4 = &model_ptr->field_0x2230;
    do {
      iVar2 = _fscanf(DAT_007c3034,&DAT_005d2b44,puVar4);
      if (iVar2 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                  ("part texture entry","description");
      }
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar1 < local_14);
  }
  _fscanf(DAT_007c3034,&DAT_005d2b66);
  do {
    while (iVar1 = _fgetc(DAT_007c3034), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
              ("part status info closing brace",property_name);
  } while (iVar1 != 10);
  return;
}
