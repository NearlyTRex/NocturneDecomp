// Name: core_union.cpp_CUnion_ctor_FUN_005a4a80
// Address: 005a4a80
// Address Range: [[005a4a80, 005a4bf3]]
// Convention: __cdecl
// Signature: CUnion * __cdecl core_union_cpp_CUnion_ctor_FUN_005a4a80(CUnion *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CUnion * __cdecl core_union_cpp_CUnion_ctor_FUN_005a4a80(CUnion *this_ptr)

{
  SStateMachine *this_ptr_00;
  char cVar1;
  float fVar2;
  float fVar3;
  CUnion *this_ptr_01;
  char *pcVar4;
  char *pcVar5;
  
  this_ptr_01 = (CUnion *)core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(&this_ptr->base);
  (this_ptr_01->base).base.base.base.base.vtable._ub = &g_CUnionVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_01->base).base.base.base.model,"union_brett.dfm");
  (this_ptr_01->base).base.base.base.collision_cylinder_radius = 1.0;
  (this_ptr_01->base).base.anim_speed_scale = 2.5;
  this_ptr_01->fire_timer = 0.0;
  this_ptr_01->ammo_count = 999;
  this_ptr_01->melee_variant = 0;
  (this_ptr_01->base).base.walk_state_3_motion = 0;
  (this_ptr_01->base).base.idle_motion = 0;
  (this_ptr_01->base).base.walk_motion = 1;
  pcVar5 = (this_ptr_01->base).base.flinch_motion_name;
  (this_ptr_01->base).base.run_motion = 4;
  fVar2 = 25.0f;
  (this_ptr_01->base).base.animation_state = 0;
  fVar3 = 15.0f;
  (this_ptr_01->base).base.run_distance = 5.0;
  pcVar4 = "flinch";
  (this_ptr_01->base).base.can_flinch = 1;
  (this_ptr_01->base).base.alert_distance = fVar2;
  (this_ptr_01->base).base.attack_range = fVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  core_union_cpp_CUnion_processStates_FUN_005a4c50(this_ptr_01,0.0,0);
  this_ptr_00 = &(this_ptr_01->base).base.state_machine;
  core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
            (this_ptr_00,"ChaseComplete","RangeAttack");
  core_muzzle_cpp_SStateMachine_setInitialState_FUN_0059d990(this_ptr_00,"Alert");
  core_muzzle_cpp_SStateMachine_reset_FUN_0059dc80(this_ptr_00);
  pcVar5 = (this_ptr_01->base).base.hit_sound;
  pcVar4 = "unionhit0?.wav";
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
  pcVar5 = (this_ptr_01->base).base.death_sound;
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
