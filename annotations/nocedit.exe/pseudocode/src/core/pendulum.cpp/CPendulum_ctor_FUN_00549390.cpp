// Name: core_pendulum.cpp_CPendulum_ctor_FUN_00549390
// Address: 00549390
// Address Range: [[00549390, 0054949a]]
// Convention: __cdecl
// Signature: CPendulum * __cdecl core_pendulum_cpp_CPendulum_ctor_FUN_00549390(CPendulum *this_ptr)

#include "nocturne.h"

CPendulum * __cdecl core_pendulum_cpp_CPendulum_ctor_FUN_00549390(CPendulum *this_ptr)

{
  char cVar1;
  CPendulum *pCVar2;
  CPendulum_ptr_344 this_ptr_00;
  char *pcVar2;
  char *pcVar3;
  
  pCVar2 = (CPendulum *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CPendulumVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr_00,"pend.kfm")
  ;
  pcVar2 = "true";
  pcVar3 = ADJ(this_ptr_00)->start_event;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar2 = "none";
  pcVar3 = ADJ(this_ptr_00)->stop_event;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  ADJ(this_ptr_00)->moving = 1;
  ADJ(this_ptr_00)->param = 0.0;
  ADJ(this_ptr_00)->max_angle = 0.5235988;
  ADJ(this_ptr_00)->swoosh_sound[0] = '\0';
  ADJ(this_ptr_00)->creak_1_sound[0] = '\0';
  ADJ(this_ptr_00)->creak_2_sound[0] = '\0';
  ADJ(this_ptr_00)->swoosh_phase_bias = 0.0;
  ADJ(this_ptr_00)->kill_hero = 0;
  ADJ(this_ptr_00)->kill_enemy = 0;
  ADJ(this_ptr_00)->decay = 0.0;
  ADJ(this_ptr_00)->decay_timer = 0.0;
  ADJ(this_ptr_00)->is_stopped = 0;
  ADJ(this_ptr_00)->one_shot = 0;
  return ADJ(this_ptr_00);
}
