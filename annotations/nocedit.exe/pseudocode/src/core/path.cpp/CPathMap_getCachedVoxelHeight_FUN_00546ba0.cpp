// Name: core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
// Address: 00546ba0
// Address Range: [[00546ba0, 00546c34]]
// Convention: __cdecl
// Signature: int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)

#include "nocturne.h"

int __cdecl
core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
          (CPathMap *this_ptr,int grid_z,int grid_x,int current_height)

{
  int iVar1;
  CVector3i local_18;
  
  if ((((grid_x < 0) || (99 < grid_x)) || (grid_z < 0)) || (99 < grid_z)) {
    iVar1 = -9999;
  }
  else {
    if (current_height != this_ptr->height_cache_tags[grid_z][grid_x]) {
      local_18.x = (this_ptr->grid_origin).x + grid_x;
      local_18.y = current_height + 5;
      local_18.z = (this_ptr->grid_origin).z + grid_z;
      iVar1 = core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50
                        (&g_CDemonRaytraceInstance,&local_18);
      this_ptr->height_cache[grid_z][grid_x] = iVar1;
      this_ptr->height_cache_tags[grid_z][grid_x] = current_height;
      return iVar1;
    }
    iVar1 = this_ptr->height_cache[grid_z][grid_x];
  }
  return iVar1;
}
