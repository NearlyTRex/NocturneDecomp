// Name: core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
// Address: 0051e0c0
// Address Range: [[0051e0c0, 0051e114]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance *param_1,char *param_2)

#include "nocturne.h"

void core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1->model_name;
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  param_1->model_ptr = (CDeformableModel *)0x0;
  core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90(param_1);
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_0051dcb0(param_1);
  param_1->cached_skinned_lod_index = -1;
  return;
}
