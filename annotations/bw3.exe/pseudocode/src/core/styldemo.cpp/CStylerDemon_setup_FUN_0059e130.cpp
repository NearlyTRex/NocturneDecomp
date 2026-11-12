// Name: core_styldemo.cpp_CStylerDemon_setup_FUN_0059e130
// Address: 0059e130
// Address Range: [[0059e130, 0059e588]]
// Convention: __cdecl
// Signature: void __cdecl core_styldemo_cpp_CStylerDemon_setup_FUN_0059e130(CStylerDemon *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_styldemo_cpp_CStylerDemon_setup_FUN_0059e130(CStylerDemon *this_ptr)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *pCVar2;
  CMorph *this_ptr_00;
  char cVar3;
  CSkeleton *this_ptr_01;
  SMotion *pSVar4;
  CDemonActor *pCVar5;
  CMotionList *this_ptr_02;
  char *pcVar6;
  int iVar7;
  
  if ((this_ptr->base).base.been_damaged == 0) {
    (this_ptr->base).attack_damage = 20.0;
    (this_ptr->base).pain_threshold = 20.0;
    (this_ptr->base).base.hit_points = 250.0;
  }
  pCVar2 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(pCVar2);
  core_charactr_cpp_FUN_0042f280(2);
  core_charactr_cpp_FUN_0042f280(4);
  core_charactr_cpp_FUN_0042f280(3);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar2);
  _DAT_02d24cf4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Hand",1);
  _DAT_02d24cf8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Hand",1);
  _DAT_02d24d04 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Head",1);
  _DAT_02d24cfc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine",1);
  _DAT_02d24d00 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine2",1);
  (this_ptr->base).base.carry_hands[0].bone_index = _DAT_02d24cf8;
  (this_ptr->base).base.carry_hands[1].bone_index = _DAT_02d24cf4;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base);
  if (pSVar4->state_index != 6) {
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base);
    if (pSVar4->state_index != 0xf) {
      (this_ptr->base).base.health_bar_mode = HEALTH_BAR_ALWAYS;
      goto LAB_0059e234;
    }
  }
  (this_ptr->base).base.health_bar_mode = HEALTH_BAR_NONE;
LAB_0059e234:
  if (this_ptr->is_morph_partner == 0) {
    pCVar5 = core_actor_cpp_createActorByName_FUN_0040c4f0("CStyler");
    this_ptr->styler = pCVar5;
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
              ((CDeformableModelInstance *)(pCVar5 + 1),"bwp_stylersub.dfm");
    pcVar6 = "Elizabeth-Demon";
    pCVar5 = this_ptr->styler;
    do {
      cVar3 = *pcVar6;
      pCVar5->actor_name[0] = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pCVar5->actor_name[1] = cVar3;
      pCVar5 = (CDemonActor *)(pCVar5->actor_name + 2);
    } while (cVar3 != '\0');
    pCVar5 = this_ptr->styler;
    (pCVar5->location).position.x = (this_ptr->base).base.base.location.position.x;
    (pCVar5->location).position.y = (this_ptr->base).base.base.location.position.y;
    (pCVar5->location).position.z = (this_ptr->base).base.base.location.position.z;
    (pCVar5->location).area_id = (this_ptr->base).base.base.location.area_id;
    pCVar5 = this_ptr->styler;
    pUVar1 = &(this_ptr->base).base.base.orient;
    if (&pCVar5->orient != pUVar1) {
      (pCVar5->orient).vec.x = (pUVar1->vec).x;
      (pCVar5->orient).vec.y = (this_ptr->base).base.base.orient.vec.y;
      (pCVar5->orient).vec.z = (this_ptr->base).base.base.orient.vec.z;
    }
    pCVar5 = this_ptr->styler;
    pCVar5[0x1d].create_event[0x48] = '\0';
    pCVar5[0x1d].create_event[0x49] = '\0';
    pCVar5[0x1d].create_event[0x4a] = -0x80;
    pCVar5[0x1d].create_event[0x4b] = '?';
    pCVar5 = this_ptr->styler;
    pCVar5[0x356].actor_name[0] = '\x01';
    pCVar5[0x356].actor_name[1] = '\0';
    pCVar5[0x356].actor_name[2] = '\0';
    pCVar5[0x356].actor_name[3] = '\0';
    (*((this_ptr->styler->vtable)._ub)->setup)(this_ptr->styler);
    iVar7 = 1;
    pcVar6 = "getUpDustOff";
    this_ptr_02 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                            ((CMotionController *)(this_ptr->styler + 1));
    iVar7 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(this_ptr_02,pcVar6,iVar7);
    core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
              ((CMotionController *)(this_ptr->styler + 1),iVar7,0.0);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
              ((CDeformableModelInstance *)(this_ptr->styler + 1));
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
              ((CDeformableModelInstance *)(this_ptr->styler + 1));
    pCVar2 = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(pCVar2);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(pCVar2);
    core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(pCVar2);
  }
  pCVar2 = &(this_ptr->base).base.model;
  this_ptr_00 = &this_ptr->morph;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(this_ptr_00,0,pCVar2);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
            (this_ptr_00,1,(CDeformableModelInstance *)(this_ptr->styler + 1));
  core_morph_cpp_CMorph_getReady_FUN_004fac10(this_ptr_00);
  this_ptr->morph_time = 0.0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110(pCVar2);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110
            ((CDeformableModelInstance *)(this_ptr->styler + 1));
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  (this_ptr->base).speed = 1.0;
  pCVar5 = core_actor_cpp_createActorByName_FUN_0040c4f0("CZombie");
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
            ((CDeformableModelInstance *)(pCVar5 + 1));
  sound_sndmain_cpp_FUN_00556230("stydem_stand.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_walk.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_run.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_attack.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_damage.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_die.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_stand_fly.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_walk_fly.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_run_fly.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_attack_fly.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_warning_fly_spell.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_fly_spell.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_damage_fly.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_die_fly.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_takeoff.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_land.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_warning_spell_1.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_spell_1.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_warning_spell_2.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_spell_2.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_warning_spell_3.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_spell_3.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_raise_zombie.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_transforming.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_taunt1.wav");
  sound_sndmain_cpp_FUN_00556230("stydem_taunt2.wav");
  return;
}
