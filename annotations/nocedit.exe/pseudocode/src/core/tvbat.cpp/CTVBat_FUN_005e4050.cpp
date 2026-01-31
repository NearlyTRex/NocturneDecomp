// Name: core_tvbat.cpp_CTVBat_FUN_005e4050
// Address: 005e4050
// Address Range: [[005e4050, 005e409e]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_CTVBat_FUN_005e4050(CTVBat *this_ptr)

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_FUN_005e4050(CTVBat *this_ptr)

{
  float min_value;
  float fVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(this_ptr->unk1 + 0xc));
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  (this_ptr->base).base.hit_points = 0x41200000;
  this_ptr->unk6[8] = '\0';
  this_ptr->unk6[9] = '\0';
  this_ptr->unk6[10] = '\0';
  this_ptr->unk6[0xb] = '\0';
  fVar1 = this_ptr->periodic_sound_timer_max;
  min_value = this_ptr->periodic_sound_timer_min;
  this_ptr->unk6[0] = '\0';
  this_ptr->unk6[1] = '\0';
  this_ptr->unk6[2] = '\0';
  this_ptr->unk6[3] = '\0';
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(min_value,fVar1);
  *(float *)(this_ptr->unk6 + 4) = fVar1;
  return;
}
