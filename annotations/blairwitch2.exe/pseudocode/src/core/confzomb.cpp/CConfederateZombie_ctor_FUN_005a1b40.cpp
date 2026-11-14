// Name: core_confzomb.cpp_CConfederateZombie_ctor_FUN_005a1b40
// Address: 005a1b40
// Address Range: [[005a1b40, 005a1cbd]]
// Convention: __cdecl
// Signature: CConfederateZombie * __cdecl core_confzomb_cpp_CConfederateZombie_ctor_FUN_005a1b40(CConfederateZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CConfederateZombie * __cdecl core_confzomb_cpp_CConfederateZombie_ctor_FUN_005a1b40(CConfederateZombie *this_ptr)

{
  SStateMachine *pSVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  CConfederateZombie *this_ptr_00;
  char *pcVar5;
  char *pcVar6;
  
  this_ptr_00 = (CConfederateZombie *)
                core_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base);
  (this_ptr_00->base).base.base.base.vtable._ub = &g_CConfederateZombieVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_00->base).base.base.model,"conzombie_david.dfm");
  (this_ptr_00->base).base.base.collision_cylinder_radius = 0.7;
  (this_ptr_00->base).base.base.base.is_transparent = 1;
  (this_ptr_00->base).base.base.is_spectral = 0;
  (this_ptr_00->base).fade_val = 0.0;
  (this_ptr_00->base).anim_speed_scale = 2.5;
  (this_ptr_00->base).walk_state_3_motion = 0;
  pcVar6 = (this_ptr_00->base).flinch_motion_name;
  (this_ptr_00->base).idle_motion = 0;
  fVar3 = _DAT_005fef8c;
  (this_ptr_00->base).walk_motion = 1;
  fVar4 = _DAT_005fef90;
  (this_ptr_00->base).run_motion = 1;
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
  core_confzomb_cpp_CConfederateZombie_processStates_FUN_005a1e10(this_ptr_00,0.0,0);
  pSVar1 = &(this_ptr_00->base).state_machine;
  core_muzzle_cpp_FUN_0059d7f0(pSVar1,"ChaseComplete");
  core_muzzle_cpp_FUN_0059d990(pSVar1);
  pcVar6 = (this_ptr_00->base).hit_sound;
  core_muzzle_cpp_FUN_0059dc80();
  (this_ptr_00->base).burn_timer = 0.0;
  (this_ptr_00->base).base.base.blood_type = BLOOD_TYPE_ICHOR;
  pcVar5 = "confedhit0?.wav";
  (this_ptr_00->base).can_burn = 1;
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
    if (cVar2 == '\0') {
      return this_ptr_00;
    }
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  return this_ptr_00;
}
