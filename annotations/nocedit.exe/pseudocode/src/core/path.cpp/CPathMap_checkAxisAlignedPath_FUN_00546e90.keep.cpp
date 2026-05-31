// Name: core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90
// Address: 00546e90
// MANUAL RECONSTRUCTION
// Address Range: [[00546e90, 005472f1]]
// Convention: __cdecl
// Signature: int __cdecl core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90(CPathMap *this_ptr,int start_x,int start_z,int end_x,int end_z)

#include "nocturne.h"

int __cdecl core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90(CPathMap *this_ptr,int start_x,int start_z,int end_x,int end_z)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar1;
  int grid_z;
  int local_e1;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_18;
  int local_14;
  
  uVar1 = start_x - end_x;
  uVar2 = start_z - end_z;
  local_14 = end_z;
  local_2c = ABS((int)uVar1);
  if ((int)uVar1 < 0) {
    local_3c = -1;
  }
  else {
    local_3c = 1;
  }
  if ((int)uVar2 < 0) {
    local_40 = -1;
  }
  else {
    local_40 = 1;
  }
  iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                    (this_ptr,end_z,end_x,(this_ptr->dest_voxel_coords).y);
  iVar1 = end_x;
  if (0 < local_2c) {
    do {
      iVar4 = local_3c + iVar1;
      local_e1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                           (this_ptr,end_z,iVar4,iVar3);
      if (((g_PathfindingMaxClimbHeight < ABS(local_e1 - iVar3)) ||
          (local_e1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                (this_ptr,end_z + -1,iVar1,iVar3),           g_PathfindingMaxClimbHeight < ABS(local_e1 - iVar3))) ||
         (local_e1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                               (this_ptr,end_z + 1,iVar1,iVar3),          g_PathfindingMaxClimbHeight < ABS(local_e1 - iVar3))) break;
      iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(this_ptr,end_z,iVar4,iVar3);
      local_2c = local_2c + -1;
      iVar1 = iVar4;
    } while (0 < local_2c);
  }
  if (local_2c == 0) {
    local_30 = ABS((int)uVar2);
    if (0 < local_30) {
      do {
        grid_z = local_14 + local_40;
        local_e1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                             (this_ptr,grid_z,iVar1,iVar3);
        if (((g_PathfindingMaxClimbHeight < ABS(local_e1 - iVar3)) ||
            (local_e1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                  (this_ptr,local_14,iVar1 + -1,iVar3),
                        g_PathfindingMaxClimbHeight < ABS(local_e1 - iVar3))) ||
           (local_e1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                 (this_ptr,local_14,iVar1 + 1,iVar3),
                      g_PathfindingMaxClimbHeight < ABS(local_e1 - iVar3))) break;
        iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,grid_z,iVar1,iVar3);
        local_30 = local_30 + -1;
        local_14 = grid_z;
      } while (0 < local_30);
    }
    if ((local_30 == 0) &&
       (iVar1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,start_z,start_x,(this_ptr->voxel_coords).y), local_e1 == iVar1))
    {
      return 1;
    }
  }
  local_18 = end_x;
  local_34 = ABS((int)uVar2);
  iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                    (this_ptr,end_z,end_x,(this_ptr->dest_voxel_coords).y);
  if (0 < local_34) {
    do {
      iVar1 = local_40 + end_z;
      local_e1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                           (this_ptr,iVar1,end_x,iVar5);
      if (((g_PathfindingMaxClimbHeight < ABS(local_e1 - iVar5)) ||
          (local_e1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                (this_ptr,end_z,end_x + -1,iVar5),           g_PathfindingMaxClimbHeight < ABS(local_e1 - iVar5))) ||
         (local_e1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                               (this_ptr,end_z,end_x + 1,iVar5),          g_PathfindingMaxClimbHeight < ABS(local_e1 - iVar5))) break;
      iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(this_ptr,iVar1,end_x,iVar5);
      local_34 = local_34 + -1;
      end_z = iVar1;
    } while (0 < local_34);
  }
  if (local_34 == 0) {
    local_38 = ABS((int)uVar1);
    if (0 < local_38) {
      do {
        iVar1 = local_18 + local_3c;
        local_e1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                             (this_ptr,end_z,iVar1,iVar5);
          if (((g_PathfindingMaxClimbHeight < ABS(local_e1 - iVar5)) ||
            (local_e1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                  (this_ptr,end_z + -1,local_18,iVar5),
                        g_PathfindingMaxClimbHeight < ABS(local_e1 - iVar5))) ||
           (local_e1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                 (this_ptr,end_z + 1,local_18,iVar5),
                      g_PathfindingMaxClimbHeight < ABS(local_e1 - iVar5))) break;
        iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(this_ptr,end_z,iVar1,iVar5)
        ;
        local_38 = local_38 + -1;
        local_18 = iVar1;
      } while (0 < local_38);
    }
    if ((local_38 == 0) &&
       (iVar1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,start_z,start_x,(this_ptr->voxel_coords).y), local_e1 == iVar1))
    {
      return 2;
    }
  }
  return 0;
}
