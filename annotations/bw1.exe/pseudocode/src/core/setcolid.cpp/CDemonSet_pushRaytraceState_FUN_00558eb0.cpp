// Name: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0
// Address: 00558eb0
// Address Range: [[00558eb0, 0055905f]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  CDemonSet *pCVar3;
  int iVar4;
  int *piVar5;
  
  if (5 < _DAT_020af5c8) {
    _DAT_01d1d400 = "..\\core\\setcolid.cpp";
    _DAT_01d1d404 = 0x406;
    core_main_c_FUN_005030e0("CDemonSet::pushRaytraceState - stack full");
  }
  iVar2 = _DAT_020af5c8 * 0xa0;
  piVar5 = (int *)(iVar2 + 0x20af5cc);
  *piVar5 = (this_ptr->ray_query).ray_type;
  *(int *)(iVar2 + 0x20af5d0) = (this_ptr->ray_query).laser_type;
  *(int *)(iVar2 + 0x20af5d4) = (this_ptr->ray_query).laser_color.r;
  *(int *)(iVar2 + 0x20af5d8) = (this_ptr->ray_query).laser_color.g;
  iVar4 = 0;
  *(int *)(iVar2 + 0x20af5dc) = (this_ptr->ray_query).laser_color.b;
  _DAT_020af5c8 = _DAT_020af5c8 + 1;
  iVar1 = this_ptr->ignore_list_count;
  *(int *)(iVar2 + 0x20af5e0) = iVar1;
  pCVar3 = this_ptr;
  if (0 < iVar1) {
    do {
      piVar5[7] = (int)pCVar3->ignore_list[0];
      iVar4 = iVar4 + 1;
      pCVar3 = (CDemonSet *)pCVar3->cameras;
      piVar5 = piVar5 + 1;
    } while (iVar4 < this_ptr->ignore_list_count);
  }
  *(int *)(iVar2 + 0x20af5e4) = this_ptr->collision_flag;
  if ((CVector3f *)(iVar2 + 0x20af610) != &this_ptr->ray_origin) {
    *(float *)(iVar2 + 0x20af610) = (this_ptr->ray_origin).x;
    *(float *)(iVar2 + 0x20af614) = (this_ptr->ray_origin).y;
    *(float *)(iVar2 + 0x20af618) = (this_ptr->ray_origin).z;
  }
  if ((CVector3f *)(iVar2 + 0x20af61c) != &this_ptr->ray_target) {
    *(float *)(iVar2 + 0x20af61c) = (this_ptr->ray_target).x;
    *(float *)(iVar2 + 0x20af620) = (this_ptr->ray_target).y;
    *(float *)(iVar2 + 0x20af624) = (this_ptr->ray_target).z;
  }
  *(float *)(iVar2 + 0x20af628) = this_ptr->raycast_distance;
  *(float *)(iVar2 + 0x20af62c) = this_ptr->voxel_distance;
  if ((CVector3f *)(iVar2 + 0x20af630) != &this_ptr->voxel_hit_point) {
    *(float *)(iVar2 + 0x20af630) = (this_ptr->voxel_hit_point).x;
    *(float *)(iVar2 + 0x20af634) = (this_ptr->voxel_hit_point).y;
    *(float *)(iVar2 + 0x20af638) = (this_ptr->voxel_hit_point).z;
  }
  *(int *)(iVar2 + 0x20af63c) = this_ptr->voxel_surface_type;
  if ((CVector3f *)(iVar2 + 0x20af644) != &this_ptr->collision_normal) {
    *(float *)(iVar2 + 0x20af644) = (this_ptr->collision_normal).x;
    *(float *)(iVar2 + 0x20af648) = (this_ptr->collision_normal).y;
    *(float *)(iVar2 + 0x20af64c) = (this_ptr->collision_normal).z;
  }
  *(int *)(iVar2 + 0x20af650) = this_ptr->ground_type;
  if ((CVector3f *)(iVar2 + 0x20af654) != &this_ptr->collision_impact_position) {
    *(float *)(iVar2 + 0x20af654) = (this_ptr->collision_impact_position).x;
    *(float *)(iVar2 + 0x20af658) = (this_ptr->collision_impact_position).y;
    *(float *)(iVar2 + 0x20af65c) = (this_ptr->collision_impact_position).z;
  }
  *(CDemonActor **)(iVar2 + 0x20af660) = this_ptr->collision_actor;
  *(int *)(iVar2 + 0x20af664) = this_ptr->collision_part_index;
  *(int *)(iVar2 + 0x20af668) = this_ptr->collision_bone_index;
  *(int *)(iVar2 + 0x20af640) = this_ptr->skip_exact_collisions;
  return;
}
