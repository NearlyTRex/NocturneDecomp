// Name: core_vehicle.cpp_CVehicle_setup_FUN_0054e7f0
// Address: 0054e7f0
// Address Range: [[0054e7f0, 0054eade]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_setup_FUN_0054e7f0(CVehicle *this_ptr)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_setup_FUN_0054e7f0(CVehicle *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CBoundingBox3D *pCVar7;
  float fVar8;
  float fVar9;
  CKeyFramedModel *pCVar10;
  CVector3f *pCVar11;
  CTire *pCVar12;
  CVector3f *pCVar13;
  CKeyFramedModelInstance *this_ptr_00;
  int iVar14;
  float local_1c;
  float local_18;
  float local_14;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  iVar14 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  if (0 < this_ptr->tire_count) {
    this_ptr_00 = &this_ptr->tires[0].model;
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(this_ptr_00);
      iVar14 = iVar14 + 1;
      this_ptr_00 = (CKeyFramedModelInstance *)(this_ptr_00[1].part_visibility_flags + 0xe);
    } while (iVar14 < this_ptr->tire_count);
  }
  pCVar10 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  pCVar7 = pCVar10->frame_bounds;
  local_1c = (pCVar7->max).x - (pCVar7->min).x;
  local_18 = (pCVar7->max).y - (pCVar7->min).y;
  local_14 = (pCVar7->max).z - (pCVar7->min).z;
  if (&this_ptr->bound_size != (CVector3f *)&local_1c) {
    (this_ptr->bound_size).x = local_1c;
    (this_ptr->bound_size).y = local_18;
    (this_ptr->bound_size).z = local_14;
  }
  fVar8 = this_ptr->mass * (float)0.03125;
  fVar1 = (this_ptr->bound_size).y;
  fVar2 = (this_ptr->bound_size).x;
  fVar3 = (this_ptr->bound_size).x;
  fVar4 = (this_ptr->bound_size).z;
  fVar5 = (this_ptr->bound_size).z;
  fVar6 = (this_ptr->bound_size).y;
  this_ptr->scaled_mass = fVar8;
  fVar9 = (float)0.083333333333333301;
  this_ptr->inertia_yz = fVar8 * fVar9 * (fVar4 * fVar4 + fVar1 * fVar1);
  this_ptr->inertia_xz = this_ptr->scaled_mass * fVar9 * (fVar5 * fVar5 + fVar2 * fVar2);
  this_ptr->inertia_xy = (fVar6 * fVar6 + fVar3 * fVar3) * this_ptr->scaled_mass * fVar9;
  this_ptr->unused_physics_vectors[1].z = 0.0;
  this_ptr->unused_physics_vectors[1].y = this_ptr->unused_physics_vectors[1].z;
  this_ptr->unused_physics_vectors[1].x = this_ptr->unused_physics_vectors[1].y;
  this_ptr->unused_physics_vectors[4].z = 0.0;
  this_ptr->unused_physics_vectors[4].y = this_ptr->unused_physics_vectors[4].z;
  this_ptr->unused_physics_vectors[4].x = this_ptr->unused_physics_vectors[4].y;
  (this_ptr->local_velocity).z = 0.0;
  (this_ptr->local_velocity).y = (this_ptr->local_velocity).z;
  (this_ptr->local_velocity).x = (this_ptr->local_velocity).y;
  this_ptr->unused_physics_vectors[2].z = 0.0;
  this_ptr->unused_physics_vectors[2].y = this_ptr->unused_physics_vectors[2].z;
  this_ptr->unused_physics_vectors[2].x = this_ptr->unused_physics_vectors[2].y;
  this_ptr->unused_physics_vectors[0].z = 0.0;
  this_ptr->unused_physics_vectors[0].y = this_ptr->unused_physics_vectors[0].z;
  this_ptr->unused_physics_vectors[0].x = this_ptr->unused_physics_vectors[0].y;
  this_ptr->unused_physics_vectors[3].z = 0.0;
  this_ptr->unused_physics_vectors[3].y = this_ptr->unused_physics_vectors[3].z;
  this_ptr->unused_physics_vectors[3].x = this_ptr->unused_physics_vectors[3].y;
  (this_ptr->world_velocity).z = 0.0;
  (this_ptr->world_velocity).y = (this_ptr->world_velocity).z;
  (this_ptr->world_velocity).x = (this_ptr->world_velocity).y;
  iVar14 = 0;
  if (0 < this_ptr->tire_count) {
    pCVar13 = &this_ptr->tires[0].runtime_position;
    pCVar11 = &this_ptr->tires[0].spin_angle;
    do {
      pCVar12 = this_ptr->tires + iVar14;
      if ((CTire *)pCVar13 != pCVar12) {
        pCVar13->x = (pCVar12->static_bpos).x;
        pCVar13->y = (pCVar12->static_bpos).y;
        pCVar13->z = (pCVar12->static_bpos).z;
      }
      pCVar11->z = 0.0;
      pCVar13 = (CVector3f *)((int)(pCVar13 + 0x24) + 4);
      pCVar11[2].z = 0.0;
      iVar14 = iVar14 + 1;
      fVar1 = pCVar11[2].z;
      pCVar11->y = pCVar11->z;
      pCVar11[2].y = fVar1;
      pCVar11->x = pCVar11->y;
      pCVar11[2].x = fVar1;
      pCVar11 = (CVector3f *)((int)(pCVar11 + 0x24) + 4);
    } while (iVar14 < this_ptr->tire_count);
  }
  (this_ptr->ground_normal).x = 0.0;
  (this_ptr->ground_normal).y = 1.0;
  (this_ptr->ground_normal).z = 0.0;
  this_ptr->ground_offset = 0.0;
  core_course_cpp_CCourse_load_FUN_0043b690(&this_ptr->course,this_ptr->course_name);
  this_ptr->is_visible = 1;
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->sfx_handles[2] = 0;
  return;
}
