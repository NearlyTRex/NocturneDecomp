// Name: core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60
// Address: 00546a60
// MANUAL RECONSTRUCTION
// Address Range: [[00546a60, 00546b9b] [0060c619, 0060c654]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60(CPathMap *this_ptr,CVector3f *source_position,int force_update)

#include "nocturne.h"

void __cdecl core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60(CPathMap *this_ptr,CVector3f *source_position,int force_update)

{
  int iVar1;
  uint uVar1;
  int iVar2;
  CVector3i local_1c;
  
  if (force_update == 0) {
    iVar2 = this_ptr->update_timer - g_GlobalDeltaTimeInt;
    this_ptr->update_timer = iVar2;
    if (iVar2 < 0) {
      this_ptr->update_timer = iVar2 + 0x4000;
    }
    else if (((ABS(source_position->x - (this_ptr->cached_world_position).x) <
               (float)4) &&
             (ABS(source_position->y - (this_ptr->cached_world_position).y) <
              (float)4)) &&
            (ABS(source_position->z - (this_ptr->cached_world_position).z) <
             (float)4)) {
      return;
    }
  }
  else {
    uVar1 = rand();
    this_ptr->update_timer = uVar1 & 0x3fff;
  }
  if (this_ptr != (CPathMap *)source_position) {
    this_ptr->current_position = *source_position;
  }
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,&this_ptr->current_position,&local_1c);
  this_ptr->voxel_coords = local_1c;
  if ((((this_ptr->voxel_coords).x == (this_ptr->cached_voxel_coords).x) &&
      ((this_ptr->cached_voxel_coords).y == (this_ptr->voxel_coords).y)) &&
     ((this_ptr->cached_voxel_coords).z == (this_ptr->voxel_coords).z)) {
    return;
  }
  this_ptr->cached_voxel_coords = this_ptr->voxel_coords;
  iVar1 = (this_ptr->voxel_coords).z;
  (this_ptr->grid_origin).x = (this_ptr->voxel_coords).x + -0x32;
  (this_ptr->grid_origin).z = iVar1 + -0x32;
  (this_ptr->grid_origin).y = (this_ptr->voxel_coords).y;
  core_path_cpp_CPathMap_reset_FUN_00548510(this_ptr);
  return;
}
