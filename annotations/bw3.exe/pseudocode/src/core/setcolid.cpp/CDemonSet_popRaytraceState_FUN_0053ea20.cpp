// Name: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_0053ea20
// Address: 0053ea20
// Address Range: [[0053ea20, 0053ebce]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_0053ea20(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_0053ea20(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CDemonSet *pCVar4;
  int *piVar5;
  
  if (_DAT_021221f0 < 1) {
    _DAT_01d71de0 = "..\\core\\setcolid.cpp";
    _DAT_01d71de4 = 0x42a;
    core_main_c_FUN_004e4330("CDemonSet::popRaytraceState - stack empty");
  }
  _DAT_021221f0 = _DAT_021221f0 + -1;
  iVar2 = _DAT_021221f0 * 0xa0;
  piVar5 = (int *)(iVar2 + 0x21221f4);
  (this_ptr->ray_query).ray_type = *piVar5;
  (this_ptr->ray_query).laser_type = *(int *)(iVar2 + 0x21221f8);
  (this_ptr->ray_query).laser_color.r = *(int *)(iVar2 + 0x21221fc);
  (this_ptr->ray_query).laser_color.g = *(int *)(iVar2 + 0x2122200);
  (this_ptr->ray_query).laser_color.b = *(int *)(iVar2 + 0x2122204);
  iVar1 = *(int *)(iVar2 + 0x2122208);
  iVar3 = 0;
  this_ptr->ignore_list_count = iVar1;
  pCVar4 = this_ptr;
  if (0 < iVar1) {
    do {
      pCVar4->ignore_list[0] = (CDemonActor *)piVar5[7];
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 1;
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar3 < this_ptr->ignore_list_count);
  }
  this_ptr->collision_flag = *(int *)(iVar2 + 0x212220c);
  if (&this_ptr->ray_origin != (CVector3f *)(iVar2 + 0x2122238)) {
    (this_ptr->ray_origin).x = *(float *)(iVar2 + 0x2122238);
    (this_ptr->ray_origin).y = *(float *)(iVar2 + 0x212223c);
    (this_ptr->ray_origin).z = *(float *)(iVar2 + 0x2122240);
  }
  if (&this_ptr->ray_target != (CVector3f *)(iVar2 + 0x2122244)) {
    (this_ptr->ray_target).x = *(float *)(iVar2 + 0x2122244);
    (this_ptr->ray_target).y = *(float *)(iVar2 + 0x2122248);
    (this_ptr->ray_target).z = *(float *)(iVar2 + 0x212224c);
  }
  this_ptr->raycast_distance = *(float *)(iVar2 + 0x2122250);
  this_ptr->voxel_distance = *(float *)(iVar2 + 0x2122254);
  if (&this_ptr->voxel_hit_point != (CVector3f *)(iVar2 + 0x2122258)) {
    (this_ptr->voxel_hit_point).x = *(float *)(iVar2 + 0x2122258);
    (this_ptr->voxel_hit_point).y = *(float *)(iVar2 + 0x212225c);
    (this_ptr->voxel_hit_point).z = *(float *)(iVar2 + 0x2122260);
  }
  this_ptr->voxel_surface_type = *(int *)(iVar2 + 0x2122264);
  if (&this_ptr->collision_normal != (CVector3f *)(iVar2 + 0x212226c)) {
    (this_ptr->collision_normal).x = *(float *)(iVar2 + 0x212226c);
    (this_ptr->collision_normal).y = *(float *)(iVar2 + 0x2122270);
    (this_ptr->collision_normal).z = *(float *)(iVar2 + 0x2122274);
  }
  this_ptr->ground_type = *(int *)(iVar2 + 0x2122278);
  if (&this_ptr->collision_impact_position != (CVector3f *)(iVar2 + 0x212227c)) {
    (this_ptr->collision_impact_position).x = *(float *)(iVar2 + 0x212227c);
    (this_ptr->collision_impact_position).y = *(float *)(iVar2 + 0x2122280);
    (this_ptr->collision_impact_position).z = *(float *)(iVar2 + 0x2122284);
  }
  this_ptr->collision_actor = *(CDemonActor **)(iVar2 + 0x2122288);
  this_ptr->collision_part_index = *(int *)(iVar2 + 0x212228c);
  this_ptr->collision_bone_index = *(int *)(iVar2 + 0x2122290);
  this_ptr->skip_exact_collisions = *(int *)(iVar2 + 0x2122268);
  return;
}
