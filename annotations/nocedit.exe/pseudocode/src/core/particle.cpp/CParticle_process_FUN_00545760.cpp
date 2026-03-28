// Name: core_particle.cpp_CParticle_process_FUN_00545760
// Address: 00545760
// Address Range: [[00545760, 00545a7f] [0061084a, 00610869]]
// Convention: __cdecl
// Signature: void __cdecl core_particle_cpp_CParticle_process_FUN_00545760(CParticle *this_ptr)

#include "nocturne.h"

void __cdecl core_particle_cpp_CParticle_process_FUN_00545760(CParticle *this_ptr)

{
  CVector3f *pCVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  char *extraout_EDX;
  CVector3i local_74;
  float afStack_60 [3];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float afStack_48 [4];
  byte auStack_38 [4];
  float afStack_34 [2];
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
              (&g_CDemonRaytraceInstance,&this_ptr->position,(CVector3i *)auStack_38);
    *(byte *)((int)afStack_34[1] + -0xb) = *(byte *)((int)afStack_34[1] + -0xb) ^ (byte)&local_74;
    pfVar2 = &this_ptr[0x134bb95].previous_position.z;
    *pfVar2 = (float)((int)*pfVar2 + 1);
    local_74.x = (int)&local_74.x + (int)auStack_38;
    *extraout_EDX = *extraout_EDX + (char)((uint)afStack_34[1] >> 8);
    pCVar1 = &this_ptr->previous_position;
    fVar7 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                      (&g_CDemonRaytraceInstance,pCVar1,&this_ptr->position,
                       (CVector3f *)(afStack_34 + 1),&g_CDemonRaytraceInstance.rendering_mode);
    if ((0.0 <= fVar7) && (fVar7 < 1.0)) {
      fStack_54 = (this_ptr->position).x - pCVar1->x;
      fStack_50 = (this_ptr->position).y - (this_ptr->previous_position).y;
      fStack_4c = (this_ptr->position).z - (this_ptr->previous_position).z;
      fVar5 = fStack_50 * fVar7 * 0.8f;
      fVar6 = fStack_4c * fVar7 * 0.8f;
      local_74.z = (int)(pCVar1->x + fStack_54 * fVar7 * 0.8f);
      fVar7 = (this_ptr->previous_position).y;
      fVar3 = (this_ptr->previous_position).z;
      if (this_ptr != (CParticle *)&local_74.z) {
        (this_ptr->position).x = (float)local_74.z;
        (this_ptr->position).y = fVar7 + fVar5;
        (this_ptr->position).z = fVar3 + fVar6;
      }
      iVar8 = (*this_ptr->vtable->onCollision)(this_ptr,(CVector3f *)(afStack_34 + 1));
      if (iVar8 == 0) {
        pCVar1 = &this_ptr->velocity;
        fVar7 = (local_2c.y * (this_ptr->velocity).z +
                afStack_34[1] * pCVar1->x + local_2c.x * (this_ptr->velocity).y) * 2.0f;
        if (pCVar1 != (CVector3f *)afStack_60) {
          pCVar1->x = afStack_34[1] * fVar7 - pCVar1->x;
          (this_ptr->velocity).y = local_2c.x * fVar7 - (this_ptr->velocity).y;
          (this_ptr->velocity).z = local_2c.y * fVar7 - (this_ptr->velocity).z;
        }
        pCVar1 = &this_ptr->velocity;
        fVar7 = (this_ptr->velocity).y * -0.7f;
        fVar3 = -0.7f * (this_ptr->velocity).z;
        if (pCVar1 != (CVector3f *)afStack_48) {
          pCVar1->x = pCVar1->x * -0.7f;
          (this_ptr->velocity).y = fVar7;
          (this_ptr->velocity).z = fVar3;
        }
      }
      else {
        this_ptr->lifetime_remaining = 0.0;
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
