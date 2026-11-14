// Name: core_path.cpp_CPathMap_updateIfNeeded_FUN_0050b1d0
// Address: 0050b1d0
// Address Range: [[0050b1d0, 0050b318]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_updateIfNeeded_FUN_0050b1d0(CPathMap *this_ptr,CVector3f *source_position,int force_update)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_CPathMap_updateIfNeeded_FUN_0050b1d0(CPathMap *this_ptr,CVector3f *source_position,int force_update)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  int aiStackY_1008 [1010];
  CVector3i local_20;
  
  bVar5 = 0;
  if (force_update == 0) {
    iVar2 = this_ptr->update_timer - _DAT_01c5fad0;
    this_ptr->update_timer = iVar2;
    if (iVar2 < 0) {
      this_ptr->update_timer = iVar2 + 0x4000;
    }
    else if (((ABS(source_position->x - (this_ptr->cached_world_position).x) < (float)_DAT_005cb85c)
             && (ABS(source_position->y - (this_ptr->cached_world_position).y) <
                 (float)_DAT_005cb85c)) &&
            (ABS(source_position->z - (this_ptr->cached_world_position).z) < (float)_DAT_005cb85c))
    {
      return;
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
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00477ac0
            (&g_CDemonRaytraceInstance,&this_ptr->current_position,&local_20);
  puVar3 = (uint *)((int)this_ptr + (uint)bVar5 * -8 + 0x10);
  (this_ptr->voxel_coords).x = local_20.x;
  *puVar3 = *(uint *)((int)&local_20 + (uint)bVar5 * -8 + 4);
  puVar3[(uint)bVar5 * -2 + 1] =
       *(uint *)((int)&local_20 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
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
  (this_ptr->grid_origin).x = (this_ptr->voxel_coords).x + -0x32;
  (this_ptr->grid_origin).y = (this_ptr->voxel_coords).y;
  (this_ptr->grid_origin).z = (this_ptr->voxel_coords).z + -0x32;
  core_path_cpp_CPathMap_reset_FUN_0050cee0(this_ptr);
  return;
}
