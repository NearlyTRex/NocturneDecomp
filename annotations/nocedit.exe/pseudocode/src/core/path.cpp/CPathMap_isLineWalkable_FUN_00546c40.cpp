// Name: core_path.cpp_CPathMap_isLineWalkable_FUN_00546c40
// Address: 00546c40
// Address Range: [[00546c40, 00546e84]]
// Convention: __cdecl
// Signature: int core_path.cpp_CPathMap_isLineWalkable_FUN_00546c40(CPathMap * this_ptr, int start_x, int start_z, int start_height, int end_x, int end_z, int end_height)

#include "nocturne.h"

int __cdecl
core_path_cpp_CPathMap_isLineWalkable_FUN_00546c40
          (CPathMap *this_ptr,int start_x,int start_z,int start_height,int end_x,int end_z,
          int end_height)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int grid_z;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar3 = start_height;
  local_34 = 1;
  grid_z = start_z;
  local_1c = end_x;
  if (end_z < start_z) {
    grid_z = end_z;
    local_1c = start_x;
    start_height = end_height;
    start_x = end_x;
    end_z = start_z;
    end_height = iVar3;
  }
  local_1c = local_1c - start_x;
  iVar3 = end_z - grid_z;
  if (local_1c < 0) {
    local_1c = -local_1c;
    local_34 = -1;
  }
  if (iVar3 < local_1c) {
    local_14 = iVar3 * 2 - local_1c;
    local_2c = 0;
    if (-1 < local_1c) {
      local_28 = grid_z + -1;
      do {
        iVar1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,local_28,start_x,start_height);
        uVar2 = iVar1 - start_height >> 0x1f;
        if (g_PathfindingMaxClimbHeight < (int)((iVar1 - start_height ^ uVar2) - uVar2)) {
          return 0;
        }
        iVar1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,grid_z + 1,start_x,start_height);
        uVar2 = iVar1 - start_height >> 0x1f;
        if (g_PathfindingMaxClimbHeight < (int)((iVar1 - start_height ^ uVar2) - uVar2)) {
          return 0;
        }
        local_38 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                             (this_ptr,grid_z,start_x,start_height);
        uVar2 = local_38 - start_height >> 0x1f;
        if (g_PathfindingMaxClimbHeight < (int)((local_38 - start_height ^ uVar2) - uVar2)) {
          return 0;
        }
        if (0 < local_14) {
          local_14 = local_14 - local_1c;
          local_28 = local_28 + 1;
          grid_z = grid_z + 1;
        }
        start_x = start_x + local_34;
        local_14 = local_14 + iVar3;
        local_2c = local_2c + 1;
        start_height = local_38;
      } while (local_2c <= local_1c);
    }
  }
  else {
    local_18 = local_1c * 2 - iVar3;
    local_24 = 0;
    if (-1 < iVar3) {
      do {
        iVar1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,grid_z,start_x + 1,start_height);
        uVar2 = iVar1 - start_height >> 0x1f;
        if (g_PathfindingMaxClimbHeight < (int)((iVar1 - start_height ^ uVar2) - uVar2)) {
          return 0;
        }
        iVar1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,grid_z,start_x + -1,start_height);
        uVar2 = iVar1 - start_height >> 0x1f;
        if (g_PathfindingMaxClimbHeight < (int)((iVar1 - start_height ^ uVar2) - uVar2)) {
          return 0;
        }
        local_38 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                             (this_ptr,grid_z,start_x,start_height);
        uVar2 = local_38 - start_height >> 0x1f;
        if (g_PathfindingMaxClimbHeight < (int)((local_38 - start_height ^ uVar2) - uVar2)) {
          return 0;
        }
        if (0 < local_18) {
          local_18 = local_18 - iVar3;
          start_x = start_x + local_34;
        }
        local_18 = local_18 + local_1c;
        grid_z = grid_z + 1;
        local_24 = local_24 + 1;
        start_height = local_38;
      } while (local_24 <= iVar3);
    }
  }
  if (local_38 != end_height) {
    return 0;
  }
  return 1;
}
