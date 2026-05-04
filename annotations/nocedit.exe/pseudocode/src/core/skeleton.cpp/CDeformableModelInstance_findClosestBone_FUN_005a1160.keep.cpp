// Name: core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_005a1160
// Address: 005a1160
// MANUAL RECONSTRUCTION
// Address Range: [[005a1160, 005a14a2]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_005a1160(CDeformableModelInstance *this_ptr,CVector3f *point)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_005a1160(CDeformableModelInstance *this_ptr,CVector3f *point)

{
  float fVar1;
  float fVar2_00;
  float fVar13;
  float fVar14;
  CSkeleton *pCVar13;
  CMatrix3x4f *pCVar14;
  CMatrix3x4f *pCVar15;
  int iVar16;
  int local_4c;
  float local_40;
  float fVar11;
  float fVar6;
  float fVar9;
  float fVar12;
  float fVar10;
  float fVar3;
  int iVar1;
  float fVar4;
  float fVar7;
  float fVar2;
  float fVar5;
  float fVar8;
  
  iVar16 = 0;
  pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  local_40 = 1e+30;
  local_4c = 0;
  if (0 < pCVar13->bone_count) {
    pCVar14 = (this_ptr->bone_transform).bone_world_matrices;
    pCVar15 = pCVar14;
    do {
      iVar1 = pCVar13->bone_list[iVar16].parent_index;
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
          fVar1 = point->x - fVar2;
          fVar2_00 = point->y - fVar3;
          fVar1 = fVar2_00 * fVar2_00 + fVar1 * fVar1;
          fVar2_00 = point->z - fVar4;
        }
        else {
          fVar12 = 1.0 / fVar10;
          fVar1 = fVar8 * fVar12;
          fVar2_00 = fVar9 * fVar12;
          fVar13 = fVar11 * fVar12;
          fVar14 = (point->z * fVar13 + point->x * fVar1 + point->y * fVar2_00) -
                   (fVar4 * fVar13 + fVar2 * fVar1 + fVar3 * fVar2_00);
          if (fVar14 <= 0.0) goto LAB_005a1348;
          if (fVar14 < fVar10) {
            fVar1 = point->x - (fVar2 + fVar1 * fVar14);
            fVar2_00 = point->y - (fVar3 + fVar2_00 * fVar14);
            fVar1 = fVar2_00 * fVar2_00 + fVar1 * fVar1;
            fVar2_00 = point->z - (fVar4 + fVar13 * fVar14);
          }
          else {
            fVar1 = point->x - fVar5;
            fVar2_00 = point->y - fVar6;
            fVar1 = fVar2_00 * fVar2_00 + fVar1 * fVar1;
            fVar2_00 = point->z - fVar7;
          }
        }
        fVar1 = SQRT(fVar2_00 * fVar2_00 + fVar1);
        if (fVar1 < local_40) {
          local_4c = iVar1;
          local_40 = fVar1;
        }
      }
      iVar16 = iVar16 + 1;
      pCVar15 = pCVar15 + 1;
    } while (iVar16 < pCVar13->bone_count);
  }
  return local_4c;
}
