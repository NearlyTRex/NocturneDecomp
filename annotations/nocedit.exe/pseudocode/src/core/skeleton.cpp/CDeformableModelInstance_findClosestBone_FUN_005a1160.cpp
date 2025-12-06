// Name: core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_005a1160
// Address: 005a1160
// Address Range: [[005a1160, 005a14a2]]
// Convention: __cdecl
// Signature: int core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_005a1160(CDeformableModelInstance * this_ptr, CVector3f * point)

#include "nocturne.h"

int __cdecl
core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_005a1160
          (CDeformableModelInstance *this_ptr,CVector3f *point)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  CSkeleton *pCVar13;
  CMatrix3x4f *pCVar14;
  CMatrix3x4f *pCVar15;
  int iVar16;
  int local_48;
  float local_3c;
  CSkeleton *local_38;
  
  iVar16 = 0;
  pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  local_3c = 1e+30;
  local_48 = 0;
  if (0 < pCVar13->bone_count) {
    pCVar14 = (this_ptr->bone_transform).bone_world_matrices;
    pCVar15 = pCVar14;
    local_38 = pCVar13;
    do {
      iVar1 = local_38->bone_list[0].parent_index;
      if (-1 < iVar1) {
        fVar2 = pCVar15->m[0].z;
        fVar3 = pCVar15->m[1].z;
        fVar4 = pCVar15->m[2].z;
        fVar5 = pCVar14[iVar1].m[0].z;
        fVar6 = pCVar14[iVar1].m[1].z;
        fVar8 = fVar5 - fVar2;
        fVar9 = fVar6 - fVar3;
        fVar7 = pCVar14[iVar1].m[2].z;
        fVar11 = fVar7 - fVar4;
        fVar10 = SQRT(fVar11 * fVar11 + fVar8 * fVar8 + fVar9 * fVar9);
        if (fVar10 <= 0.0) {
LAB_005a1348:
          fVar2 = point->x - fVar2;
          fVar3 = point->y - fVar3;
          fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
          fVar7 = point->z - fVar4;
        }
        else {
          fVar12 = 1.0 / fVar10;
          fVar8 = fVar8 * fVar12;
          fVar9 = fVar9 * fVar12;
          fVar11 = fVar11 * fVar12;
          fVar12 = (point->z * fVar11 + point->x * fVar8 + point->y * fVar9) -
                   (fVar4 * fVar11 + fVar2 * fVar8 + fVar3 * fVar9);
          if (fVar12 <= 0.0) goto LAB_005a1348;
          if (fVar12 < fVar10) {
            fVar2 = point->x - (fVar2 + fVar8 * fVar12);
            fVar3 = point->y - (fVar3 + fVar9 * fVar12);
            fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
            fVar7 = point->z - (fVar4 + fVar11 * fVar12);
          }
          else {
            fVar5 = point->x - fVar5;
            fVar6 = point->y - fVar6;
            fVar2 = fVar6 * fVar6 + fVar5 * fVar5;
            fVar7 = point->z - fVar7;
          }
        }
        fVar2 = SQRT(fVar7 * fVar7 + fVar2);
        if (fVar2 < local_3c) {
          local_48 = iVar1;
          local_3c = fVar2;
        }
      }
      local_38 = (CSkeleton *)((local_38->motion_list).state_names[1] + 2);
      iVar16 = iVar16 + 1;
      pCVar15 = pCVar15 + 1;
    } while (iVar16 < pCVar13->bone_count);
  }
  return local_48;
}
