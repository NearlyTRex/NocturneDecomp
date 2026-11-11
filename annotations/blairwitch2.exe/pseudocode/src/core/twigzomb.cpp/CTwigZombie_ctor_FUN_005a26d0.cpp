// Name: core_twigzomb.cpp_CTwigZombie_ctor_FUN_005a26d0
// Address: 005a26d0
// Address Range: [[005a26d0, 005a281b]]
// Convention: unknown
// Signature: CTwigZombie * core_twigzomb_cpp_CTwigZombie_ctor_FUN_005a26d0(CTwigZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CTwigZombie * core_twigzomb_cpp_CTwigZombie_ctor_FUN_005a26d0(CTwigZombie *this_ptr)

{
  SStateMachine *pSVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  CTwigZombie *this_ptr_00;
  char *pcVar5;
  char *pcVar6;
  
  this_ptr_00 = (CTwigZombie *)unkafter_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base);
  (this_ptr_00->base).base.base.base.vtable._ub = &g_CTwigZombieVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_00->base).base.base.model,"twigzombie.dfm");
  (this_ptr_00->base).anim_speed_scale = 0.75;
  (this_ptr_00->base).walk_state_3_motion = 0;
  (this_ptr_00->base).idle_motion = 0;
  pcVar6 = (this_ptr_00->base).flinch_motion_name;
  (this_ptr_00->base).walk_motion = 1;
  fVar3 = _DAT_005ff16c;
  (this_ptr_00->base).run_motion = 6;
  fVar4 = _DAT_005ff170;
  (this_ptr_00->base).run_distance = 999.0;
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
  core_twigzomb_cpp_CTwigZombie_processStates_FUN_005a28a0(this_ptr_00,0.0,0);
  pSVar1 = &(this_ptr_00->base).state_machine;
  unkaddr_0059d350_cpp_FUN_0059d7f0(pSVar1,"ChaseComplete");
  unkaddr_0059d350_cpp_FUN_0059d990(pSVar1);
  unkaddr_0059d350_cpp_FUN_0059dc80();
  pcVar6 = (this_ptr_00->base).hit_sound;
  pcVar5 = "twighit0?.wav";
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  pcVar5 = "twigloop01.wav";
  pcVar6 = (this_ptr_00->base).idle_sound;
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  (this_ptr_00->base).base.base.base.footstep_effects_enabled = 0;
  return this_ptr_00;
}
