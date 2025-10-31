// Name: core_drone.cpp_FUN_0048ec70
// Address: 0048ec70
// Address Range: [[0048ec70, 0048f2ea]]
// Convention: unknown
// Signature: undefined core_drone.cpp_FUN_0048ec70()
// Globals:
//   undefined4 DAT_00002424
//   void* switchdataD_0048ec40 = 0048f0e4
//   TerminatedCString s_s_confused_while_walking_00622385
//   TerminatedCString s_s_gave_up_chase_I_m_conf_006223af
//   TerminatedCString s_drone_attack_wav_006223d0
//   TerminatedCString s_slime_wav_006223e2
//   double DOUBLE_006223ec = 2
//   double DOUBLE_006223f4 = 3.14159265350000
//   double DOUBLE_006223fc = 0.5
//   double DOUBLE_00622404 = 32
//   undefined4 DAT_0065d0a8
//   CConsole* g_CConsolePtr = 0083b1a4
//   CGore* g_CGorePtr = 02d83364
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CConsole g_ConsolePtr
//   CGore g_CGoreInstance
//   CDemonSet g_CDemonSetInstance
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_004297e0
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_enemy.cpp_CEnemy_FUN_004a9fd0
//   core_enemy.cpp_FUN_004a9880
//   core_gore.cpp_FUN_004ede30
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_FUN_005a8be0
//   sound_sndmain.cpp_FUN_005aa290
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_drone.cpp_FUN_0048ec70(undefined4 param_1, undefined4 param_2)
    */

void core_drone_cpp_FUN_0048ec70(void)

