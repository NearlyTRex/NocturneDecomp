// Name: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00511590
// Address: 00511590
// Address Range: [[00511590, 0051173e]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(CDemonSet *this_ptr)

{
  int iVar1;
  SRaytraceState *pSVar2;
  int iVar3;
  CDemonSet *pCVar4;
  int iVar5;
  
  if (_DAT_020842d0 < 1) {
    g_CHAR_PTR_01cc4800 = "..\\core\\setcolid.cpp";
    g_INT_01cc4804 = 0x42a;
    core_main_c_FUN_004c8440("CDemonSet::popRaytraceState - stack empty");
  }
  iVar5 = _DAT_020842d0 + -1;
  pSVar2 = g_SRaytraceState_ARRAY_020842d4 + iVar5;
  _DAT_020842d0 = iVar5;
  (this_ptr->ray_query).ray_type = (pSVar2->ray_query).ray_type;
  (this_ptr->ray_query).laser_type = g_SRaytraceState_ARRAY_020842d4[iVar5].ray_query.laser_type;
  (this_ptr->ray_query).laser_color.r =
       g_SRaytraceState_ARRAY_020842d4[iVar5].ray_query.laser_color.r;
  (this_ptr->ray_query).laser_color.g =
       g_SRaytraceState_ARRAY_020842d4[iVar5].ray_query.laser_color.g;
  (this_ptr->ray_query).laser_color.b =
       g_SRaytraceState_ARRAY_020842d4[iVar5].ray_query.laser_color.b;
  iVar1 = g_SRaytraceState_ARRAY_020842d4[iVar5].ignore_list_count;
  iVar3 = 0;
  this_ptr->ignore_list_count = iVar1;
  pCVar4 = this_ptr;
  if (0 < iVar1) {
    do {
      pCVar4->ignore_list[0] = pSVar2->ignore_list[0];
      iVar3 = iVar3 + 1;
      pSVar2 = (SRaytraceState *)&(pSVar2->ray_query).laser_type;
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar3 < this_ptr->ignore_list_count);
  }
  this_ptr->collision_flag = g_SRaytraceState_ARRAY_020842d4[iVar5].collision_flag;
  if (&this_ptr->ray_origin != &g_SRaytraceState_ARRAY_020842d4[iVar5].saved_ray_origin) {
    (this_ptr->ray_origin).x = g_SRaytraceState_ARRAY_020842d4[iVar5].saved_ray_origin.x;
    (this_ptr->ray_origin).y = g_SRaytraceState_ARRAY_020842d4[iVar5].saved_ray_origin.y;
    (this_ptr->ray_origin).z = g_SRaytraceState_ARRAY_020842d4[iVar5].saved_ray_origin.z;
  }
  if (&this_ptr->ray_target != &g_SRaytraceState_ARRAY_020842d4[iVar5].saved_ray_target) {
    (this_ptr->ray_target).x = g_SRaytraceState_ARRAY_020842d4[iVar5].saved_ray_target.x;
    (this_ptr->ray_target).y = g_SRaytraceState_ARRAY_020842d4[iVar5].saved_ray_target.y;
    (this_ptr->ray_target).z = g_SRaytraceState_ARRAY_020842d4[iVar5].saved_ray_target.z;
  }
  this_ptr->raycast_distance = g_SRaytraceState_ARRAY_020842d4[iVar5].raycast_distance;
  this_ptr->voxel_distance = g_SRaytraceState_ARRAY_020842d4[iVar5].voxel_distance;
  if (&this_ptr->voxel_hit_point != &g_SRaytraceState_ARRAY_020842d4[iVar5].voxel_hit_point) {
    (this_ptr->voxel_hit_point).x = g_SRaytraceState_ARRAY_020842d4[iVar5].voxel_hit_point.x;
    (this_ptr->voxel_hit_point).y = g_SRaytraceState_ARRAY_020842d4[iVar5].voxel_hit_point.y;
    (this_ptr->voxel_hit_point).z = g_SRaytraceState_ARRAY_020842d4[iVar5].voxel_hit_point.z;
  }
  this_ptr->voxel_surface_type = g_SRaytraceState_ARRAY_020842d4[iVar5].voxel_surface_type;
  if (&this_ptr->collision_normal != &g_SRaytraceState_ARRAY_020842d4[iVar5].saved_collision_normal)
  {
    (this_ptr->collision_normal).x = g_SRaytraceState_ARRAY_020842d4[iVar5].saved_collision_normal.x
    ;
    (this_ptr->collision_normal).y = g_SRaytraceState_ARRAY_020842d4[iVar5].saved_collision_normal.y
    ;
    (this_ptr->collision_normal).z = g_SRaytraceState_ARRAY_020842d4[iVar5].saved_collision_normal.z
    ;
  }
  this_ptr->ground_type = g_SRaytraceState_ARRAY_020842d4[iVar5].saved_ground_type;
  if (&this_ptr->collision_impact_position !=
      &g_SRaytraceState_ARRAY_020842d4[iVar5].saved_collision_point) {
    (this_ptr->collision_impact_position).x =
         g_SRaytraceState_ARRAY_020842d4[iVar5].saved_collision_point.x;
    (this_ptr->collision_impact_position).y =
         g_SRaytraceState_ARRAY_020842d4[iVar5].saved_collision_point.y;
    (this_ptr->collision_impact_position).z =
         g_SRaytraceState_ARRAY_020842d4[iVar5].saved_collision_point.z;
  }
  this_ptr->collision_actor = g_SRaytraceState_ARRAY_020842d4[iVar5].saved_collision_actor;
  this_ptr->collision_part_index = g_SRaytraceState_ARRAY_020842d4[iVar5].saved_collision_part_index
  ;
  this_ptr->collision_bone_index = g_SRaytraceState_ARRAY_020842d4[iVar5].saved_collision_bone_index
  ;
  this_ptr->skip_exact_collisions =
       g_SRaytraceState_ARRAY_020842d4[iVar5].saved_skip_exact_collision;
  return;
}
