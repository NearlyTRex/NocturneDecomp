// Name: core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0
// Address: 005e3ef0
// Address Range: [[005e3ef0, 005e3f41]]
// Convention: __cdecl
// Signature: CTVBat * __cdecl core_tvbat_cpp_CTVBat_ctor_FUN_005e3ef0(CTVBat *this_ptr)

#include "nocturne.h"

CTVBat * __cdecl core_tvbat_cpp_CTVBat_ctor_FUN_005e3ef0(CTVBat *this_ptr)

{
  CTVBat *pCVar1;
  CTVBat_ptr_48832 this_ptr_00;
  float fVar1;
  
  pCVar1 = (CTVBat *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar1->model);
  ADJ(this_ptr_00)->base.base.base.vtable._ub = &g_CTVBatVTable;
  ADJ(this_ptr_00)->anim_frame = 0.0;
  ADJ(this_ptr_00)->anim_rate = 0.0;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  ADJ(this_ptr_00)->speed = fVar1;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr_00,"bat.kfm");
  ADJ(this_ptr_00)->max_height = 5.0;
  ADJ(this_ptr_00)->max_distance = 15.0;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  ADJ(this_ptr_00)->move_speed = fVar1 * 10.0f;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  ADJ(this_ptr_00)->rot_speed = fVar1 * 2.0f;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  ADJ(this_ptr_00)->follow_orders = 0;
  ADJ(this_ptr_00)->attack_timer = 0.0;
  ADJ(this_ptr_00)->state = 0;
  ADJ(this_ptr_00)->base.base.show_in_editor = 0;
  ADJ(this_ptr_00)->boss_actor = (CDemonActor *)0x0;
  ADJ(this_ptr_00)->periodic_sound[0] = '\0';
  ADJ(this_ptr_00)->periodic_sound_timer_min = 15.0;
  ADJ(this_ptr_00)->periodic_sound_timer_max = 30.0;
  ADJ(this_ptr_00)->periodic_sound_timer = 0.0;
  ADJ(this_ptr_00)->height_offset = fVar1;
  return ADJ(this_ptr_00);
}
