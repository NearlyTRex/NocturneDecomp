// Name: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_005113e0
// Address: 005113e0
// Address Range: [[005113e0, 0051158f]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(CDemonSet *this_ptr)

{
  int iVar1;
  SRaytraceState *pSVar2;
  int iVar3;
  CDemonSet *pCVar4;
  int iVar5;
  SRaytraceState *pSVar6;
  
  if (5 < _DAT_020842d0) {
    g_CurrentFilename = "..\\core\\setcolid.cpp";
    g_CurrentLineNumber = 1030;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonSet::pushRaytraceState - stack full");
  }
  iVar3 = _DAT_020842d0;
  pSVar6 = g_SRaytraceState_ARRAY_020842d4 + _DAT_020842d0;
  (pSVar6->ray_query).ray_type = (this_ptr->ray_query).ray_type;
  g_SRaytraceState_ARRAY_020842d4[_DAT_020842d0].ray_query.laser_type =
       (this_ptr->ray_query).laser_type;
  g_SRaytraceState_ARRAY_020842d4[_DAT_020842d0].ray_query.laser_color.r =
       (this_ptr->ray_query).laser_color.r;
  g_SRaytraceState_ARRAY_020842d4[_DAT_020842d0].ray_query.laser_color.g =
       (this_ptr->ray_query).laser_color.g;
  iVar5 = 0;
  g_SRaytraceState_ARRAY_020842d4[_DAT_020842d0].ray_query.laser_color.b =
       (this_ptr->ray_query).laser_color.b;
  iVar1 = this_ptr->ignore_list_count;
  pSVar2 = g_SRaytraceState_ARRAY_020842d4 + _DAT_020842d0;
  _DAT_020842d0 = _DAT_020842d0 + 1;
  pSVar2->ignore_list_count = iVar1;
  pCVar4 = this_ptr;
  if (0 < iVar1) {
    do {
      pSVar6->ignore_list[0] = pCVar4->ignore_list[0];
      iVar5 = iVar5 + 1;
      pCVar4 = (CDemonSet *)pCVar4->cameras;
      pSVar6 = (SRaytraceState *)&(pSVar6->ray_query).laser_type;
    } while (iVar5 < this_ptr->ignore_list_count);
  }
  g_SRaytraceState_ARRAY_020842d4[iVar3].collision_flag = this_ptr->collision_flag;
  if (&g_SRaytraceState_ARRAY_020842d4[iVar3].saved_ray_origin != &this_ptr->ray_origin) {
    g_SRaytraceState_ARRAY_020842d4[iVar3].saved_ray_origin.x = (this_ptr->ray_origin).x;
    g_SRaytraceState_ARRAY_020842d4[iVar3].saved_ray_origin.y = (this_ptr->ray_origin).y;
    g_SRaytraceState_ARRAY_020842d4[iVar3].saved_ray_origin.z = (this_ptr->ray_origin).z;
  }
  if (&g_SRaytraceState_ARRAY_020842d4[iVar3].saved_ray_target != &this_ptr->ray_target) {
    g_SRaytraceState_ARRAY_020842d4[iVar3].saved_ray_target.x = (this_ptr->ray_target).x;
    g_SRaytraceState_ARRAY_020842d4[iVar3].saved_ray_target.y = (this_ptr->ray_target).y;
    g_SRaytraceState_ARRAY_020842d4[iVar3].saved_ray_target.z = (this_ptr->ray_target).z;
  }
  g_SRaytraceState_ARRAY_020842d4[iVar3].raycast_distance = this_ptr->raycast_distance;
  g_SRaytraceState_ARRAY_020842d4[iVar3].voxel_distance = this_ptr->voxel_distance;
  if (&g_SRaytraceState_ARRAY_020842d4[iVar3].voxel_hit_point != &this_ptr->voxel_hit_point) {
    g_SRaytraceState_ARRAY_020842d4[iVar3].voxel_hit_point.x = (this_ptr->voxel_hit_point).x;
    g_SRaytraceState_ARRAY_020842d4[iVar3].voxel_hit_point.y = (this_ptr->voxel_hit_point).y;
    g_SRaytraceState_ARRAY_020842d4[iVar3].voxel_hit_point.z = (this_ptr->voxel_hit_point).z;
  }
  g_SRaytraceState_ARRAY_020842d4[iVar3].voxel_surface_type = this_ptr->voxel_surface_type;
  if (&g_SRaytraceState_ARRAY_020842d4[iVar3].saved_collision_normal != &this_ptr->collision_normal)
  {
    g_SRaytraceState_ARRAY_020842d4[iVar3].saved_collision_normal.x = (this_ptr->collision_normal).x
    ;
    g_SRaytraceState_ARRAY_020842d4[iVar3].saved_collision_normal.y = (this_ptr->collision_normal).y
    ;
    g_SRaytraceState_ARRAY_020842d4[iVar3].saved_collision_normal.z = (this_ptr->collision_normal).z
    ;
  }
  g_SRaytraceState_ARRAY_020842d4[iVar3].saved_ground_type = this_ptr->ground_type;
  if (&g_SRaytraceState_ARRAY_020842d4[iVar3].saved_collision_point !=
      &this_ptr->collision_impact_position) {
    g_SRaytraceState_ARRAY_020842d4[iVar3].saved_collision_point.x =
         (this_ptr->collision_impact_position).x;
    g_SRaytraceState_ARRAY_020842d4[iVar3].saved_collision_point.y =
         (this_ptr->collision_impact_position).y;
    g_SRaytraceState_ARRAY_020842d4[iVar3].saved_collision_point.z =
         (this_ptr->collision_impact_position).z;
  }
  g_SRaytraceState_ARRAY_020842d4[iVar3].saved_collision_actor = this_ptr->collision_actor;
  g_SRaytraceState_ARRAY_020842d4[iVar3].saved_collision_part_index = this_ptr->collision_part_index
  ;
  g_SRaytraceState_ARRAY_020842d4[iVar3].saved_collision_bone_index = this_ptr->collision_bone_index
  ;
  g_SRaytraceState_ARRAY_020842d4[iVar3].saved_skip_exact_collision =
       this_ptr->skip_exact_collisions;
  return;
}
