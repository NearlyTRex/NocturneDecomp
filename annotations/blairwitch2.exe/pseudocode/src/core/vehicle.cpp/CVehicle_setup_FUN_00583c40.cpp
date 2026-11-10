// Name: core_vehicle.cpp_CVehicle_setup_FUN_00583c40
// Address: 00583c40
// Address Range: [[00583c40, 00583f19]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_setup_FUN_00583c40(CVehicle *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vehicle_cpp_CVehicle_setup_FUN_00583c40(CVehicle *this_ptr)

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
  uint *puVar10;
  CTire *pCVar11;
  uint *puVar12;
  CKeyFramedModelInstance *this_ptr_00;
  CBoundingBox3D *pCVar13;
  int iVar14;
  float *pfVar15;
  byte bVar16;
  float afStackY_1010 [1010];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar16 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  iVar14 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  if (0 < this_ptr->tire_count) {
    this_ptr_00 = (CKeyFramedModelInstance *)&this_ptr->tires[0].field_0x14;
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(this_ptr_00);
      iVar14 = iVar14 + 1;
      this_ptr_00 = (CKeyFramedModelInstance *)(this_ptr_00[1].part_visibility_flags + 0xe);
    } while (iVar14 < this_ptr->tire_count);
  }
  pCVar9 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
  pCVar13 = pCVar9->frame_bounds;
  pfVar15 = &stack0xffffffc0;
  for (iVar14 = 6; iVar14 != 0; iVar14 = iVar14 + -1) {
    *pfVar15 = (pCVar13->min).x;
    pCVar13 = (CBoundingBox3D *)((int)pCVar13 + (uint)bVar16 * -8 + 4);
    pfVar15 = pfVar15 + (uint)bVar16 * -2 + 1;
  }
  fStack_28 = fStack_34 - fStack_40;
  fStack_24 = fStack_30 - fStack_3c;
  fStack_20 = fStack_2c - fStack_38;
  fStack_1c = fStack_34 - fStack_40;
  (&stack0xffffffe8)[(uint)bVar16 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffdc + (uint)bVar16 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar16 * -8 + (uint)bVar16 * -8) =
       *(uint *)((int)&stack0xffffffe0 + (uint)bVar16 * -8 + (uint)bVar16 * -8);
  if (&this_ptr->bound_size != (CVector3f *)&stack0xffffffe4) {
    (this_ptr->bound_size).x = fStack_1c;
    (this_ptr->bound_size).y = fStack_18;
    (this_ptr->bound_size).z = fStack_14;
  }
  fVar7 = this_ptr->mass * (float)_DAT_005edc77;
  fVar1 = (this_ptr->bound_size).y;
  fVar2 = (this_ptr->bound_size).x;
  fVar3 = (this_ptr->bound_size).x;
  fVar4 = (this_ptr->bound_size).z;
  fVar5 = (this_ptr->bound_size).z;
  fVar6 = (this_ptr->bound_size).y;
  this_ptr->scaled_mass = fVar7;
  fVar8 = (float)_DAT_005edc7f;
  this_ptr->inertia_yz = fVar7 * fVar8 * (fVar4 * fVar4 + fVar1 * fVar1);
  this_ptr->inertia_xz = this_ptr->scaled_mass * fVar8 * (fVar5 * fVar5 + fVar2 * fVar2);
  this_ptr->inertia_xy = (fVar6 * fVar6 + fVar3 * fVar3) * this_ptr->scaled_mass * fVar8;
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
    puVar12 = (uint *)&this_ptr->tires[0].field_0x19c;
    puVar10 = (uint *)&this_ptr->tires[0].field_0x190;
    do {
      pCVar11 = this_ptr->tires + iVar14;
      if ((CTire *)puVar12 != pCVar11) {
        *puVar12 = *(uint *)pCVar11;
        puVar12[1] = *(uint *)&pCVar11->field_0x4;
        puVar12[2] = *(uint *)&pCVar11->field_0x8;
      }
      puVar10[2] = 0;
      puVar12 = puVar12 + 0x6d;
      puVar10[8] = 0;
      iVar14 = iVar14 + 1;
      puVar10[1] = puVar10[2];
      puVar10[7] = puVar10[8];
      *puVar10 = puVar10[1];
      puVar10[6] = puVar10[8];
      puVar10 = puVar10 + 0x6d;
    } while (iVar14 < this_ptr->tire_count);
  }
  (this_ptr->ground_normal).x = 0.0;
  (this_ptr->ground_normal).y = 1.0;
  (this_ptr->ground_normal).z = 0.0;
  this_ptr->ground_offset = 0.0;
  core_course_cpp_CCourse_load_FUN_00438af0
            ((CCourse *)&this_ptr->field_0x117c,this_ptr->course_name);
  this_ptr->is_visible = 1;
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->sfx_handles[2] = 0;
  return;
}
