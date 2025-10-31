// Name: core_larva.cpp_FUN_00503080
// Address: 00503080
// Address Range: [[00503080, 0050334d] [005034b7, 00503676] [0050368b, 005038ec] [0050393e, 00503951]]
// Convention: unknown
// Signature: undefined core_larva.cpp_FUN_00503080()
// Globals:
//   undefined4 DAT_00002424
//   TerminatedCString s_s_confused_while_walking_00630ef5
//   TerminatedCString s_s_gave_up_chase_I_m_conf_00630f1f
//   double DOUBLE_00630f53 = 0.392699081687500
//   double DOUBLE_00630f5b = 3
//   double DOUBLE_00630f63 = 12
//   double DOUBLE_00630f6b = -0.200000000000000
//   double DOUBLE_00630f73 = 32
//   float FLOAT_00630f7b = 2
//   undefined4 DAT_0066071c
//   CConsole* g_CConsolePtr = 0083b1a4
//   CGore* g_CGorePtr = 02d83364
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CConsole g_ConsolePtr
//   undefined4 DAT_02d7a7b8
//   CGore g_CGoreInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_FUN_0040cd70
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_004297e0
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_enemy.cpp_CEnemy_FUN_004a9fd0
//   core_gore.cpp_FUN_004ede30
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0050389e) */
/* Signature: undefined1 actors_enemy_larva.cpp_FUN_00503080(undefined4 param_1, undefined4 param_2)
    */

void core_larva_cpp_FUN_00503080(void)

