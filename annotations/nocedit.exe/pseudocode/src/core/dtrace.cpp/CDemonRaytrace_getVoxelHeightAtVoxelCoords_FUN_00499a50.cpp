// Name: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50
// Address: 00499a50
// Address Range: [[00499a50, 00499b3c]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50(CDemonRaytrace *this_ptr,CVector3i *voxel_coords)

#include "nocturne.h"

int __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50(CDemonRaytrace *this_ptr,CVector3i *voxel_coords)

{
  int grid_x;
  int grid_y;
  int grid_z;
  CDemonCube *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar1;
  uint uVar2;
  
  iVar4 = voxel_coords->x >> 0x1f;
  grid_x = (int)((voxel_coords->x + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
  iVar5 = voxel_coords->y >> 0x1f;
  grid_y = (int)((voxel_coords->y + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
  iVar6 = voxel_coords->z >> 0x1f;
  grid_z = (int)((voxel_coords->z + iVar6 * -8) - (uint)(iVar6 << 2 < 0)) >> 3;
  if (((((-1 < grid_x) && (-1 < grid_y)) && (-1 < grid_z)) &&
      ((grid_x < (this_ptr->grid_coord).x && (grid_y < (this_ptr->grid_coord).y)))) &&
     (grid_z < (this_ptr->grid_coord).z)) {
    uVar1 = voxel_coords->x;
    uVar2 = voxel_coords->z;
    uVar7 = voxel_coords->y & 7;
    do {
      do {
        pCVar3 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                           (this_ptr,grid_x,grid_y,grid_z);
        if (pCVar3 == (CDemonCube *)0x0) {
          return -999;
        }
        if ((pCVar3->voxel_buffer1 != (SVoxelGrid *)0x0) &&
           ((pCVar3->voxel_buffer1->voxels[uVar2 & 7][uVar7] & g_VoxelYBitMasks[uVar1 & 7]) != 0)) {
          return uVar7 + grid_y * 8;
        }
        uVar7 = uVar7 - 1;
      } while (-1 < (int)uVar7);
      grid_y = grid_y + -1;
      uVar7 = 7;
    } while (-1 < grid_y);
  }
  return -999;
}
