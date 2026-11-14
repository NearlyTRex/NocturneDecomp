// Name: core_charactr.cpp_FUN_004247f0
// Address: 004247f0
// Address Range: [[004247f0, 00424b4f]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_004247f0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_004247f0(CDemonActor *param_1)

{
  char *pcVar1;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CDeformableModel *this_ptr;
  CDemonActor *pCVar5;
  float fVar6;
  uint uVar7;
  
  iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if ((iVar4 != 0) || (param_1[0x62].platform_orientation_delta.y == -NAN)) {
    return;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                       ((CDeformableModelInstance *)(param_1 + 1));
  if (param_1[0x62].platform_orientation_delta.y == -NAN) {
    fVar6 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                             (this_ptr,&DAT_005ccca6,0);
    param_1[0x62].platform_orientation_delta.y = fVar6;
    if (fVar6 == -NAN) {
      return;
    }
    iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100(this_ptr,&DAT_005cccab,0)
    ;
    param_1[0x62].blood_effect_timer = iVar4;
    if (iVar4 == -1) {
      param_1[0x62].platform_orientation_delta.y = -NAN;
      return;
    }
    uVar7 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100(this_ptr,&DAT_005cccae,1)
    ;
    param_1[0x62].blood_effect_color = uVar7;
    iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100(this_ptr,&DAT_005cccb1,1)
    ;
    param_1[0x62].footstep_particle_count = iVar4;
    iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100(this_ptr,&DAT_005cccb4,1)
    ;
    *(int *)param_1[0x62].footstep_sound_code = iVar4;
    fVar6 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                             (this_ptr,"e1_left",0);
    param_1[0x62].platform_orientation_delta.z = fVar6;
    iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                      (this_ptr,"e2_left",0);
    param_1[0x62].is_renderable = iVar4;
    iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                      (this_ptr,"e3_left",0);
    param_1[0x62].is_transparent = iVar4;
    iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                      (this_ptr,"e4_left",0);
    param_1[0x62].collision_disabled = iVar4;
    iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                      (this_ptr,"e1_right",0);
    param_1[0x62].process_disabled = iVar4;
    iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                      (this_ptr,"e2_right",0);
    param_1[0x62].scale.x = iVar4;
    iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                      (this_ptr,"e3_right",0);
    param_1[0x62].scale.y = iVar4;
    iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                      (this_ptr,"e4_right",0);
    param_1[0x62].scale.z = iVar4;
  }
  pCVar5 = param_1;
  do {
    fVar6 = pCVar5[0x62].platform_orientation_delta.z;
    if (fVar6 != -NAN) {
      pcVar1 = param_1[0xd].create_event + (int)fVar6 * 4 + 0x58;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
    if (pCVar5[0x62].process_disabled != -1) {
      pcVar1 = param_1[0xd].create_event + pCVar5[0x62].process_disabled * 4 + 0x58;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
    pCVar3 = pCVar5 + 0x62;
    pCVar5 = (CDemonActor *)(pCVar5->actor_name + 4);
    pcVar1 = param_1[0xd].create_event + pCVar3->blood_effect_timer * 4 + 0x58;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
  } while (pCVar5 != (CDemonActor *)(param_1->actor_name + 0x10));
  fVar2 = (float)_DAT_01c2a370 * _DAT_005cccfe;
  fVar6 = param_1[0x62].platform_position_delta.y;
  param_1[0x62].platform_position_delta.z = param_1[0x62].platform_position_delta.z - fVar2;
  if (fVar6 == 1.4013e-45) {
    if (param_1[0x62].platform_position_delta.z <= 0.0) {
      fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(5.0,8.0);
      param_1[0x62].create_event[0x60] = '\0';
      param_1[0x62].create_event[0x61] = '\0';
      param_1[0x62].create_event[0x62] = '\0';
      param_1[0x62].create_event[99] = '\0';
      param_1[0x62].standing_platform = (CPlatform *)0x0;
      param_1[0x62].platform_position_delta.y = 0.0;
      param_1[0x62].platform_position_delta.z = fVar6;
    }
  }
  else if (param_1[0x62].platform_position_delta.z <= 0.0) {
    param_1[0x62].standing_platform = (CPlatform *)0x3;
    param_1[0x62].platform_position_delta.y = 1.4013e-45;
    param_1[0x62].platform_position_delta.z = 0.05;
    param_1[0x62].create_event[0x60] = '\x03';
    param_1[0x62].create_event[0x61] = '\0';
    param_1[0x62].create_event[0x62] = '\0';
    param_1[0x62].create_event[99] = '\0';
  }
  param_1[0x62].platform_orientation_delta.x = param_1[0x62].platform_orientation_delta.x - fVar2;
  if (param_1[0x62].platform_orientation_delta.x <= 0.0) {
    pCVar5 = g_CScriptPtr->who_is_speaking;
    if (param_1 == pCVar5) {
      pCVar5[0x62].platform_orientation_delta.x = 0.15;
      uVar7 = rand();
      pCVar5[0x62].platform_position_delta.x = (float)(uVar7 & 3);
    }
    else {
      param_1[0x62].platform_position_delta.x = 0.0;
      param_1[0x62].platform_orientation_delta.x = 0.0;
    }
  }
  if (*(int *)(param_1[0x62].footstep_sound_code +
              *(int *)(param_1[0x62].create_event + 0x60) * 4 + -0x2c) != -1) {
    core_charactr_cpp_FUN_004246e0
              (this_ptr,param_1[0x62].platform_orientation_delta.y,
               *(int *)(param_1[0x62].footstep_sound_code +
                       *(int *)(param_1[0x62].create_event + 0x60) * 4 + -0x2c));
  }
  if (*(int *)(param_1[0x62].footstep_sound_code + (int)param_1[0x62].standing_platform * 4 + -0x1c)
      != -1) {
    core_charactr_cpp_FUN_004246e0
              (this_ptr,param_1[0x62].platform_orientation_delta.y,
               *(int *)(param_1[0x62].footstep_sound_code +
                       (int)param_1[0x62].standing_platform * 4 + -0x1c));
  }
  core_charactr_cpp_FUN_004246e0
            (this_ptr,param_1[0x62].platform_orientation_delta.y,
             *(uint *)
              (param_1[0x62].footstep_sound_code +
              (int)param_1[0x62].platform_position_delta.x * 4 + -0xc));
  return;
}
