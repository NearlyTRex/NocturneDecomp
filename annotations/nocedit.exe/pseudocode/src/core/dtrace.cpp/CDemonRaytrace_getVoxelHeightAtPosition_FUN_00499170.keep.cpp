// Name: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
// Address: 00499170
// MANUAL RECONSTRUCTION
// Address Range: [[00499170, 00499329]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170(CDemonRaytrace *this_ptr,CVector3f *world_position)

#include "nocturne.h"

float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170(CDemonRaytrace *this_ptr,CVector3f *world_position)

{
  CDemonCube *pCVar3;
  float local_2c;
  int local_1c;
  int local_18;
  int grid_x;
  int iVar2;
  int iVar1;
  int grid_z;
  
  grid_x = (int)ROUND(ROUND((world_position->x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x))
  ;
  local_1c = (int)ROUND(ROUND((world_position->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y
                             ));
  grid_z = (int)ROUND(ROUND((world_position->z - (this_ptr->bbox_min).z) / (this_ptr->cell_size).z))
  ;
  iVar1 = (int)ROUND(ROUND((world_position->x -
                           ((float)grid_x * (this_ptr->cell_size).x + (this_ptr->bbox_min).x)) /
                           ((this_ptr->cell_size).x * 0.125f)));
  local_18 = (int)ROUND(ROUND((world_position->y -
                              ((float)local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y))
                              / ((this_ptr->cell_size).y * 0.125f)));
  iVar2 = (int)ROUND(ROUND((world_position->z -
                           ((float)grid_z * (this_ptr->cell_size).z + (this_ptr->bbox_min).z)) /
                           ((this_ptr->cell_size).z * 0.125f)));
  if (((((iVar1 < 0) || (local_18 < 0)) || (iVar2 < 0)) || ((7 < iVar1 || (7 < local_18)))) ||
     (7 < iVar2)) {
    local_2c = -999.0;
  }
  else {
    while (pCVar3 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                              (this_ptr,grid_x,local_1c,grid_z), pCVar3 != (CDemonCube *)0x0) {
      if ((pCVar3->voxel_buffer1 != (SVoxelGrid *)0x0) &&
         ((pCVar3->voxel_buffer1->voxels[iVar2][local_18] & g_VoxelYBitMasks[iVar1]) != 0)) {
        return (float)local_18 * (this_ptr->cell_size).y * 0.125f +
               (float)local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      }
      local_18 = local_18 + -1;
      if (local_18 < 0) {
        local_1c = local_1c + -1;
        local_18 = 7;
      }
    }
    local_2c = -999.9;
  }
  return local_2c;
}
