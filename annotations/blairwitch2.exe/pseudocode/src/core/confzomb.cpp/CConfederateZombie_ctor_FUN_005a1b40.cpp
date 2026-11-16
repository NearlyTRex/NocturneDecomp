// Name: core_confzomb.cpp_CConfederateZombie_ctor_FUN_005a1b40
// Address: 005a1b40
// Address Range: [[005a1b40, 005a1cbd]]
// Convention: __cdecl
// Signature: CConfederateZombie * __cdecl core_confzomb_cpp_CConfederateZombie_ctor_FUN_005a1b40(CConfederateZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CConfederateZombie * __cdecl core_confzomb_cpp_CConfederateZombie_ctor_FUN_005a1b40(CConfederateZombie *this_ptr)

{
  SStateMachine *this_ptr_00;
  char cVar1;
  float fVar2;
  float fVar3;
  CConfederateZombie *this_ptr_01;
  char *pcVar4;
  char *pcVar5;
  
  this_ptr_01 = (CConfederateZombie *)
                core_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base);
  (this_ptr_01->base).base.base.base.vtable._ub = &g_CConfederateZombieVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_01->base).base.base.model,"conzombie_david.dfm");
  (this_ptr_01->base).base.base.collision_cylinder_radius = 0.7;
  (this_ptr_01->base).base.base.base.is_transparent = 1;
  (this_ptr_01->base).base.base.is_spectral = 0;
  (this_ptr_01->base).fade_val = 0.0;
  (this_ptr_01->base).anim_speed_scale = 2.5;
  (this_ptr_01->base).walk_state_3_motion = 0;
  pcVar5 = (this_ptr_01->base).flinch_motion_name;
  (this_ptr_01->base).idle_motion = 0;
  fVar2 = _DAT_005fef8c;
  (this_ptr_01->base).walk_motion = 1;
  fVar3 = _DAT_005fef90;
  (this_ptr_01->base).run_motion = 1;
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
  core_confzomb_cpp_CConfederateZombie_processStates_FUN_005a1e10(this_ptr_01,0.0,0);
  this_ptr_00 = &(this_ptr_01->base).state_machine;
  core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
            (this_ptr_00,"ChaseComplete","RangeAttack");
  core_muzzle_cpp_SStateMachine_setInitialState_FUN_0059d990(this_ptr_00,"AlertInvisible");
  pcVar5 = (this_ptr_01->base).hit_sound;
  core_muzzle_cpp_SStateMachine_reset_FUN_0059dc80(this_ptr_00);
  (this_ptr_01->base).burn_timer = 0.0;
  (this_ptr_01->base).base.base.blood_type = BLOOD_TYPE_ICHOR;
  pcVar4 = "confedhit0?.wav";
  (this_ptr_01->base).can_burn = 1;
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
    if (cVar1 == '\0') {
      return this_ptr_01;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  return this_ptr_01;
}
