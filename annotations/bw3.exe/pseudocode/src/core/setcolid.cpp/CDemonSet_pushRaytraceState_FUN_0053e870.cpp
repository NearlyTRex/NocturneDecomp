// Name: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_0053e870
// Address: 0053e870
// Address Range: [[0053e870, 0053ea1f]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_0053e870(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_0053e870(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  CDemonSet *pCVar3;
  int iVar4;
  uint *puVar5;
  
  if (5 < _DAT_021221f0) {
    _DAT_01d71de0 = "..\\core\\setcolid.cpp";
    _DAT_01d71de4 = 0x406;
    core_main_c_FUN_004e4330("CDemonSet::pushRaytraceState - stack full");
  }
  iVar2 = _DAT_021221f0 * 0xa0;
  puVar5 = (uint *)(iVar2 + 0x21221f4);
  *puVar5 = *(uint *)&this_ptr->ray_query;
  *(uint *)(iVar2 + 0x21221f8) = *(uint *)&this_ptr->field_0x15f69c;
  *(uint *)(iVar2 + 0x21221fc) = *(uint *)&this_ptr->field_0x15f6a0;
  *(uint *)(iVar2 + 0x2122200) = *(uint *)&this_ptr->field_0x15f6a4;
  iVar4 = 0;
  *(uint *)(iVar2 + 0x2122204) = *(uint *)&this_ptr->field_0x15f6a8;
  _DAT_021221f0 = _DAT_021221f0 + 1;
  iVar1 = this_ptr->ignore_list_count;
  *(int *)(iVar2 + 0x2122208) = iVar1;
  pCVar3 = this_ptr;
  if (0 < iVar1) {
    do {
      puVar5[7] = pCVar3->ignore_list[0];
      iVar4 = iVar4 + 1;
      pCVar3 = (CDemonSet *)pCVar3->cameras;
      puVar5 = puVar5 + 1;
    } while (iVar4 < this_ptr->ignore_list_count);
  }
  *(int *)(iVar2 + 0x212220c) = this_ptr->collision_flag;
  if ((CVector3f *)(iVar2 + 0x2122238) != &this_ptr->ray_origin) {
    *(float *)(iVar2 + 0x2122238) = (this_ptr->ray_origin).x;
    *(float *)(iVar2 + 0x212223c) = (this_ptr->ray_origin).y;
    *(float *)(iVar2 + 0x2122240) = (this_ptr->ray_origin).z;
  }
  if ((CVector3f *)(iVar2 + 0x2122244) != &this_ptr->ray_target) {
    *(float *)(iVar2 + 0x2122244) = (this_ptr->ray_target).x;
    *(float *)(iVar2 + 0x2122248) = (this_ptr->ray_target).y;
    *(float *)(iVar2 + 0x212224c) = (this_ptr->ray_target).z;
  }
  *(float *)(iVar2 + 0x2122250) = this_ptr->raycast_distance;
  *(float *)(iVar2 + 0x2122254) = this_ptr->voxel_distance;
  if ((CVector3f *)(iVar2 + 0x2122258) != &this_ptr->voxel_hit_point) {
    *(float *)(iVar2 + 0x2122258) = (this_ptr->voxel_hit_point).x;
    *(float *)(iVar2 + 0x212225c) = (this_ptr->voxel_hit_point).y;
    *(float *)(iVar2 + 0x2122260) = (this_ptr->voxel_hit_point).z;
  }
  *(int *)(iVar2 + 0x2122264) = this_ptr->voxel_surface_type;
  if ((CVector3f *)(iVar2 + 0x212226c) != &this_ptr->collision_normal) {
    *(float *)(iVar2 + 0x212226c) = (this_ptr->collision_normal).x;
    *(float *)(iVar2 + 0x2122270) = (this_ptr->collision_normal).y;
    *(float *)(iVar2 + 0x2122274) = (this_ptr->collision_normal).z;
  }
  *(int *)(iVar2 + 0x2122278) = this_ptr->ground_type;
  if ((CVector3f *)(iVar2 + 0x212227c) != &this_ptr->collision_impact_position) {
    *(float *)(iVar2 + 0x212227c) = (this_ptr->collision_impact_position).x;
    *(float *)(iVar2 + 0x2122280) = (this_ptr->collision_impact_position).y;
    *(float *)(iVar2 + 0x2122284) = (this_ptr->collision_impact_position).z;
  }
  *(CDemonActor **)(iVar2 + 0x2122288) = this_ptr->collision_actor;
  *(int *)(iVar2 + 0x212228c) = this_ptr->collision_part_index;
  *(int *)(iVar2 + 0x2122290) = this_ptr->collision_bone_index;
  *(int *)(iVar2 + 0x2122268) = this_ptr->skip_exact_collisions;
  return;
}
