// Name: core_actor.cpp_archivePartStatus_FUN_0040b960
// Address: 0040b960
// Address Range: [[0040b960, 0040bbee]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archivePartStatus_FUN_0040b960(CDeformableModelInstance *model_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archivePartStatus_FUN_0040b960(CDeformableModelInstance *model_ptr,char *property_name)

{
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  int local_14;
  
  if (g_INT_007c3038 != 1) {
    _fprintf(g_FILE_PTR_007c3034,"%s{ // %s\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(1);
    _fprintf(g_FILE_PTR_007c3034,"%s%d\n");
    _fprintf(g_FILE_PTR_007c3034,"%s");
    pCVar1 = model_ptr->bone_origins;
    do {
      model_ptr = (CDeformableModelInstance *)&(model_ptr->base).current_motion_index;
      _fprintf(g_FILE_PTR_007c3034,"%d ");
    } while (model_ptr != (CDeformableModelInstance *)&pCVar1[0xc].z);
    _fprintf(g_FILE_PTR_007c3034,"\n");
    iVar2 = 0;
    _fprintf(g_FILE_PTR_007c3034,"%s");
    do {
      iVar2 = iVar2 + 1;
      _fprintf(g_FILE_PTR_007c3034,"%d ");
    } while (iVar2 < 0x3c);
    _fprintf(g_FILE_PTR_007c3034,"\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(-1);
    _fprintf(g_FILE_PTR_007c3034,"%s}\n");
    return;
  }
  do {
    iVar2 = _fgetc(g_FILE_PTR_007c3034);
    if (iVar2 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                ("part status opening brace",property_name);
    }
  } while (iVar2 != 10);
  _fscanf(g_FILE_PTR_007c3034,"%d");
  core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_00569ae0(model_ptr);
  iVar2 = 0;
  if (0 < local_14) {
    do {
      iVar3 = _fscanf(g_FILE_PTR_007c3034,"%d");
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                  ("part status entry","description");
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_14);
  }
  _fscanf(g_FILE_PTR_007c3034," ");
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_00569b00(model_ptr);
  iVar2 = 0;
  if (0 < local_14) {
    do {
      iVar3 = _fscanf(g_FILE_PTR_007c3034,"%d");
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                  ("part texture entry","description");
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_14);
  }
  _fscanf(g_FILE_PTR_007c3034," ");
  do {
    while (iVar2 = _fgetc(g_FILE_PTR_007c3034), -1 < iVar2) {
      if (iVar2 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
              ("part status info closing brace",property_name);
  } while (iVar2 != 10);
  return;
}
