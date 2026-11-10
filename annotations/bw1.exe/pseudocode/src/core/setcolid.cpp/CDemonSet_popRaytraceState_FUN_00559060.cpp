// Name: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060
// Address: 00559060
// Address Range: [[00559060, 0055920e]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00559060(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00559060(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CDemonSet *pCVar4;
  uint *puVar5;
  
  if (_DAT_020af5c8 < 1) {
    _DAT_01d1d400 = "..\\core\\setcolid.cpp";
    _DAT_01d1d404 = 0x42a;
    core_main_c_FUN_005030e0("CDemonSet::popRaytraceState - stack empty");
  }
  _DAT_020af5c8 = _DAT_020af5c8 + -1;
  iVar2 = _DAT_020af5c8 * 0xa0;
  puVar5 = (uint *)(iVar2 + 0x20af5cc);
  *(uint *)&this_ptr->ray_query = *puVar5;
  *(uint *)&this_ptr->field_0x15f69c = *(uint *)(iVar2 + 0x20af5d0);
  *(uint *)&this_ptr->field_0x15f6a0 = *(uint *)(iVar2 + 0x20af5d4);
  *(uint *)&this_ptr->field_0x15f6a4 = *(uint *)(iVar2 + 0x20af5d8);
  *(uint *)&this_ptr->field_0x15f6a8 = *(uint *)(iVar2 + 0x20af5dc);
  iVar1 = *(int *)(iVar2 + 0x20af5e0);
  iVar3 = 0;
  this_ptr->ignore_list_count = iVar1;
  pCVar4 = this_ptr;
  if (0 < iVar1) {
    do {
      pCVar4->ignore_list[0] = (CDemonActor *)puVar5[7];
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar3 < this_ptr->ignore_list_count);
  }
  this_ptr->collision_flag = *(int *)(iVar2 + 0x20af5e4);
  if (&this_ptr->ray_origin != (CVector3f *)(iVar2 + 0x20af610)) {
    (this_ptr->ray_origin).x = *(float *)(iVar2 + 0x20af610);
    (this_ptr->ray_origin).y = *(float *)(iVar2 + 0x20af614);
    (this_ptr->ray_origin).z = *(float *)(iVar2 + 0x20af618);
  }
  if (&this_ptr->ray_target != (CVector3f *)(iVar2 + 0x20af61c)) {
    (this_ptr->ray_target).x = *(float *)(iVar2 + 0x20af61c);
    (this_ptr->ray_target).y = *(float *)(iVar2 + 0x20af620);
    (this_ptr->ray_target).z = *(float *)(iVar2 + 0x20af624);
  }
  this_ptr->raycast_distance = *(float *)(iVar2 + 0x20af628);
  this_ptr->voxel_distance = *(float *)(iVar2 + 0x20af62c);
  if (&this_ptr->voxel_hit_point != (CVector3f *)(iVar2 + 0x20af630)) {
    (this_ptr->voxel_hit_point).x = *(float *)(iVar2 + 0x20af630);
    (this_ptr->voxel_hit_point).y = *(float *)(iVar2 + 0x20af634);
    (this_ptr->voxel_hit_point).z = *(float *)(iVar2 + 0x20af638);
  }
  this_ptr->voxel_surface_type = *(int *)(iVar2 + 0x20af63c);
  if (&this_ptr->collision_normal != (CVector3f *)(iVar2 + 0x20af644)) {
    (this_ptr->collision_normal).x = *(float *)(iVar2 + 0x20af644);
    (this_ptr->collision_normal).y = *(float *)(iVar2 + 0x20af648);
    (this_ptr->collision_normal).z = *(float *)(iVar2 + 0x20af64c);
  }
  this_ptr->ground_type = *(int *)(iVar2 + 0x20af650);
  if (&this_ptr->collision_impact_position != (CVector3f *)(iVar2 + 0x20af654)) {
    (this_ptr->collision_impact_position).x = *(float *)(iVar2 + 0x20af654);
    (this_ptr->collision_impact_position).y = *(float *)(iVar2 + 0x20af658);
    (this_ptr->collision_impact_position).z = *(float *)(iVar2 + 0x20af65c);
  }
  this_ptr->collision_actor = *(CDemonActor **)(iVar2 + 0x20af660);
  this_ptr->collision_part_index = *(int *)(iVar2 + 0x20af664);
  this_ptr->collision_bone_index = *(int *)(iVar2 + 0x20af668);
  this_ptr->skip_exact_collisions = *(int *)(iVar2 + 0x20af640);
  return;
}
