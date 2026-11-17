// Name: core_hellhag.cpp_CHag_ctor_FUN_005aa600
// Address: 005aa600
// Address Range: [[005aa600, 005aa7d8]]
// Convention: __cdecl
// Signature: CHag * __cdecl core_hellhag_cpp_CHag_ctor_FUN_005aa600(CHag *this_ptr)

#include "nocturne.h"

CHag * __cdecl core_hellhag_cpp_CHag_ctor_FUN_005aa600(CHag *this_ptr)

{
  CClothList *this_ptr_00;
  SStateMachine *this_ptr_01;
  char cVar1;
  CHag *this_ptr_02;
  char *pcVar2;
  char *pcVar3;
  
  this_ptr_02 = (CHag *)core_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base);
  (this_ptr_02->base).base.base.base.vtable._ub = &g_CHagVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_02->base).base.base.model,"hag.dfm");
  this_ptr_00 = &(this_ptr_02->base).base.base.cloth_list;
  core_cloth_cpp_CClothList_add_FUN_005b15c0(this_ptr_00,"hagdress.cth");
  core_cloth_cpp_CClothList_add_FUN_005b15c0(this_ptr_00,"haghair.cth");
  core_cloth_cpp_CClothList_add_FUN_005b15c0(this_ptr_00,"hagshal.cth");
  (this_ptr_02->base).base.base.collision_cylinder_radius = 0.5;
  (this_ptr_02->base).anim_speed_scale = 2.5;
  (this_ptr_02->base).base.base.base.is_transparent = 1;
  (this_ptr_02->base).fade_val = 1.0;
  *(uint *)&(this_ptr_02->base).base.base.base.field_0x2a8 = 0x3dcccccd;
  (this_ptr_02->base).walk_state_3_motion = 0;
  (this_ptr_02->base).idle_motion = 0;
  (this_ptr_02->base).walk_motion = 1;
  (this_ptr_02->base).run_motion = 1;
  (this_ptr_02->base).animation_state = 0;
  pcVar2 = "flinch";
  this_ptr_02->unused_11858 = 0;
  core_hellhag_cpp_CHag_processStates_FUN_005aa970(this_ptr_02,0.0,0);
  pcVar3 = (this_ptr_02->base).flinch_motion_name;
  (this_ptr_02->base).can_flinch = 1;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  this_ptr_01 = &(this_ptr_02->base).state_machine;
  core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
            (this_ptr_01,"ChaseComplete","MeleeAttack");
  (this_ptr_02->base).attack_range = 6.0f;
  core_muzzle_cpp_SStateMachine_setInitialState_FUN_0059d990(this_ptr_01,"Alert");
  pcVar3 = (this_ptr_02->base).hit_sound;
  core_muzzle_cpp_SStateMachine_reset_FUN_0059dc80(this_ptr_01);
  pcVar2 = "haghit0?.wav";
  (this_ptr_02->base).can_burn = 1;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar2 = "hagdeath0?.wav";
  pcVar3 = (this_ptr_02->base).death_sound;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar2 = "hagamb0?.wav";
  pcVar3 = (this_ptr_02->base).idle_sound;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  (this_ptr_02->base).idle_sound_interval = 6.0;
  this_ptr_02->sfx_handle = 0;
  return this_ptr_02;
}
