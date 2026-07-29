// Name: core_particle.cpp_CParticle_process_FUN_004ef120
// Address: 004ef120
// Address Range: [[004ef120, 004ef43f]]
// Convention: __cdecl
// Signature: void __cdecl core_particle_cpp_CParticle_process_FUN_004ef120(CParticle *this_ptr)

#include "nocturne.h"

void __cdecl core_particle_cpp_CParticle_process_FUN_004ef120(CParticle *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  float afStackY_105c [998];
  CDemonRaytrace *this_ptr_00;
  CVector3i *voxel_coords;
  CVector3i local_74;
  CParticle local_68;
  float fStack_30;
  CVector3f local_2c;
  float local_20;
  float local_1c;
  float local_14;
  
  bVar5 = 0;
  if (0.0 < this_ptr->lifetime_remaining) {
    if ((CParticle *)&this_ptr->previous_position != this_ptr) {
      (this_ptr->previous_position).x = (this_ptr->position).x;
      (this_ptr->previous_position).y = (this_ptr->position).y;
      (this_ptr->previous_position).z = (this_ptr->position).z;
    }
    this_ptr->was_in_solid = this_ptr->is_in_solid;
    local_20 = *(float *)(0x01C775EC + 0x264);
    (this_ptr->velocity).y = this_ptr->gravity_acceleration * local_20 + (this_ptr->velocity).y;
    fVar2 = (this_ptr->velocity).y;
    fVar3 = (this_ptr->velocity).z;
    (this_ptr->position).x = (this_ptr->position).x + (this_ptr->velocity).x * local_20;
    (this_ptr->position).y = (this_ptr->position).y + fVar2 * local_20;
    (this_ptr->position).z = (this_ptr->position).z + fVar3 * local_20;
    local_1c = local_20;
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700(&DAT_01fba938,this_ptr);
    voxel_coords = &local_74;
    this_ptr_00 = (CDemonRaytrace *)&DAT_01fba938;
    local_74.x = local_68.was_in_solid;
    *(uint *)((int)&local_74 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_68 + (uint)bVar5 * -8 + 0x34);
    *(float *)((int)&local_74 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         (&fStack_30)[(uint)bVar5 * -2 + (uint)bVar5 * -2];
    iVar4 = core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_0046b7f0(this_ptr_00,voxel_coords);
    this_ptr->is_in_solid = iVar4;
    if ((iVar4 != 0) || (this_ptr->was_in_solid != 0)) {
      pCVar1 = &this_ptr->previous_position;
      local_14 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
                           ((CDemonRaytrace *)&DAT_01fba938,pCVar1,&this_ptr->position,&local_2c,
                            (int *)0x0);
      if ((0.0 <= local_14) && (local_14 < 1.0)) {
        local_68.lifetime_remaining = (this_ptr->position).x - pCVar1->x;
        local_68.gravity_acceleration = (this_ptr->position).y - (this_ptr->previous_position).y;
        local_68.is_in_solid = (int)((this_ptr->position).z - (this_ptr->previous_position).z);
        local_68.position.x = pCVar1->x + local_68.lifetime_remaining * local_14 * 0.8f;
        local_68.position.y =
             (this_ptr->previous_position).y +
             local_68.gravity_acceleration * local_14 * 0.8f;
        local_68.position.z =
             (this_ptr->previous_position).z +
             (float)local_68.is_in_solid * local_14 * 0.8f;
        if (this_ptr != &local_68) {
          (this_ptr->position).x = local_68.position.x;
          (this_ptr->position).y = local_68.position.y;
          (this_ptr->position).z = local_68.position.z;
        }
        iVar4 = (*this_ptr->vtable->onCollision)(this_ptr,&local_2c);
        if (iVar4 == 0) {
          pCVar1 = &this_ptr->velocity;
          fVar2 = (local_2c.z * (this_ptr->velocity).z +
                  local_2c.x * pCVar1->x + local_2c.y * (this_ptr->velocity).y) * 2.0f;
          if (pCVar1 != &local_68.velocity) {
            pCVar1->x = local_2c.x * fVar2 - pCVar1->x;
            (this_ptr->velocity).y = local_2c.y * fVar2 - (this_ptr->velocity).y;
            (this_ptr->velocity).z = local_2c.z * fVar2 - (this_ptr->velocity).z;
          }
          pCVar1 = &this_ptr->velocity;
          fVar2 = (this_ptr->velocity).y * -0.7f;
          fVar3 = -0.7f * (this_ptr->velocity).z;
          if (pCVar1 != &local_68.previous_position) {
            pCVar1->x = pCVar1->x * -0.7f;
            (this_ptr->velocity).y = fVar2;
            (this_ptr->velocity).z = fVar3;
          }
        }
        else {
          this_ptr->lifetime_remaining = 0.0;
        }
      }
    }
    local_1c = this_ptr->lifetime_remaining - local_1c;
    this_ptr->lifetime_remaining = local_1c;
    if (local_1c < 0.0) {
      this_ptr->lifetime_remaining = 0.0;
      return;
    }
  }
  return;
}
