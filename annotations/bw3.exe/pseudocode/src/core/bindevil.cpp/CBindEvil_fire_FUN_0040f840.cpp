// Name: core_bindevil.cpp_CBindEvil_fire_FUN_0040f840
// Address: 0040f840
// Address Range: [[0040f840, 0040f8c7]]
// Convention: __cdecl
// Signature: int __cdecl core_bindevil_cpp_CBindEvil_fire_FUN_0040f840(CBindEvil *this_ptr)

#include "nocturne.h"

int __cdecl core_bindevil_cpp_CBindEvil_fire_FUN_0040f840(CBindEvil *this_ptr)

{
  CLocation *position;
  int iVar1;
  
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(&this_ptr->base);
  position = &(this_ptr->base).base.location;
  if (iVar1 != 0) {
    core_fire_cpp_CFireEffect_createBindEvilToss_FUN_004a39a0
              (0x01C73654,&position->position,&(this_ptr->base).base.orient,
               &this_ptr->toss_velocity);
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"wp_bindevil_throw.wav",
               &position->position);
    (this_ptr->toss_velocity).z = 0.0;
    (this_ptr->toss_velocity).y = (this_ptr->toss_velocity).z;
    (this_ptr->toss_velocity).x = (this_ptr->toss_velocity).y;
    (this_ptr->base).fire_cooldown_timer = 3.0;
    return 1;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,(CDemonActor *)this_ptr,"wp_nomana.wav",&position->position);
  return 0;
}
