// Name: core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0051b480
// Address: 0051b480
// Address Range: [[0051b480, 0051b53f]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_0051b480(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_0051b480(CDeformableModel *this_ptr)

{
  float fVar1;
  SMRGLTextureBasic *pSVar2;
  CSkeleton *pCVar3;
  int iVar4;
  char *pcVar5;
  CSkeleton *pCVar6;
  int iVar7;
  CDeformableModel *local_1c;
  float local_18;
  
  pCVar3 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(this_ptr);
  iVar7 = 0;
  if (0 < pCVar3->bone_count) {
    local_1c = this_ptr;
    do {
      pSVar2 = local_1c->texture_sets[1].textures[0x3d].textures;
      pSVar2[1].texture_name[4] = -1;
      pSVar2[1].texture_name[5] = -1;
      pSVar2[1].texture_name[6] = -1;
      pSVar2[1].texture_name[7] = -1;
      iVar4 = 0;
      local_18 = 0.0;
      pcVar5 = this_ptr->texture_sets[1].textures[0].textures[0].texture_name + 8;
      pCVar6 = pCVar3;
      if (0 < pCVar3->bone_count) {
        do {
          if ((iVar7 == pCVar6->bone_list[0].parent_index) &&
             (fVar1 = SQRT(*(float *)(pcVar5 + 8) * *(float *)(pcVar5 + 8) +
                           *(float *)pcVar5 * *(float *)pcVar5 +
                           *(float *)(pcVar5 + 4) * *(float *)(pcVar5 + 4)), local_18 < fVar1)) {
            *(int *)(local_1c->texture_sets[1].textures[0x3d].textures[1].texture_name + 4) = iVar4;
            local_18 = fVar1;
          }
          iVar4 = iVar4 + 1;
          pcVar5 = pcVar5 + 0xc;
          pCVar6 = (CSkeleton *)((pCVar6->motion_list).state_names[1] + 2);
        } while (iVar4 < pCVar3->bone_count);
      }
      iVar7 = iVar7 + 1;
      local_1c = (CDeformableModel *)local_1c->lod_info;
    } while (iVar7 < pCVar3->bone_count);
  }
  return;
}
