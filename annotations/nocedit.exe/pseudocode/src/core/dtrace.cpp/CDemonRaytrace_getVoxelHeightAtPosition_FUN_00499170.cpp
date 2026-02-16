// Name: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
// Address: 00499170
// Address Range: [[00499170, 00499329]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170(CDemonRaytrace *this_ptr,CVector3f *world_position)

#include "nocturne.h"

float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170(CDemonRaytrace *this_ptr,CVector3f *world_position)

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
  float fVar13;
  float fVar14;
  CDemonCube *pCVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fStack_44;
  int iStack_34;
  int local_30;
  
  fVar2 = world_position->y;
  fVar3 = (this_ptr->bbox_min).y;
  fVar4 = (this_ptr->cell_size).y;
  fVar5 = world_position->z;
  fVar6 = (this_ptr->bbox_min).z;
  fVar7 = (this_ptr->cell_size).z;
  dVar16 = round
                     ((double)((world_position->x - (this_ptr->bbox_min).x) /
                              (this_ptr->cell_size).x));
  fVar14 = 0.125f;
  fVar8 = (this_ptr->cell_size).x;
  fVar9 = (this_ptr->bbox_min).x;
  fVar10 = world_position->x;
  fVar13 = (this_ptr->cell_size).x * 0.125f;
  dVar17 = round((double)((fVar2 - fVar3) / fVar4));
  fVar2 = (this_ptr->cell_size).y;
  fVar3 = (this_ptr->bbox_min).y;
  fVar4 = world_position->y;
  fVar11 = (this_ptr->cell_size).y;
  dVar18 = round((double)((fVar5 - fVar6) / fVar7));
  iStack_34 = (int)ROUND(dVar18);
  fVar5 = (this_ptr->cell_size).z;
  fVar6 = (this_ptr->bbox_min).z;
  fVar7 = world_position->z;
  fVar12 = (this_ptr->cell_size).z;
  dVar16 = round
                     ((double)((fVar10 - ((float)(int)ROUND(dVar16) * fVar8 + fVar9)) / fVar13));
  local_30 = (int)ROUND(dVar16);
  round
            ((double)((fVar4 - ((float)(int)ROUND(dVar17) * fVar2 + fVar3)) / (fVar11 * fVar14)));
  dVar16 = round
                     ((double)((fVar7 - ((float)iStack_34 * fVar5 + fVar6)) / (fVar12 * fVar14)));
  iVar1 = (int)ROUND(dVar16);
  if (((((local_30 < 0) || (local_30 < 0)) || (iVar1 < 0)) || ((7 < local_30 || (7 < local_30)))) ||
     (7 < iVar1)) {
    fStack_44 = -999.0;
  }
  else {
    while (pCVar15 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                               (this_ptr,0x4991f3,iStack_34,0x499218), pCVar15 != (CDemonCube *)0x0)
    {
      if ((pCVar15->voxel_buffer1 != (SVoxelGrid *)0x0) &&
         ((pCVar15->voxel_buffer1->voxels[iVar1][local_30] &
          g_PrecomputedSurfaceNormals[0x63dc].x._0_1_) != 0)) {
        return (float)local_30 * (this_ptr->cell_size).y * 0.125f +
               (float)iStack_34 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      }
      local_30 = local_30 + -1;
      if (local_30 < 0) {
        iStack_34 = iStack_34 + -1;
        local_30 = 7;
      }
    }
    fStack_44 = -999.9;
  }
  return fStack_44;
}
