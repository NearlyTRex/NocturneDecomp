// Name: core_particle.cpp_CParticle_process_FUN_00545760
// Address: 00545760
// Address Range: [[00545760, 00545a7f]]
// Convention: __cdecl
// Signature: void core_particle.cpp_CParticle_process_FUN_00545760(CParticle * this_ptr)

#include "nocturne.h"

void __cdecl core_particle_cpp_CParticle_process_FUN_00545760(CParticle *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  byte bVar5;
  float afStackY_1060 [999];
  CDemonRaytrace *this_ptr_00;
  CVector3i *voxel_coords;
  CVector3i *in_stack_ffffff50;
  float fStack_a4;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  CVector3i local_78;
  CParticle local_64;
  byte local_2c [8];
  float fStack_24;
  float local_20;
  float local_1c;
  
  bVar5 = 0;
  if (0.0 < this_ptr->lifetime_remaining) {
    if ((CParticle *)&this_ptr->previous_position != this_ptr) {
      (this_ptr->previous_position).x = (this_ptr->position).x;
      (this_ptr->previous_position).y = (this_ptr->position).y;
      (this_ptr->previous_position).z = (this_ptr->position).z;
    }
    this_ptr->collision_result = this_ptr->collision_flag;
    local_20 = g_CGamePtr->delta_time_float;
    (this_ptr->velocity).y = this_ptr->gravity_acceleration * local_20 + (this_ptr->velocity).y;
    local_98 = (this_ptr->velocity).x * local_20;
    local_94 = (this_ptr->velocity).y * local_20;
    local_90 = (this_ptr->velocity).z * local_20;
    (this_ptr->position).x = (this_ptr->position).x + local_98;
    (this_ptr->position).y = (this_ptr->position).y + local_94;
    (this_ptr->position).z = (this_ptr->position).z + local_90;
    local_1c = local_20;
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
              (&g_CDemonRaytraceInstance,&this_ptr->position,in_stack_ffffff50);
    voxel_coords = &local_78;
    this_ptr_00 = &g_CDemonRaytraceInstance;
    local_78.x = (int)local_64.previous_position.y;
    *(uint *)((int)&local_78 + (uint)bVar5 * -8 + 4) =
         *(uint *)(local_2c + (uint)bVar5 * -8 + -0xc);
    *(uint *)((int)&local_78 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)(local_2c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -8);
    iVar4 = core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970(this_ptr_00,voxel_coords);
    this_ptr->collision_flag = iVar4;
    if ((iVar4 != 0) || (this_ptr->collision_result != 0)) {
      pCVar1 = &this_ptr->previous_position;
      fStack_a4 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                            (&g_CDemonRaytraceInstance,pCVar1,&this_ptr->position,
                             (CVector3f *)local_2c,(int *)0x0);
      if ((0.0 <= fStack_a4) && (fStack_a4 < 1.0)) {
        local_64.lifetime_remaining = (this_ptr->position).x - pCVar1->x;
        local_64.gravity_acceleration = (this_ptr->position).y - (this_ptr->previous_position).y;
        local_7c = local_64.lifetime_remaining * fStack_a4;
        local_64.collision_flag = (int)((this_ptr->position).z - (this_ptr->previous_position).z);
        local_78.x = (int)(local_64.gravity_acceleration * fStack_a4);
        local_78.y = (int)((float)local_64.collision_flag * fStack_a4);
        local_88 = local_7c * 0.8f;
        local_84 = (float)local_78.x * 0.8f;
        local_80 = (float)local_78.y * 0.8f;
        local_64.position.x = pCVar1->x + local_88;
        local_64.position.y = (this_ptr->previous_position).y + local_84;
        local_64.position.z = (this_ptr->previous_position).z + local_80;
        if (this_ptr != &local_64) {
          (this_ptr->position).x = local_64.position.x;
          (this_ptr->position).y = local_64.position.y;
          (this_ptr->position).z = local_64.position.z;
        }
        iVar4 = (*this_ptr->vtable->onCollision)(this_ptr,(CVector3f *)(local_2c + 4));
        if (iVar4 == 0) {
          pCVar1 = &this_ptr->velocity;
          fVar2 = (fStack_24 * (this_ptr->velocity).z +
                  (float)local_2c._0_4_ * pCVar1->x + (float)local_2c._4_4_ * (this_ptr->velocity).y
                  ) * 2f;
          if (pCVar1 != (CVector3f *)&local_64.position.z) {
            pCVar1->x = (float)local_2c._0_4_ * fVar2 - pCVar1->x;
            (this_ptr->velocity).y = (float)local_2c._4_4_ * fVar2 - (this_ptr->velocity).y;
            (this_ptr->velocity).z = fStack_24 * fVar2 - (this_ptr->velocity).z;
          }
          pCVar1 = &this_ptr->velocity;
          fVar2 = (this_ptr->velocity).y * -0.7f;
          fVar3 = -0.7f * (this_ptr->velocity).z;
          if (pCVar1 != (CVector3f *)&local_64.collision_flag) {
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
