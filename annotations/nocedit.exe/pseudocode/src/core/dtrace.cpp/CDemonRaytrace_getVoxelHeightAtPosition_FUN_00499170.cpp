// Name: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
// Address: 00499170
// Address Range: [[00499170, 00499329]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170 (CDemonRaytrace *this_ptr,CVector3f *world_position)

#include "nocturne.h"

float __cdecl
core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
          (CDemonRaytrace *this_ptr,CVector3f *world_position)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CDemonCube *pCVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  double dVar15;
  float fStack_44;
  int iStack_34;
  int local_30;
  
  fVar2 = world_position->y;
  fVar3 = (this_ptr->bbox_min).y;
  fVar4 = (this_ptr->cell_size).y;
  fVar10 = ((float10)world_position->z - (float10)(this_ptr->bbox_min).z) /
           (float10)(this_ptr->cell_size).z;
  dVar14 = crt_math_c_round_FUN_005fe6b0
                     ((double)((world_position->x - (this_ptr->bbox_min).x) /
                              (this_ptr->cell_size).x));
  fVar5 = (this_ptr->cell_size).x;
  fVar6 = (this_ptr->bbox_min).x;
  fVar7 = world_position->x;
  fVar11 = (float10)0.125f;
  fVar12 = (float10)(this_ptr->cell_size).x * fVar11;
  dVar15 = crt_math_c_round_FUN_005fe6b0((double)((fVar2 - fVar3) / fVar4));
  fVar13 = ((float10)world_position->y -
           ((float10)(int)ROUND(dVar15) * (float10)(this_ptr->cell_size).y +
           (float10)(this_ptr->bbox_min).y)) / ((float10)(this_ptr->cell_size).y * fVar11);
  dVar15 = crt_math_c_round_FUN_005fe6b0((double)fVar10);
  iStack_34 = (int)ROUND(dVar15);
  fVar2 = (this_ptr->cell_size).z;
  fVar3 = (this_ptr->bbox_min).z;
  fVar4 = world_position->z;
  fVar8 = (this_ptr->cell_size).z;
  dVar14 = crt_math_c_round_FUN_005fe6b0
                     ((double)(((float10)fVar7 -
                               ((float10)(int)ROUND(dVar14) * (float10)fVar5 + (float10)fVar6)) /
                              fVar12));
  local_30 = (int)ROUND(dVar14);
  crt_math_c_round_FUN_005fe6b0((double)fVar13);
  dVar14 = crt_math_c_round_FUN_005fe6b0
                     ((double)(((float10)fVar4 -
                               ((float10)iStack_34 * (float10)fVar2 + (float10)fVar3)) /
                              ((float10)fVar8 * fVar11)));
  iVar1 = (int)ROUND(dVar14);
  if (((((local_30 < 0) || (local_30 < 0)) || (iVar1 < 0)) || ((7 < local_30 || (7 < local_30)))) ||
     (7 < iVar1)) {
    fStack_44 = -999.0;
  }
  else {
    while (pCVar9 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                              (this_ptr,0x4991f3,iStack_34,0x499218), pCVar9 != (CDemonCube *)0x0) {
      if ((pCVar9->voxel_buffer1 != (SVoxelGrid *)0x0) &&
         ((pCVar9->voxel_buffer1->voxels[iVar1][local_30] &
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
