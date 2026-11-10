// Name: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00537c40
// Address: 00537c40
// Address Range: [[00537c40, 00537dee]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00537c40(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00537c40(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CDemonSet *pCVar4;
  uint *puVar5;
  
  if (_DAT_02093614 < 1) {
    _DAT_01d046a0 = "..\\core\\setcolid.cpp";
    _DAT_01d046a4 = 0x42a;
    core_main_c_FUN_004e4500("CDemonSet::popRaytraceState - stack empty");
  }
  _DAT_02093614 = _DAT_02093614 + -1;
  iVar2 = _DAT_02093614 * 0xa0;
  puVar5 = (uint *)(iVar2 + 0x2093618);
  *(uint *)&this_ptr->ray_query = *puVar5;
  *(uint *)&this_ptr->field_0x15f698 = *(uint *)(iVar2 + 0x209361c);
  *(uint *)&this_ptr->field_0x15f69c = *(uint *)(iVar2 + 0x2093620);
  *(uint *)&this_ptr->field_0x15f6a0 = *(uint *)(iVar2 + 0x2093624);
  *(uint *)&this_ptr->field_0x15f6a4 = *(uint *)(iVar2 + 0x2093628);
  iVar1 = *(int *)(iVar2 + 0x209362c);
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
  this_ptr->collision_flag = *(int *)(iVar2 + 0x2093630);
  if (&this_ptr->ray_origin != (CVector3f *)(iVar2 + 0x209365c)) {
    (this_ptr->ray_origin).x = *(float *)(iVar2 + 0x209365c);
    (this_ptr->ray_origin).y = *(float *)(iVar2 + 0x2093660);
    (this_ptr->ray_origin).z = *(float *)(iVar2 + 0x2093664);
  }
  if (&this_ptr->ray_target != (CVector3f *)(iVar2 + 0x2093668)) {
    (this_ptr->ray_target).x = *(float *)(iVar2 + 0x2093668);
    (this_ptr->ray_target).y = *(float *)(iVar2 + 0x209366c);
    (this_ptr->ray_target).z = *(float *)(iVar2 + 0x2093670);
  }
  this_ptr->raycast_distance = *(float *)(iVar2 + 0x2093674);
  this_ptr->voxel_distance = *(float *)(iVar2 + 0x2093678);
  if (&this_ptr->voxel_hit_point != (CVector3f *)(iVar2 + 0x209367c)) {
    (this_ptr->voxel_hit_point).x = *(float *)(iVar2 + 0x209367c);
    (this_ptr->voxel_hit_point).y = *(float *)(iVar2 + 0x2093680);
    (this_ptr->voxel_hit_point).z = *(float *)(iVar2 + 0x2093684);
  }
  this_ptr->voxel_surface_type = *(int *)(iVar2 + 0x2093688);
  if (&this_ptr->collision_normal != (CVector3f *)(iVar2 + 0x2093690)) {
    (this_ptr->collision_normal).x = *(float *)(iVar2 + 0x2093690);
    (this_ptr->collision_normal).y = *(float *)(iVar2 + 0x2093694);
    (this_ptr->collision_normal).z = *(float *)(iVar2 + 0x2093698);
  }
  this_ptr->ground_type = *(int *)(iVar2 + 0x209369c);
  if (&this_ptr->collision_impact_position != (CVector3f *)(iVar2 + 0x20936a0)) {
    (this_ptr->collision_impact_position).x = *(float *)(iVar2 + 0x20936a0);
    (this_ptr->collision_impact_position).y = *(float *)(iVar2 + 0x20936a4);
    (this_ptr->collision_impact_position).z = *(float *)(iVar2 + 0x20936a8);
  }
  this_ptr->collision_actor = *(CDemonActor **)(iVar2 + 0x20936ac);
  this_ptr->collision_part_index = *(int *)(iVar2 + 0x20936b0);
  this_ptr->collision_bone_index = *(int *)(iVar2 + 0x20936b4);
  this_ptr->skip_exact_collisions = *(int *)(iVar2 + 0x209368c);
  return;
}
