// Name: core_fforest.cpp_CTwigZombie_ctor_FUN_005a26d0
// Address: 005a26d0
// Address Range: [[005a26d0, 005a281b]]
// Convention: __cdecl
// Signature: CTwigZombie * __cdecl core_fforest_cpp_CTwigZombie_ctor_FUN_005a26d0(CTwigZombie *this_ptr)

#include "nocturne.h"

CTwigZombie * __cdecl core_fforest_cpp_CTwigZombie_ctor_FUN_005a26d0(CTwigZombie *this_ptr)

{
  SStateMachine *this_ptr_00;
  char cVar1;
  float fVar2;
  float fVar3;
  CTwigZombie *this_ptr_01;
  char *pcVar4;
  char *pcVar5;
  
  this_ptr_01 = (CTwigZombie *)core_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base);
  (this_ptr_01->base).base.base.base.vtable._ub = &g_CTwigZombieVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_01->base).base.base.model,"twigzombie.dfm");
  (this_ptr_01->base).anim_speed_scale = 0.75;
  (this_ptr_01->base).walk_state_3_motion = 0;
  (this_ptr_01->base).idle_motion = 0;
  pcVar5 = (this_ptr_01->base).flinch_motion_name;
  (this_ptr_01->base).walk_motion = 1;
  fVar2 = 15.0f;
  (this_ptr_01->base).run_motion = 6;
  fVar3 = 3.0f;
  (this_ptr_01->base).run_distance = 999.0;
  pcVar4 = "flinch";
  (this_ptr_01->base).can_flinch = 1;
  (this_ptr_01->base).alert_distance = fVar2;
  (this_ptr_01->base).attack_range = fVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  core_fforest_cpp_CTwigZombie_processStates_FUN_005a28a0(this_ptr_01,0.0,0);
  this_ptr_00 = &(this_ptr_01->base).state_machine;
  core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
            (this_ptr_00,"ChaseComplete","Attacking");
  core_muzzle_cpp_SStateMachine_setInitialState_FUN_0059d990(this_ptr_00,"Alert");
  core_muzzle_cpp_SStateMachine_reset_FUN_0059dc80(this_ptr_00);
  pcVar5 = (this_ptr_01->base).hit_sound;
  pcVar4 = "twighit0?.wav";
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "twigloop01.wav";
  pcVar5 = (this_ptr_01->base).idle_sound;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  (this_ptr_01->base).base.base.base.footstep_effects_enabled = 0;
  return this_ptr_01;
}
