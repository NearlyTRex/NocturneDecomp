// Name: core_confedrt.cpp_CConfederate_ctor_FUN_005a0840
// Address: 005a0840
// Address Range: [[005a0840, 005a09b3]]
// Convention: unknown
// Signature: CConfederate * core_confedrt_cpp_CConfederate_ctor_FUN_005a0840(CConfederate *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CConfederate * core_confedrt_cpp_CConfederate_ctor_FUN_005a0840(CConfederate *this_ptr)

{
  SStateMachine *pSVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  CConfederate *this_ptr_00;
  char *pcVar5;
  char *pcVar6;
  
  this_ptr_00 = (CConfederate *)core_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base);
  (this_ptr_00->base).base.base.base.vtable._ub = &g_CConfederateVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_00->base).base.base.model,"con_david.dfm");
  (this_ptr_00->base).base.base.collision_cylinder_radius = 1.0;
  (this_ptr_00->base).anim_speed_scale = 2.5;
  this_ptr_00->fire_timer = 0.0;
  this_ptr_00->ammo_count = 1;
  this_ptr_00->melee_variant = 0;
  (this_ptr_00->base).walk_state_3_motion = 0;
  (this_ptr_00->base).idle_motion = 0;
  pcVar6 = (this_ptr_00->base).flinch_motion_name;
  (this_ptr_00->base).walk_motion = 1;
  fVar3 = _DAT_005fedac;
  (this_ptr_00->base).run_motion = 4;
  fVar4 = _DAT_005fedb0;
  (this_ptr_00->base).run_distance = 5.0;
  pcVar5 = "flinch";
  (this_ptr_00->base).can_flinch = 1;
  (this_ptr_00->base).alert_distance = fVar3;
  (this_ptr_00->base).attack_range = fVar4;
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  core_confedrt_cpp_CConfederate_processStates_FUN_005a0b20(this_ptr_00,0.0,0);
  pSVar1 = &(this_ptr_00->base).state_machine;
  core_muzzle_cpp_FUN_0059d7f0(pSVar1,"ChaseComplete");
  core_muzzle_cpp_FUN_0059d990(pSVar1);
  core_muzzle_cpp_FUN_0059dc80();
  pcVar6 = (this_ptr_00->base).hit_sound;
  pcVar5 = "confedhit0?.wav";
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  pcVar5 = "uniondeath0?.wav";
  pcVar6 = (this_ptr_00->base).death_sound;
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  (this_ptr_00->base).base.base.base.is_transparent = 1;
  return this_ptr_00;
}
