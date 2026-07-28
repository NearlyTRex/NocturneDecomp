// Name: core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_0051e960
// Address: 0051e960
// Address Range: [[0051e960, 0051e9d5]]
// Convention: unknown
// Signature: undefined4 core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_0051e960(CDeformableModelInstance *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_0051e960(CDeformableModelInstance *param_1,uint param_2,uint param_3)

{
  CDeformableModel *pCVar1;
  uint uVar2;
  int lod_index;
  CVector3i *pCVar3;
  SPartInstanceData *pSVar4;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(param_1);
  lod_index = pCVar1->num_lods + -2;
  if (lod_index < 0) {
    lod_index = 0;
  }
  if (lod_index != param_1->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(param_1,lod_index);
  }
  pSVar4 = &param_1->part_data;
  pCVar3 = param_1->skinned_vertices_buffer;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(param_1);
  uVar2 = core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0051a470
                    (pCVar1,lod_index,param_2,param_3,pCVar3,pSVar4);
  return uVar2;
}
