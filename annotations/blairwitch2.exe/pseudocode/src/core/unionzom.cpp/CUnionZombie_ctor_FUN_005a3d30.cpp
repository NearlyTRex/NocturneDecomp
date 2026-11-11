// Name: core_unionzom.cpp_CUnionZombie_ctor_FUN_005a3d30
// Address: 005a3d30
// Address Range: [[005a3d30, 005a3e6b]]
// Convention: unknown
// Signature: CUnionZombie * core_unionzom_cpp_CUnionZombie_ctor_FUN_005a3d30(CUnionZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CUnionZombie * core_unionzom_cpp_CUnionZombie_ctor_FUN_005a3d30(CUnionZombie *this_ptr)

{
  SStateMachine *pSVar1;
  char cVar2;
  float fVar3;
  CUnionZombie *this_ptr_00;
  char *pcVar4;
  char *pcVar5;
  
  this_ptr_00 = (CUnionZombie *)unkafter_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base)
  ;
  (this_ptr_00->base).base.base.base.vtable._ub = &g_CUnionZombieVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_00->base).base.base.model,"unzombie_brett.dfm");
  (this_ptr_00->base).base.base.is_spectral = 0;
  (this_ptr_00->base).base.base.base.is_transparent = 1;
  (this_ptr_00->base).base.base.collision_cylinder_radius = 0.7;
  (this_ptr_00->base).fade_val = 0.0;
  (this_ptr_00->base).anim_speed_scale = 2.5;
  (this_ptr_00->base).walk_state_3_motion = 0;
  (this_ptr_00->base).idle_motion = 0;
  pcVar5 = (this_ptr_00->base).flinch_motion_name;
  (this_ptr_00->base).walk_motion = 1;
  fVar3 = _DAT_005ff53c;
  (this_ptr_00->base).run_motion = 1;
  pcVar4 = "flinch";
  (this_ptr_00->base).can_flinch = 1;
  (this_ptr_00->base).alert_distance = fVar3;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  this_ptr_00->vanish_phase = 0;
  core_unionzom_cpp_CUnionZombie_processStates_FUN_005a3fc0(this_ptr_00,0.0,0);
  pSVar1 = &(this_ptr_00->base).state_machine;
  (this_ptr_00->base).attack_range = _DAT_005ff540;
  unkaddr_0059d350_cpp_FUN_0059d7f0(pSVar1,"ChaseComplete");
  unkaddr_0059d350_cpp_FUN_0059d990(pSVar1);
  unkaddr_0059d350_cpp_FUN_0059dc80();
  (this_ptr_00->base).burn_timer = 0.0;
  (this_ptr_00->base).base.base.blood_type = BLOOD_TYPE_ICHOR;
  (this_ptr_00->base).can_burn = 1;
  return this_ptr_00;
}
