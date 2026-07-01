// Name: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10
// Address: 00573e10
// MANUAL RECONSTRUCTION
// Address Range: [[00573e10, 00573fbf]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(CDemonSet *this_ptr)

{
  int iVar1;
  SRaytraceState *pSVar2;
  int iVar3;
  int iVar5;
  SRaytraceState *pSVar6;
  
  if (5 < g_RaytraceStateStackDepth) {
    g_CurrentFilename = "..\\core\\setcolid.cpp";
    g_CurrentLineNumber = 1030;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::pushRaytraceState - stack full");
  }
  iVar3 = g_RaytraceStateStackDepth;
  pSVar6 = g_RaytraceStateStack + g_RaytraceStateStackDepth;
  pSVar6->ray_query = this_ptr->ray_query;
  iVar1 = this_ptr->ignore_list_count;
  pSVar2 = g_RaytraceStateStack + g_RaytraceStateStackDepth;
  g_RaytraceStateStackDepth = g_RaytraceStateStackDepth + 1;
  pSVar2->ignore_list_count = iVar1;
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      g_RaytraceStateStack[iVar3].ignore_list[iVar5] = this_ptr->ignore_list[iVar5];
      iVar5 = iVar5 + 1;
    } while (iVar5 < this_ptr->ignore_list_count);
  }
  g_RaytraceStateStack[iVar3].collision_flag = this_ptr->collision_flag;
  if (&g_RaytraceStateStack[iVar3].saved_ray_origin != &this_ptr->ray_origin) {
    g_RaytraceStateStack[iVar3].saved_ray_origin = this_ptr->ray_origin;
  }
  if (&g_RaytraceStateStack[iVar3].saved_ray_target != &this_ptr->ray_target) {
    g_RaytraceStateStack[iVar3].saved_ray_target = this_ptr->ray_target;
  }
  g_RaytraceStateStack[iVar3].raycast_distance = this_ptr->raycast_distance;
  g_RaytraceStateStack[iVar3].voxel_distance = this_ptr->voxel_distance;
  if (&g_RaytraceStateStack[iVar3].voxel_hit_point != &this_ptr->voxel_hit_point) {
    g_RaytraceStateStack[iVar3].voxel_hit_point = this_ptr->voxel_hit_point;
  }
  g_RaytraceStateStack[iVar3].voxel_surface_type = this_ptr->voxel_surface_type;
  if (&g_RaytraceStateStack[iVar3].saved_collision_normal != &this_ptr->collision_normal) {
    g_RaytraceStateStack[iVar3].saved_collision_normal = this_ptr->collision_normal;
  }
  g_RaytraceStateStack[iVar3].saved_ground_type = this_ptr->ground_type;
  if (&g_RaytraceStateStack[iVar3].saved_collision_point != &this_ptr->collision_impact_position) {
    g_RaytraceStateStack[iVar3].saved_collision_point = this_ptr->collision_impact_position;
  }
  g_RaytraceStateStack[iVar3].saved_collision_actor = this_ptr->collision_actor;
  g_RaytraceStateStack[iVar3].saved_collision_part_index = this_ptr->collision_part_index;
  g_RaytraceStateStack[iVar3].saved_collision_bone_index = this_ptr->collision_bone_index;
  g_RaytraceStateStack[iVar3].saved_skip_exact_collision = this_ptr->skip_exact_collisions;
  return;
}
