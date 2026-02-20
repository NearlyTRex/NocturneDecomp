// Name: core_vehicle.cpp_CVehicle_setup_FUN_005e7b90
// Address: 005e7b90
// Address Range: [[005e7b90, 005e7ba0]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_setup_FUN_005e7b90(CVehicle *this_ptr)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_setup_FUN_005e7b90(CVehicle *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CKeyFramedModel *pCVar9;
  CVector3f *pCVar10;
  CTire *pCVar11;
  CVector3f *pCVar12;
  CKeyFramedModelInstance *this_ptr_00;
  int iVar13;
  float local_1c;
  float local_18;
  float local_14;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  iVar13 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  if (0 < this_ptr->tire_count) {
    this_ptr_00 = &this_ptr->tires[0].model;
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(this_ptr_00);
      iVar13 = iVar13 + 1;
      this_ptr_00 = (CKeyFramedModelInstance *)(this_ptr_00[1].part_visibility_flags + 0xe);
    } while (iVar13 < this_ptr->tire_count);
  }
  pCVar9 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar12 = pCVar9->frame_bounds;
  local_1c = pCVar12[1].x - pCVar12->x;
  local_18 = pCVar12[1].y - pCVar12->y;
  local_14 = pCVar12[1].z - pCVar12->z;
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
  this_ptr->unk1[1].z = 0.0;
  this_ptr->unk1[1].y = this_ptr->unk1[1].z;
  this_ptr->unk1[1].x = this_ptr->unk1[1].y;
  this_ptr->unk1[4].z = 0.0;
  this_ptr->unk1[4].y = this_ptr->unk1[4].z;
  this_ptr->unk1[4].x = this_ptr->unk1[4].y;
  (this_ptr->local_velocity).z = 0.0;
  (this_ptr->local_velocity).y = (this_ptr->local_velocity).z;
  (this_ptr->local_velocity).x = (this_ptr->local_velocity).y;
  this_ptr->unk1[2].z = 0.0;
  this_ptr->unk1[2].y = this_ptr->unk1[2].z;
  this_ptr->unk1[2].x = this_ptr->unk1[2].y;
  this_ptr->unk1[0].z = 0.0;
  this_ptr->unk1[0].y = this_ptr->unk1[0].z;
  this_ptr->unk1[0].x = this_ptr->unk1[0].y;
  this_ptr->unk1[3].z = 0.0;
  this_ptr->unk1[3].y = this_ptr->unk1[3].z;
  this_ptr->unk1[3].x = this_ptr->unk1[3].y;
  (this_ptr->world_velocity).z = 0.0;
  (this_ptr->world_velocity).y = (this_ptr->world_velocity).z;
  (this_ptr->world_velocity).x = (this_ptr->world_velocity).y;
  iVar13 = 0;
  if (0 < this_ptr->tire_count) {
    pCVar12 = &this_ptr->tires[0].runtime_position;
    pCVar10 = &this_ptr->tires[0].spin_angle;
    do {
      pCVar11 = this_ptr->tires + iVar13;
      if ((CTire *)pCVar12 != pCVar11) {
        pCVar12->x = (pCVar11->static_bpos).x;
        pCVar12->y = (pCVar11->static_bpos).y;
        pCVar12->z = (pCVar11->static_bpos).z;
      }
      pCVar10->z = 0.0;
      pCVar12 = (CVector3f *)((int)(pCVar12 + 0x24) + 4);
      pCVar10[2].z = 0.0;
      iVar13 = iVar13 + 1;
      fVar1 = pCVar10[2].z;
      pCVar10->y = pCVar10->z;
      pCVar10[2].y = fVar1;
      pCVar10->x = pCVar10->y;
      pCVar10[2].x = fVar1;
      pCVar10 = (CVector3f *)((int)(pCVar10 + 0x24) + 4);
    } while (iVar13 < this_ptr->tire_count);
  }
  this_ptr->unk2[0] = 0.0;
  this_ptr->unk2[1] = 1.0;
  this_ptr->unk2[2] = 0.0;
  this_ptr->unk2[3] = 0.0;
  core_course_cpp_CCourse_load_FUN_00442580(&this_ptr->course,this_ptr->course_name);
  this_ptr->is_visible = 1;
  this_ptr->sfx_horn_handle = 0;
  this_ptr->sfx_engine_handle = 0;
  this_ptr->sfx_screech_handle = 0;
  return;
}
