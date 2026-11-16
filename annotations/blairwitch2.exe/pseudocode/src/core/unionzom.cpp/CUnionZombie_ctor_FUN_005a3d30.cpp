// Name: core_unionzom.cpp_CUnionZombie_ctor_FUN_005a3d30
// Address: 005a3d30
// Address Range: [[005a3d30, 005a3e6b]]
// Convention: __cdecl
// Signature: CUnionZombie * __cdecl core_unionzom_cpp_CUnionZombie_ctor_FUN_005a3d30(CUnionZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CUnionZombie * __cdecl core_unionzom_cpp_CUnionZombie_ctor_FUN_005a3d30(CUnionZombie *this_ptr)

{
  SStateMachine *this_ptr_00;
  char cVar1;
  float fVar2;
  CUnionZombie *this_ptr_01;
  char *pcVar3;
  char *pcVar4;
  
  this_ptr_01 = (CUnionZombie *)core_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base);
  (this_ptr_01->base).base.base.base.vtable._ub = &g_CUnionZombieVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_01->base).base.base.model,"unzombie_brett.dfm");
  (this_ptr_01->base).base.base.is_spectral = 0;
  (this_ptr_01->base).base.base.base.is_transparent = 1;
  (this_ptr_01->base).base.base.collision_cylinder_radius = 0.7;
  (this_ptr_01->base).fade_val = 0.0;
  (this_ptr_01->base).anim_speed_scale = 2.5;
  (this_ptr_01->base).walk_state_3_motion = 0;
  (this_ptr_01->base).idle_motion = 0;
  pcVar4 = (this_ptr_01->base).flinch_motion_name;
  (this_ptr_01->base).walk_motion = 1;
  fVar2 = _DAT_005ff53c;
  (this_ptr_01->base).run_motion = 1;
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
  this_ptr_01->vanish_phase = 0;
  core_unionzom_cpp_CUnionZombie_processStates_FUN_005a3fc0(this_ptr_01,0.0,0);
  this_ptr_00 = &(this_ptr_01->base).state_machine;
  (this_ptr_01->base).attack_range = _DAT_005ff540;
  core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
            (this_ptr_00,"ChaseComplete","VanishAttack");
  core_muzzle_cpp_SStateMachine_setInitialState_FUN_0059d990(this_ptr_00,"AlertInvisible");
  core_muzzle_cpp_SStateMachine_reset_FUN_0059dc80(this_ptr_00);
  (this_ptr_01->base).burn_timer = 0.0;
  (this_ptr_01->base).base.base.blood_type = BLOOD_TYPE_ICHOR;
  (this_ptr_01->base).can_burn = 1;
  return this_ptr_01;
}
