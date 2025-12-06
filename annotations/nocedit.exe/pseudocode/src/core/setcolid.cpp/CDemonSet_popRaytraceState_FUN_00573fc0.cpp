// Name: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
// Address: 00573fc0
// Address Range: [[00573fc0, 0057416e]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(CDemonSet *this_ptr)

{
  int iVar1;
  SRaytraceState *pSVar2;
  int iVar3;
  CDemonSet *pCVar4;
  int iVar5;
  
  if (g_RaytraceStateStackDepth < 1) {
    g_CurrentFilename = "..\\core\\setcolid.cpp";
    g_CurrentLineNumber = 0x42a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::popRaytraceState - stack empty");
  }
  iVar5 = g_RaytraceStateStackDepth + -1;
  pSVar2 = g_RaytraceStateStack + iVar5;
  g_RaytraceStateStackDepth = iVar5;
  this_ptr->ray_type = pSVar2->ray_type;
  this_ptr->field60_0x15f684 = g_RaytraceStateStack[iVar5].color_r;
  this_ptr->field61_0x15f688 = g_RaytraceStateStack[iVar5].color_g;
  this_ptr->field62_0x15f68c = g_RaytraceStateStack[iVar5].color_b;
  this_ptr->field63_0x15f690 = g_RaytraceStateStack[iVar5].color_a;
  iVar1 = g_RaytraceStateStack[iVar5].ignore_list_count;
  iVar3 = 0;
  this_ptr->ignore_list_count = iVar1;
  pCVar4 = this_ptr;
  if (0 < iVar1) {
    do {
      pCVar4->ignore_list[0] = pSVar2->ignore_list[0];
      iVar3 = iVar3 + 1;
      pSVar2 = (SRaytraceState *)&pSVar2->color_r;
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar3 < this_ptr->ignore_list_count);
  }
  this_ptr->collision_flag = g_RaytraceStateStack[iVar5].collision_flag;
  if (&this_ptr->collision_result_vec1 != &g_RaytraceStateStack[iVar5].saved_ray_origin) {
    (this_ptr->collision_result_vec1).x = g_RaytraceStateStack[iVar5].saved_ray_origin.x;
    (this_ptr->collision_result_vec1).y = g_RaytraceStateStack[iVar5].saved_ray_origin.y;
    (this_ptr->collision_result_vec1).z = g_RaytraceStateStack[iVar5].saved_ray_origin.z;
  }
  if (&this_ptr->collision_result_vec2 != &g_RaytraceStateStack[iVar5].saved_ray_target) {
    (this_ptr->collision_result_vec2).x = g_RaytraceStateStack[iVar5].saved_ray_target.x;
    (this_ptr->collision_result_vec2).y = g_RaytraceStateStack[iVar5].saved_ray_target.y;
    (this_ptr->collision_result_vec2).z = g_RaytraceStateStack[iVar5].saved_ray_target.z;
  }
  this_ptr->raycast_distance = g_RaytraceStateStack[iVar5].raycast_distance;
  this_ptr->voxel_distance = g_RaytraceStateStack[iVar5].voxel_distance;
  if (&this_ptr->voxel_hit_point != &g_RaytraceStateStack[iVar5].voxel_hit_point) {
    (this_ptr->voxel_hit_point).x = g_RaytraceStateStack[iVar5].voxel_hit_point.x;
    (this_ptr->voxel_hit_point).y = g_RaytraceStateStack[iVar5].voxel_hit_point.y;
    (this_ptr->voxel_hit_point).z = g_RaytraceStateStack[iVar5].voxel_hit_point.z;
  }
  this_ptr->voxel_surface_type = g_RaytraceStateStack[iVar5].voxel_surface_type;
  if (&this_ptr->collision_normal != &g_RaytraceStateStack[iVar5].saved_collision_normal) {
    (this_ptr->collision_normal).x = g_RaytraceStateStack[iVar5].saved_collision_normal.x;
    (this_ptr->collision_normal).y = g_RaytraceStateStack[iVar5].saved_collision_normal.y;
    (this_ptr->collision_normal).z = g_RaytraceStateStack[iVar5].saved_collision_normal.z;
  }
  this_ptr->ground_type = g_RaytraceStateStack[iVar5].saved_ground_type;
  if (&this_ptr->collision_impact_position != &g_RaytraceStateStack[iVar5].saved_collision_point) {
    (this_ptr->collision_impact_position).x = g_RaytraceStateStack[iVar5].saved_collision_point.x;
    (this_ptr->collision_impact_position).y = g_RaytraceStateStack[iVar5].saved_collision_point.y;
    (this_ptr->collision_impact_position).z = g_RaytraceStateStack[iVar5].saved_collision_point.z;
  }
  this_ptr->collision_actor = g_RaytraceStateStack[iVar5].saved_collision_actor;
  this_ptr->field11_0x14d148 = g_RaytraceStateStack[iVar5].field19_0x98;
  this_ptr->field12_0x14d14c = g_RaytraceStateStack[iVar5].field20_0x9c;
  this_ptr->field71_0x15f6dc = g_RaytraceStateStack[iVar5].field14_0x74;
  return;
}
