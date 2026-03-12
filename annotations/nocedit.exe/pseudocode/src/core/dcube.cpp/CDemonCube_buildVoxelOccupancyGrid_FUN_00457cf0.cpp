// Name: core_dcube.cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0
// Address: 00457cf0
// Address Range: [[00457cf0, 00457eaa]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0(CDemonCube *this_ptr)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0(CDemonCube *this_ptr)

{
  int iVar3;
  int iVar1;
  int iVar4;
  int iVar5;
  SVoxelGrid *pSVar6;
  SVoxelGrid *pSVar7;
  byte bVar8;
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int iVar2;
  uchar *puVar1;
  
  bVar8 = 0;
  if (this_ptr->voxel_buffer1 != (SVoxelGrid *)0x0) {
    local_64 = (this_ptr->max_bounds).x - (this_ptr->min_bounds).x;
    local_60 = (this_ptr->max_bounds).y - (this_ptr->min_bounds).y;
    local_5c = (this_ptr->max_bounds).z - (this_ptr->min_bounds).z;
    if (&local_40 != &local_64) {
      local_40 = local_64;
      local_3c = local_60;
      local_38 = local_5c;
    }
    local_34 = local_40 / 8.0f;
    local_30 = local_3c * 0.125f;
    local_2c = local_38 * 0.125f;
    if (&local_28 != &local_34) {
      local_28 = local_34;
      local_24 = local_30;
      local_20 = local_2c;
    }
    local_1c = 0;
    local_18 = 0;
    do {
      iVar5 = 0;
      local_4c.z = (float)local_18 * local_20 + (this_ptr->min_bounds).z;
      local_14 = local_1c;
      local_58.z = local_4c.z + local_20;
      local_10 = local_1c;
      do {
        iVar2 = local_14;
        local_4c.y = (float)iVar5 * local_24 + (this_ptr->min_bounds).y;
        local_58.y = local_4c.y + local_24;
        iVar4 = 0;
        this_ptr->voxel_buffer1->voxels[0][local_10] = '\0';
        do {
          local_4c.x = (float)iVar4 * local_28 + (this_ptr->min_bounds).x;
          local_58.x = local_4c.x + local_28;
          local_c = iVar4;
          iVar3 = core_dcube_cpp_CDemonCube_testAABBIntersection_FUN_00457ca0
                            (this_ptr,&local_4c,&local_58);
          if (iVar3 != 0) {
            puVar1 = this_ptr->voxel_buffer1->voxels[0] + iVar2;
            *puVar1 = *puVar1 | g_VoxelGridBitmasks[iVar4];
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 8);
        iVar5 = iVar5 + 1;
        local_10 = local_10 + 1;
        local_14 = local_14 + 1;
      } while (iVar5 < 8);
      local_18 = local_18 + 1;
      local_1c = local_1c + 8;
    } while (local_18 < 8);
    pSVar6 = this_ptr->voxel_buffer1;
    pSVar7 = this_ptr->voxel_buffer2;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(uint *)pSVar7->voxels[0] = *(uint *)pSVar6->voxels[0];
      pSVar6 = (SVoxelGrid *)((int)pSVar6 + (uint)bVar8 * -8 + 4);
      pSVar7 = (SVoxelGrid *)((int)pSVar7 + (uint)bVar8 * -8 + 4);
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar7 = (SVoxelGrid *)((int)pSVar7 + (uint)bVar8 * -2 + 1);
      pSVar6 = (SVoxelGrid *)((int)pSVar6 + (uint)bVar8 * -2 + 1);
      pSVar7->voxels[0][0] = pSVar6->voxels[0][0];
      pSVar6 = pSVar6;
      pSVar7 = pSVar7;
    }
  }
  return;
}
