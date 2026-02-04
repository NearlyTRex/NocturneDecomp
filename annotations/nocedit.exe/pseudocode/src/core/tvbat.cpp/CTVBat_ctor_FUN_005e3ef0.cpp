// Name: core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0
// Address: 005e3ef0
// Address Range: [[005e3ef0, 005e3f41]]
// Convention: __cdecl
// Signature: CTVBat * __cdecl core_tvbat_cpp_CTVBat_ctor_FUN_005e3ef0(CTVBat *this_ptr)

#include "nocturne.h"

CTVBat * __cdecl core_tvbat_cpp_CTVBat_ctor_FUN_005e3ef0(CTVBat *this_ptr)

{
  CEnemy *pCVar2;
  CTVBat *pCVar1;
  CTVBat_ptr_48832 this_ptr_00;
  float fVar3;
  
  pCVar1 = (CTVBat *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar1->model);
  ADJ(this_ptr_00).base.base.base.vtable._ub = &g_CTVBatVTable;
  *(char *)&this_ptr_00[-0xffffffff00000001].model_ptr = '\0';
  *(char *)((int)&this_ptr_00[-0xffffffff00000001].model_ptr + 1) = '\0';
  *(char *)((int)&this_ptr_00[-0xffffffff00000001].model_ptr + 2) = '\0';
  *(char *)((int)&this_ptr_00[-0xffffffff00000001].model_ptr + 3) = '\0';
  ADJ(this_ptr_00)->unk2 = 0;
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  ADJ(this_ptr_00)->speed = fVar3;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr_00,"bat.kfm");
  ADJ(this_ptr_00)->max_height = 5.0;
  ADJ(this_ptr_00)->max_distance = 15.0;
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  ADJ(this_ptr_00)->move_speed = fVar3 * 10.0f;
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  ADJ(this_ptr_00)->rot_speed = fVar3 * 2.0f;
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  ADJ(this_ptr_00)->follow_orders = 0;
  ADJ(this_ptr_00)->unk4 = 0.0;
  ADJ(this_ptr_00)->state = 0;
  pCVar2 = &ADJ(this_ptr_00).base;
  (pCVar2->base).unk3[4] = '\0';
  (pCVar2->base).unk3[5] = '\0';
  (pCVar2->base).unk3[6] = '\0';
  (pCVar2->base).unk3[7] = '\0';
  ADJ(this_ptr_00)->unk11 = 0;
  ADJ(this_ptr_00)->periodic_sound[0] = '\0';
  ADJ(this_ptr_00)->periodic_sound_timer_min = 15.0;
  ADJ(this_ptr_00)->periodic_sound_timer_max = 30.0;
  ADJ(this_ptr_00)->unk10 = 0.0;
  ADJ(this_ptr_00)->unk3 = (int)fVar3;
  return ADJ(this_ptr_00);
}
