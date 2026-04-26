// Name: core_particle.cpp_CParticle_process_FUN_00545760
// Address: 00545760
// MANUAL RECONSTRUCTION
// Address Range: [[00545760, 00545a7f] [0061084a, 00610869]]
// Convention: __cdecl
// Signature: void __cdecl core_particle_cpp_CParticle_process_FUN_00545760(CParticle *this_ptr)

#include "nocturne.h"

void __cdecl core_particle_cpp_CParticle_process_FUN_00545760(CParticle *this_ptr)

{
  CVector3f *pCVar1;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  CVector3i local_74;
  CVector3f local_2c;
  float local_20;
  float local_1c;
  float local_14;
  
  if (0.0 < this_ptr->lifetime_remaining) {
    if ((CParticle *)&this_ptr->previous_position != this_ptr) {
      (this_ptr->previous_position).x = (this_ptr->position).x;
      (this_ptr->previous_position).y = (this_ptr->position).y;
      (this_ptr->previous_position).z = (this_ptr->position).z;
    }
    this_ptr->was_in_solid = this_ptr->is_in_solid;
    fVar4 = g_CGamePtr->delta_time_float;
    (this_ptr->velocity).y = this_ptr->gravity_acceleration * fVar4 + (this_ptr->velocity).y;
    fVar7 = (this_ptr->velocity).y;
    fVar3 = (this_ptr->velocity).z;
    (this_ptr->position).x = (this_ptr->position).x + (this_ptr->velocity).x * fVar4;
    (this_ptr->position).y = (this_ptr->position).y + fVar7 * fVar4;
    (this_ptr->position).z = (this_ptr->position).z + fVar3 * fVar4;
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
              (&g_CDemonRaytraceInstance,&this_ptr->position,&local_74);
    this_ptr->is_in_solid =
        core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970
                  (&g_CDemonRaytraceInstance,&local_74);
    if (this_ptr->is_in_solid != 0 || this_ptr->was_in_solid != 0) {
      pCVar1 = &this_ptr->previous_position;
      fVar7 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                        (&g_CDemonRaytraceInstance,pCVar1,&this_ptr->position,
                         &local_2c,0);
      if ((0.0 <= fVar7) && (fVar7 < 1.0)) {
        fVar5 = (this_ptr->position).x - pCVar1->x;
        fVar6 = (this_ptr->position).y - (this_ptr->previous_position).y;
        fVar3 = (this_ptr->position).z - (this_ptr->previous_position).z;
        fVar4 = fVar5 * fVar7 * 0.8f;
        fVar6 = fVar6 * fVar7 * 0.8f;
        fVar3 = fVar3 * fVar7 * 0.8f;
        (this_ptr->position).x = pCVar1->x + fVar4;
        (this_ptr->position).y = (this_ptr->previous_position).y + fVar6;
        (this_ptr->position).z = (this_ptr->previous_position).z + fVar3;
        iVar8 = (*this_ptr->vtable->onCollision)(this_ptr,&local_2c);
        if (iVar8 == 0) {
          pCVar1 = &this_ptr->velocity;
          fVar7 = (local_2c.x * pCVar1->x + local_2c.y * (this_ptr->velocity).y +
                  local_2c.z * (this_ptr->velocity).z) * 2.0f;
          pCVar1->x = local_2c.x * fVar7 - pCVar1->x;
          (this_ptr->velocity).y = local_2c.y * fVar7 - (this_ptr->velocity).y;
          (this_ptr->velocity).z = local_2c.z * fVar7 - (this_ptr->velocity).z;
          pCVar1 = &this_ptr->velocity;
          fVar7 = (this_ptr->velocity).y * -0.7f;
          fVar3 = -0.7f * (this_ptr->velocity).z;
          pCVar1->x = pCVar1->x * -0.7f;
          (this_ptr->velocity).y = fVar7;
          (this_ptr->velocity).z = fVar3;
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
