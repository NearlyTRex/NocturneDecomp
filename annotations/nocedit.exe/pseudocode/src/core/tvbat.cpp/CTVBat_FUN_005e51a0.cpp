// Name: core_tvbat.cpp_CTVBat_FUN_005e51a0
// Address: 005e51a0
// Address Range: [[005e51a0, 005e5253]]
// Convention: __cdecl
// Signature: void core_tvbat.cpp_CTVBat_FUN_005e51a0(CTVBat * this_ptr)

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_FUN_005e51a0(CTVBat *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  char *pcStack00000010;
  float *pfStack00000014;
  uint uStack00000018;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base_enemy);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  pcStack00000010 = this_ptr->field13_0xc07c;
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  pfStack00000014 = (float *)0x0;
  pcStack00000010 = (char *)&this_ptr->periodic_sound_timer_min;
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  uStack00000018 = 0;
  pfStack00000014 = &this_ptr->periodic_sound_timer_max;
  pcStack00000010 = "Sound period max";
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  return;
}
