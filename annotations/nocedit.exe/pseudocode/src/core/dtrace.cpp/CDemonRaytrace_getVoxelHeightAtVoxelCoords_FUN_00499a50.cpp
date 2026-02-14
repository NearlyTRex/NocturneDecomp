// Name: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50
// Address: 00499a50
// Address Range: [[00499a50, 00499b3c]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50(CDemonRaytrace *this_ptr,CVector3i *voxel_coords)

#include "nocturne.h"

int __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50(CDemonRaytrace *this_ptr,CVector3i *voxel_coords)

{
  uint uVar1;
  uint uVar2;
  CDemonCube *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar4 = voxel_coords->x >> 0x1f;
  iVar4 = (int)((voxel_coords->x + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
  iVar5 = voxel_coords->y >> 0x1f;
  iVar5 = (int)((voxel_coords->y + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
  iVar6 = voxel_coords->z >> 0x1f;
  iVar6 = (int)((voxel_coords->z + iVar6 * -8) - (uint)(iVar6 << 2 < 0)) >> 3;
  if (((((-1 < iVar4) && (-1 < iVar5)) && (-1 < iVar6)) &&
      ((iVar4 < (this_ptr->grid_coord).x && (iVar5 < (this_ptr->grid_coord).y)))) &&
     (iVar6 < (this_ptr->grid_coord).z)) {
    uVar1 = voxel_coords->x;
    uVar2 = voxel_coords->z;
    uVar7 = voxel_coords->y & 7;
    do {
      do {
        pCVar3 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(this_ptr,iVar4,iVar5,iVar6);
        if (pCVar3 == (CDemonCube *)0x0) {
          return -999;
        }
        if ((pCVar3->voxel_buffer1 != (SVoxelGrid *)0x0) &&
           ((pCVar3->voxel_buffer1->voxels[uVar2 & 7][uVar7] & g_VoxelYBitMasks[uVar1 & 7]) != 0)) {
          return uVar7 + iVar5 * 8;
        }
        uVar7 = uVar7 - 1;
      } while (-1 < (int)uVar7);
      iVar5 = iVar5 + -1;
      uVar7 = 7;
    } while (-1 < iVar5);
  }
  return -999;
}
