// Name: core_tvbat.cpp_CTVBat_setup_FUN_005e4050
// Address: 005e4050
// Address Range: [[005e4050, 005e409e]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_CTVBat_setup_FUN_005e4050(CTVBat *this_ptr)

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_setup_FUN_005e4050(CTVBat *this_ptr)

{
  float fVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  (this_ptr->base).base.hit_points = 10.0;
  this_ptr->boss_actor = (CDemonActor *)0x0;
  this_ptr->periodic_sound_handle = 0;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                    (this_ptr->periodic_sound_timer_min,this_ptr->periodic_sound_timer_max);
  this_ptr->periodic_sound_timer = fVar1;
  return;
}
