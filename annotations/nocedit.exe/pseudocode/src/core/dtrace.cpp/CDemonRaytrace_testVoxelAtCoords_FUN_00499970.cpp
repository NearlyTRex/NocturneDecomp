// Name: core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970
// Address: 00499970
// Address Range: [[00499970, 00499a46]]
// Convention: __cdecl
// Signature: int core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970(CDemonRaytrace * this_ptr, CVector3i * voxel_coords)

#include "nocturne.h"

int __cdecl
core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970
          (CDemonRaytrace *this_ptr,CVector3i *voxel_coords)

{
  SVoxelGrid *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = voxel_coords->x;
  if ((((-1 < iVar2) && (-1 < voxel_coords->y)) && (-1 < voxel_coords->z)) &&
     ((iVar2 = (int)((iVar2 + (iVar2 >> 0x1f) * -8) - (uint)((iVar2 >> 0x1f) << 2 < 0)) >> 3,
      iVar2 < (this_ptr->grid_coord).x &&
      (iVar4 = voxel_coords->y >> 0x1f,
      iVar4 = (int)((voxel_coords->y + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3,
      iVar4 < (this_ptr->grid_coord).y)))) {
    iVar5 = voxel_coords->z >> 0x1f;
    iVar3 = (int)((voxel_coords->z + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
    iVar5 = (this_ptr->grid_coord).z;
    if (iVar3 < iVar5) {
      pSVar1 = this_ptr->cube_data[iVar2 * (this_ptr->grid_coord).y * iVar5 + iVar3 + iVar4 * iVar5]
               .voxel_buffer1;
      if (pSVar1 != (SVoxelGrid *)0x0) {
        return (uint)((pSVar1->voxels[voxel_coords->z & 7][voxel_coords->y & 7] &
                      g_VoxelYBitMasks[voxel_coords->x & 7]) != 0);
      }
    }
  }
  return 0;
}
