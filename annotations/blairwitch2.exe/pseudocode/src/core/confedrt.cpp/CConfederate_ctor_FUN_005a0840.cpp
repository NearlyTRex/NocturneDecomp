// Name: core_confedrt.cpp_CConfederate_ctor_FUN_005a0840
// Address: 005a0840
// Address Range: [[005a0840, 005a09b3]]
// Convention: __cdecl
// Signature: CConfederate * __cdecl core_confedrt_cpp_CConfederate_ctor_FUN_005a0840(CConfederate *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CConfederate * __cdecl core_confedrt_cpp_CConfederate_ctor_FUN_005a0840(CConfederate *this_ptr)

{
  SStateMachine *this_ptr_00;
  char cVar1;
  float fVar2;
  float fVar3;
  CConfederate *this_ptr_01;
  char *pcVar4;
  char *pcVar5;
  
  this_ptr_01 = (CConfederate *)core_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base);
  (this_ptr_01->base).base.base.base.vtable._ub = &g_CConfederateVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_01->base).base.base.model,"con_david.dfm");
  (this_ptr_01->base).base.base.collision_cylinder_radius = 1.0;
  (this_ptr_01->base).anim_speed_scale = 2.5;
  this_ptr_01->fire_timer = 0.0;
  this_ptr_01->ammo_count = 1;
  this_ptr_01->melee_variant = 0;
  (this_ptr_01->base).walk_state_3_motion = 0;
  (this_ptr_01->base).idle_motion = 0;
  pcVar5 = (this_ptr_01->base).flinch_motion_name;
  (this_ptr_01->base).walk_motion = 1;
  fVar2 = _DAT_005fedac;
  (this_ptr_01->base).run_motion = 4;
  fVar3 = _DAT_005fedb0;
  (this_ptr_01->base).run_distance = 5.0;
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
  core_confedrt_cpp_CConfederate_processStates_FUN_005a0b20(this_ptr_01,0.0,0);
  this_ptr_00 = &(this_ptr_01->base).state_machine;
  core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
            (this_ptr_00,"ChaseComplete","RangeAttack");
  core_muzzle_cpp_SStateMachine_setInitialState_FUN_0059d990(this_ptr_00,"Alert");
  core_muzzle_cpp_SStateMachine_reset_FUN_0059dc80(this_ptr_00);
  pcVar5 = (this_ptr_01->base).hit_sound;
  pcVar4 = "confedhit0?.wav";
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "uniondeath0?.wav";
  pcVar5 = (this_ptr_01->base).death_sound;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  (this_ptr_01->base).base.base.base.is_transparent = 1;
  return this_ptr_01;
}