{
  CLocation *pCVar1;
  char *pcVar2;
  char *pcVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  CCharacter *pCVar8;
  int iVar9;
  CEnemy *pCVar10;
  int extraout_EAX;
  int extraout_EAX_00;
  CVector3f *pCVar11;
  undefined4 uVar12;
  BADSPACEBASE *in_ESP;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 extraout_ST1;
  float10 extraout_ST2;
  float10 fVar16;
  unkbyte10 extraout_ST3;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  CVector3f local_128;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  float local_104;
  float local_100;
  float local_fc;
  CVector3f local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  CVector3f local_a4;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  CVector3f local_80 [2];
  double local_68;
  double local_60;
  float local_54;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  uint local_30;
  float local_2c;
  uint local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar9 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base_character);
  if (iVar9 != 0) {
    pCVar8 = &in_stack_00000004->base_character;
    (pCVar8->model).padding_0x0[0x225c] = '\0';
    (pCVar8->model).padding_0x0[0x225d] = '\0';
    (pCVar8->model).padding_0x0[0x225e] = '\0';
    (pCVar8->model).padding_0x0[0x225f] = '\0';
    pCVar1 = &(in_stack_00000004->base_character).base_actor.location;
    *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258) =
         *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
    *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2254) =
         *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258);
    local_18 = in_stack_00000008 * in_stack_00000004->speed;
    while (0.0 < local_18) {
      iVar9 = core_motion_cpp_CMotionController_advance_FUN_0052d610();
      if ((iVar9 == 100) && (iVar9 = *(int *)(in_stack_00000004->field6_0xbe38 + 4), iVar9 != 0)) {
        local_d4 = *(float *)(iVar9 + 0x20) - (pCVar1->position).x;
        local_d0 = *(float *)(iVar9 + 0x24) -
                   (in_stack_00000004->base_character).base_actor.location.position.y;
        local_cc = *(float *)(iVar9 + 0x28) -
                   (in_stack_00000004->base_character).base_actor.location.position.z;
        if (&local_ec != &local_d4) {
          local_ec = local_d4;
          local_e8 = local_d0;
          local_e4 = local_cc;
        }
        local_e8 = local_e8 + FLOAT_00630f7b;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
        local_ec = local_14 + local_ec;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
        fsin((float10)DOUBLE_00630f83);
        fptan((float10)DOUBLE_00630f8b);
        fVar15 = (float10)local_e4;
        local_e4 = (float)((float10)local_14 + fVar15);
        fVar15 = crt_math_c_atan2_FUN_006013b1((float10)local_ec,(float10)local_14 + fVar15);
        fVar4 = SQRT(local_ec * local_ec + local_e4 * local_e4);
        fVar13 = (float10)fcos(extraout_ST3);
        fVar14 = (float10)fsin(fVar15);
        fVar15 = (float10)fcos(fVar15);
        local_60 = (double)fVar4;
        local_24 = fVar4 * (float)DOUBLE_00630f73 * fVar4;
        fVar16 = fVar13 * (float10)FLOAT_00630f7b * fVar13 *
                 (extraout_ST1 * (float10)fVar4 - (float10)local_e8);
        local_ac = (float)-extraout_ST2;
        local_20 = (float)fVar16;
        local_b0 = (float)(fVar14 * fVar13);
        local_a8 = (float)(fVar15 * fVar13);
        if ((float10)0 < fVar16) {
          local_1c = SQRT(local_24 / local_20);
          local_8c = local_b0 * local_1c;
          local_88 = local_ac * local_1c;
          local_84 = local_a8 * local_1c;
          if (&local_b0 != &local_8c) {
            local_b0 = local_8c;
            local_ac = local_88;
            local_a8 = local_84;
          }
          local_114 = 0x3f800000;
          local_11c = 0;
          local_118 = 0x3f000000;
          core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)in_stack_00000004);
          core_fire_cpp_CFireEffect_FUN_004c7db0(g_CFireEffectPtr);
          (*((in_stack_00000004->base_character).base_actor.metadata.vtable)->playSound)
                    ((CDemonActor *)in_stack_00000004,"larva-blow1.wav");
        }
      }
    }
    fVar4 = in_stack_00000004->speed;
    fVar7 = (float)DOUBLE_00630f53;
    fVar6 = (float)DOUBLE_00630f5b;
    *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
         *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
         in_stack_00000008 * fVar7 * fVar4 * fVar6;
    iVar9 = core_motion_cpp_CMotionController_FUN_0052dab0();
    local_30 = *(uint *)(iVar9 + 0x24);
    local_28 = local_30;
    iVar9 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base_character);
    if (iVar9 == 0) {
      if (local_28 == 0) {
        (*(in_stack_00000004->base_character).base_actor.metadata.vtable[1].
          getAllowedMeleeAttackTypes)((CDemonActor *)in_stack_00000004);
        iVar9 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
        if (iVar9 == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
          if (extraout_EAX != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
          }
        }
        else {
          local_128.x = *(float *)(iVar9 + 0x20) - (pCVar1->position).x;
          local_128.y = *(float *)(iVar9 + 0x24) -
                        (in_stack_00000004->base_character).base_actor.location.position.y;
          local_128.z = *(float *)(iVar9 + 0x28) -
                        (in_stack_00000004->base_character).base_actor.location.position.z;
          local_54 = local_128.z * local_128.z +
                     local_128.x * local_128.x + local_128.y * local_128.y;
          local_2c = (float)(((int)local_54 >> 1) + DAT_02d7a7b8);
          core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(local_80,&local_128);
          local_14 = core_actor_cpp_FUN_0040cd70
                               (local_80[0].y -
                                (in_stack_00000004->base_character).base_actor.orient.bank);
          if (((float)DOUBLE_00630f53 <= ABS(local_14)) || ((float)DOUBLE_00630f63 < local_2c)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
          }
          else if (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
            local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,30.0);
            *(float *)in_stack_00000004->field6_0xbe38 = local_14;
          }
        }
      }
      else if (local_28 < 2) {
        (*(in_stack_00000004->base_character).base_actor.metadata.vtable[1].
          getAllowedMeleeAttackTypes)((CDemonActor *)in_stack_00000004);
        uVar12 = DAT_0066071c;
        if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
          if (extraout_EAX_00 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
          }
        }
        else {
          local_38 = DAT_0066071c;
          pCVar8 = &in_stack_00000004->base_character;
          (pCVar8->model).padding_0x0[0x225c] = '\0';
          (pCVar8->model).padding_0x0[0x225d] = '\0';
          (pCVar8->model).padding_0x0[0x225e] = '\0';
          (pCVar8->model).padding_0x0[0x225f] = '\0';
          *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258) =
               *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
          *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2254) =
               *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258);
          local_110 = 0;
          local_10c = 0;
          local_108 = uVar12;
          (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
          iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            (&in_stack_00000004->base_character);
          if (iVar9 < 0) {
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n");
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
          }
          if (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0) {
            iVar9 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
            local_f8.x = *(float *)(iVar9 + 0x20) -
                         (in_stack_00000004->base_character).base_actor.location.position.x;
            local_f8.y = *(float *)(iVar9 + 0x24) -
                         (in_stack_00000004->base_character).base_actor.location.position.y;
            local_f8.z = *(float *)(iVar9 + 0x28) -
                         (in_stack_00000004->base_character).base_actor.location.position.z;
            local_44 = local_f8.z * local_f8.z + local_f8.x * local_f8.x + local_f8.y * local_f8.y;
            local_40 = (float)(((int)local_44 >> 1) + DAT_02d7a7b8);
            if (local_40 < in_stack_00000004->guard_distance) {
              pCVar11 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                  (&local_a4,&local_f8);
              if (&local_f8 != pCVar11) {
                local_f8.x = pCVar11->x;
                local_f8.y = pCVar11->y;
                local_f8.z = pCVar11->z;
              }
              local_3c = core_actor_cpp_FUN_0040cd70(local_f8.y);
              local_14 = local_3c;
              local_14 = core_actor_cpp_FUN_0040cd70
                                   ((in_stack_00000004->base_character).base_actor.orient.bank);
              local_14 = core_actor_cpp_FUN_0040cd70(local_3c - local_14);
              if (ABS(local_14) < (float)DOUBLE_00630f53) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
                in_stack_00000004->field6_0xbe38[0] = '\0';
                in_stack_00000004->field6_0xbe38[1] = '\0';
                in_stack_00000004->field6_0xbe38[2] = -0x40;
                in_stack_00000004->field6_0xbe38[3] = '@';
              }
            }
          }
        }
      }
      else if (((local_28 == 5) && (in_stack_00000004->pool_me == 0)) &&
              ((in_stack_00000004->base_character).base_actor.field11_0xdc == 0)) {
        core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20();
        core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)in_stack_00000004);
        core_gore_cpp_FUN_004ede30();
        in_stack_00000004->pool_me = 1;
      }
    }
    else {
      uVar5 = *(uint *)((in_stack_00000004->base_character).field11_0x25a0 + 0x10);
      if (((uVar5 < 2) || (uVar5 < 3)) || (uVar5 != 3)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
      }
      pCVar8 = &in_stack_00000004->base_character;
      (pCVar8->model).padding_0x0[0x225c] = '\0';
      (pCVar8->model).padding_0x0[0x225d] = '\0';
      (pCVar8->model).padding_0x0[0x225e] = '\0';
      (pCVar8->model).padding_0x0[0x225f] = '\0';
      *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258) =
           *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
      *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2254) =
           *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258);
    }
    if (0.0 < *(float *)in_stack_00000004->field6_0xbe38) {
      *(float *)in_stack_00000004->field6_0xbe38 =
           *(float *)in_stack_00000004->field6_0xbe38 - in_stack_00000008;
    }
    if (local_30 == 1) {
      iVar9 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
      if (iVar9 == 0) {
        fVar15 = (float10)1;
        fVar13 = (float10)1.4426950408889634 *
                 (float10)0.6931471805599453 *
                 (float10)(in_stack_00000004->base_character).size_scale * (float10)DOUBLE_00630f6b;
        fVar14 = (float10)f2xm1(fVar13 - (fVar13 / fVar15) * fVar15);
        fVar15 = (float10)fscale(fVar14 + fVar15,fVar13);
        local_68 = (double)fVar15;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.99,1.01);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&stack0xfffffe10,"slime.wav @%f *%f",
                   (double)(in_stack_00000004->base_character).size_scale,
                   (double)(local_14 * (float)local_68));
        uVar12 = (*((in_stack_00000004->base_character).base_actor.metadata.vtable)->
                   playAmbientSound)((CDemonActor *)in_stack_00000004,&stack0xfffffe10);
        *(undefined4 *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) = uVar12;
      }
    }
    else {
      sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
    }
    iVar9 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base_character);
    if (iVar9 != 0) {
      if ((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) &&
         (pCVar10 = (CEnemy *)
                    (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                                0x108))(), pCVar10 == in_stack_00000004)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004->field6_0xbe38 + 4));
      }
      *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
           *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
           in_stack_00000008 * (float)DOUBLE_00630f73;
      local_104 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
                  in_stack_00000008;
      local_100 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
                  in_stack_00000008;
      pcVar2 = (in_stack_00000004->base_character).field2_0x240c + 0x10;
      local_fc = in_stack_00000008 *
                 *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
      pcVar3 = (in_stack_00000004->base_character).model.padding_0x0 + 0x2254;
      local_98 = local_104 + *(float *)pcVar2;
      local_94 = local_100 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
      local_90 = local_fc + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
      local_bc = local_98 + *(float *)pcVar3;
      local_b8 = local_94 +
                 *(float *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258);
      local_b4 = local_90 +
                 *(float *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
      (in_stack_00000004->base_character).field2_0x240c[0x18] = '\0';
      (in_stack_00000004->base_character).field2_0x240c[0x19] = '\0';
      (in_stack_00000004->base_character).field2_0x240c[0x1a] = '\0';
      (in_stack_00000004->base_character).field2_0x240c[0x1b] = '\0';
      *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x14) =
           *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
      *(float *)pcVar2 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
      pCVar8 = &in_stack_00000004->base_character;
      (pCVar8->model).padding_0x0[0x225c] = '\0';
      (pCVar8->model).padding_0x0[0x225d] = '\0';
      (pCVar8->model).padding_0x0[0x225e] = '\0';
      (pCVar8->model).padding_0x0[0x225f] = '\0';
      fVar4 = *(float *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
      *(float *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258) = fVar4;
      *(float *)pcVar3 = fVar4;
      core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
    }
    core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base_character);
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059e020();
    core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character)
    ;
  }
  return;
}


