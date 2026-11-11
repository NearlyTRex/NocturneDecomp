// Name: core_schngeis.cpp_CSchnellGeist_ctor_FUN_005a2fb0
// Address: 005a2fb0
// Address Range: [[005a2fb0, 005a313f]]
// Convention: unknown
// Signature: CSchnellGeist * core_schngeis_cpp_CSchnellGeist_ctor_FUN_005a2fb0(CSchnellGeist *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSchnellGeist * core_schngeis_cpp_CSchnellGeist_ctor_FUN_005a2fb0(CSchnellGeist *this_ptr)

{
  SStateMachine *pSVar1;
  char cVar2;
  float fVar3;
  CSchnellGeist *this_ptr_00;
  char *pcVar4;
  char *pcVar5;
  
  this_ptr_00 = (CSchnellGeist *)
                unkafter_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base);
  (this_ptr_00->base).base.base.base.vtable._ub = &g_CSchnellGeistVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_00->base).base.base.model,"schnell.dfm");
  (this_ptr_00->base).base.base.collision_cylinder_radius = 2.0;
  (this_ptr_00->base).base.base.collision_cylinder_top = 5.0;
  (this_ptr_00->base).anim_speed_scale = 2.5;
  (this_ptr_00->base).walk_state_3_motion = 0;
  (this_ptr_00->base).idle_motion = 0;
  (this_ptr_00->base).walk_motion = 1;
  (this_ptr_00->base).run_motion = 2;
  this_ptr_00->unused_11860 = 0;
  pcVar5 = (this_ptr_00->base).flinch_motion_name;
  this_ptr_00->breath_state = 0;
  fVar3 = _DAT_005ff34c;
  this_ptr_00->blood_frame_counter = 2;
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
  core_schngeis_cpp_CSchnellGeist_processStates_FUN_005a31c0(this_ptr_00,0.0,0);
  fVar3 = _DAT_005ff350;
  (this_ptr_00->base).run_distance = 0.0;
  pSVar1 = &(this_ptr_00->base).state_machine;
  this_ptr_00->attack_variant = 0;
  (this_ptr_00->base).attack_range = fVar3;
  unkaddr_0059d350_cpp_FUN_0059d990(pSVar1);
  unkaddr_0059d350_cpp_FUN_0059dc80();
  unkaddr_0059d350_cpp_FUN_0059d7f0(pSVar1,"ChaseComplete");
  pcVar5 = (this_ptr_00->base).hit_sound;
  pcVar4 = "schnellhit0?.wav";
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  pcVar4 = "schnellamb0?.wav";
  pcVar5 = (this_ptr_00->base).idle_sound;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  (this_ptr_00->base).idle_sound_interval = 5.0;
  (this_ptr_00->base).base.base.base.footstep_effects_enabled = 0;
  return this_ptr_00;
}
