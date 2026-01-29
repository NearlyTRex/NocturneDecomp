// Name: core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60
// Address: 00546a60
// Address Range: [[00546a60, 00546b9b]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60 (CPathMap *this_ptr,CVector3f *source_position,int force_update)

#include "nocturne.h"

void __cdecl
core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60
          (CPathMap *this_ptr,CVector3f *source_position,int force_update)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  int aiStackY_1004 [1013];
  CVector3i *in_stack_ffffffd8;
  int local_1c;
  
  bVar5 = 0;
  if (force_update == 0) {
    iVar2 = this_ptr->update_timer - g_GlobalDeltaTimeInt;
    this_ptr->update_timer = iVar2;
    if (iVar2 < 0) {
      this_ptr->update_timer = iVar2 + 0x4000;
    }
    else {
      in_stack_ffffffd8 = (CVector3i *)(source_position->x - (this_ptr->cached_world_position).x);
      if (((ABS((float)in_stack_ffffffd8) < (float)4) &&
          (ABS(source_position->y - (this_ptr->cached_world_position).y) <
           (float)4)) &&
         (ABS(source_position->z - (this_ptr->cached_world_position).z) <
          (float)4)) {
        return;
      }
    }
  }
  else {
    uVar1 = rand();
    this_ptr->update_timer = uVar1 & 0x3fff;
  }
  if (this_ptr != (CPathMap *)source_position) {
    (this_ptr->current_position).x = source_position->x;
    (this_ptr->current_position).y = source_position->y;
    (this_ptr->current_position).z = source_position->z;
  }
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,&this_ptr->current_position,in_stack_ffffffd8);
  puVar3 = (uint *)((int)this_ptr + (uint)bVar5 * -8 + 0x10);
  (this_ptr->voxel_coords).x = local_1c;
  *puVar3 = *(uint *)(&stack0xffffffe8 + (uint)bVar5 * -8);
  puVar3[(uint)bVar5 * -2 + 1] =
       *(uint *)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if ((((this_ptr->voxel_coords).x == (this_ptr->cached_voxel_coords).x) &&
      ((this_ptr->cached_voxel_coords).y == (this_ptr->voxel_coords).y)) &&
     ((this_ptr->cached_voxel_coords).z == (this_ptr->voxel_coords).z)) {
    return;
  }
  puVar4 = (uint *)((int)this_ptr + (uint)bVar5 * -8 + 0x138b4);
  puVar3 = (uint *)((int)this_ptr + (uint)bVar5 * -8 + 0x10);
  (this_ptr->cached_voxel_coords).x = (this_ptr->voxel_coords).x;
  *puVar4 = *puVar3;
  puVar4[(uint)bVar5 * -2 + 1] = puVar3[(uint)bVar5 * -2 + 1];
  iVar2 = (this_ptr->voxel_coords).z;
  (this_ptr->grid_origin).x = (this_ptr->voxel_coords).x + -0x32;
  (this_ptr->grid_origin).z = iVar2 + -0x32;
  (this_ptr->grid_origin).y = (this_ptr->voxel_coords).y;
  core_path_cpp_CPathMap_reset_FUN_00548510(this_ptr);
  return;
}
