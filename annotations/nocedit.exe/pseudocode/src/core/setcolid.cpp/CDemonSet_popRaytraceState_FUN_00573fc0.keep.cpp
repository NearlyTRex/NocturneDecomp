// Name: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
// Address: 00573fc0
// MANUAL RECONSTRUCTION
// Address Range: [[00573fc0, 0057416e]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(CDemonSet *this_ptr)

{
  int iVar1;
  SRaytraceState *pSVar2;
  int iVar3;
  int iVar5;
  
  if (g_RaytraceStateStackDepth < 1) {
    g_CurrentFilename = "..\\core\\setcolid.cpp";
    g_CurrentLineNumber = 1066;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::popRaytraceState - stack empty");
  }
  iVar5 = g_RaytraceStateStackDepth + -1;
  pSVar2 = g_RaytraceStateStack + iVar5;
  g_RaytraceStateStackDepth = iVar5;
  this_ptr->ray_query = pSVar2->ray_query;
  iVar1 = g_RaytraceStateStack[iVar5].ignore_list_count;
  iVar3 = 0;
  this_ptr->ignore_list_count = iVar1;
  if (0 < iVar1) {
    do {
      this_ptr->ignore_list[iVar3] = g_RaytraceStateStack[iVar5].ignore_list[iVar3];
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->ignore_list_count);
  }
  this_ptr->collision_flag = g_RaytraceStateStack[iVar5].collision_flag;
  if (&this_ptr->ray_origin != &g_RaytraceStateStack[iVar5].saved_ray_origin) {
    this_ptr->ray_origin = g_RaytraceStateStack[iVar5].saved_ray_origin;
  }
  if (&this_ptr->ray_target != &g_RaytraceStateStack[iVar5].saved_ray_target) {
    this_ptr->ray_target = g_RaytraceStateStack[iVar5].saved_ray_target;
  }
  this_ptr->raycast_distance = g_RaytraceStateStack[iVar5].raycast_distance;
  this_ptr->voxel_distance = g_RaytraceStateStack[iVar5].voxel_distance;
  if (&this_ptr->voxel_hit_point != &g_RaytraceStateStack[iVar5].voxel_hit_point) {
    this_ptr->voxel_hit_point = g_RaytraceStateStack[iVar5].voxel_hit_point;
  }
  this_ptr->voxel_surface_type = g_RaytraceStateStack[iVar5].voxel_surface_type;
  if (&this_ptr->collision_normal != &g_RaytraceStateStack[iVar5].saved_collision_normal) {
    this_ptr->collision_normal = g_RaytraceStateStack[iVar5].saved_collision_normal;
  }
  this_ptr->ground_type = g_RaytraceStateStack[iVar5].saved_ground_type;
  if (&this_ptr->collision_impact_position != &g_RaytraceStateStack[iVar5].saved_collision_point) {
    this_ptr->collision_impact_position = g_RaytraceStateStack[iVar5].saved_collision_point;
  }
  this_ptr->collision_actor = g_RaytraceStateStack[iVar5].saved_collision_actor;
  this_ptr->collision_part_index = g_RaytraceStateStack[iVar5].saved_collision_part_index;
  this_ptr->collision_bone_index = g_RaytraceStateStack[iVar5].saved_collision_bone_index;
  this_ptr->skip_exact_collisions = g_RaytraceStateStack[iVar5].saved_skip_exact_collision;
  return;
}
