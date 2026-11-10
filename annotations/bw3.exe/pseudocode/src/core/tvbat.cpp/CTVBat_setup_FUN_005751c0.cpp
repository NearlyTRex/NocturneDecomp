// Name: core_tvbat.cpp_CTVBat_setup_FUN_005751c0
// Address: 005751c0
// Address Range: [[005751c0, 00575224]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_CTVBat_setup_FUN_005751c0(CTVBat *this_ptr)

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_setup_FUN_005751c0(CTVBat *this_ptr)

{
  float fVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->model);
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  (this_ptr->base).base.hit_points = 10.0;
  this_ptr->boss_actor = (CDemonActor *)0x0;
  this_ptr->periodic_sound_handle = 0;
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                    (this_ptr->periodic_sound_timer_min,this_ptr->periodic_sound_timer_max);
  this_ptr->periodic_sound_timer = fVar1;
  return;
}
