// Name: core_styldemo.cpp_FUN_0059e130
// Address: 0059e130
// Address Range: [[0059e130, 0059e588]]
// Convention: unknown
// Signature: void core_styldemo_cpp_FUN_0059e130(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_styldemo_cpp_FUN_0059e130(CEnemy *param_1)

{
  byte *puVar1;
  char cVar2;
  CSkeleton *this_ptr;
  SMotion *pSVar3;
  int iVar4;
  CMotionList *this_ptr_00;
  char *pcVar5;
  char *pcVar6;
  
  if (*(int *)&param_1->field_0x3268 == 0) {
    *(uint *)&param_1->field_0xce5c = 0x41a00000;
    *(uint *)&param_1->field_0xce60 = 0x41a00000;
    *(uint *)&param_1->field_0x2538 = 0x437a0000;
  }
  puVar1 = &param_1->field_0x158;
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)puVar1);
  core_charactr_cpp_FUN_0042f280(2);
  core_charactr_cpp_FUN_0042f280(4);
  core_charactr_cpp_FUN_0042f280(3);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       ((CDeformableModelInstance *)puVar1);
  _DAT_02d24cf4 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 R Hand",1);
  _DAT_02d24cf8 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 L Hand",1);
  _DAT_02d24d04 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Head",1);
  _DAT_02d24cfc = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Spine",1);
  _DAT_02d24d00 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Spine2",1);
  *(int *)&param_1->field_0x25a8 = _DAT_02d24cf8;
  *(int *)&param_1->field_0x2620 = _DAT_02d24cf4;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)puVar1);
  if (*(int *)(pSVar3 + 0x24) != 6) {
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)puVar1);
    if (*(int *)(pSVar3 + 0x24) != 0xf) {
      *(uint *)&param_1->field_0x2540 = 2;
      goto LAB_0059e234;
    }
  }
  *(uint *)&param_1->field_0x2540 = 0;
LAB_0059e234:
  if (*(int *)&param_1[1].field_0x8 == 0) {
    iVar4 = core_actor_cpp_createActorByName_FUN_0040c4f0("CStyler");
    *(int *)&param_1[1].field_0xc = iVar4;
    core_skeleton_cpp_FUN_0054eae0(iVar4 + 0x158,"bwp_stylersub.dfm");
    pcVar5 = "Elizabeth-Demon";
    pcVar6 = *(char **)&param_1[1].field_0xc;
    do {
      cVar2 = *pcVar5;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    iVar4 = *(int *)&param_1[1].field_0xc;
    *(uint *)(iVar4 + 0x20) = *(uint *)&param_1->field_0x20;
    *(uint *)(iVar4 + 0x24) = *(uint *)&param_1->field_0x24;
    *(uint *)(iVar4 + 0x28) = *(uint *)&param_1->field_0x28;
    *(uint *)(iVar4 + 0x2c) = *(uint *)&param_1->field_0x2c;
    iVar4 = *(int *)&param_1[1].field_0xc;
    if ((uint *)(iVar4 + 0x30) != (uint *)&param_1->field_0x30) {
      *(uint *)(iVar4 + 0x30) = *(uint *)&param_1->field_0x30;
      *(uint *)(iVar4 + 0x34) = *(uint *)&param_1->field_0x34;
      *(uint *)(iVar4 + 0x38) = *(uint *)&param_1->field_0x38;
    }
    *(uint *)(*(int *)&param_1[1].field_0xc + 0x27b8) = 0x3f800000;
    *(uint *)(*(int *)&param_1[1].field_0xc + 0x47b90) = 1;
    (*(code *)**(uint **)(*(int *)&param_1[1].field_0xc + 0x154))
              (*(int *)&param_1[1].field_0xc);
    iVar4 = 1;
    pcVar6 = "getUpDustOff";
    this_ptr_00 = core_motion_cpp_FUN_004fc310
                            ((CMotionController *)(*(int *)&param_1[1].field_0xc + 0x158));
    iVar4 = core_motion_cpp_FUN_004fb9c0(this_ptr_00,pcVar6,iVar4);
    core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
              ((CMotionController *)(*(int *)&param_1[1].field_0xc + 0x158),iVar4,0.0);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
              ((CDeformableModelInstance *)(*(int *)&param_1[1].field_0xc + 0x158));
    core_skeleton_cpp_FUN_0054dd10
              ((CDeformableModelInstance *)(*(int *)&param_1[1].field_0xc + 0x158));
    puVar1 = &param_1->field_0x158;
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
              ((CDeformableModelInstance *)puVar1);
    core_skeleton_cpp_FUN_0054dd10((CDeformableModelInstance *)puVar1);
    core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)puVar1);
  }
  puVar1 = &param_1[1].field_0x10;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
            ((CMorph *)puVar1,0,(CDeformableModelInstance *)&param_1->field_0x158);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
            ((CMorph *)puVar1,1,(CDeformableModelInstance *)(*(int *)&param_1[1].field_0xc + 0x158))
  ;
  core_morph_cpp_CMorph_getReady_FUN_004fac10((CMorph *)puVar1);
  *(uint *)&param_1[1].field_0xc44 = 0;
  core_skeleton_cpp_FUN_0054c110((CDeformableModelInstance *)&param_1->field_0x158);
  core_skeleton_cpp_FUN_0054c110
            ((CDeformableModelInstance *)(*(int *)&param_1[1].field_0xc + 0x158));
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  *(uint *)&param_1->field_0xcdcc = 0x3f800000;
  iVar4 = core_actor_cpp_createActorByName_FUN_0040c4f0("CZombie");
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)(iVar4 + 0x158));
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
