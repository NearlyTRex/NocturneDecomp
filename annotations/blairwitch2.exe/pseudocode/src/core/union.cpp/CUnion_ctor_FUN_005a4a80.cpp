// Name: core_union.cpp_CUnion_ctor_FUN_005a4a80
// Address: 005a4a80
// Address Range: [[005a4a80, 005a4bf3]]
// Convention: unknown
// Signature: CUnion * core_union_cpp_CUnion_ctor_FUN_005a4a80(CUnion *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CUnion * core_union_cpp_CUnion_ctor_FUN_005a4a80(CUnion *this_ptr)

{
  SStateMachine *pSVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  CUnion *this_ptr_00;
  char *pcVar5;
  char *pcVar6;
  
  this_ptr_00 = (CUnion *)core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(&this_ptr->base);
  (this_ptr_00->base).base.base.base.base.vtable._ub = &g_CUnionVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_00->base).base.base.base.model,"union_brett.dfm");
  (this_ptr_00->base).base.base.base.collision_cylinder_radius = 1.0;
  (this_ptr_00->base).base.anim_speed_scale = 2.5;
  this_ptr_00->fire_timer = 0.0;
  this_ptr_00->ammo_count = 999;
  this_ptr_00->melee_variant = 0;
  (this_ptr_00->base).base.walk_state_3_motion = 0;
  (this_ptr_00->base).base.idle_motion = 0;
  (this_ptr_00->base).base.walk_motion = 1;
  pcVar6 = (this_ptr_00->base).base.flinch_motion_name;
  (this_ptr_00->base).base.run_motion = 4;
  fVar3 = _DAT_005ff8ec;
  (this_ptr_00->base).base.animation_state = 0;
  fVar4 = _DAT_005ff8f0;
  (this_ptr_00->base).base.run_distance = 5.0;
  pcVar5 = "flinch";
  (this_ptr_00->base).base.can_flinch = 1;
  (this_ptr_00->base).base.alert_distance = fVar3;
  (this_ptr_00->base).base.attack_range = fVar4;
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  core_union_cpp_CUnion_processStates_FUN_005a4c50(this_ptr_00,0.0,0);
  pSVar1 = &(this_ptr_00->base).base.state_machine;
  unkaddr_0059d350_cpp_FUN_0059d7f0(pSVar1,"ChaseComplete");
  unkaddr_0059d350_cpp_FUN_0059d990(pSVar1);
  unkaddr_0059d350_cpp_FUN_0059dc80();
  pcVar6 = (this_ptr_00->base).base.hit_sound;
  pcVar5 = "unionhit0?.wav";
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
  pcVar6 = (this_ptr_00->base).base.death_sound;
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
