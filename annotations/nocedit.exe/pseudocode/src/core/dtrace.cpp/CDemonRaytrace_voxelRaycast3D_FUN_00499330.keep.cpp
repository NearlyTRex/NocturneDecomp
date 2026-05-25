// Name: core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330
// Address: 00499330
// MANUAL RECONSTRUCTION
// Address Range: [[00499330, 004997c9]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330(CDemonRaytrace *this_ptr,CVector3f *start_position,CVector3f *end_position)

#include "nocturne.h"

int __cdecl core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330(CDemonRaytrace *this_ptr,CVector3f *start_position,CVector3f *end_position)

{
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar13;
  int iVar14;
  int iVar15;
  CDemonCube *pCVar16;
  int iVar17;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float fVar8;
  float fVar7;
  float fVar6;
  float fVar5;
  int iVar12;
  int iVar11;
  float fVar10;
  float fVar9;
  float fVar4;
  float fVar3;
  float fVar2;
  int iVar1;

  local_20 = 0;
  local_1c = 0;
  fVar12 = 1.0 / ((this_ptr->cell_size).x * 0.125f);
  fVar10 = 1.0 / ((this_ptr->cell_size).y * 0.125f);
  fVar11 = (start_position->x - (this_ptr->bbox_min).x) * fVar12;
  fVar9 = 1.0 / ((this_ptr->cell_size).z * 0.125f);
  fVar14 = (start_position->y - (this_ptr->bbox_min).y) * fVar10;
  fVar13 = (start_position->z - (this_ptr->bbox_min).z) * fVar9;
  fVar2 = end_position->x - start_position->x;
  fVar3 = end_position->y - start_position->y;
  fVar4 = end_position->z - start_position->z;
  iVar17 = 1;
  iVar2 = (int)ROUND(ROUND((end_position->x - (this_ptr->bbox_min).x) * fVar12));
  iVar3 = (int)ROUND(ROUND(fVar10 * (end_position->y - (this_ptr->bbox_min).y)));
  iVar4 = (int)ROUND(ROUND((end_position->z - (this_ptr->bbox_min).z) * fVar9));
  local_30 = (int)ROUND(ROUND(fVar11));
  local_2c = (int)ROUND(ROUND(fVar14));
  iVar1 = (int)ROUND(ROUND(fVar13));
  if (((local_30 != iVar2) || (local_2c != iVar3)) ||
     (iVar11 = local_20, iVar12 = local_1c, iVar1 != iVar4)) {
    fVar5 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
    if (fVar5 <= 0.0) {
      return 0;
    }
    fVar12 = 2.684355e+08f / fVar5;
    local_34 = (int)ROUND(ROUND(ABS(fVar2) * fVar12));
    local_38 = (int)ROUND(ROUND(ABS(fVar3) * fVar12));
    local_3c = (int)ROUND(ROUND(ABS(fVar4) * fVar12));
    if (fVar2 < 0.0) {
      iVar13 = local_30 - iVar2;
      fVar6 = fVar11 - (float)local_30;
      local_40 = -1;
    }
    else {
      iVar13 = iVar2 - local_30;
      fVar6 = (float)(local_30 + 1) - fVar11;
      local_40 = 1;
    }
    if (fVar3 < 0.0) {
      iVar14 = local_2c - iVar3;
      fVar7 = fVar14 - (float)local_2c;
      local_48 = -1;
    }
    else {
      iVar14 = iVar3 - local_2c;
      fVar7 = (float)(local_2c + 1) - fVar14;
      local_48 = 1;
    }
    if (fVar4 < 0.0) {
      iVar15 = iVar1 - iVar4;
      fVar8 = fVar13 - (float)iVar1;
      local_44 = -1;
    }
    else {
      iVar15 = iVar4 - iVar1;
      fVar8 = (float)(iVar1 + 1) - fVar13;
      local_44 = 1;
    }
    iVar17 = iVar13 + 1 + iVar14 + iVar15;
    local_28 = (int)ROUND(ROUND((float)local_38 * fVar6 - (float)local_34 * fVar7));
    iVar11 = (int)ROUND(ROUND((float)local_38 * fVar8 - (float)local_3c * fVar7));
    iVar12 = (int)ROUND(ROUND((float)local_3c * fVar6 - (float)local_34 * fVar8));
  }
  do {
    local_1c = iVar12;
    local_20 = iVar11;
    local_24 = iVar1;
    pCVar16 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                        (this_ptr,local_30 / 8,local_2c / 8,local_24 / 8);
    if (pCVar16 != (CDemonCube *)0x0) {
      if (((0 <= local_24 && 0 <= local_2c) && 0 <= local_30) &&
         ((pCVar16->voxel_buffer1 != (SVoxelGrid *)0x0) &&
         ((pCVar16->voxel_buffer1->voxels[local_24 % 8][local_2c % 8] &
          g_VoxelYBitMasks[local_30 % 8]) != 0))) {
        return 1;
      }
    }
    iVar17 = iVar17 + -1;
    if (iVar17 < 1) {
      return 0;
    }
    iVar1 = local_24 + local_44;
    iVar11 = local_20 + local_38;
    iVar12 = local_1c - local_34;
    if (local_28 < 0) {
      if (local_1c < 0) {
        local_30 = local_30 + local_40;
        local_28 = local_28 + local_38;
        iVar1 = local_24;
        iVar11 = local_20;
        iVar12 = local_1c + local_3c;
      }
    }
    else if (-1 < local_20) {
      local_2c = local_2c + local_48;
      local_28 = local_28 - local_34;
      iVar1 = local_24;
      iVar11 = local_20 - local_3c;
      iVar12 = local_1c;
    }
  } while( true );
}
