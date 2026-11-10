// Name: core_fire.cpp_CGunFlame_process_FUN_0049a3a0
// Address: 0049a3a0
// Address Range: [[0049a3a0, 0049a4f9]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_process_FUN_0049a3a0(CGunFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGunFlame_process_FUN_0049a3a0(CGunFlame *this_ptr)

{
  byte *puVar1;
  byte *position;
  float fVar2;
  float probability_threshold;
  float fVar3;
  float fVar4;
  int iVar5;
  
  probability_threshold = g_CGamePtr->delta_time_float;
  fVar2 = *(float *)this_ptr;
  *(float *)this_ptr = fVar2 - probability_threshold;
  if (0.0 < fVar2 - probability_threshold) {
    puVar1 = &this_ptr->field_0x10;
    position = &this_ptr->field_0x4;
    fVar3 = (float)_DAT_005d56ba;
    *(float *)position = *(float *)position + *(float *)puVar1 * probability_threshold;
    *(float *)&this_ptr->field_0x8 =
         *(float *)&this_ptr->field_0x8 + *(float *)&this_ptr->field_0x14 * probability_threshold;
    *(float *)&this_ptr->field_0xc =
         *(float *)&this_ptr->field_0xc + *(float *)&this_ptr->field_0x18 * probability_threshold;
    fVar2 = *(float *)&this_ptr->field_0x14 * _DAT_005d56b2;
    fVar4 = *(float *)&this_ptr->field_0x18 * _DAT_005d56b2;
    *(float *)puVar1 = *(float *)puVar1 * _DAT_005d56b2;
    *(float *)&this_ptr->field_0x14 = fVar2;
    *(float *)&this_ptr->field_0x18 = fVar4;
    fVar2 = (float)_DAT_005d56c2;
    *(float *)&this_ptr->field_0x14 =
         probability_threshold * fVar3 + *(float *)&this_ptr->field_0x14;
    iVar5 = core_actor_cpp_randomChance_FUN_0040d060(probability_threshold * fVar2);
    if (iVar5 != 0) {
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                (0x01C3DEB4,(CVector3f *)position,0.5,(CVector3f *)0x0,0xffff);
    }
    if ((*(int *)&this_ptr->field_0x20 != 0) &&
       (iVar5 = core_actor_cpp_randomChance_FUN_0040d060(probability_threshold), iVar5 != 0)) {
      core_fire_cpp_CGunFlame_init_FUN_00499fe0(this_ptr);
    }
    *(float *)&this_ptr->field_0x1c =
         probability_threshold * _DAT_005f6504 + *(float *)&this_ptr->field_0x1c;
    fVar2 = _DAT_005d56ca;
    if (0x419fffff < *(int *)&this_ptr->field_0x1c) {
      do {
        *(float *)&this_ptr->field_0x1c = *(float *)&this_ptr->field_0x1c + fVar2;
      } while (0x419fffff < *(int *)&this_ptr->field_0x1c);
      return;
    }
  }
  else {
    *(uint *)this_ptr = 0;
  }
  return;
}
