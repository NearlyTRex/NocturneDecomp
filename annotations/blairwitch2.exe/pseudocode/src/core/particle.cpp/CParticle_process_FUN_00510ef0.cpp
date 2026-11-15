// Name: core_particle.cpp_CParticle_process_FUN_00510ef0
// Address: 00510ef0
// Address Range: [[00510ef0, 00511363]]
// Convention: __cdecl
// Signature: void __cdecl core_particle_cpp_CParticle_process_FUN_00510ef0(CParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_particle_cpp_CParticle_process_FUN_00510ef0(CParticle *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  float fVar3;
  byte bVar4;
  float afStackY_110c [1010];
  CDemonRaytrace *this_ptr_00;
  CVector3i *voxel_coords;
  CVector3i local_124;
  float fStack_118;
  float afStack_114 [4];
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0 [2];
  CVector3i local_e8;
  float fStack_dc;
  float afStack_d8 [4];
  float fStack_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  CParticle_vtable *local_b8;
  float local_b4 [2];
  CVector3f local_ac;
  float local_a0;
  float local_9c [4];
  float local_8c;
  CParticle local_88;
  float local_48 [4];
  float fStack_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  CVector3f *local_20;
  float local_1c;
  float local_18;
  
  bVar4 = 0;
  if (0.0 < this_ptr->lifetime_remaining) {
    if ((CParticle *)&this_ptr->previous_position != this_ptr) {
      (this_ptr->previous_position).x = (this_ptr->position).x;
      (this_ptr->previous_position).y = (this_ptr->position).y;
      (this_ptr->previous_position).z = (this_ptr->position).z;
    }
    this_ptr->was_in_solid = this_ptr->is_in_solid;
    local_28 = g_CGamePtr->delta_time_float;
    local_100 = (this_ptr->acceleration).x * local_28;
    local_fc = (this_ptr->acceleration).y * local_28;
    local_f8 = (this_ptr->acceleration).z * local_28;
    afStack_114[2] = (this_ptr->velocity).x + local_100;
    (this_ptr->velocity).x = afStack_114[2];
    afStack_114[2] = afStack_114[2] * local_28;
    afStack_114[3] = (this_ptr->velocity).y + local_fc;
    local_104 = (this_ptr->velocity).z + local_f8;
    (this_ptr->velocity).y = afStack_114[3];
    afStack_114[3] = afStack_114[3] * local_28;
    (this_ptr->velocity).z = local_104;
    local_104 = local_104 * local_28;
    (this_ptr->position).x = (this_ptr->position).x + afStack_114[2];
    (this_ptr->position).y = (this_ptr->position).y + afStack_114[3];
    (this_ptr->position).z = (this_ptr->position).z + local_104;
    local_9c[2] = afStack_114[2];
    local_9c[3] = afStack_114[3];
    local_8c = local_104;
    local_34 = local_100;
    local_30 = local_fc;
    local_2c = local_f8;
    local_1c = local_28;
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00476a50
              (&g_CDemonRaytraceInstance,&this_ptr->position,&local_e8);
    voxel_coords = &local_124;
    this_ptr_00 = &g_CDemonRaytraceInstance;
    local_124.x = local_e8.x;
    *(uint *)((int)&local_124 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_e8 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&local_124 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&local_e8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    iVar2 = core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00476b50(this_ptr_00,voxel_coords);
    this_ptr->is_in_solid = iVar2;
    if ((iVar2 != 0) || (this_ptr->was_in_solid != 0)) {
      local_20 = &this_ptr->previous_position;
      fVar3 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00472c60
                        (&g_CDemonRaytraceInstance,local_20,&this_ptr->position,&local_ac,(int *)0x0
                        );
      pCVar1 = local_20;
      local_18 = fVar3;
      if ((0.0 <= fVar3) && (fVar3 < 1.0)) {
        local_b8 = (CParticle_vtable *)((this_ptr->position).x - local_20->x);
        local_b4[0] = (this_ptr->position).y - local_20->y;
        local_b4[1] = (this_ptr->position).z - local_20->z;
        local_88.vtable = local_b8;
        local_48[(uint)bVar4 * -2] = local_b4[(uint)bVar4 * -2];
        local_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             local_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        local_a0 = (float)local_88.vtable * fVar3;
        local_9c[0] = local_48[0] * fVar3;
        local_9c[1] = local_48[1] * fVar3;
        local_c4 = (float)local_88.vtable * fVar3;
        afStack_d8[(uint)bVar4 * -2 + 6] = local_9c[(uint)bVar4 * -2];
        afStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
             local_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        local_88.velocity.x = local_c4 * _DAT_005e159a;
        local_88.velocity.y = local_c0 * _DAT_005e159a;
        local_88.velocity.z = local_bc * _DAT_005e159a;
        local_f4 = local_c4 * _DAT_005e159a;
        local_f0[(uint)bVar4 * -2] = local_48[(uint)bVar4 * -2 + -0xc];
        local_f0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             local_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -0xb];
        local_88.previous_position.y = pCVar1->x + local_f4;
        local_88.previous_position.z = pCVar1->y + local_f0[0];
        local_88.was_in_solid = (int)(pCVar1->z + local_f0[1]);
        local_88.position.x = local_88.previous_position.y;
        local_48[(uint)bVar4 * -2 + -0xf] = local_48[(uint)bVar4 * -2 + -3];
        local_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -0xe] =
             local_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -2];
        if (this_ptr != &local_88) {
          (this_ptr->position).x = local_88.position.x;
          (this_ptr->position).y = local_88.position.y;
          (this_ptr->position).z = local_88.position.z;
        }
        iVar2 = (*this_ptr->vtable->onCollision)(this_ptr,&local_ac);
        if (iVar2 == 0) {
          pCVar1 = &this_ptr->velocity;
          fStack_24 = (local_ac.z * (this_ptr->velocity).z +
                      local_ac.x * pCVar1->x + local_ac.y * (this_ptr->velocity).y) * _DAT_005e159e;
          local_88.lifetime_remaining = local_ac.x * fStack_24;
          local_88.is_in_solid = (int)(local_ac.y * fStack_24);
          local_88.previous_position.x = local_ac.z * fStack_24;
          fStack_dc = local_ac.x * fStack_24;
          afStack_d8[(uint)bVar4 * -2] = local_48[(uint)bVar4 * -2 + -6];
          afStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
               local_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -5];
          local_48[2] = fStack_dc - pCVar1->x;
          local_48[3] = afStack_d8[0] - (this_ptr->velocity).y;
          fStack_38 = afStack_d8[1] - (this_ptr->velocity).z;
          local_88.acceleration.x = local_48[2];
          local_48[(uint)bVar4 * -2 + -9] = local_48[(uint)bVar4 * -2 + 3];
          local_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8] =
               local_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
          if (pCVar1 != &local_88.acceleration) {
            pCVar1->x = local_88.acceleration.x;
            (this_ptr->velocity).y = local_88.acceleration.y;
            (this_ptr->velocity).z = local_88.acceleration.z;
          }
          pCVar1 = &this_ptr->velocity;
          fStack_118 = pCVar1->x * _DAT_005e15a2;
          afStack_114[0] = (this_ptr->velocity).y * _DAT_005e15a2;
          afStack_114[1] = (this_ptr->velocity).z * _DAT_005e15a2;
          afStack_d8[2] = fStack_118;
          afStack_d8[(uint)bVar4 * -2 + 3] = afStack_114[(uint)bVar4 * -2];
          afStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
               afStack_114[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          if (pCVar1 != (CVector3f *)(afStack_d8 + 2)) {
            pCVar1->x = afStack_d8[2];
            (this_ptr->velocity).y = afStack_d8[3];
            (this_ptr->velocity).z = fStack_c8;
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
