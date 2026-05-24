// Name: core_vehicle.cpp_CVehicle_setup_FUN_005e7b90
// Address: 005e7b90
// MANUAL RECONSTRUCTION
// Address Range: [[005e7b90, 005e7e7e]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_setup_FUN_005e7b90(CVehicle *this_ptr)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_setup_FUN_005e7b90(CVehicle *this_ptr)

{
  CBoundingBox3D *pCVar13;
  CKeyFramedModel *pCVar9;
  int iVar14;
  int iVar13;
  float local_1c;
  float local_18;
  float local_14;
  float fVar3;
  float fVar1;
  float fVar8;
  float fVar6;
  float fVar7;
  float fVar4;
  float fVar5;
  float fVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  iVar13 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  if (0 < this_ptr->tire_count) {
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->tires[iVar13].model);
      iVar13 = iVar13 + 1;
    } while (iVar13 < this_ptr->tire_count);
  }
  pCVar9 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar13 = pCVar9->frame_bounds;
  local_1c = (pCVar13->max).x - (pCVar13->min).x;
  local_18 = (pCVar13->max).y - (pCVar13->min).y;
  local_14 = (pCVar13->max).z - (pCVar13->min).z;
  if (&this_ptr->bound_size != (CVector3f *)&local_1c) {
    (this_ptr->bound_size).x = local_1c;
    (this_ptr->bound_size).y = local_18;
    (this_ptr->bound_size).z = local_14;
  }
  fVar7 = this_ptr->mass * (float)0.03125;
  fVar1 = (this_ptr->bound_size).y;
  fVar2 = (this_ptr->bound_size).x;
  fVar3 = (this_ptr->bound_size).x;
  fVar4 = (this_ptr->bound_size).z;
  fVar5 = (this_ptr->bound_size).z;
  fVar6 = (this_ptr->bound_size).y;
  this_ptr->scaled_mass = fVar7;
  fVar8 = (float)0.083333333333333301;
  this_ptr->inertia_yz = fVar7 * fVar8 * (fVar4 * fVar4 + fVar1 * fVar1);
  this_ptr->inertia_xz = this_ptr->scaled_mass * fVar8 * (fVar5 * fVar5 + fVar2 * fVar2);
  this_ptr->inertia_xy = (fVar6 * fVar6 + fVar3 * fVar3) * this_ptr->scaled_mass * fVar8;
  this_ptr->unused_physics_vectors[1].z = 0.0;
  this_ptr->unused_physics_vectors[1].y = 0.0;
  this_ptr->unused_physics_vectors[1].x = 0.0;
  this_ptr->unused_physics_vectors[4].z = 0.0;
  this_ptr->unused_physics_vectors[4].y = 0.0;
  this_ptr->unused_physics_vectors[4].x = 0.0;
  (this_ptr->local_velocity).z = 0.0;
  (this_ptr->local_velocity).y = 0.0;
  (this_ptr->local_velocity).x = 0.0;
  this_ptr->unused_physics_vectors[2].z = 0.0;
  this_ptr->unused_physics_vectors[2].y = 0.0;
  this_ptr->unused_physics_vectors[2].x = 0.0;
  this_ptr->unused_physics_vectors[0].z = 0.0;
  this_ptr->unused_physics_vectors[0].y = 0.0;
  this_ptr->unused_physics_vectors[0].x = 0.0;
  this_ptr->unused_physics_vectors[3].z = 0.0;
  this_ptr->unused_physics_vectors[3].y = 0.0;
  this_ptr->unused_physics_vectors[3].x = 0.0;
  (this_ptr->world_velocity).z = 0.0;
  (this_ptr->world_velocity).y = 0.0;
  (this_ptr->world_velocity).x = 0.0;
  iVar14 = 0;
  if (0 < this_ptr->tire_count) {
    do {
      this_ptr->tires[iVar14].runtime_position = this_ptr->tires[iVar14].static_bpos;
      this_ptr->tires[iVar14].spin_angle.z = 0.0;
      this_ptr->tires[iVar14].spin_angle.y = 0.0;
      this_ptr->tires[iVar14].spin_angle.x = 0.0;
      this_ptr->tires[iVar14].runtime_rotation.z = 0.0;
      this_ptr->tires[iVar14].runtime_rotation.y = 0.0;
      this_ptr->tires[iVar14].runtime_rotation.x = 0.0;
      iVar14 = iVar14 + 1;
    } while (iVar14 < this_ptr->tire_count);
  }
  (this_ptr->ground_normal).x = 0.0;
  (this_ptr->ground_normal).y = 1.0;
  (this_ptr->ground_normal).z = 0.0;
  this_ptr->ground_offset = 0.0;
  core_course_cpp_CCourse_load_FUN_00442580(&this_ptr->course,this_ptr->course_name);
  this_ptr->is_visible = 1;
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->sfx_handles[2] = 0;
  return;
}
