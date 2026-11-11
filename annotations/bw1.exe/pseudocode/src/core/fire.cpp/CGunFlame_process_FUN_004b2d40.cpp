// Name: core_fire.cpp_CGunFlame_process_FUN_004b2d40
// Address: 004b2d40
// Address Range: [[004b2d40, 004b2e99]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_process_FUN_004b2d40(CGunFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGunFlame_process_FUN_004b2d40(CGunFlame *this_ptr)

{
  CVector3f *pCVar1;
  CVector3f *position;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  fVar4 = g_CGamePtr->delta_time_float;
  fVar2 = this_ptr->lifetime - fVar4;
  this_ptr->lifetime = fVar2;
  if (0.0 < fVar2) {
    pCVar1 = &this_ptr->velocity;
    fVar2 = (this_ptr->velocity).y;
    fVar3 = (this_ptr->velocity).z;
    position = &this_ptr->position;
    fVar5 = (float)_DAT_005df4fc;
    position->x = position->x + pCVar1->x * fVar4;
    (this_ptr->position).y = (this_ptr->position).y + fVar2 * fVar4;
    (this_ptr->position).z = (this_ptr->position).z + fVar3 * fVar4;
    fVar2 = (this_ptr->velocity).y * _DAT_005df4f4;
    fVar3 = (this_ptr->velocity).z * _DAT_005df4f4;
    pCVar1->x = pCVar1->x * _DAT_005df4f4;
    (this_ptr->velocity).y = fVar2;
    (this_ptr->velocity).z = fVar3;
    fVar2 = (float)_DAT_005df504;
    (this_ptr->velocity).y = fVar4 * fVar5 + (this_ptr->velocity).y;
    iVar6 = core_actor_cpp_randomChance_FUN_0040cd00(fVar4 * fVar2);
    if (iVar6 != 0) {
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                (0x01C57074,position,0.5,(CVector3f *)0x0,0xffff);
    }
    if ((this_ptr->flame_type != 0) &&
       (iVar6 = core_actor_cpp_randomChance_FUN_0040cd00(fVar4), iVar6 != 0)) {
      core_fire_cpp_CGunFlame_init_FUN_004b2980(this_ptr);
    }
    this_ptr->anim_frame = fVar4 * _DAT_005fffb4 + this_ptr->anim_frame;
    fVar4 = _DAT_005df50c;
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
