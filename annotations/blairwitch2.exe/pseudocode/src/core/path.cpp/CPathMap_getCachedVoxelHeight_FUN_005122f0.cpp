// Name: core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
// Address: 005122f0
// Address Range: [[005122f0, 00512384]]
// Convention: __cdecl
// Signature: int __cdecl core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap *this_ptr,int grid_z,int grid_x,int current_height)

#include "nocturne.h"

int __cdecl core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap *this_ptr,int grid_z,int grid_x,int current_height)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  int local_10;
  
  if ((((grid_x < 0) || (99 < grid_x)) || (grid_z < 0)) || (99 < grid_z)) {
    iVar1 = -9999;
  }
  else {
    iVar1 = grid_x * 4 + grid_z * 400;
    if (current_height != *(int *)(&this_ptr->field_0x9c70 + iVar1)) {
      local_18 = *(int *)&this_ptr->field_0x24 + grid_x;
      local_14 = current_height + 5;
      local_10 = *(int *)&this_ptr->field_0x2c + grid_z;
      iVar2 = core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00476c30
                        (&g_CDemonRaytraceInstance,(CVector3i *)&local_18);
      *(int *)(&this_ptr->field_0x30 + iVar1) = iVar2;
      *(int *)(&this_ptr->field_0x9c70 + iVar1) = current_height;
      return iVar2;
    }
    iVar1 = *(int *)(&this_ptr->field_0x30 + iVar1);
  }
  return iVar1;
}
