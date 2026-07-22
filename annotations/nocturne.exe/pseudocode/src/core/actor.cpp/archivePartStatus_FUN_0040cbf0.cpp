// Name: core_actor.cpp_archivePartStatus_FUN_0040cbf0
// Address: 0040cbf0
// Address Range: [[0040cbf0, 0040ce7e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archivePartStatus_FUN_0040cbf0(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archivePartStatus_FUN_0040cbf0(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  
  if (DAT_00763e88 != 1) {
    _fprintf(DAT_00763e84,"%s{ // %s\n",&DAT_005acc90,param_2);
    core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(1);
    _fprintf(DAT_00763e84,"%s%d\n",&DAT_005acc90,0x1e);
    _fprintf(DAT_00763e84,"%s",&DAT_005acc90);
    iVar2 = param_1;
    do {
      puVar1 = (uint *)(iVar2 + 0x2140);
      iVar2 = iVar2 + 4;
      _fprintf(DAT_00763e84,"%d ",*puVar1);
    } while (iVar2 != param_1 + 0x78);
    _fprintf(DAT_00763e84,"\n");
    iVar2 = 0;
    _fprintf(DAT_00763e84,"%s",&DAT_005acc90);
    do {
      puVar1 = (uint *)(param_1 + 0x21b8);
      param_1 = param_1 + 4;
      iVar2 = iVar2 + 1;
      _fprintf(DAT_00763e84,"%d ",*puVar1);
    } while (iVar2 < 0x1e);
    _fprintf(DAT_00763e84,"\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(0xffffffff);
    _fprintf(DAT_00763e84,"%s}\n",&DAT_005acc90);
    return;
  }
  do {
    iVar2 = _fgetc(DAT_00763e84);
    if (iVar2 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                ("part status opening brace",param_2);
    }
  } while (iVar2 != 10);
  _fscanf(DAT_00763e84,"%d",&local_14);
  core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90(param_1);
  iVar2 = 0;
  if (0 < local_14) {
    iVar4 = param_1 + 0x2140;
    do {
      iVar3 = _fscanf(DAT_00763e84,"%d",iVar4);
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                  ("part status entry","description");
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < local_14);
  }
  _fscanf(DAT_00763e84," ");
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_0051dcb0(param_1);
  iVar2 = 0;
  if (0 < local_14) {
    param_1 = param_1 + 0x21b8;
    do {
      iVar4 = _fscanf(DAT_00763e84,"%d",param_1);
      if (iVar4 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                  ("part texture entry","description");
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 4;
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
              ("part status info closing brace",param_2);
  } while (iVar2 != 10);
  return;
}
