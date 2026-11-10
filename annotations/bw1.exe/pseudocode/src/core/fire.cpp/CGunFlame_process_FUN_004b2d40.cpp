// Name: core_fire.cpp_CGunFlame_process_FUN_004b2d40
// Address: 004b2d40
// Address Range: [[004b2d40, 004b2e99]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_process_FUN_004b2d40(CGunFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGunFlame_process_FUN_004b2d40(CGunFlame *this_ptr)

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
    fVar3 = (float)_DAT_005df4fc;
    *(float *)position = *(float *)position + *(float *)puVar1 * probability_threshold;
    *(float *)&this_ptr->field_0x8 =
         *(float *)&this_ptr->field_0x8 + *(float *)&this_ptr->field_0x14 * probability_threshold;
    *(float *)&this_ptr->field_0xc =
         *(float *)&this_ptr->field_0xc + *(float *)&this_ptr->field_0x18 * probability_threshold;
    fVar2 = *(float *)&this_ptr->field_0x14 * _DAT_005df4f4;
    fVar4 = *(float *)&this_ptr->field_0x18 * _DAT_005df4f4;
    *(float *)puVar1 = *(float *)puVar1 * _DAT_005df4f4;
    *(float *)&this_ptr->field_0x14 = fVar2;
    *(float *)&this_ptr->field_0x18 = fVar4;
    fVar2 = (float)_DAT_005df504;
    *(float *)&this_ptr->field_0x14 =
         probability_threshold * fVar3 + *(float *)&this_ptr->field_0x14;
    iVar5 = core_actor_cpp_randomChance_FUN_0040cd00(probability_threshold * fVar2);
    if (iVar5 != 0) {
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                (0x01C57074,(CVector3f *)position,0.5,(CVector3f *)0x0,0xffff);
    }
    if ((*(int *)&this_ptr->field_0x20 != 0) &&
       (iVar5 = core_actor_cpp_randomChance_FUN_0040cd00(probability_threshold), iVar5 != 0)) {
      core_fire_cpp_CGunFlame_init_FUN_004b2980(this_ptr);
    }
    *(float *)&this_ptr->field_0x1c =
         probability_threshold * _DAT_005fffb4 + *(float *)&this_ptr->field_0x1c;
    fVar2 = _DAT_005df50c;
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
