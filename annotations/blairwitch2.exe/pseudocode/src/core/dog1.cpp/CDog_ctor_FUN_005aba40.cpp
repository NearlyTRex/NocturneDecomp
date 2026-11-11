// Name: core_dog1.cpp_CDog_ctor_FUN_005aba40
// Address: 005aba40
// Address Range: [[005aba40, 005abd2e]]
// Convention: unknown
// Signature: CDog * core_dog1_cpp_CDog_ctor_FUN_005aba40(CDog *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDog * core_dog1_cpp_CDog_ctor_FUN_005aba40(CDog *this_ptr)

{
  SStateMachine *pSVar1;
  char cVar2;
  float fVar3;
  CDog *this_ptr_00;
  CVector3f *pCVar4;
  float unaff_EBP;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  float afStackY_1024 [1009];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  this_ptr_00 = (CDog *)unkafter_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base);
  (this_ptr_00->base).base.base.base.vtable._ub = &g_CDogVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_00->base).base.base.model,"blackDog.dfm");
  (this_ptr_00->base).base.base.collision_cylinder_radius = 0.5;
  (this_ptr_00->base).anim_speed_scale = 1.75;
  (this_ptr_00->base).base.base.base.is_transparent = 0;
  (this_ptr_00->base).fade_val = 1.0;
  *(uint *)&(this_ptr_00->base).base.base.base.field_0x2a8 = 0x3dcccccd;
  (this_ptr_00->base).walk_state_3_motion = 0;
  (this_ptr_00->base).idle_motion = 0;
  (this_ptr_00->base).walk_motion = 1;
  (this_ptr_00->base).run_motion = 2;
  (this_ptr_00->base).animation_state = 0;
  core_dog1_cpp_CDog_processStates_FUN_005abe90(this_ptr_00,0.0,0);
  fVar3 = _DAT_00600c50;
  pSVar1 = &(this_ptr_00->base).state_machine;
  (this_ptr_00->base).run_distance = 5.0;
  (this_ptr_00->base).attack_range = fVar3;
  unkaddr_0059d350_cpp_FUN_0059d6f0(pSVar1,"ChaseFoodComplete","Alert");
  unkaddr_0059d350_cpp_FUN_0059d7f0(pSVar1,"ChaseComplete","MeleeAttack");
  unkaddr_0059d350_cpp_FUN_0059d990(pSVar1,"Alert");
  pCVar4 = &(this_ptr_00->base).base.base.eye_glow_left_offset;
  unkaddr_0059d350_cpp_FUN_0059dc80(pSVar1);
  (this_ptr_00->base).head_bone = 0;
  (this_ptr_00->base).flinch_bone = -1;
  this_ptr_00->food = (CDemonActor *)0x0;
  this_ptr_00->eat_time = 5.0;
  this_ptr_00->food_scan_timer = 1.0;
  (this_ptr_00->base).base.base.collision_cylinder_radius = 1.5;
  (this_ptr_00->base).base.base.collision_cylinder_bottom = 1.0;
  (this_ptr_00->base).base.base.collision_cylinder_top = 3.0;
  (this_ptr_00->base).is_grabbable = 1;
  uStack_24 = 0xbe883127;
  uStack_20 = 0x3e000000;
  uStack_1c = 0x3f00cb29;
  if (pCVar4 != (CVector3f *)&stack0xffffffdc) {
    pCVar4->x = -0.266;
    (this_ptr_00->base).base.base.eye_glow_left_offset.y = 0.125;
    (this_ptr_00->base).base.base.eye_glow_left_offset.z = 0.5031;
  }
  pCVar4 = &(this_ptr_00->base).base.base.eye_glow_right_offset;
  uStack_44 = 0x3e000000;
  uStack_40 = 0x3f00cb29;
  uStack_48 = 0x3e883127;
  if (pCVar4 != (CVector3f *)&stack0xffffffb8) {
    pCVar4->x = 0.266;
    (this_ptr_00->base).base.base.eye_glow_right_offset.y = 0.125;
    (this_ptr_00->base).base.base.eye_glow_right_offset.z = 0.5031;
  }
  uStack_28 = 0;
  uStack_2c = 0x3fc90fdb;
  uStack_30 = 0;
  pCVar4 = &(this_ptr_00->base).base.base.eye_glow_left_angles;
  fStack_18 = 0.0;
  (&stack0xffffffec)[(uint)bVar7 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffd4 + (uint)bVar7 * -8);
  *(uint *)(&stack0xfffffff0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if (pCVar4 != (CVector3f *)&stack0xffffffe8) {
    pCVar4->x = fStack_18;
    (this_ptr_00->base).base.base.eye_glow_left_angles.y = fStack_14;
    (this_ptr_00->base).base.base.eye_glow_left_angles.z = unaff_EBP;
  }
  pCVar4 = &(this_ptr_00->base).base.base.eye_glow_right_angles;
  fStack_3c = 0.0;
  (&stack0xffffffc8)[(uint)bVar7 * 0xfffffffe] =
       (float)*(uint *)(&stack0xfffffff8 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xfffffffc + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if (pCVar4 != (CVector3f *)&stack0xffffffc4) {
    pCVar4->x = fStack_3c;
    (this_ptr_00->base).base.base.eye_glow_right_angles.y = fStack_38;
    (this_ptr_00->base).base.base.eye_glow_right_angles.z = fStack_34;
  }
  pcVar5 = (char *)0x5f0d08;
  pcVar6 = (this_ptr_00->base).hit_sound;
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  pcVar5 = "dogdeath0?.wav";
  pcVar6 = (this_ptr_00->base).death_sound;
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  pcVar5 = (char *)0x5f0d24;
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
  (this_ptr_00->base).idle_sound_interval = 7.0;
  (this_ptr_00->base).base.base.base.is_transparent = 1;
  (this_ptr_00->base).base.base.eye_glow_enabled = 0;
  this_ptr_00->death_effect_done = 0;
  return this_ptr_00;
}
