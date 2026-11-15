// Name: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00477370
// Address: 00477370
// Address Range: [[00477370, 00477529]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00477370(CDemonRaytrace *this_ptr,CVector3f *world_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00477370(CDemonRaytrace *this_ptr,CVector3f *world_position)

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
  int iStack_30;
  
  fVar2 = world_position->y;
  fVar3 = (this_ptr->bbox_min).y;
  fVar4 = (this_ptr->cell_size).y;
  fVar5 = world_position->z;
  fVar6 = (this_ptr->bbox_min).z;
  fVar7 = (this_ptr->cell_size).z;
  dVar16 = round
                     ((double)((world_position->x - (this_ptr->bbox_min).x) /
                              (this_ptr->cell_size).x));
  fVar14 = _DAT_005bcbd9;
  fVar8 = (this_ptr->cell_size).x;
  fVar9 = (this_ptr->bbox_min).x;
  fVar10 = world_position->x;
  fVar13 = (this_ptr->cell_size).x * _DAT_005bcbd9;
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
  iStack_30 = (int)ROUND(dVar16);
  round
            ((double)((fVar4 - ((float)(int)ROUND(dVar17) * fVar2 + fVar3)) / (fVar11 * fVar14)));
  dVar16 = round
                     ((double)((fVar7 - ((float)iStack_34 * fVar5 + fVar6)) / (fVar12 * fVar14)));
  iVar1 = (int)ROUND(dVar16);
  if (((((iStack_30 < 0) || (iStack_30 < 0)) || (iVar1 < 0)) || ((7 < iStack_30 || (7 < iStack_30)))
      ) || (7 < iVar1)) {
    fStack_44 = -999.0;
  }
  else {
    while (pCVar15 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00473b60
                               (this_ptr,0x4773f3,iStack_34,0x477418), pCVar15 != (CDemonCube *)0x0)
    {
      if ((pCVar15->voxel_buffer1 != (SVoxelGrid *)0x0) &&
         ((pCVar15->voxel_buffer1->voxels[iVar1][iStack_30] & bRam00a724b4) != 0)) {
        return (float)iStack_30 * (this_ptr->cell_size).y * _DAT_005bcbd9 +
               (float)iStack_34 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      }
      iStack_30 = iStack_30 + -1;
      if (iStack_30 < 0) {
        iStack_34 = iStack_34 + -1;
        iStack_30 = 7;
      }
    }
    fStack_44 = -999.9;
  }
  return fStack_44;
}
