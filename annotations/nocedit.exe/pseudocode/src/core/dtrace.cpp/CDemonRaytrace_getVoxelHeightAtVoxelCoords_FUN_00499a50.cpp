// Name: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50
// Address: 00499a50
// Address Range: [[00499a50, 00499b3c]]
// Convention: __cdecl
// Signature: int core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50(CDemonRaytrace * this_ptr, CVector3i * voxel_coords)

#include "nocturne.h"

int __cdecl
core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50
          (CDemonRaytrace *this_ptr,CVector3i *voxel_coords)

{
  uint uVar1;
  CDemonCube *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  iVar3 = voxel_coords->x >> 0x1f;
  iVar3 = (int)((voxel_coords->x + iVar3 * -8) - (uint)(iVar3 << 2 < 0)) >> 3;
  iVar4 = voxel_coords->y >> 0x1f;
  iVar4 = (int)((voxel_coords->y + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
  iVar5 = voxel_coords->z >> 0x1f;
  iVar5 = (int)((voxel_coords->z + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
  if (((((-1 < iVar3) && (-1 < iVar4)) && (-1 < iVar5)) &&
      ((iVar3 < (this_ptr->grid_coord).x && (iVar4 < (this_ptr->grid_coord).y)))) &&
     (iVar5 < (this_ptr->grid_coord).z)) {
    uVar1 = voxel_coords->x;
    uVar6 = voxel_coords->y & 7;
    do {
      do {
        pCVar2 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(this_ptr,iVar3,iVar4,iVar5);
        if (pCVar2 == (CDemonCube *)0x0) {
          return -999;
        }
        if ((pCVar2->voxel_buffer1 != (SVoxelGrid *)0x0) &&
           ((pCVar2->voxel_buffer1->voxels[0][unaff_EBP + uVar6] & g_VoxelYBitMasks[uVar1 & 7]) != 0
           )) {
          return uVar6 + iVar4 * 8;
        }
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
      iVar4 = iVar4 + -1;
      uVar6 = 7;
    } while (-1 < iVar4);
  }
  return -999;
}