{
  char *pcVar1;
  char *pcVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CCharacter *pCVar8;
  int iVar9;
  int iVar10;
  CEnemy *pCVar11;
  int extraout_EAX;
  int extraout_EAX_00;
  undefined4 uVar12;
  BADSPACEBASE *in_ESP;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  CVector3f local_4c;
  float local_40;
  float local_3c;
  float local_38;
  float local_20;
  int local_1c;
  undefined4 local_18;
  float local_14;
  
  iVar9 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base_character);
  if (iVar9 != 0) {
    pCVar8 = &in_stack_00000004->base_character;
    (pCVar8->model).padding_0x0[0x225c] = '\0';
    (pCVar8->model).padding_0x0[0x225d] = '\0';
    (pCVar8->model).padding_0x0[0x225e] = '\0';
    (pCVar8->model).padding_0x0[0x225f] = '\0';
    *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258) =
         *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
    *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2254) =
         *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258);
    local_20 = in_stack_00000008 * in_stack_00000004->speed;
    while (0.0 < local_20) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610();
      core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base_character);
    }
    fVar3 = in_stack_00000004->speed;
    fVar7 = (float)DOUBLE_006223f4;
    fVar6 = (float)DOUBLE_006223fc;
    fVar5 = (float)DOUBLE_006223ec;
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
         *(float *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c) * fVar5;
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
         in_stack_00000008 * fVar7 * fVar3 * fVar6 * fVar5;
    iVar9 = core_motion_cpp_CMotionController_FUN_0052dab0();
    iVar9 = *(int *)(iVar9 + 0x24);
    local_1c = iVar9;
    iVar10 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base_character);
    if (iVar10 == 0) {
      switch(iVar9) {
      case 0:
        core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
        if (extraout_EAX == 0) {
          (*(in_stack_00000004->base_character).base_actor.metadata.vtable[1].
            getAllowedMeleeAttackTypes)((CDemonActor *)in_stack_00000004);
          if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
        }
        break;
      case 1:
        (*(in_stack_00000004->base_character).base_actor.metadata.vtable[1].
          getAllowedMeleeAttackTypes)((CDemonActor *)in_stack_00000004);
        uVar12 = DAT_0065d0a8;
        if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
          if (extraout_EAX_00 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
          }
        }
        else {
          local_18 = DAT_0065d0a8;
          pCVar8 = &in_stack_00000004->base_character;
          (pCVar8->model).padding_0x0[0x225c] = '\0';
          (pCVar8->model).padding_0x0[0x225d] = '\0';
          (pCVar8->model).padding_0x0[0x225e] = '\0';
          (pCVar8->model).padding_0x0[0x225f] = '\0';
          *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258) =
               *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
          *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2254) =
               *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258);
          local_64 = 0;
          local_5c = uVar12;
          local_60 = 0;
          (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
          iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            (&in_stack_00000004->base_character);
          if (iVar9 < 0) {
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n");
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
          }
          else if ((0 < iVar9) && (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
            in_stack_00000004->field6_0xbe38[0] = '\0';
            in_stack_00000004->field6_0xbe38[1] = '\0';
            in_stack_00000004->field6_0xbe38[2] = -0x80;
            in_stack_00000004->field6_0xbe38[3] = '?';
            iVar9 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
            if (iVar9 == 0) {
              uVar12 = (*((in_stack_00000004->base_character).base_actor.metadata.vtable)->playSound
                       )((CDemonActor *)in_stack_00000004,"drone-attack?.wav");
              *(undefined4 *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c) =
                   uVar12;
            }
          }
        }
        break;
      case 2:
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff24);
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
        core_xform_cpp_transformVector3x4_FUN_005f4dc0
                  (&local_88,&g_ZeroVector,
                   (CMatrix3x4f *)
                   ((in_stack_00000004->base_character).model.padding_0x0 +
                   *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc) * 0x30
                   + 0xe80));
        core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)in_stack_00000004);
        core_enemy_cpp_FUN_004a9880();
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
        core_xform_cpp_transformVector3x4_FUN_005f4dc0
                  (&local_4c,&g_ZeroVector,
                   (CMatrix3x4f *)
                   ((in_stack_00000004->base_character).model.padding_0x0 +
                   *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) * 0x30
                   + 0xe80));
        core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)in_stack_00000004);
        core_enemy_cpp_FUN_004a9880();
        break;
      case 8:
        if ((in_stack_00000004->pool_me == 0) &&
           ((in_stack_00000004->base_character).base_actor.field11_0xdc == 0)) {
          core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20();
          core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)in_stack_00000004);
          core_gore_cpp_FUN_004ede30();
          in_stack_00000004->pool_me = 1;
        }
        break;
      case 9:
        if (*(int *)((in_stack_00000004->base_character).field2_0x240c + 4) != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
        }
      }
    }
    else {
      uVar4 = *(uint *)((in_stack_00000004->base_character).field11_0x25a0 + 0x10);
      if (((uVar4 < 2) || (uVar4 < 3)) || (uVar4 != 3)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
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
    if ((local_1c == 1) && (iVar9 = sound_sndmain_cpp_FUN_005aa290(), iVar9 != 0)) {
      iVar9 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
      if (iVar9 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
        sound_sndmain_cpp_FUN_005a8be0();
        uVar12 = (*((in_stack_00000004->base_character).base_actor.metadata.vtable)->
                   playAmbientSound)((CDemonActor *)in_stack_00000004,"slime.wav");
        *(undefined4 *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18) = uVar12;
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      }
    }
    else {
      sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
    }
    iVar9 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base_character);
    if (iVar9 != 0) {
      if ((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) &&
         (pCVar11 = (CEnemy *)
                    (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                                0x108))(), pCVar11 == in_stack_00000004)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004->field6_0xbe38 + 4));
      }
      *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
           *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
           in_stack_00000008 * (float)DOUBLE_00622404;
      local_7c = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
                 in_stack_00000008;
      local_78 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
                 in_stack_00000008;
      pcVar1 = (in_stack_00000004->base_character).field2_0x240c + 0x10;
      local_74 = in_stack_00000008 *
                 *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
      pcVar2 = (in_stack_00000004->base_character).model.padding_0x0 + 0x2254;
      local_70 = local_7c + *(float *)pcVar1;
      local_6c = local_78 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
      local_68 = local_74 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
      local_40 = local_70 + *(float *)pcVar2;
      local_3c = local_6c +
                 *(float *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258);
      local_38 = local_68 +
                 *(float *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
      (in_stack_00000004->base_character).field2_0x240c[0x18] = '\0';
      (in_stack_00000004->base_character).field2_0x240c[0x19] = '\0';
      (in_stack_00000004->base_character).field2_0x240c[0x1a] = '\0';
      (in_stack_00000004->base_character).field2_0x240c[0x1b] = '\0';
      *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x14) =
           *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
      *(float *)pcVar1 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
      pCVar8 = &in_stack_00000004->base_character;
      (pCVar8->model).padding_0x0[0x225c] = '\0';
      (pCVar8->model).padding_0x0[0x225d] = '\0';
      (pCVar8->model).padding_0x0[0x225e] = '\0';
      (pCVar8->model).padding_0x0[0x225f] = '\0';
      fVar3 = *(float *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
      *(float *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258) = fVar3;
      *(float *)pcVar2 = fVar3;
      core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
    }
    core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base_character);
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059e020();
    core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character)
    ;
    return;
  }
  sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  return;
}


