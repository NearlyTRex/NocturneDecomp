// Name: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00537a90
// Address: 00537a90
// Address Range: [[00537a90, 00537c3f]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00537a90(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00537a90(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  CDemonSet *pCVar3;
  int iVar4;
  int *piVar5;
  
  if (5 < _DAT_02093614) {
    _DAT_01d046a0 = "..\\core\\setcolid.cpp";
    _DAT_01d046a4 = 0x406;
    core_main_c_FUN_004e4500("CDemonSet::pushRaytraceState - stack full");
  }
  iVar2 = _DAT_02093614 * 0xa0;
  piVar5 = (int *)(iVar2 + 0x2093618);
  *piVar5 = (this_ptr->ray_query).ray_type;
  *(int *)(iVar2 + 0x209361c) = (this_ptr->ray_query).laser_type;
  *(int *)(iVar2 + 0x2093620) = (this_ptr->ray_query).laser_color.r;
  *(int *)(iVar2 + 0x2093624) = (this_ptr->ray_query).laser_color.g;
  iVar4 = 0;
  *(int *)(iVar2 + 0x2093628) = (this_ptr->ray_query).laser_color.b;
  _DAT_02093614 = _DAT_02093614 + 1;
  iVar1 = this_ptr->ignore_list_count;
  *(int *)(iVar2 + 0x209362c) = iVar1;
  pCVar3 = this_ptr;
  if (0 < iVar1) {
    do {
      piVar5[7] = (int)pCVar3->ignore_list[0];
      iVar4 = iVar4 + 1;
      pCVar3 = (CDemonSet *)pCVar3->cameras;
      piVar5 = piVar5 + 1;
    } while (iVar4 < this_ptr->ignore_list_count);
  }
  *(int *)(iVar2 + 0x2093630) = this_ptr->collision_flag;
  if ((CVector3f *)(iVar2 + 0x209365c) != &this_ptr->ray_origin) {
    *(float *)(iVar2 + 0x209365c) = (this_ptr->ray_origin).x;
    *(float *)(iVar2 + 0x2093660) = (this_ptr->ray_origin).y;
    *(float *)(iVar2 + 0x2093664) = (this_ptr->ray_origin).z;
  }
  if ((CVector3f *)(iVar2 + 0x2093668) != &this_ptr->ray_target) {
    *(float *)(iVar2 + 0x2093668) = (this_ptr->ray_target).x;
    *(float *)(iVar2 + 0x209366c) = (this_ptr->ray_target).y;
    *(float *)(iVar2 + 0x2093670) = (this_ptr->ray_target).z;
  }
  *(float *)(iVar2 + 0x2093674) = this_ptr->raycast_distance;
  *(float *)(iVar2 + 0x2093678) = this_ptr->voxel_distance;
  if ((CVector3f *)(iVar2 + 0x209367c) != &this_ptr->voxel_hit_point) {
    *(float *)(iVar2 + 0x209367c) = (this_ptr->voxel_hit_point).x;
    *(float *)(iVar2 + 0x2093680) = (this_ptr->voxel_hit_point).y;
    *(float *)(iVar2 + 0x2093684) = (this_ptr->voxel_hit_point).z;
  }
  *(int *)(iVar2 + 0x2093688) = this_ptr->voxel_surface_type;
  if ((CVector3f *)(iVar2 + 0x2093690) != &this_ptr->collision_normal) {
    *(float *)(iVar2 + 0x2093690) = (this_ptr->collision_normal).x;
    *(float *)(iVar2 + 0x2093694) = (this_ptr->collision_normal).y;
    *(float *)(iVar2 + 0x2093698) = (this_ptr->collision_normal).z;
  }
  *(int *)(iVar2 + 0x209369c) = this_ptr->ground_type;
  if ((CVector3f *)(iVar2 + 0x20936a0) != &this_ptr->collision_impact_position) {
    *(float *)(iVar2 + 0x20936a0) = (this_ptr->collision_impact_position).x;
    *(float *)(iVar2 + 0x20936a4) = (this_ptr->collision_impact_position).y;
    *(float *)(iVar2 + 0x20936a8) = (this_ptr->collision_impact_position).z;
  }
  *(CDemonActor **)(iVar2 + 0x20936ac) = this_ptr->collision_actor;
  *(int *)(iVar2 + 0x20936b0) = this_ptr->collision_part_index;
  *(int *)(iVar2 + 0x20936b4) = this_ptr->collision_bone_index;
  *(int *)(iVar2 + 0x209368c) = this_ptr->skip_exact_collisions;
  return;
}
