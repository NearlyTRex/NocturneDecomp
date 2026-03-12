// Name: core_particle.cpp_CParticle_process_FUN_00545760
// Address: 00545760
// Address Range: [[00545760, 00545a7f]]
// Convention: __cdecl
// Signature: void __cdecl core_particle_cpp_CParticle_process_FUN_00545760(CParticle *this_ptr)

#include "nocturne.h"

void __cdecl core_particle_cpp_CParticle_process_FUN_00545760(CParticle *this_ptr)

{
  CVector3f *pCVar2;
  float fVar4;
  float fVar5;
  int iVar4;
  float fVar6;
  int iVar7;
  byte bVar5;
  float afStackY_105c [998];
  CVector3i local_74;
  byte local_68 [52];
  float afStack_34 [2];
  CVector3f local_2c;
  float local_20;
  float local_1c;
  float local_14;
  CDemonRaytrace *this_ptr_00;
  CVector3i *voxel_coords;
  float fVar2;
  CVector3f *pCVar1;
  float fVar3;
  
  bVar5 = 0;
  if (0.0 < this_ptr->lifetime_remaining) {
    if ((CParticle *)&this_ptr->previous_position != this_ptr) {
      (this_ptr->previous_position).x = (this_ptr->position).x;
      (this_ptr->previous_position).y = (this_ptr->position).y;
      (this_ptr->previous_position).z = (this_ptr->position).z;
    }
    this_ptr->was_in_solid = this_ptr->is_in_solid;
    fVar4 = g_CGamePtr->delta_time_float;
    (this_ptr->velocity).y = this_ptr->gravity_acceleration * fVar4 + (this_ptr->velocity).y;
    fVar2 = (this_ptr->velocity).y;
    fVar3 = (this_ptr->velocity).z;
    (this_ptr->position).x = (this_ptr->position).x + (this_ptr->velocity).x * fVar4;
    (this_ptr->position).y = (this_ptr->position).y + fVar2 * fVar4;
    (this_ptr->position).z = (this_ptr->position).z + fVar3 * fVar4;
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
              (&g_CDemonRaytraceInstance,&this_ptr->position,(CVector3i *)(local_68 + 0x30));
    voxel_coords = &local_74;
    this_ptr_00 = &g_CDemonRaytraceInstance;
    local_74.x = local_68._48_4_;
    *(float *)((int)&local_74 + (uint)bVar5 * -8 + 4) = afStack_34[(uint)bVar5 * -2];
    *(float *)((int)&local_74 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         afStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    iVar4 = core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970(this_ptr_00,voxel_coords);
    this_ptr->is_in_solid = iVar4;
    if ((iVar4 != 0) || (this_ptr->was_in_solid != 0)) {
      pCVar1 = &this_ptr->previous_position;
      fVar6 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                        (&g_CDemonRaytraceInstance,pCVar1,&this_ptr->position,&local_2c,(int *)0x0);
      if ((0.0 <= fVar6) && (fVar6 < 1.0)) {
        local_68._24_4_ = (this_ptr->position).x - pCVar1->x;
        local_68._28_4_ = (this_ptr->position).y - (this_ptr->previous_position).y;
        local_68._32_4_ = (this_ptr->position).z - (this_ptr->previous_position).z;
        local_68._0_4_ = pCVar1->x + (float)local_68._24_4_ * fVar6 * 0.8f;
        local_68._4_4_ =
             (this_ptr->previous_position).y + (float)local_68._28_4_ * fVar6 * 0.8f;
        local_68._8_4_ =
             (this_ptr->previous_position).z + (float)local_68._32_4_ * fVar6 * 0.8f;
        if (this_ptr != (CParticle *)local_68) {
          (this_ptr->position).x = (float)local_68._0_4_;
          (this_ptr->position).y = (float)local_68._4_4_;
          (this_ptr->position).z = (float)local_68._8_4_;
        }
        iVar7 = (*this_ptr->vtable->onCollision)(this_ptr,&local_2c);
        if (iVar7 == 0) {
          pCVar2 = &this_ptr->velocity;
          fVar6 = (local_2c.z * (this_ptr->velocity).z +
                  local_2c.x * pCVar2->x + local_2c.y * (this_ptr->velocity).y) * 2.0f;
          if (pCVar2 != (CVector3f *)(local_68 + 0xc)) {
            pCVar2->x = local_2c.x * fVar6 - pCVar2->x;
            (this_ptr->velocity).y = local_2c.y * fVar6 - (this_ptr->velocity).y;
            (this_ptr->velocity).z = local_2c.z * fVar6 - (this_ptr->velocity).z;
          }
          pCVar2 = &this_ptr->velocity;
          fVar6 = (this_ptr->velocity).y * -0.7f;
          fVar5 = -0.7f * (this_ptr->velocity).z;
          if (pCVar2 != (CVector3f *)(local_68 + 0x24)) {
            pCVar2->x = pCVar2->x * -0.7f;
            (this_ptr->velocity).y = fVar6;
            (this_ptr->velocity).z = fVar5;
          }
        }
        else {
          this_ptr->lifetime_remaining = 0.0;
        }
      }
    }
    fVar4 = this_ptr->lifetime_remaining - fVar4;
    this_ptr->lifetime_remaining = fVar4;
    if (fVar4 < 0.0) {
      this_ptr->lifetime_remaining = 0.0;
      return;
    }
  }
  return;
}
