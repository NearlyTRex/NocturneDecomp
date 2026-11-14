// Name: core_hellhag.cpp_CHag_ctor_FUN_005aa600
// Address: 005aa600
// Address Range: [[005aa600, 005aa7d8]]
// Convention: __cdecl
// Signature: CHag * __cdecl core_hellhag_cpp_CHag_ctor_FUN_005aa600(CHag *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CHag * __cdecl core_hellhag_cpp_CHag_ctor_FUN_005aa600(CHag *this_ptr)

{
  CClothList *this_ptr_00;
  SStateMachine *pSVar1;
  char cVar2;
  CHag *this_ptr_01;
  char *pcVar3;
  char *pcVar4;
  
  this_ptr_01 = (CHag *)core_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base);
  (this_ptr_01->base).base.base.base.vtable._ub = &g_CHagVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_01->base).base.base.model,(char *)0x5f0af3);
  this_ptr_00 = &(this_ptr_01->base).base.base.cloth_list;
  core_cloth_cpp_CClothList_add_FUN_005b15c0(this_ptr_00,"hagdress.cth");
  core_cloth_cpp_CClothList_add_FUN_005b15c0(this_ptr_00,"haghair.cth");
  core_cloth_cpp_CClothList_add_FUN_005b15c0(this_ptr_00,"hagshal.cth");
  (this_ptr_01->base).base.base.collision_cylinder_radius = 0.5;
  (this_ptr_01->base).anim_speed_scale = 2.5;
  (this_ptr_01->base).base.base.base.is_transparent = 1;
  (this_ptr_01->base).fade_val = 1.0;
  *(uint *)&(this_ptr_01->base).base.base.base.field_0x2a8 = 0x3dcccccd;
  (this_ptr_01->base).walk_state_3_motion = 0;
  (this_ptr_01->base).idle_motion = 0;
  (this_ptr_01->base).walk_motion = 1;
  (this_ptr_01->base).run_motion = 1;
  (this_ptr_01->base).animation_state = 0;
  pcVar3 = "flinch";
  this_ptr_01->unused_11858 = 0;
  core_hellhag_cpp_CHag_processStates_FUN_005aa970(this_ptr_01,0.0,0);
  pcVar4 = (this_ptr_01->base).flinch_motion_name;
  (this_ptr_01->base).can_flinch = 1;
  do {
    cVar2 = *pcVar3;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  pSVar1 = &(this_ptr_01->base).state_machine;
  core_muzzle_cpp_FUN_0059d7f0(pSVar1,"ChaseComplete");
  (this_ptr_01->base).attack_range = _DAT_00600a6c;
  core_muzzle_cpp_FUN_0059d990(pSVar1);
  pcVar4 = (this_ptr_01->base).hit_sound;
  core_muzzle_cpp_FUN_0059dc80();
  pcVar3 = (char *)0x5f0b47;
  (this_ptr_01->base).can_burn = 1;
  do {
    cVar2 = *pcVar3;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  pcVar3 = "hagdeath0?.wav";
  pcVar4 = (this_ptr_01->base).death_sound;
  do {
    cVar2 = *pcVar3;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  pcVar3 = (char *)0x5f0b63;
  pcVar4 = (this_ptr_01->base).idle_sound;
  do {
    cVar2 = *pcVar3;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  (this_ptr_01->base).idle_sound_interval = 6.0;
  this_ptr_01->sfx_handle = 0;
  return this_ptr_01;
}
