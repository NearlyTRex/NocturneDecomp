// Name: core_fire.cpp_CGunFlame_process_FUN_004c4f60
// Address: 004c4f60
// MANUAL RECONSTRUCTION
// Address Range: [[004c4f60, 004c50a9]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_process_FUN_004c4f60(CGunFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_process_FUN_004c4f60(CGunFlame *this_ptr)

{
  float fVar1;
  float fVar6;
  int iVar6;
  int iVar7;
  float fVar3;
  float fVar2;
  float fVar5;
  float fVar4;
  CVector3f *position;
  CVector3f *pCVar1;
  
  fVar4 = g_CGamePtr->delta_time_float;
  fVar1 = this_ptr->lifetime - fVar4;
  this_ptr->lifetime = fVar1;
  if (0.0 < fVar1) {
    pCVar1 = &this_ptr->velocity;
    fVar2 = (this_ptr->velocity).y;
    fVar3 = (this_ptr->velocity).z;
    position = &this_ptr->position;
    position->x = position->x + pCVar1->x * fVar4;
    (this_ptr->position).y = (this_ptr->position).y + fVar2 * fVar4;
    fVar5 = (float)0.20000000000000001;
    (this_ptr->position).z = (this_ptr->position).z + fVar3 * fVar4;
    fVar1 = (this_ptr->velocity).y * 0.97f;
    fVar6 = (this_ptr->velocity).z * 0.97f;
    pCVar1->x = pCVar1->x * 0.97f;
    (this_ptr->velocity).y = fVar1;
    (this_ptr->velocity).z = fVar6;
    fVar1 = (float)0.5;
    (this_ptr->velocity).y = fVar4 * fVar5 + (this_ptr->velocity).y;
    iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(fVar4 * fVar1);
    if (iVar6 != 0) {
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                (g_CFireEffectPtr,position,0.5,(CVector3f *)0x0,0xffff);
    }
    if ((this_ptr->flame_type != 0) &&
       (iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(fVar4), iVar7 != 0)) {
      core_fire_cpp_CGunFlame_init_FUN_004c4c00(this_ptr);
    }
    this_ptr->anim_frame = fVar4 * 15.0f + this_ptr->anim_frame;
    if (20.0f <= this_ptr->anim_frame) {
      do {
        this_ptr->anim_frame = this_ptr->anim_frame - 20.0f;
      } while (20.0f <= this_ptr->anim_frame);
      return;
    }
  }
  else {
    this_ptr->lifetime = 0.0;
  }
  return;
}
