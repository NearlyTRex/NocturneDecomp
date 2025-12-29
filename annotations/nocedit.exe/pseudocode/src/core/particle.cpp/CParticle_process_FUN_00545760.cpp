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
  int iVar3;
  float fVar4;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float unaff_EDI;
  byte bVar5;
  float afStackY_1058 [999];
  CDemonRaytrace *this_ptr_00;
  CVector3i *in_stack_ffffff50;
  CVector3i *voxel_coords;
  CVector3i CStack_70;
  CParticle CStack_5c;
  byte auStack_24 [8];
  float local_1c;
  
  bVar5 = 0;
  if (0.0 < this_ptr->lifetime_remaining) {
    if ((CParticle *)&this_ptr->previous_position != this_ptr) {
      (this_ptr->previous_position).x = (this_ptr->position).x;
      (this_ptr->previous_position).y = (this_ptr->position).y;
      (this_ptr->previous_position).z = (this_ptr->position).z;
    }
    this_ptr->collision_result = this_ptr->collision_flag;
    auStack_24._4_4_ = g_CGamePtr->delta_time_float;
    (this_ptr->velocity).y =
         this_ptr->gravity_acceleration * (float)auStack_24._4_4_ + (this_ptr->velocity).y;
    fVar4 = (this_ptr->velocity).y;
    fVar2 = (this_ptr->velocity).z;
    (this_ptr->position).x =
         (this_ptr->position).x + (this_ptr->velocity).x * (float)auStack_24._4_4_;
    (this_ptr->position).y = (this_ptr->position).y + fVar4 * (float)auStack_24._4_4_;
    (this_ptr->position).z = (this_ptr->position).z + fVar2 * (float)auStack_24._4_4_;
    local_1c = (float)auStack_24._4_4_;
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
              (&g_CDemonRaytraceInstance,&this_ptr->position,in_stack_ffffff50);
    voxel_coords = &CStack_70;
    this_ptr_00 = &g_CDemonRaytraceInstance;
    CStack_70.x = (int)CStack_5c.previous_position.y;
    *(uint *)((int)&CStack_70 + (uint)bVar5 * -8 + 4) =
         *(uint *)(auStack_24 + (uint)bVar5 * -8 + -0xc);
    *(uint *)((int)&CStack_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)(auStack_24 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -8);
    iVar3 = core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970(this_ptr_00,voxel_coords);
    this_ptr->collision_flag = iVar3;
    if ((iVar3 != 0) || (this_ptr->collision_result != 0)) {
      pCVar1 = &this_ptr->previous_position;
      fVar4 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                        (&g_CDemonRaytraceInstance,pCVar1,&this_ptr->position,
                         (CVector3f *)auStack_24,(int *)0x0);
      if ((0.0 <= fVar4) && (fVar4 < 1.0)) {
        CStack_5c.lifetime_remaining = (this_ptr->position).x - pCVar1->x;
        CStack_5c.gravity_acceleration = (this_ptr->position).y - (this_ptr->previous_position).y;
        CStack_5c.collision_flag = (int)((this_ptr->position).z - (this_ptr->previous_position).z);
        CStack_70.x = (int)(CStack_5c.gravity_acceleration * fVar4);
        CStack_70.y = (int)((float)CStack_5c.collision_flag * fVar4);
        CStack_5c.position.x = pCVar1->x + CStack_5c.lifetime_remaining * fVar4 * 0.8f;
        CStack_5c.position.y = (this_ptr->previous_position).y + (float)CStack_70.x * 0.8f
        ;
        CStack_5c.position.z = (this_ptr->previous_position).z + (float)CStack_70.y * 0.8f
        ;
        if (this_ptr != &CStack_5c) {
          (this_ptr->position).x = CStack_5c.position.x;
          (this_ptr->position).y = CStack_5c.position.y;
          (this_ptr->position).z = CStack_5c.position.z;
        }
        iVar3 = (*this_ptr->vtable->onCollision)(this_ptr,(CVector3f *)(auStack_24 + 4));
        if (iVar3 == 0) {
          pCVar1 = &this_ptr->velocity;
          fVar2 = (unaff_EBX * (this_ptr->velocity).z +
                  unaff_EDI * pCVar1->x + fVar4 * (this_ptr->velocity).y) * 2f;
          if (pCVar1 != (CVector3f *)&CStack_5c.collision_flag) {
            pCVar1->x = unaff_EDI * fVar2 - pCVar1->x;
            (this_ptr->velocity).y = fVar4 * fVar2 - (this_ptr->velocity).y;
            (this_ptr->velocity).z = unaff_EBX * fVar2 - (this_ptr->velocity).z;
          }
          pCVar1 = &this_ptr->velocity;
          fVar4 = (this_ptr->velocity).y * -0.7f;
          fVar2 = -0.7f * (this_ptr->velocity).z;
          if (pCVar1 != (CVector3f *)auStack_24) {
            pCVar1->x = pCVar1->x * -0.7f;
            (this_ptr->velocity).y = fVar4;
            (this_ptr->velocity).z = fVar2;
          }
        }
        else {
          this_ptr->lifetime_remaining = 0.0;
        }
      }
    }
    fVar4 = this_ptr->lifetime_remaining - (float)this_ptr;
    this_ptr->lifetime_remaining = fVar4;
    if (fVar4 < 0.0) {
      this_ptr->lifetime_remaining = 0.0;
      return;
    }
  }
  return;
}
