// Name: core_fire.cpp_CGunFlame_process_FUN_0049e390
// Address: 0049e390
// Address Range: [[0049e390, 0049e4f3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_process_FUN_0049e390(CGunFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_process_FUN_0049e390(CGunFlame *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  fVar4 = g_CGamePtr->delta_time_float;
  fVar2 = this_ptr->lifetime - fVar4;
  this_ptr->lifetime = fVar2;
  if (fVar2 <= 0.0) {
    this_ptr->lifetime = 0.0;
  }
  else {
    pCVar1 = &this_ptr->velocity;
    fVar2 = (this_ptr->velocity).y;
    fVar3 = (this_ptr->velocity).z;
    fVar5 = (float)0.20000000000000001;
    (this_ptr->position).x = (this_ptr->position).x + pCVar1->x * fVar4;
    (this_ptr->position).y = (this_ptr->position).y + fVar2 * fVar4;
    (this_ptr->position).z = (this_ptr->position).z + fVar3 * fVar4;
    fVar2 = (this_ptr->velocity).y * 0.97f;
    fVar3 = (this_ptr->velocity).z * 0.97f;
    pCVar1->x = pCVar1->x * 0.97f;
    (this_ptr->velocity).y = fVar2;
    (this_ptr->velocity).z = fVar3;
    iVar6 = this_ptr->flame_style;
    (this_ptr->velocity).y = fVar4 * fVar5 + (this_ptr->velocity).y;
    if (iVar6 == 0) {
      iVar6 = core_actor_cpp_randomChance_FUN_0040cf40(fVar4 * (float)0.5);
      if (iVar6 != 0) {
        core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560
                  (g_CFireEffect_PTR_005fc5a0,&this_ptr->position,0.5,(CVector3f *)0x0,0x4000);
      }
      if (this_ptr->flame_type != 0) {
        iVar6 = core_actor_cpp_randomChance_FUN_0040cf40(fVar4);
        if (iVar6 != 0) {
          core_fire_cpp_CGunFlame_burnNearby_FUN_0049df60(this_ptr);
        }
      }
    }
    fVar4 = fVar4 * 15.0f + this_ptr->anim_frame;
    while( true ) {
      this_ptr->anim_frame = fVar4;
      if (this_ptr->anim_frame < (float)this_ptr->frame_count) break;
      fVar4 = this_ptr->anim_frame - (float)this_ptr->frame_count;
    }
  }
  return;
}
