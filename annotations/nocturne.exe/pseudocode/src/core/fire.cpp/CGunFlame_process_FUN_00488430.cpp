// Name: core_fire.cpp_CGunFlame_process_FUN_00488430
// Address: 00488430
// Address Range: [[00488430, 00488579]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_process_FUN_00488430(CGunFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_process_FUN_00488430(CGunFlame *this_ptr)

{
  CVector3f *pCVar1;
  CVector3f *position;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  fVar4 = g_CGame_PTR_005b9354->delta_time_float;
  fVar2 = this_ptr->lifetime - fVar4;
  this_ptr->lifetime = fVar2;
  if (0.0 < fVar2) {
    pCVar1 = &this_ptr->velocity;
    fVar2 = (this_ptr->velocity).y;
    fVar3 = (this_ptr->velocity).z;
    position = &this_ptr->position;
    position->x = position->x + pCVar1->x * fVar4;
    (this_ptr->position).y = (this_ptr->position).y + fVar2 * fVar4;
    fVar5 = (float)0.20000000000000001;
    (this_ptr->position).z = (this_ptr->position).z + fVar3 * fVar4;
    fVar2 = (this_ptr->velocity).y * 5.261057535674868e-315._0_4_;
    fVar3 = (this_ptr->velocity).z * 5.261057535674868e-315._0_4_;
    pCVar1->x = pCVar1->x * 5.261057535674868e-315._0_4_;
    (this_ptr->velocity).y = fVar2;
    (this_ptr->velocity).z = fVar3;
    fVar2 = (float)0.5;
    (this_ptr->velocity).y = fVar4 * fVar5 + (this_ptr->velocity).y;
    iVar6 = core_actor_cpp_randomChance_FUN_0040dea0(fVar4 * fVar2);
    if (iVar6 != 0) {
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                (g_CFireEffect_PTR_005b80f0,position,0.5,(CVector3f *)0x0,0xffff);
    }
    if ((this_ptr->flame_type != 0) &&
       (iVar6 = core_actor_cpp_randomChance_FUN_0040dea0(fVar4), iVar6 != 0)) {
      core_fire_cpp_CGunFlame_init_FUN_004880d0(this_ptr);
    }
    this_ptr->anim_frame = fVar4 * 15.0f + this_ptr->anim_frame;
    fVar4 = 1.6049665430689486e-314._0_4_;
    if (0x419fffff < (int)this_ptr->anim_frame) {
      do {
        this_ptr->anim_frame = this_ptr->anim_frame + fVar4;
      } while (0x419fffff < (int)this_ptr->anim_frame);
      return;
    }
  }
  else {
    this_ptr->lifetime = 0.0;
  }
  return;
}
