// Name: core_schngeis.cpp_CSchnellGeist_ctor_FUN_005a2fb0
// Address: 005a2fb0
// Address Range: [[005a2fb0, 005a313f]]
// Convention: __cdecl
// Signature: CSchnellGeist * __cdecl core_schngeis_cpp_CSchnellGeist_ctor_FUN_005a2fb0(CSchnellGeist *this_ptr)

#include "nocturne.h"

CSchnellGeist * __cdecl core_schngeis_cpp_CSchnellGeist_ctor_FUN_005a2fb0(CSchnellGeist *this_ptr)

{
  SStateMachine *this_ptr_00;
  char cVar1;
  float fVar2;
  CSchnellGeist *this_ptr_01;
  char *pcVar3;
  char *pcVar4;
  
  this_ptr_01 = (CSchnellGeist *)core_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base);
  (this_ptr_01->base).base.base.base.vtable._ub = &g_CSchnellGeistVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_01->base).base.base.model,"schnell.dfm");
  (this_ptr_01->base).base.base.collision_cylinder_radius = 2.0;
  (this_ptr_01->base).base.base.collision_cylinder_top = 5.0;
  (this_ptr_01->base).anim_speed_scale = 2.5;
  (this_ptr_01->base).walk_state_3_motion = 0;
  (this_ptr_01->base).idle_motion = 0;
  (this_ptr_01->base).walk_motion = 1;
  (this_ptr_01->base).run_motion = 2;
  this_ptr_01->unused_11860 = 0;
  pcVar4 = (this_ptr_01->base).flinch_motion_name;
  this_ptr_01->breath_state = 0;
  fVar2 = 25.0f;
  this_ptr_01->blood_frame_counter = 2;
  pcVar3 = "flinch";
  (this_ptr_01->base).can_flinch = 1;
  (this_ptr_01->base).alert_distance = fVar2;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  core_schngeis_cpp_CSchnellGeist_processStates_FUN_005a31c0(this_ptr_01,0.0,0);
  fVar2 = 5.0f;
  (this_ptr_01->base).run_distance = 0.0;
  this_ptr_00 = &(this_ptr_01->base).state_machine;
  this_ptr_01->attack_variant = 0;
  (this_ptr_01->base).attack_range = fVar2;
  core_muzzle_cpp_SStateMachine_setInitialState_FUN_0059d990(this_ptr_00,"Alert");
  core_muzzle_cpp_SStateMachine_reset_FUN_0059dc80(this_ptr_00);
  core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
            (this_ptr_00,"ChaseComplete","MeleeAttack");
  pcVar4 = (this_ptr_01->base).hit_sound;
  pcVar3 = "schnellhit0?.wav";
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "schnellamb0?.wav";
  pcVar4 = (this_ptr_01->base).idle_sound;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  (this_ptr_01->base).idle_sound_interval = 5.0;
  (this_ptr_01->base).base.base.base.footstep_effects_enabled = 0;
  return this_ptr_01;
}