// Assembly code:
// 00503080: PUSH EBX
//   Label: core_larva.cpp_FUN_00503080
// 00503081: PUSH ESI
// 00503082: PUSH EDI
// 00503083: PUSH EBP
// 00503084: MOV EBP,ESP
// 00503086: SUB ESP,0x1e0
// 0050308c: SUB EBP,0x7a
// 0050308f: MOV EBX,dword ptr [EBP + 0x8e]
// 00503095: PUSH dword ptr [EBP + 0x92]
// 0050309b: PUSH EBX
// 0050309c: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 005030a1: ADD ESP,0x8
// 005030a4: TEST EAX,EAX
// 005030a6: JZ 0x005032e7
//   XREF to: 005032e7 (CONDITIONAL_JUMP)
// 005030ac: LEA EAX,[EBX + 0x23ac]
// 005030b2: FLD float ptr [EBP + 0x92]
// 005030b8: MOV dword ptr [EAX + 0x8],0x0
// 005030bf: LEA ESI,[EBX + 0x20]
// 005030c2: MOV EDX,dword ptr [EAX + 0x8]
// 005030c5: MOV dword ptr [EAX + 0x4],EDX
// 005030c8: MOV EDX,dword ptr [EAX + 0x4]
// 005030cb: MOV dword ptr [EAX],EDX
// 005030cd: FMUL float ptr [EBX + 0xbe24]
// 005030d3: LEA EDI,[EBX + 0x158]
// 005030d9: FSTP float ptr [EBP + 0x72]
// 005030dc: FLD float ptr [EBP + 0x72]
//   Label: LAB_005030dc
// 005030df: FLDZ
// 005030e1: FCOMPP
// 005030e3: FNSTSW AX
// 005030e5: SAHF
// 005030e6: JC 0x005034b7
//   XREF to: 005034b7 (CONDITIONAL_JUMP)
// 005030ec: FLD float ptr [EBX + 0xbe24]
// 005030f2: FLD float ptr [EBP + 0x92]
// 005030f8: FMUL double ptr [0x00630f53]
//   XREF to: 00630f53 (READ)
// 005030fe: FMULP
// 00503100: FMUL double ptr [0x00630f5b]
//   XREF to: 00630f5b (READ)
// 00503106: FLD float ptr [EBX + 0x23b4]
// 0050310c: PUSH EDI
// 0050310d: FSTP float ptr [EBX + 0x2434]
// 00503113: FSTP float ptr [EBX + 0x2438]
// 00503119: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0050311e: ADD ESP,0x4
// 00503121: PUSH dword ptr [EBP + 0x92]
// 00503127: MOV EAX,dword ptr [EAX + 0x24]
// 0050312a: PUSH EBX
// 0050312b: MOV dword ptr [EBP + 0x62],EAX
// 0050312e: MOV dword ptr [EBP + 0x5a],EAX
// 00503131: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 00503136: ADD ESP,0x8
// 00503139: TEST EAX,EAX
// 0050313b: JZ 0x0050388e
//   XREF to: 0050388e (CONDITIONAL_JUMP)
// 00503141: MOV EAX,dword ptr [EBX + 0x25b0]
// 00503147: CMP EAX,0x2
// 0050314a: JNC 0x005034f6
//   XREF to: 005034f6 (CONDITIONAL_JUMP)
// 00503150: CMP EAX,0x1
// 00503153: JNZ 0x00503501
//   XREF to: 00503501 (CONDITIONAL_JUMP)
// 00503159: PUSH 0x1
//   Label: LAB_00503159
// 0050315b: PUSH 0x1
// 0050315d: LEA EAX,[EBX + 0x158]
//   Label: LAB_0050315d
// 00503163: PUSH EAX
// 00503164: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00503169: ADD ESP,0xc
//   Label: LAB_00503169
// 0050316c: LEA EAX,[EBX + 0x23ac]
// 00503172: MOV dword ptr [EAX + 0x8],0x0
// 00503179: MOV EDX,dword ptr [EAX + 0x8]
// 0050317c: MOV dword ptr [EAX + 0x4],EDX
// 0050317f: MOV EDX,dword ptr [EAX + 0x4]
// 00503182: MOV dword ptr [EAX],EDX
// 00503184: FLD float ptr [EBX + 0xbe38]
//   Label: LAB_00503184
// 0050318a: FLDZ
// 0050318c: FCOMPP
// 0050318e: FNSTSW AX
// 00503190: SAHF
// 00503191: JNC 0x005031a5
//   XREF to: 005031a5 (CONDITIONAL_JUMP)
// 00503193: FLD float ptr [EBX + 0xbe38]
// 00503199: FSUB float ptr [EBP + 0x92]
// 0050319f: FSTP float ptr [EBX + 0xbe38]
// 005031a5: CMP dword ptr [EBP + 0x5a],0x1
//   Label: LAB_005031a5
// 005031a9: JNZ 0x0050393e
//   XREF to: 0050393e (CONDITIONAL_JUMP)
// 005031af: MOV EDX,dword ptr [EBX + 0xbec4]
// 005031b5: PUSH EDX
// 005031b6: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005031bb: ADD ESP,0x4
// 005031be: TEST EAX,EAX
// 005031c0: JZ 0x005038b7
//   XREF to: 005038b7 (CONDITIONAL_JUMP)
// 005031c6: PUSH EBX
//   Label: LAB_005031c6
// 005031c7: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 005031cc: ADD ESP,0x4
// 005031cf: TEST EAX,EAX
// 005031d1: JZ 0x005032c0
//   XREF to: 005032c0 (CONDITIONAL_JUMP)
// 005031d7: MOV ECX,dword ptr [EBX + 0xbe3c]
// 005031dd: TEST ECX,ECX
// 005031df: JZ 0x0050320b
//   XREF to: 0050320b (CONDITIONAL_JUMP)
// 005031e1: PUSH ECX
// 005031e2: MOV EDX,dword ptr [ECX + 0x154]
// 005031e8: CALL dword ptr [EDX + 0x108]
// 005031ee: ADD ESP,0x4
// 005031f1: CMP EAX,EBX
// 005031f3: JNZ 0x0050320b
//   XREF to: 0050320b (CONDITIONAL_JUMP)
// 005031f5: MOV ESI,dword ptr [EBX + 0xbe3c]
// 005031fb: PUSH ESI
// 005031fc: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00503202: PUSH EDI
//   XREF to: 03114278 (DATA)
// 00503203: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 00503208: ADD ESP,0x8
// 0050320b: FLD float ptr [EBP + 0x92]
//   Label: LAB_0050320b
// 00503211: FLD ST0
// 00503213: FMUL double ptr [0x00630f73]
//   XREF to: 00630f73 (READ)
// 00503219: FLD float ptr [EBX + 0x242c]
// 0050321f: FXCH
// 00503221: FSUBR ST0,ST1
// 00503223: LEA ESI,[EBX + 0x2428]
// 00503229: FSTP ST1
// 0050322b: FSTP float ptr [EBX + 0x242c]
// 00503231: FLD float ptr [ESI]
// 00503233: FMUL ST1
// 00503235: FSTP float ptr [EBP + -0x7a]
// 00503238: FLD float ptr [ESI + 0x4]
// 0050323b: FMUL ST1
// 0050323d: LEA EAX,[EBX + 0x241c]
// 00503243: FSTP float ptr [EBP + -0x76]
// 00503246: FMUL float ptr [ESI + 0x8]
// 00503249: LEA EDX,[EBX + 0x23ac]
// 0050324f: FLD float ptr [EBP + -0x7a]
// 00503252: FXCH
// 00503254: FSTP float ptr [EBP + -0x72]
// 00503257: FADD float ptr [EAX]
// 00503259: FLD float ptr [EBP + -0x76]
// 0050325c: FXCH
// 0050325e: FSTP float ptr [EBP + -0xe]
// 00503261: FADD float ptr [EAX + 0x4]
// 00503264: FLD float ptr [EBP + -0x72]
// 00503267: FXCH
// 00503269: FSTP float ptr [EBP + -0xa]
// 0050326c: FADD float ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 0050326f: FLD float ptr [EBP + -0xe]
// 00503272: FXCH
// 00503274: FSTP float ptr [EBP + -0x6]
// 00503277: FADD float ptr [EDX]
// 00503279: FLD float ptr [EBP + -0xa]
// 0050327c: FXCH
// 0050327e: FSTP float ptr [EBP + -0x32]
// 00503281: FADD float ptr [EDX + 0x4]
// 00503284: FLD float ptr [EBP + -0x6]
// 00503287: FXCH
// 00503289: FSTP float ptr [EBP + -0x2e]
// 0050328c: FADD float ptr [EDX + 0x8]
// 0050328f: FSTP float ptr [EBP + -0x2a]
// 00503292: MOV dword ptr [EAX + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 00503299: MOV ECX,dword ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 0050329c: MOV dword ptr [EAX + 0x4],ECX
// 0050329f: MOV ECX,dword ptr [EAX + 0x4]
// 005032a2: MOV dword ptr [EAX],ECX
// 005032a4: MOV dword ptr [EDX + 0x8],0x0
// 005032ab: LEA EAX,[EBP + -0x32]
// 005032ae: FLD float ptr [EDX + 0x8]
// 005032b1: PUSH EAX
// 005032b2: FST float ptr [EDX + 0x4]
// 005032b5: PUSH EBX
// 005032b6: FSTP float ptr [EDX]
// 005032b8: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 005032bd: ADD ESP,0x8
// 005032c0: PUSH EBX
//   Label: LAB_005032c0
// 005032c1: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 005032c6: ADD ESP,0x4
// 005032c9: LEA EAX,[EBX + 0x158]
// 005032cf: PUSH EAX
// 005032d0: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 005032d5: ADD ESP,0x4
// 005032d8: PUSH dword ptr [EBP + 0x92]
// 005032de: PUSH EBX
// 005032df: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 005032e4: ADD ESP,0x8
// 005032e7: LEA ESP,[EBP + 0x7a]
//   Label: LAB_005032e7
// 005032ea: POP EBP
// 005032eb: POP EDI
// 005032ec: POP ESI
// 005032ed: POP EBX
// 005032ee: RET
// 005032ef: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_005032ef
// 005032f5: TEST EAX,EAX
// 005032f7: JZ 0x005030dc
//   XREF to: 005030dc (CONDITIONAL_JUMP)
// 005032fd: FLD float ptr [EAX + 0x20]
// 00503300: FSUB float ptr [ESI]
// 00503302: FSTP float ptr [EBP + -0x4a]
// 00503305: FLD float ptr [EAX + 0x24]
// 00503308: FSUB float ptr [ESI + 0x4]
// 0050330b: LEA EDX,[EBP + -0x62]
// 0050330e: FSTP float ptr [EBP + -0x46]
// 00503311: FLD float ptr [EAX + 0x28]
// 00503314: FSUB float ptr [ESI + 0x8]
// 00503317: LEA EAX,[EBP + -0x4a]
// 0050331a: FSTP float ptr [EBP + -0x42]
// 0050331d: CMP EDX,EAX
// 0050331f: JZ 0x00503333
//   XREF to: 00503333 (CONDITIONAL_JUMP)
// 00503321: MOV EAX,dword ptr [EBP + -0x4a]
// 00503324: MOV dword ptr [EBP + -0x62],EAX
// 00503327: MOV EAX,dword ptr [EBP + -0x46]
// 0050332a: MOV dword ptr [EBP + -0x5e],EAX
// 0050332d: MOV EAX,dword ptr [EBP + -0x42]
// 00503330: MOV dword ptr [EBP + -0x5a],EAX
// 00503333: FLD float ptr [EBP + -0x5e]
//   Label: LAB_00503333
// 00503336: PUSH 0x40000000
// 0050333b: FADD float ptr [0x00630f7b]
//   XREF to: 00630f7b (READ)
// 00503341: PUSH 0xc0000000
// 00503346: FSTP float ptr [EBP + -0x5e]
// 00503349: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005034b7: LEA EAX,[EBP + 0x72]
//   Label: LAB_005034b7
// 005034ba: PUSH EAX
// 005034bb: PUSH EDI
// 005034bc: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 005034c1: ADD ESP,0x8
// 005034c4: CMP EAX,0x64
// 005034c7: JZ 0x005032ef
//   XREF to: 005032ef (CONDITIONAL_JUMP)
// 005034cd: JMP 0x005030dc
//   XREF to: 005030dc (UNCONDITIONAL_JUMP)
// 005034d2: PUSH 0x1
//   Label: LAB_005034d2
// 005034d4: PUSH 0x0
// 005034d6: PUSH EDI
// 005034d7: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005034dc: ADD ESP,0xc
// 005034df: PUSH EBX
// 005034e0: PUSH 0x630ef5
//   XREF to: 00630ef5 (DATA)
// 005034e5: MOV ESI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005034eb: PUSH ESI
//   XREF to: 0083b1a4 (DATA)
// 005034ec: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005034f1: JMP 0x00503169
//   XREF to: 00503169 (UNCONDITIONAL_JUMP)
// 005034f6: JBE 0x00503159
//   Label: LAB_005034f6
//   XREF to: 00503159 (CONDITIONAL_JUMP)
// 005034fc: CMP EAX,0x3
// 005034ff: JZ 0x005034d2
//   XREF to: 005034d2 (CONDITIONAL_JUMP)
// 00503501: PUSH 0x1
//   Label: LAB_00503501
// 00503503: PUSH 0x0
// 00503505: JMP 0x0050315d
//   XREF to: 0050315d (UNCONDITIONAL_JUMP)
// 0050350a: MOV EAX,dword ptr [EBX + 0xbe28]
//   Label: LAB_0050350a
// 00503510: TEST EAX,EAX
// 00503512: JNZ 0x00503184
//   XREF to: 00503184 (CONDITIONAL_JUMP)
// 00503518: CMP dword ptr [EBX + 0xdc],0x0
// 0050351f: JNZ 0x00503184
//   XREF to: 00503184 (CONDITIONAL_JUMP)
// 00503525: PUSH EAX
// 00503526: LEA EAX,[EBP + -0x3e]
// 00503529: PUSH EAX
// 0050352a: PUSH EDI
// 0050352b: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 00503530: ADD ESP,0xc
// 00503533: PUSH EAX
// 00503534: LEA EAX,[EBP + -0x56]
// 00503537: PUSH EAX
// 00503538: PUSH EBX
// 00503539: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0050353e: ADD ESP,0xc
// 00503541: PUSH 0x1
// 00503543: LEA EAX,[EBP + -0x56]
// 00503546: PUSH EAX
// 00503547: MOV ECX,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 0050354d: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 0050354e: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 00503553: ADD ESP,0xc
// 00503556: MOV dword ptr [EBX + 0xbe28],0x1
// 00503560: JMP 0x00503184
//   XREF to: 00503184 (UNCONDITIONAL_JUMP)
// 00503565: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_00503565
// 0050356b: MOV EAX,dword ptr [EBX + 0x154]
// 00503571: PUSH EBX
// 00503572: CALL dword ptr [EAX + 0x158]
// 00503578: MOV EDX,dword ptr [EBX + 0xbe3c]
// 0050357e: ADD ESP,0x8
// 00503581: TEST EDX,EDX
// 00503583: JNZ 0x005035ae
//   XREF to: 005035ae (CONDITIONAL_JUMP)
// 00503585: PUSH dword ptr [EBP + 0x92]
// 0050358b: PUSH EBX
// 0050358c: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 00503591: ADD ESP,0x8
// 00503594: TEST EAX,EAX
// 00503596: JZ 0x00503184
//   XREF to: 00503184 (CONDITIONAL_JUMP)
// 0050359c: PUSH 0x1
// 0050359e: PUSH 0x1
// 005035a0: PUSH EDI
// 005035a1: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005035a6: ADD ESP,0xc
// 005035a9: JMP 0x00503184
//   XREF to: 00503184 (UNCONDITIONAL_JUMP)
// 005035ae: MOV EAX,EDX
//   Label: LAB_005035ae
// 005035b0: FLD float ptr [EAX + 0x20]
// 005035b3: FSUB float ptr [ESI]
// 005035b5: FSTP float ptr [EBP + 0xffffff62]
// 005035bb: FLD float ptr [EAX + 0x24]
// 005035be: FSUB float ptr [ESI + 0x4]
// 005035c1: FST float ptr [EBP + 0xffffff66]
// 005035c7: FMUL float ptr [EBP + 0xffffff66]
// 005035cd: FLD float ptr [EBP + 0xffffff62]
// 005035d3: FMUL ST0
// 005035d5: FLD float ptr [EAX + 0x28]
// 005035d8: FSUB float ptr [ESI + 0x8]
// 005035db: FXCH
// 005035dd: FADDP ST2,ST0
// 005035df: FST float ptr [EBP + 0xffffff6a]
// 005035e5: FMUL float ptr [EBP + 0xffffff6a]
// 005035eb: FADDP
// 005035ed: FSTP float ptr [EBP + 0x36]
// 005035f0: MOV EAX,dword ptr [EBP + 0x36]
// 005035f3: MOV ECX,dword ptr [0x02d7a7b8]
//   XREF to: 02d7a7b8 (READ)
// 005035f9: SAR EAX,0x1
// 005035fb: ADD EAX,ECX
// 005035fd: MOV dword ptr [EBP + 0x5e],EAX
// 00503600: LEA EAX,[EBP + 0xffffff62]
// 00503606: PUSH EAX
// 00503607: LEA EAX,[EBP + 0xa]
// 0050360a: PUSH EAX
// 0050360b: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00503610: FLD float ptr [EBP + 0xe]
// 00503613: ADD ESP,0x8
// 00503616: FSUB float ptr [EBX + 0x34]
// 00503619: SUB ESP,0x4
// 0050361c: FSTP float ptr [ESP]
// 0050361f: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00503624: MOV dword ptr [EBP + 0x76],EAX
// 00503627: FLD float ptr [EBP + 0x76]
// 0050362a: FABS
// 0050362c: ADD ESP,0x4
// 0050362f: FCOMP double ptr [0x00630f53]
//   XREF to: 00630f53 (READ)
// 00503635: FNSTSW AX
// 00503637: SAHF
// 00503638: JNC 0x0050368b
//   XREF to: 0050368b (CONDITIONAL_JUMP)
// 0050363a: FLD float ptr [EBP + 0x5e]
// 0050363d: FCOMP double ptr [0x00630f63]
//   XREF to: 00630f63 (READ)
// 00503643: FNSTSW AX
// 00503645: SAHF
// 00503646: JA 0x0050368b
//   XREF to: 0050368b (CONDITIONAL_JUMP)
// 00503648: FLD float ptr [EBX + 0xbe38]
// 0050364e: FLDZ
// 00503650: FCOMPP
// 00503652: FNSTSW AX
// 00503654: SAHF
// 00503655: JC 0x00503184
//   XREF to: 00503184 (CONDITIONAL_JUMP)
// 0050365b: PUSH 0x1
// 0050365d: PUSH 0x2
// 0050365f: PUSH EDI
// 00503660: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00503665: ADD ESP,0xc
// 00503668: PUSH 0x41f00000
// 0050366d: PUSH 0x41700000
// 00503672: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0050368b: PUSH 0x1
//   Label: LAB_0050368b
// 0050368d: PUSH 0x1
// 0050368f: LEA EAX,[EBX + 0x158]
// 00503695: PUSH EAX
// 00503696: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0050369b: ADD ESP,0xc
// 0050369e: JMP 0x00503184
//   XREF to: 00503184 (UNCONDITIONAL_JUMP)
// 005036a3: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_005036a3
// 005036a9: MOV EAX,dword ptr [EBX + 0x154]
// 005036af: PUSH EBX
// 005036b0: CALL dword ptr [EAX + 0x158]
// 005036b6: MOV ESI,dword ptr [EBX + 0xbe3c]
// 005036bc: ADD ESP,0x8
// 005036bf: TEST ESI,ESI
// 005036c1: JNZ 0x005036eb
//   XREF to: 005036eb (CONDITIONAL_JUMP)
// 005036c3: PUSH dword ptr [EBP + 0x92]
// 005036c9: PUSH EBX
// 005036ca: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 005036cf: ADD ESP,0x8
// 005036d2: TEST EAX,EAX
// 005036d4: JNZ 0x00503184
//   XREF to: 00503184 (CONDITIONAL_JUMP)
// 005036da: PUSH 0x1
// 005036dc: PUSH ESI
// 005036dd: PUSH EDI
// 005036de: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005036e3: ADD ESP,0xc
// 005036e6: JMP 0x00503184
//   XREF to: 00503184 (UNCONDITIONAL_JUMP)
// 005036eb: MOV EAX,[0x0066071c]
//   Label: LAB_005036eb
//   XREF to: 0066071c (READ)
// 005036f0: MOV dword ptr [EBP + 0x52],EAX
// 005036f3: LEA EAX,[EBX + 0x23ac]
// 005036f9: MOV dword ptr [EAX + 0x8],0x0
// 00503700: MOV EDX,dword ptr [EAX + 0x8]
// 00503703: MOV dword ptr [EAX + 0x4],EDX
// 00503706: MOV EDX,dword ptr [EAX + 0x4]
// 00503709: MOV dword ptr [EAX],EDX
// 0050370b: XOR EAX,EAX
// 0050370d: MOV dword ptr [EBP + 0xffffff7a],EAX
// 00503713: MOV dword ptr [EBP + 0xffffff7e],EAX
// 00503719: MOV EAX,dword ptr [EBP + 0x52]
// 0050371c: PUSH 0x3e32b8c2
// 00503721: MOV dword ptr [EBP + -0x7e],EAX
// 00503724: LEA EAX,[EBP + 0xffffff7a]
// 0050372a: PUSH 0x3f000000
// 0050372f: PUSH EAX
// 00503730: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00503736: PUSH EAX
// 00503737: MOV EDX,dword ptr [EAX + 0x154]
// 0050373d: CALL dword ptr [EDX + 0xbc]
// 00503743: ADD ESP,0x4
// 00503746: PUSH EAX
// 00503747: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0050374d: ADD EAX,0x20
// 00503750: PUSH EAX
// 00503751: PUSH EBX
// 00503752: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 00503757: ADD ESP,0x18
// 0050375a: TEST EAX,EAX
// 0050375c: JL 0x00503867
//   XREF to: 00503867 (CONDITIONAL_JUMP)
// 00503762: FLD float ptr [EBX + 0xbe38]
//   Label: LAB_00503762
// 00503768: FLDZ
// 0050376a: FCOMPP
// 0050376c: FNSTSW AX
// 0050376e: SAHF
// 0050376f: JC 0x00503184
//   XREF to: 00503184 (CONDITIONAL_JUMP)
// 00503775: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0050377b: LEA EDX,[EBX + 0x20]
// 0050377e: FLD float ptr [EAX + 0x20]
// 00503781: FSUB float ptr [EDX]
// 00503783: FSTP float ptr [EBP + -0x6e]
// 00503786: FLD float ptr [EAX + 0x24]
// 00503789: FSUB float ptr [EDX + 0x4]
// 0050378c: FST float ptr [EBP + -0x6a]
// 0050378f: FMUL float ptr [EBP + -0x6a]
// 00503792: FLD float ptr [EBP + -0x6e]
// 00503795: FMUL ST0
// 00503797: FLD float ptr [EAX + 0x28]
// 0050379a: FSUB float ptr [EDX + 0x8]
// 0050379d: FXCH
// 0050379f: FADDP ST2,ST0
// 005037a1: FST float ptr [EBP + -0x66]
// 005037a4: FMUL float ptr [EBP + -0x66]
// 005037a7: FADDP
// 005037a9: FSTP float ptr [EBP + 0x46]
// 005037ac: MOV EAX,dword ptr [EBP + 0x46]
// 005037af: MOV ESI,dword ptr [0x02d7a7b8]
//   XREF to: 02d7a7b8 (READ)
// 005037b5: SAR EAX,0x1
// 005037b7: ADD EAX,ESI
// 005037b9: MOV dword ptr [EBP + 0x4a],EAX
// 005037bc: FLD float ptr [EBP + 0x4a]
// 005037bf: FCOMP float ptr [EBX + 0xbe34]
// 005037c5: FNSTSW AX
// 005037c7: SAHF
// 005037c8: JNC 0x00503184
//   XREF to: 00503184 (CONDITIONAL_JUMP)
// 005037ce: LEA EAX,[EBP + -0x6e]
// 005037d1: PUSH EAX
// 005037d2: LEA EAX,[EBP + -0x1a]
// 005037d5: PUSH EAX
// 005037d6: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005037db: MOV EDX,EAX
// 005037dd: LEA EAX,[EBP + -0x6e]
// 005037e0: ADD ESP,0x8
// 005037e3: CMP EAX,EDX
// 005037e5: JZ 0x005037f8
//   XREF to: 005037f8 (CONDITIONAL_JUMP)
// 005037e7: MOV EAX,dword ptr [EDX]
// 005037e9: MOV dword ptr [EBP + -0x6e],EAX
// 005037ec: MOV EAX,dword ptr [EDX + 0x4]
// 005037ef: MOV dword ptr [EBP + -0x6a],EAX
// 005037f2: MOV EAX,dword ptr [EDX + 0x8]
// 005037f5: MOV dword ptr [EBP + -0x66],EAX
// 005037f8: PUSH dword ptr [EBP + -0x6a]
//   Label: LAB_005037f8
// 005037fb: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00503800: MOV dword ptr [EBP + 0x76],EAX
// 00503803: ADD ESP,0x4
// 00503806: FLD float ptr [EBP + 0x76]
// 00503809: PUSH dword ptr [EBX + 0x34]
// 0050380c: FSTP float ptr [EBP + 0x4e]
// 0050380f: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00503814: MOV dword ptr [EBP + 0x76],EAX
// 00503817: ADD ESP,0x4
// 0050381a: FLD float ptr [EBP + 0x76]
// 0050381d: FSUBR float ptr [EBP + 0x4e]
// 00503820: SUB ESP,0x4
// 00503823: FSTP float ptr [ESP]
// 00503826: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 0050382b: MOV dword ptr [EBP + 0x76],EAX
// 0050382e: FLD float ptr [EBP + 0x76]
// 00503831: FABS
// 00503833: ADD ESP,0x4
// 00503836: FCOMP double ptr [0x00630f53]
//   XREF to: 00630f53 (READ)
// 0050383c: FNSTSW AX
// 0050383e: SAHF
// 0050383f: JNC 0x00503184
//   XREF to: 00503184 (CONDITIONAL_JUMP)
// 00503845: PUSH 0x1
// 00503847: PUSH 0x2
// 00503849: LEA EAX,[EBX + 0x158]
// 0050384f: PUSH EAX
// 00503850: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00503855: ADD ESP,0xc
// 00503858: MOV dword ptr [EBX + 0xbe38],0x40c00000
// 00503862: JMP 0x00503184
//   XREF to: 00503184 (UNCONDITIONAL_JUMP)
// 00503867: PUSH EBX
//   Label: LAB_00503867
// 00503868: PUSH 0x630f1f
//   XREF to: 00630f1f (DATA)
// 0050386d: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 00503873: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 00503874: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00503879: ADD ESP,0xc
// 0050387c: PUSH 0x1
// 0050387e: PUSH 0x0
// 00503880: PUSH EDI
// 00503881: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00503886: ADD ESP,0xc
// 00503889: JMP 0x00503762
//   XREF to: 00503762 (UNCONDITIONAL_JUMP)
// 0050388e: MOV EDX,dword ptr [EBP + 0x62]
//   Label: LAB_0050388e
// 00503891: CMP EDX,0x1
// 00503894: JNC 0x005038a3
//   XREF to: 005038a3 (CONDITIONAL_JUMP)
// 00503896: TEST EDX,EDX
// 00503898: JZ 0x00503565
//   XREF to: 00503565 (CONDITIONAL_JUMP)
// 0050389e: JMP 0x00503184
//   XREF to: 00503184 (UNCONDITIONAL_JUMP)
// 005038a3: JBE 0x005036a3
//   Label: LAB_005038a3
//   XREF to: 005036a3 (CONDITIONAL_JUMP)
// 005038a9: CMP EDX,0x5
// 005038ac: JZ 0x0050350a
//   XREF to: 0050350a (CONDITIONAL_JUMP)
// 005038b2: JMP 0x00503184
//   XREF to: 00503184 (UNCONDITIONAL_JUMP)
// 005038b7: FLD float ptr [EBX + 0x261c]
//   Label: LAB_005038b7
// 005038bd: FLDLN2
// 005038bf: FXCH
// 005038c1: FYL2X
// 005038c3: FMUL double ptr [0x00630f6b]
//   XREF to: 00630f6b (READ)
// 005038c9: FLD1
// 005038cb: FLDL2E
// 005038cd: FMUL ST2
// 005038cf: FST ST2
// 005038d1: FPREM
// 005038d3: F2XM1
// 005038d5: FADDP
// 005038d7: FSCALE
// 005038d9: FSTP ST1
// 005038db: PUSH 0x3f8147ae
// 005038e0: PUSH 0x3f7d70a4
// 005038e5: FSTP double ptr [EBP + 0x22]
// 005038e8: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0050393e: MOV EAX,dword ptr [EBX + 0xbec4]
//   Label: LAB_0050393e
// 00503944: PUSH EAX
// 00503945: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0050394a: ADD ESP,0x4
// 0050394d: JMP 0x005031c6
//   XREF to: 005031c6 (UNCONDITIONAL_JUMP)