// Assembly code:
// 0048ec70: PUSH EBX
//   Label: core_drone.cpp_FUN_0048ec70
// 0048ec71: PUSH ESI
// 0048ec72: PUSH EDI
// 0048ec73: PUSH EBP
// 0048ec74: MOV EBP,ESP
// 0048ec76: SUB ESP,0xcc
// 0048ec7c: SUB EBP,0x7a
// 0048ec7f: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 0048ec85: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0048ec8b: PUSH EBX
// 0048ec8c: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 0048ec91: ADD ESP,0x8
// 0048ec94: TEST EAX,EAX
// 0048ec96: JZ 0x0048ef19
//   XREF to: 0048ef19 (CONDITIONAL_JUMP)
// 0048ec9c: LEA EAX,[EBX + 0x23ac]
// 0048eca2: MOV dword ptr [EAX + 0x8],0x0
// 0048eca9: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0048ecaf: MOV EDX,dword ptr [EAX + 0x8]
// 0048ecb2: MOV dword ptr [EAX + 0x4],EDX
// 0048ecb5: MOV EDX,dword ptr [EAX + 0x4]
// 0048ecb8: MOV dword ptr [EAX],EDX
// 0048ecba: FMUL float ptr [EBX + 0xbe24]
// 0048ecc0: LEA ESI,[EBX + 0x158]
// 0048ecc6: FSTP float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (WRITE)
// 0048ecc9: FLD float ptr [EBP + 0x6a]
//   Label: LAB_0048ecc9
//   XREF to: Stack[-0x20] (READ)
// 0048eccc: FLDZ
// 0048ecce: FCOMPP
// 0048ecd0: FNSTSW AX
// 0048ecd2: SAHF
// 0048ecd3: JC 0x0048ef30
//   XREF to: 0048ef30 (CONDITIONAL_JUMP)
// 0048ecd9: FLD float ptr [EBX + 0xbe24]
// 0048ecdf: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0048ece5: FMUL double ptr [0x006223f4]
//   XREF to: 006223f4 (READ)
// 0048eceb: FMULP
// 0048eced: FMUL double ptr [0x006223fc]
//   XREF to: 006223fc (READ)
// 0048ecf3: FLD double ptr [0x006223ec]
//   XREF to: 006223ec (READ)
// 0048ecf9: FLD float ptr [EBX + 0x23b4]
// 0048ecff: FMUL ST1
// 0048ed01: FXCH ST2
// 0048ed03: FMULP
// 0048ed05: PUSH ESI
// 0048ed06: FXCH
// 0048ed08: FSTP float ptr [EBX + 0x2434]
// 0048ed0e: FSTP float ptr [EBX + 0x2438]
// 0048ed14: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0048ed19: ADD ESP,0x4
// 0048ed1c: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0048ed22: MOV EDI,dword ptr [EAX + 0x24]
// 0048ed25: PUSH EBX
// 0048ed26: MOV dword ptr [EBP + 0x6e],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0048ed29: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 0048ed2e: ADD ESP,0x8
// 0048ed31: TEST EAX,EAX
// 0048ed33: JZ 0x0048f27b
//   XREF to: 0048f27b (CONDITIONAL_JUMP)
// 0048ed39: MOV EAX,dword ptr [EBX + 0x25b0]
// 0048ed3f: CMP EAX,0x2
// 0048ed42: JNC 0x0048ef6f
//   XREF to: 0048ef6f (CONDITIONAL_JUMP)
// 0048ed48: CMP EAX,0x1
// 0048ed4b: JNZ 0x0048ef7a
//   XREF to: 0048ef7a (CONDITIONAL_JUMP)
// 0048ed51: PUSH 0x1
//   Label: LAB_0048ed51
// 0048ed53: PUSH 0x1
// 0048ed55: LEA EAX,[EBX + 0x158]
//   Label: LAB_0048ed55
// 0048ed5b: PUSH EAX
// 0048ed5c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0048ed61: ADD ESP,0xc
//   Label: LAB_0048ed61
// 0048ed64: LEA EAX,[EBX + 0x23ac]
// 0048ed6a: MOV dword ptr [EAX + 0x8],0x0
// 0048ed71: MOV EDX,dword ptr [EAX + 0x8]
// 0048ed74: MOV dword ptr [EAX + 0x4],EDX
// 0048ed77: MOV EDX,dword ptr [EAX + 0x4]
// 0048ed7a: MOV dword ptr [EAX],EDX
// 0048ed7c: FLD float ptr [EBX + 0xbe38]
//   Label: caseD_3
// 0048ed82: FLDZ
// 0048ed84: FCOMPP
// 0048ed86: FNSTSW AX
// 0048ed88: SAHF
// 0048ed89: JNC 0x0048ed9d
//   XREF to: 0048ed9d (CONDITIONAL_JUMP)
// 0048ed8b: FLD float ptr [EBX + 0xbe38]
// 0048ed91: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0048ed97: FSTP float ptr [EBX + 0xbe38]
// 0048ed9d: CMP dword ptr [EBP + 0x6e],0x1
//   Label: LAB_0048ed9d
//   XREF to: Stack[-0x1c] (READ)
// 0048eda1: JNZ 0x0048f2d7
//   XREF to: 0048f2d7 (CONDITIONAL_JUMP)
// 0048eda7: PUSH 0x40490000
// 0048edac: PUSH 0x0
// 0048edae: SUB ESP,0x8
// 0048edb1: FLD float ptr [EBX + 0x28]
// 0048edb4: FSTP double ptr [ESP]
//   XREF to: Stack[-0xec] (DATA)
// 0048edb7: SUB ESP,0x8
// 0048edba: FLD float ptr [EBX + 0x24]
// 0048edbd: FSTP double ptr [ESP]
//   XREF to: Stack[-0xf4] (DATA)
// 0048edc0: SUB ESP,0x8
// 0048edc3: FLD float ptr [EBX + 0x20]
// 0048edc6: FSTP double ptr [ESP]
//   XREF to: Stack[-0xfc] (DATA)
// 0048edc9: CALL sound_sndmain.cpp_FUN_005aa290
//   XREF to: 005aa290 (UNCONDITIONAL_CALL)
// 0048edce: ADD ESP,0x20
// 0048edd1: TEST EAX,EAX
// 0048edd3: JZ 0x0048f2d7
//   XREF to: 0048f2d7 (CONDITIONAL_JUMP)
// 0048edd9: MOV ESI,dword ptr [EBX + 0xbecc]
// 0048eddf: PUSH ESI
// 0048ede0: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 0048ede5: ADD ESP,0x4
// 0048ede8: TEST EAX,EAX
// 0048edea: JZ 0x0048f28b
//   XREF to: 0048f28b (CONDITIONAL_JUMP)
// 0048edf0: PUSH EBX
//   Label: LAB_0048edf0
// 0048edf1: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 0048edf6: ADD ESP,0x4
// 0048edf9: TEST EAX,EAX
// 0048edfb: JZ 0x0048eeea
//   XREF to: 0048eeea (CONDITIONAL_JUMP)
// 0048ee01: MOV EDI,dword ptr [EBX + 0xbe3c]
// 0048ee07: TEST EDI,EDI
// 0048ee09: JZ 0x0048ee35
//   XREF to: 0048ee35 (CONDITIONAL_JUMP)
// 0048ee0b: PUSH EDI
// 0048ee0c: MOV EDX,dword ptr [EDI + 0x154]
// 0048ee12: CALL dword ptr [EDX + 0x108]
// 0048ee18: ADD ESP,0x4
// 0048ee1b: CMP EAX,EBX
// 0048ee1d: JNZ 0x0048ee35
//   XREF to: 0048ee35 (CONDITIONAL_JUMP)
// 0048ee1f: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0048ee25: PUSH EAX
// 0048ee26: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 0048ee2c: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0048ee2d: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 0048ee32: ADD ESP,0x8
// 0048ee35: FLD float ptr [EBP + 0x92]
//   Label: LAB_0048ee35
//   XREF to: Stack[0x8] (READ)
// 0048ee3b: FLD ST0
// 0048ee3d: FMUL double ptr [0x00622404]
//   XREF to: 00622404 (READ)
// 0048ee43: FLD float ptr [EBX + 0x242c]
// 0048ee49: FXCH
// 0048ee4b: FSUBR ST0,ST1
// 0048ee4d: LEA EDX,[EBX + 0x2428]
// 0048ee53: FSTP ST1
// 0048ee55: FSTP float ptr [EBX + 0x242c]
// 0048ee5b: FLD float ptr [EDX]
// 0048ee5d: FMUL ST1
// 0048ee5f: FSTP float ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (WRITE)
// 0048ee62: FLD float ptr [EDX + 0x4]
// 0048ee65: FMUL ST1
// 0048ee67: LEA EAX,[EBX + 0x241c]
// 0048ee6d: FSTP float ptr [EBP + 0x12]
//   XREF to: Stack[-0x78] (WRITE)
// 0048ee70: FMUL float ptr [EDX + 0x8]
// 0048ee73: LEA ESI,[EBX + 0x23ac]
// 0048ee79: FLD float ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (READ)
// 0048ee7c: FXCH
// 0048ee7e: FSTP float ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (WRITE)
// 0048ee81: FADD float ptr [EAX]
// 0048ee83: FLD float ptr [EBP + 0x12]
//   XREF to: Stack[-0x78] (READ)
// 0048ee86: FXCH
// 0048ee88: FSTP float ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (WRITE)
// 0048ee8b: FADD float ptr [EAX + 0x4]
// 0048ee8e: FLD float ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (READ)
// 0048ee91: FXCH
// 0048ee93: FSTP float ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (WRITE)
// 0048ee96: FADD float ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 0048ee99: FLD float ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (READ)
// 0048ee9c: FXCH
// 0048ee9e: FSTP float ptr [EBP + 0x22]
//   XREF to: Stack[-0x68] (WRITE)
// 0048eea1: FADD float ptr [ESI]
// 0048eea3: FLD float ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (READ)
// 0048eea6: FXCH
// 0048eea8: FSTP float ptr [EBP + 0x4a]
//   XREF to: Stack[-0x40] (WRITE)
// 0048eeab: FADD float ptr [ESI + 0x4]
// 0048eeae: FLD float ptr [EBP + 0x22]
//   XREF to: Stack[-0x68] (READ)
// 0048eeb1: FXCH
// 0048eeb3: FSTP float ptr [EBP + 0x4e]
//   XREF to: Stack[-0x3c] (WRITE)
// 0048eeb6: FADD float ptr [ESI + 0x8]
// 0048eeb9: FSTP float ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (WRITE)
// 0048eebc: MOV dword ptr [EAX + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 0048eec3: MOV EDX,dword ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 0048eec6: MOV dword ptr [EAX + 0x4],EDX
// 0048eec9: MOV EDX,dword ptr [EAX + 0x4]
// 0048eecc: MOV dword ptr [EAX],EDX
// 0048eece: MOV dword ptr [ESI + 0x8],0x0
// 0048eed5: LEA EAX,[EBP + 0x4a]
//   XREF to: Stack[-0x40] (DATA)
// 0048eed8: FLD float ptr [ESI + 0x8]
// 0048eedb: PUSH EAX
// 0048eedc: FST float ptr [ESI + 0x4]
// 0048eedf: PUSH EBX
// 0048eee0: FSTP float ptr [ESI]
// 0048eee2: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 0048eee7: ADD ESP,0x8
// 0048eeea: PUSH EBX
//   Label: LAB_0048eeea
// 0048eeeb: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 0048eef0: ADD ESP,0x4
// 0048eef3: LEA EAX,[EBX + 0x158]
// 0048eef9: PUSH EAX
// 0048eefa: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 0048eeff: ADD ESP,0x4
// 0048ef02: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0048ef08: PUSH EBX
// 0048ef09: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 0048ef0e: ADD ESP,0x8
// 0048ef11: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 0048ef14: POP EBP
// 0048ef15: POP EDI
// 0048ef16: POP ESI
// 0048ef17: POP EBX
// 0048ef18: RET
// 0048ef19: MOV EDX,dword ptr [EBX + 0xbecc]
//   Label: LAB_0048ef19
// 0048ef1f: PUSH EDX
// 0048ef20: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0048ef25: ADD ESP,0x4
// 0048ef28: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 0048ef2b: POP EBP
// 0048ef2c: POP EDI
// 0048ef2d: POP ESI
// 0048ef2e: POP EBX
// 0048ef2f: RET
// 0048ef30: LEA EAX,[EBP + 0x6a]
//   Label: LAB_0048ef30
//   XREF to: Stack[-0x20] (DATA)
// 0048ef33: PUSH EAX
// 0048ef34: PUSH ESI
// 0048ef35: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 0048ef3a: ADD ESP,0x8
// 0048ef3d: PUSH EAX
// 0048ef3e: PUSH EBX
// 0048ef3f: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 0048ef44: ADD ESP,0x8
// 0048ef47: JMP 0x0048ecc9
//   XREF to: 0048ecc9 (UNCONDITIONAL_JUMP)
// 0048ef4c: PUSH 0x1
//   Label: LAB_0048ef4c
// 0048ef4e: PUSH 0x0
// 0048ef50: PUSH ESI
// 0048ef51: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0048ef56: ADD ESP,0xc
// 0048ef59: PUSH EBX
// 0048ef5a: PUSH 0x622385
//   XREF to: 00622385 (DATA)
// 0048ef5f: MOV EAX,[0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 0048ef64: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 0048ef65: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0048ef6a: JMP 0x0048ed61
//   XREF to: 0048ed61 (UNCONDITIONAL_JUMP)
// 0048ef6f: JBE 0x0048ed51
//   Label: LAB_0048ef6f
//   XREF to: 0048ed51 (CONDITIONAL_JUMP)
// 0048ef75: CMP EAX,0x3
// 0048ef78: JZ 0x0048ef4c
//   XREF to: 0048ef4c (CONDITIONAL_JUMP)
// 0048ef7a: PUSH 0x1
//   Label: LAB_0048ef7a
// 0048ef7c: PUSH 0x0
// 0048ef7e: JMP 0x0048ed55
//   XREF to: 0048ed55 (UNCONDITIONAL_JUMP)
// 0048ef83: CMP dword ptr [EBX + 0x2410],0x0
//   Label: caseD_9
// 0048ef8a: JZ 0x0048ed7c
//   XREF to: 0048ed7c (CONDITIONAL_JUMP)
// 0048ef90: PUSH 0x1
// 0048ef92: PUSH 0xa
// 0048ef94: PUSH ESI
// 0048ef95: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0048ef9a: ADD ESP,0xc
// 0048ef9d: JMP 0x0048ed7c
//   XREF to: 0048ed7c (UNCONDITIONAL_JUMP)
// 0048efa2: LEA EAX,[EBP + -0x52]
//   Label: caseD_2
//   XREF to: Stack[-0xdc] (DATA)
// 0048efa5: PUSH EAX
// 0048efa6: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 0048efab: ADD ESP,0x4
// 0048efae: PUSH 0x41700000
// 0048efb3: PUSH 0x41200000
// 0048efb8: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0048efbd: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0048efc0: MOV dword ptr [EBP + -0x1e],EBX
//   XREF to: Stack[-0xa8] (WRITE)
// 0048efc3: MOV dword ptr [EBP + -0x1a],EBX
//   XREF to: Stack[-0xa4] (WRITE)
// 0048efc6: ADD ESP,0x8
// 0048efc9: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0048efcc: LEA EAX,[EBP + -0x52]
//   XREF to: Stack[-0xdc] (DATA)
// 0048efcf: FSTP float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd8] (WRITE)
// 0048efd2: MOV EDX,dword ptr [EBX + 0xbec0]
// 0048efd8: PUSH EAX
// 0048efd9: LEA EAX,[EDX*0x4 + 0x0]
// 0048efe0: SUB EAX,EDX
// 0048efe2: LEA ESI,[EBX + 0xfd8]
// 0048efe8: SHL EAX,0x4
// 0048efeb: ADD EAX,ESI
// 0048efed: PUSH 0x3ecccccd
// 0048eff2: PUSH EAX
// 0048eff3: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0048eff8: LEA EAX,[EBP + 0x2]
//   XREF to: Stack[-0x88] (DATA)
// 0048effb: PUSH EAX
// 0048effc: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0048f001: ADD ESP,0xc
// 0048f004: PUSH EAX
// 0048f005: LEA EAX,[EBP + 0x32]
//   XREF to: Stack[-0x58] (DATA)
// 0048f008: PUSH EAX
// 0048f009: PUSH EBX
// 0048f00a: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0048f00f: ADD ESP,0xc
// 0048f012: PUSH EAX
// 0048f013: PUSH EBX
// 0048f014: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 0048f019: ADD ESP,0x10
// 0048f01c: PUSH 0x41700000
// 0048f021: PUSH 0x41200000
// 0048f026: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0048f02b: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0048f02e: MOV dword ptr [EBP + -0x1e],EBX
//   XREF to: Stack[-0xa8] (WRITE)
// 0048f031: MOV dword ptr [EBP + -0x1a],EBX
//   XREF to: Stack[-0xa4] (WRITE)
// 0048f034: ADD ESP,0x8
// 0048f037: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0048f03a: LEA EAX,[EBP + -0x52]
//   XREF to: Stack[-0xdc] (DATA)
// 0048f03d: FSTP float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd8] (WRITE)
// 0048f040: MOV EDX,dword ptr [EBX + 0xbec4]
// 0048f046: PUSH EAX
// 0048f047: LEA EAX,[EDX*0x4 + 0x0]
// 0048f04e: SUB EAX,EDX
// 0048f050: SHL EAX,0x4
// 0048f053: ADD EAX,ESI
// 0048f055: PUSH 0x3ecccccd
// 0048f05a: PUSH EAX
// 0048f05b: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0048f060: LEA EAX,[EBP + 0x3e]
//   XREF to: Stack[-0x4c] (DATA)
// 0048f063: PUSH EAX
// 0048f064: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0048f069: ADD ESP,0xc
// 0048f06c: PUSH EAX
// 0048f06d: LEA EAX,[EBP + 0x56]
//   XREF to: Stack[-0x34] (DATA)
// 0048f070: PUSH EAX
// 0048f071: PUSH EBX
// 0048f072: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0048f077: ADD ESP,0xc
// 0048f07a: PUSH EAX
// 0048f07b: PUSH EBX
// 0048f07c: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 0048f081: ADD ESP,0x10
// 0048f084: JMP 0x0048ed7c
//   XREF to: 0048ed7c (UNCONDITIONAL_JUMP)
// 0048f089: CMP dword ptr [EBX + 0xbe28],0x0
//   Label: caseD_8
// 0048f090: JNZ 0x0048ed7c
//   XREF to: 0048ed7c (CONDITIONAL_JUMP)
// 0048f096: MOV EAX,dword ptr [EBX + 0xdc]
// 0048f09c: TEST EAX,EAX
// 0048f09e: JNZ 0x0048ed7c
//   XREF to: 0048ed7c (CONDITIONAL_JUMP)
// 0048f0a4: PUSH EAX
// 0048f0a5: LEA EAX,[EBP + -0x16]
//   XREF to: Stack[-0xa0] (DATA)
// 0048f0a8: PUSH EAX
// 0048f0a9: PUSH ESI
// 0048f0aa: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 0048f0af: ADD ESP,0xc
// 0048f0b2: PUSH EAX
// 0048f0b3: LEA EAX,[EBP + -0xa]
//   XREF to: Stack[-0x94] (DATA)
// 0048f0b6: PUSH EAX
// 0048f0b7: PUSH EBX
// 0048f0b8: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0048f0bd: ADD ESP,0xc
// 0048f0c0: PUSH 0x1
// 0048f0c2: LEA EAX,[EBP + -0xa]
//   XREF to: Stack[-0x94] (DATA)
// 0048f0c5: PUSH EAX
// 0048f0c6: MOV EDX,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 0048f0cc: PUSH EDX
//   XREF to: 02d83364 (DATA)
// 0048f0cd: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 0048f0d2: ADD ESP,0xc
// 0048f0d5: MOV dword ptr [EBX + 0xbe28],0x1
// 0048f0df: JMP 0x0048ed7c
//   XREF to: 0048ed7c (UNCONDITIONAL_JUMP)
// 0048f0e4: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_0
//   XREF to: Stack[0x8] (READ)
// 0048f0ea: PUSH EBX
// 0048f0eb: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 0048f0f0: ADD ESP,0x8
// 0048f0f3: TEST EAX,EAX
// 0048f0f5: JZ 0x0048f109
//   XREF to: 0048f109 (CONDITIONAL_JUMP)
// 0048f0f7: PUSH 0x1
// 0048f0f9: PUSH 0x1
// 0048f0fb: PUSH ESI
// 0048f0fc: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0048f101: ADD ESP,0xc
// 0048f104: JMP 0x0048ed7c
//   XREF to: 0048ed7c (UNCONDITIONAL_JUMP)
// 0048f109: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_0048f109
//   XREF to: Stack[0x8] (READ)
// 0048f10f: MOV EAX,dword ptr [EBX + 0x154]
// 0048f115: PUSH EBX
// 0048f116: CALL dword ptr [EAX + 0x158]
// 0048f11c: MOV EDI,dword ptr [EBX + 0xbe3c]
// 0048f122: ADD ESP,0x8
// 0048f125: TEST EDI,EDI
// 0048f127: JZ 0x0048ed7c
//   XREF to: 0048ed7c (CONDITIONAL_JUMP)
// 0048f12d: PUSH 0x1
// 0048f12f: PUSH 0x1
// 0048f131: PUSH ESI
// 0048f132: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0048f137: ADD ESP,0xc
// 0048f13a: JMP 0x0048ed7c
//   XREF to: 0048ed7c (UNCONDITIONAL_JUMP)
// 0048f13f: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_1
//   XREF to: Stack[0x8] (READ)
// 0048f145: MOV EAX,dword ptr [EBX + 0x154]
// 0048f14b: PUSH EBX
// 0048f14c: CALL dword ptr [EAX + 0x158]
// 0048f152: MOV ECX,dword ptr [EBX + 0xbe3c]
// 0048f158: ADD ESP,0x8
// 0048f15b: TEST ECX,ECX
// 0048f15d: JNZ 0x0048f187
//   XREF to: 0048f187 (CONDITIONAL_JUMP)
// 0048f15f: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0048f165: PUSH EBX
// 0048f166: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 0048f16b: ADD ESP,0x8
// 0048f16e: TEST EAX,EAX
// 0048f170: JNZ 0x0048ed7c
//   XREF to: 0048ed7c (CONDITIONAL_JUMP)
// 0048f176: PUSH 0x1
// 0048f178: PUSH EAX
// 0048f179: PUSH ESI
// 0048f17a: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0048f17f: ADD ESP,0xc
// 0048f182: JMP 0x0048ed7c
//   XREF to: 0048ed7c (UNCONDITIONAL_JUMP)
// 0048f187: MOV EAX,[0x0065d0a8]
//   Label: LAB_0048f187
//   XREF to: 0065d0a8 (READ)
// 0048f18c: PUSH 0x3e32b8c2
// 0048f191: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0048f194: LEA EAX,[EBX + 0x23ac]
// 0048f19a: PUSH 0x3f000000
// 0048f19f: MOV dword ptr [EAX + 0x8],0x0
// 0048f1a6: XOR EDI,EDI
// 0048f1a8: MOV EDX,dword ptr [EAX + 0x8]
// 0048f1ab: MOV dword ptr [EAX + 0x4],EDX
// 0048f1ae: MOV EDX,dword ptr [EAX + 0x4]
// 0048f1b1: MOV dword ptr [EAX],EDX
// 0048f1b3: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 0048f1b6: MOV dword ptr [EBP + 0x26],EDI
//   XREF to: Stack[-0x64] (WRITE)
// 0048f1b9: MOV dword ptr [EBP + 0x2e],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0048f1bc: LEA EAX,[EBP + 0x26]
//   XREF to: Stack[-0x64] (DATA)
// 0048f1bf: MOV dword ptr [EBP + 0x2a],EDI
//   XREF to: Stack[-0x60] (WRITE)
// 0048f1c2: PUSH EAX
// 0048f1c3: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0048f1c9: PUSH EAX
// 0048f1ca: MOV EDX,dword ptr [EAX + 0x154]
// 0048f1d0: CALL dword ptr [EDX + 0xbc]
// 0048f1d6: ADD ESP,0x4
// 0048f1d9: PUSH EAX
// 0048f1da: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0048f1e0: ADD EAX,0x20
// 0048f1e3: PUSH EAX
// 0048f1e4: PUSH EBX
// 0048f1e5: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 0048f1ea: ADD ESP,0x18
// 0048f1ed: TEST EAX,EAX
// 0048f1ef: JL 0x0048f255
//   XREF to: 0048f255 (CONDITIONAL_JUMP)
// 0048f1f1: JLE 0x0048ed7c
//   XREF to: 0048ed7c (CONDITIONAL_JUMP)
// 0048f1f7: FLD float ptr [EBX + 0xbe38]
// 0048f1fd: FLDZ
// 0048f1ff: FCOMPP
// 0048f201: FNSTSW AX
// 0048f203: SAHF
// 0048f204: JC 0x0048ed7c
//   XREF to: 0048ed7c (CONDITIONAL_JUMP)
// 0048f20a: PUSH 0x1
// 0048f20c: PUSH 0x2
// 0048f20e: PUSH ESI
// 0048f20f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0048f214: ADD ESP,0xc
// 0048f217: MOV EDX,dword ptr [EBX + 0xbed0]
// 0048f21d: PUSH EDX
// 0048f21e: MOV dword ptr [EBX + 0xbe38],0x3f800000
// 0048f228: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 0048f22d: ADD ESP,0x4
// 0048f230: TEST EAX,EAX
// 0048f232: JNZ 0x0048ed7c
//   XREF to: 0048ed7c (CONDITIONAL_JUMP)
// 0048f238: PUSH 0x6223d0
//   XREF to: 006223d0 (DATA)
// 0048f23d: MOV EAX,dword ptr [EBX + 0x154]
// 0048f243: PUSH EBX
// 0048f244: CALL dword ptr [EAX + 0x24]
// 0048f247: ADD ESP,0x8
// 0048f24a: MOV dword ptr [EBX + 0xbed0],EAX
// 0048f250: JMP 0x0048ed7c
//   XREF to: 0048ed7c (UNCONDITIONAL_JUMP)
// 0048f255: PUSH EBX
//   Label: LAB_0048f255
// 0048f256: PUSH 0x6223af
//   XREF to: 006223af (DATA)
// 0048f25b: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 0048f261: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 0048f262: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0048f267: ADD ESP,0xc
// 0048f26a: PUSH 0x1
// 0048f26c: PUSH EDI
// 0048f26d: PUSH ESI
// 0048f26e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0048f273: ADD ESP,0xc
// 0048f276: JMP 0x0048ed7c
//   XREF to: 0048ed7c (UNCONDITIONAL_JUMP)
// 0048f27b: CMP EDI,0x9
//   Label: LAB_0048f27b
// 0048f27e: JA 0x0048ed7c
//   XREF to: 0048ed7c (CONDITIONAL_JUMP)
// 0048f284: JMP dword ptr [EDI*0x4 + 0x48ec40]
//   Label: switchD
//   XREF to: 0048f0e4 (COMPUTED_JUMP)
//   XREF to: 0048f13f (COMPUTED_JUMP)
//   XREF to: 0048efa2 (COMPUTED_JUMP)
//   XREF to: 0048ed7c (COMPUTED_JUMP)
//   XREF to: 0048f089 (COMPUTED_JUMP)
//   XREF to: 0048ef83 (COMPUTED_JUMP)
//   XREF to: 0048ec40 (DATA)
// 0048f28b: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   Label: LAB_0048f28b
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 0048f290: PUSH 0x2
// 0048f292: PUSH 0x3f800000
// 0048f297: PUSH 0x0
// 0048f299: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0048f29e: ADD ESP,0x8
// 0048f2a1: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0048f2a4: SUB ESP,0x8
// 0048f2a7: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0048f2aa: FSTP double ptr [ESP]
//   XREF to: Stack[-0xe8] (DATA)
// 0048f2ad: CALL sound_sndmain.cpp_FUN_005a8be0
//   XREF to: 005a8be0 (UNCONDITIONAL_CALL)
// 0048f2b2: ADD ESP,0xc
// 0048f2b5: PUSH 0x6223e2
//   XREF to: 006223e2 (DATA)
// 0048f2ba: MOV EAX,dword ptr [EBX + 0x154]
// 0048f2c0: PUSH EBX
// 0048f2c1: CALL dword ptr [EAX + 0x28]
// 0048f2c4: ADD ESP,0x8
// 0048f2c7: MOV dword ptr [EBX + 0xbecc],EAX
// 0048f2cd: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 0048f2d2: JMP 0x0048edf0
//   XREF to: 0048edf0 (UNCONDITIONAL_JUMP)
// 0048f2d7: MOV ECX,dword ptr [EBX + 0xbecc]
//   Label: LAB_0048f2d7
// 0048f2dd: PUSH ECX
// 0048f2de: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0048f2e3: ADD ESP,0x4
// 0048f2e6: JMP 0x0048edf0
//   XREF to: 0048edf0 (UNCONDITIONAL_JUMP)
