// Name: core_helldog.cpp_CDog_ctor_FUN_005aba40
// Address: 005aba40
// Address Range: [[005aba40, 005abd2e]]
// Convention: __cdecl
// Signature: CDog * __cdecl core_helldog_cpp_CDog_ctor_FUN_005aba40(CDog *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDog * __cdecl core_helldog_cpp_CDog_ctor_FUN_005aba40(CDog *this_ptr)

{
  SStateMachine *this_ptr_00;
  char cVar1;
  float fVar2;
  CDog *this_ptr_01;
  CVector3f *pCVar3;
  float unaff_EBP;
  char *pcVar4;
  float unaff_EDI;
  char *pcVar5;
  byte bVar6;
  float afStackY_1020 [1008];
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  float fStack_14;
  
  bVar6 = 0;
  this_ptr_01 = (CDog *)core_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base);
  (this_ptr_01->base).base.base.base.vtable._ub = &g_CDogVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_01->base).base.base.model,"blackDog.dfm");
  (this_ptr_01->base).base.base.collision_cylinder_radius = 0.5;
  (this_ptr_01->base).anim_speed_scale = 1.75;
  (this_ptr_01->base).base.base.base.is_transparent = 0;
  (this_ptr_01->base).fade_val = 1.0;
  *(uint *)&(this_ptr_01->base).base.base.base.field_0x2a8 = 0x3dcccccd;
  (this_ptr_01->base).walk_state_3_motion = 0;
  (this_ptr_01->base).idle_motion = 0;
  (this_ptr_01->base).walk_motion = 1;
  (this_ptr_01->base).run_motion = 2;
  (this_ptr_01->base).animation_state = 0;
  core_helldog_cpp_CDog_processStates_FUN_005abe90(this_ptr_01,0.0,0);
  fVar2 = _DAT_00600c50;
  this_ptr_00 = &(this_ptr_01->base).state_machine;
  (this_ptr_01->base).run_distance = 5.0;
  (this_ptr_01->base).attack_range = fVar2;
  core_muzzle_cpp_SStateMachine_addRefState_FUN_0059d6f0
            (this_ptr_00,"ChaseFoodComplete","Alert");
  core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
            (this_ptr_00,"ChaseComplete","MeleeAttack");
  core_muzzle_cpp_SStateMachine_setInitialState_FUN_0059d990(this_ptr_00,"Alert");
  pCVar3 = &(this_ptr_01->base).base.base.eye_glow_left_offset;
  core_muzzle_cpp_SStateMachine_reset_FUN_0059dc80(this_ptr_00);
  (this_ptr_01->base).head_bone = 0;
  (this_ptr_01->base).flinch_bone = -1;
  this_ptr_01->food = (CDemonActor *)0x0;
  this_ptr_01->eat_time = 5.0;
  this_ptr_01->food_scan_timer = 1.0;
  (this_ptr_01->base).base.base.collision_cylinder_radius = 1.5;
  (this_ptr_01->base).base.base.collision_cylinder_bottom = 1.0;
  (this_ptr_01->base).base.base.collision_cylinder_top = 3.0;
  (this_ptr_01->base).is_grabbable = 1;
  uStack_20 = 0xbe883127;
  uStack_1c = 0x3e000000;
  uStack_18 = 0x3f00cb29;
  if (pCVar3 != (CVector3f *)&stack0xffffffe0) {
    pCVar3->x = -0.266;
    (this_ptr_01->base).base.base.eye_glow_left_offset.y = 0.125;
    (this_ptr_01->base).base.base.eye_glow_left_offset.z = 0.5031;
  }
  pCVar3 = &(this_ptr_01->base).base.base.eye_glow_right_offset;
  uStack_40 = 0x3e000000;
  uStack_3c = 0x3f00cb29;
  uStack_44 = 0x3e883127;
  if (pCVar3 != (CVector3f *)&stack0xffffffbc) {
    pCVar3->x = 0.266;
    (this_ptr_01->base).base.base.eye_glow_right_offset.y = 0.125;
    (this_ptr_01->base).base.base.eye_glow_right_offset.z = 0.5031;
  }
  uStack_24 = 0;
  uStack_28 = 0x3fc90fdb;
  uStack_2c = 0;
  pCVar3 = &(this_ptr_01->base).base.base.eye_glow_left_angles;
  fStack_14 = 0.0;
  *(uint *)(&stack0xfffffff0 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar6 * -8);
  *(uint *)(&stack0xfffffff4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  if (pCVar3 != (CVector3f *)&stack0xffffffec) {
    pCVar3->x = fStack_14;
    (this_ptr_01->base).base.base.eye_glow_left_angles.y = unaff_EBP;
    (this_ptr_01->base).base.base.eye_glow_left_angles.z = unaff_EDI;
  }
  pCVar3 = &(this_ptr_01->base).base.base.eye_glow_right_angles;
  fStack_38 = 0.0;
  (&stack0xffffffcc)[(uint)bVar6 * 0xfffffffe] =
       (float)*(uint *)(&stack0xfffffffc + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0x00000000 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  if (pCVar3 != (CVector3f *)&stack0xffffffc8) {
    pCVar3->x = fStack_38;
    (this_ptr_01->base).base.base.eye_glow_right_angles.y = fStack_34;
    (this_ptr_01->base).base.base.eye_glow_right_angles.z = fStack_30;
  }
  pcVar4 = (char *)0x5f0d08;
  pcVar5 = (this_ptr_01->base).hit_sound;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "dogdeath0?.wav";
  pcVar5 = (this_ptr_01->base).death_sound;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = (char *)0x5f0d24;
  pcVar5 = (this_ptr_01->base).idle_sound;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  (this_ptr_01->base).idle_sound_interval = 7.0;
  (this_ptr_01->base).base.base.base.is_transparent = 1;
  (this_ptr_01->base).base.base.eye_glow_enabled = 0;
  this_ptr_01->death_effect_done = 0;
  return this_ptr_01;
}
