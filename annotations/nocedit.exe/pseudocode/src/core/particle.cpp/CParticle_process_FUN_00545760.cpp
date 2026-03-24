// Name: core_particle.cpp_CParticle_process_FUN_00545760
// Address: 00545760
// Address Range: [[00545760, 00545a7f] [0061084a, 00610869]]
// Convention: __cdecl
// Signature: void __cdecl core_particle_cpp_CParticle_process_FUN_00545760(CParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: afStackY_105c */

void __cdecl core_particle_cpp_CParticle_process_FUN_00545760(CParticle *this_ptr)

{
  CVector3f *pCVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar4;
  float fVar8;
  int iVar9;
  char *extraout_EDX;
  byte bVar5;
  float afStackY_105c [998];
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
  CDemonRaytrace *this_ptr_00;
  CVector3i *voxel_coords;
  float fVar2;
  CVector3f *pCVar1;
  float fVar3;
  
  if (0.0 < this_ptr->lifetime_remaining) {
    if ((CParticle *)&this_ptr->previous_position != this_ptr) {
      (this_ptr->previous_position).x = (this_ptr->position).x;
      (this_ptr->previous_position).y = (this_ptr->position).y;
      (this_ptr->previous_position).z = (this_ptr->position).z;
    }
    this_ptr->was_in_solid = this_ptr->is_in_solid;
    fVar5 = g_CGamePtr->delta_time_float;
    (this_ptr->velocity).y = this_ptr->gravity_acceleration * fVar5 + (this_ptr->velocity).y;
    fVar2 = (this_ptr->velocity).y;
    fVar3 = (this_ptr->velocity).z;
    (this_ptr->position).x = (this_ptr->position).x + (this_ptr->velocity).x * fVar5;
    (this_ptr->position).y = (this_ptr->position).y + fVar2 * fVar5;
    (this_ptr->position).z = (this_ptr->position).z + fVar3 * fVar5;
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
              (&g_CDemonRaytraceInstance,&this_ptr->position,(CVector3i *)auStack_38);
    *(byte *)((int)afStack_34[1] + -0xb) = *(byte *)((int)afStack_34[1] + -0xb) ^ (byte)&local_74;
    pfVar3 = &this_ptr[0x134bb95].previous_position.z;
    *pfVar3 = (float)((int)*pfVar3 + 1);
    local_74.x = (int)&local_74.x + (int)auStack_38;
    *extraout_EDX = *extraout_EDX + (char)((uint)afStack_34[1] >> 8);
    pCVar1 = &this_ptr->previous_position;
    fVar8 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                      (&g_CDemonRaytraceInstance,pCVar1,&this_ptr->position,
                       (CVector3f *)(afStack_34 + 1),&g_CDemonRaytraceInstance.rendering_mode);
    if ((0.0 <= fVar8) && (fVar8 < 1.0)) {
      fStack_54 = (this_ptr->position).x - pCVar1->x;
      fStack_50 = (this_ptr->position).y - (this_ptr->previous_position).y;
      fStack_4c = (this_ptr->position).z - (this_ptr->previous_position).z;
      fVar6 = fStack_50 * fVar8 * 0.8f;
      fVar7 = fStack_4c * fVar8 * 0.8f;
      local_74.z = (int)(pCVar1->x + fStack_54 * fVar8 * 0.8f);
      fVar8 = (this_ptr->previous_position).y;
      fVar4 = (this_ptr->previous_position).z;
      if (this_ptr != (CParticle *)&local_74.z) {
        (this_ptr->position).x = (float)local_74.z;
        (this_ptr->position).y = fVar8 + fVar6;
        (this_ptr->position).z = fVar4 + fVar7;
      }
      iVar9 = (*this_ptr->vtable->onCollision)(this_ptr,(CVector3f *)(afStack_34 + 1));
      if (iVar9 == 0) {
        pCVar2 = &this_ptr->velocity;
        fVar8 = (local_2c.y * (this_ptr->velocity).z +
                afStack_34[1] * pCVar2->x + local_2c.x * (this_ptr->velocity).y) * 2.0f;
        if (pCVar2 != (CVector3f *)afStack_60) {
          pCVar2->x = afStack_34[1] * fVar8 - pCVar2->x;
          (this_ptr->velocity).y = local_2c.x * fVar8 - (this_ptr->velocity).y;
          (this_ptr->velocity).z = local_2c.y * fVar8 - (this_ptr->velocity).z;
        }
        pCVar2 = &this_ptr->velocity;
        fVar8 = (this_ptr->velocity).y * -0.7f;
        fVar4 = -0.7f * (this_ptr->velocity).z;
        if (pCVar2 != (CVector3f *)afStack_48) {
          pCVar2->x = pCVar2->x * -0.7f;
          (this_ptr->velocity).y = fVar8;
          (this_ptr->velocity).z = fVar4;
        }
      }
      else {
        this_ptr->lifetime_remaining = 0.0;
      }
    }
    fVar5 = this_ptr->lifetime_remaining - fVar5;
    this_ptr->lifetime_remaining = fVar5;
    if (fVar5 < 0.0) {
      this_ptr->lifetime_remaining = 0.0;
      return;
    }
  }
  return;
}
