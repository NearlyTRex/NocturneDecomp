// Name: core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_00567180
// Address: 00567180
// Address Range: [[00567180, 0056724a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_00567180(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_00567180(CDeformableModel *this_ptr)

{
  float fVar1;
  CSkeleton *pCVar2;
  int iVar3;
  float *pfVar4;
  CSkeleton *pCVar5;
  int iVar6;
  CDeformableModel *local_24;
  float local_1c;
  
  pCVar2 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40(this_ptr);
  iVar6 = 0;
  if (0 < pCVar2->bone_count) {
    local_24 = this_ptr;
    do {
      iVar3 = 0;
      local_24->farthest_child_bone[0] = -1;
      local_1c = 0.0;
      pfVar4 = (float *)&this_ptr->field_0x2290;
      pCVar5 = pCVar2;
      if (0 < pCVar2->bone_count) {
        do {
          if ((iVar6 == *(int *)(pCVar5->bone_list + 0x20)) &&
             (fVar1 = SQRT(pfVar4[2] * pfVar4[2] + *pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1]),
             local_1c < fVar1)) {
            local_24->farthest_child_bone[0] = iVar3;
            local_1c = fVar1;
          }
          iVar3 = iVar3 + 1;
          pfVar4 = pfVar4 + 3;
          pCVar5 = (CSkeleton *)&pCVar5->field_0x24;
        } while (iVar3 < pCVar2->bone_count);
      }
      iVar6 = iVar6 + 1;
      local_24 = (CDeformableModel *)local_24->lod_info;
    } while (iVar6 < pCVar2->bone_count);
  }
  return;
}
