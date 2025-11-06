// Name: core_succubus.cpp_CSuccubus_process_FUN_005c6e90
// Address: 005c6e90
// Address Range: [[005c6e90, 005c7552]]
// Convention: __cdecl
// Signature: void core_succubus.cpp_CSuccubus_process_FUN_005c6e90(CSuccubus * this_ptr)
// Globals:
//   undefined4 DAT_00002424
//   TerminatedCString s_s_confused_while_walking_00654125
//   TerminatedCString s_succubus_morph_wav_0065414f
//   TerminatedCString s_core_succubus_cpp_00654162
//   TerminatedCString s_hdwing_cth_00654177
//   undefined4 s_dwing.cth_00654178
//   undefined4 s_wing.cth_00654179
//   undefined4 s_ing.cth_0065417a
//   TerminatedCString s_succubusShutUp_00654182
//   double DOUBLE_006541a9 = 3.14159265350000
//   double DOUBLE_006541b1 = 32
//   float FLOAT_00663928 = 1.5
//   float FLOAT_00663934 = 15
//   float FLOAT_00663938 = 4
//   CConsole* g_CConsolePtr = 0083b1a4
//   CEventList* g_CEventListPtr = 02d05310
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CConsole g_ConsolePtr
//   CEventList g_CEventListInstance
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_004297e0
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_cloth.cpp_FUN_0043c2d0
//   core_enemy.cpp_CEnemy_FUN_004a9fd0
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0
//   core_mission.cpp_CDemonMission_FUN_00523b70
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005c7515) */

void __cdecl core_succubus_cpp_CSuccubus_process_FUN_005c6e90(CSuccubus *this_ptr)

{
  COrientation *pCVar1;
  char cVar2;
  uint uVar3;
  CDemonActor_vtable *pCVar4;
  float fVar5;
  float fVar6;
  CEnemy *pCVar7;
  CDemonMission *pCVar8;
  int iVar9;
  SMotion *pSVar10;
  CHotDemon *this_ptr_00;
  int extraout_EAX;
  int extraout_EAX_00;
  float fVar11;
  undefined4 uVar12;
  COrientation *pCVar13;
  char *pcVar14;
  CDeformableModelInstance *pCVar15;
  char *pcVar16;
  float in_stack_00000008;
  
  iVar9 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar9 == 0) {
    return;
  }
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
  fVar11 = (this_ptr->base_enemy).speed;
  while (0.0 < in_stack_00000008 * fVar11) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610
              (&(this_ptr->base_enemy).base_character.model.motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
  }
  this_ptr->field1_0xbeb4[0x2264] = '\0';
  this_ptr->field1_0xbeb4[0x2265] = '\0';
  this_ptr->field1_0xbeb4[0x2266] = '\0';
  this_ptr->field1_0xbeb4[0x2267] = '\0';
  *(undefined4 *)(this_ptr->field1_0xbeb4 + 0x2260) =
       *(undefined4 *)(this_ptr->field1_0xbeb4 + 0x2264);
  *(undefined4 *)(this_ptr->field1_0xbeb4 + 0x225c) =
       *(undefined4 *)(this_ptr->field1_0xbeb4 + 0x2260);
  fVar11 = (this_ptr->base_enemy).speed;
  while (0.0 < in_stack_00000008 * fVar11) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610
              ((CMotionController *)(this_ptr->field1_0xbeb4 + 8));
  }
  fVar11 = (this_ptr->base_enemy).speed;
  fVar5 = (float)DOUBLE_006541a9;
  pCVar15 = &(this_ptr->base_enemy).base_character.model;
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar5 * fVar11;
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar15->motion_controller);
  uVar3 = pSVar10->state_index;
  iVar9 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar9 == 0) {
    if (uVar3 == 0) {
      (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)this_ptr);
      iVar9 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
      if (iVar9 == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base_enemy);
        if (extraout_EAX != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar15->motion_controller,1,1);
        }
      }
      else {
        fVar11 = (this_ptr->base_enemy).base_character.base_actor.location.position.x -
                 *(float *)(iVar9 + 0x20);
        fVar5 = (this_ptr->base_enemy).base_character.base_actor.location.position.y -
                *(float *)(iVar9 + 0x24);
        fVar6 = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                *(float *)(iVar9 + 0x28);
        if (SQRT(fVar6 * fVar6 + fVar11 * fVar11 + fVar5 * fVar5) <
            (this_ptr->base_enemy).guard_distance) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar15->motion_controller,1,1);
        }
      }
    }
    else if ((uVar3 < 2) || (uVar3 == 2)) {
      (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)this_ptr);
      if (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base_enemy);
        pCVar15 = &(this_ptr->base_enemy).base_character.model;
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar15->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar15->motion_controller,1,1);
        }
      }
      else {
        (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
             (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
        (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
             (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
        (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154) + 0xbc))()
        ;
        iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
        if (((-1 < iVar9) &&
            (iVar9 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4),
            fVar11 = *(float *)(iVar9 + 0x20) -
                     (this_ptr->base_enemy).base_character.base_actor.location.position.x,
            fVar5 = *(float *)(iVar9 + 0x24) -
                    (this_ptr->base_enemy).base_character.base_actor.location.position.y,
            fVar6 = *(float *)(iVar9 + 0x28) -
                    (this_ptr->base_enemy).base_character.base_actor.location.position.z,
            SQRT(fVar6 * fVar6 + fVar11 * fVar11 + fVar5 * fVar5) < FLOAT_00663934)) &&
           (*(int *)(this_ptr->field1_0xbeb4 + 0x2480) == 0)) {
          this_ptr->field1_0xbeb4[0x2480] = '\x01';
          this_ptr->field1_0xbeb4[0x2481] = '\0';
          this_ptr->field1_0xbeb4[0x2482] = '\0';
          this_ptr->field1_0xbeb4[0x2483] = '\0';
          this_ptr->field1_0xbeb4[0x2484] = '\0';
          this_ptr->field1_0xbeb4[0x2485] = '\0';
          this_ptr->field1_0xbeb4[0x2486] = '\0';
          this_ptr->field1_0xbeb4[0x2487] = '\0';
          sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
          pCVar4 = (this_ptr->base_enemy).base_character.base_actor.vtable;
          this_ptr->field1_0xbeb4[0x247c] = -0x66;
          this_ptr->field1_0xbeb4[0x247d] = '?';
          this_ptr->field1_0xbeb4[0x247e] = '\x1c';
          this_ptr->field1_0xbeb4[0x247f] = 'F';
          (*pCVar4->playAmbientSound)((CDemonActor *)this_ptr,"succubus-morph.wav");
        }
      }
    }
    goto LAB_005c6fd0;
  }
  uVar3 = *(uint *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x10);
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_005c6fa5:
      iVar9 = 1;
    }
    else {
LAB_005c731a:
      iVar9 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base_enemy).base_character.model.motion_controller,iVar9,1);
  }
  else {
    if (uVar3 < 3) goto LAB_005c6fa5;
    if (uVar3 != 3) goto LAB_005c731a;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar15->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
LAB_005c6fd0:
  if (0.0 < *(float *)(this_ptr->base_enemy).field6_0xbe38) {
    *(float *)(this_ptr->base_enemy).field6_0xbe38 =
         *(float *)(this_ptr->base_enemy).field6_0xbe38 - in_stack_00000008;
  }
  iVar9 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar9 != 0) {
    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) =
         *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) -
         in_stack_00000008 * (float)DOUBLE_006541b1;
    pCVar7 = &this_ptr->base_enemy;
    (pCVar7->base_character).field2_0x240c[0x18] = '\0';
    (pCVar7->base_character).field2_0x240c[0x19] = '\0';
    (pCVar7->base_character).field2_0x240c[0x1a] = '\0';
    (pCVar7->base_character).field2_0x240c[0x1b] = '\0';
    *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) =
         *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
    *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x10) =
         *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
         (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
         (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  pCVar15 = &(this_ptr->base_enemy).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar15);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar15->motion_controller);
  fVar11 = (this_ptr->base_enemy).base_character.model.motion_controller.current_frame_number;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
            ((CMotionController *)(this_ptr->field1_0xbeb4 + 8),pSVar10->motion_name,fVar11);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
            ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8));
  if ((*(int *)(this_ptr->field1_0xbeb4 + 0x2480) != 0) &&
     (fVar5 = *(float *)(this_ptr->field1_0xbeb4 + 0x2484) + in_stack_00000008,
     *(float *)(this_ptr->field1_0xbeb4 + 0x2484) = fVar5, FLOAT_00663938 < fVar5)) {
    this_ptr_00 = (CHotDemon *)
                  shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                            (0xbef0,"..\\core\\succubus.cpp",0x16c);
    if (this_ptr_00 != (CHotDemon *)0x0) {
      this_ptr_00 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004f6ca0(this_ptr_00);
    }
    pCVar8 = g_CDemonMissionPtr;
    if (this_ptr_00 != (CHotDemon *)0x0) {
      (this_ptr->base_enemy).base_character.base_actor.was_created = 2;
      core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(pCVar8);
      (this_ptr_00->base_enemy).base_character.base_actor.location.position.x =
           (this_ptr->base_enemy).base_character.base_actor.location.position.x;
      (this_ptr_00->base_enemy).base_character.base_actor.location.position.y =
           (this_ptr->base_enemy).base_character.base_actor.location.position.y;
      (this_ptr_00->base_enemy).base_character.base_actor.location.position.z =
           (this_ptr->base_enemy).base_character.base_actor.location.position.z;
      pCVar13 = &(this_ptr_00->base_enemy).base_character.base_actor.orient;
      (this_ptr_00->base_enemy).base_character.base_actor.location.area_id =
           (this_ptr->base_enemy).base_character.base_actor.location.area_id;
      pCVar1 = &(this_ptr->base_enemy).base_character.base_actor.orient;
      if (pCVar13 != pCVar1) {
        pCVar13->pitch = pCVar1->pitch;
        (this_ptr_00->base_enemy).base_character.base_actor.orient.bank =
             (this_ptr->base_enemy).base_character.base_actor.orient.bank;
        (this_ptr_00->base_enemy).base_character.base_actor.orient.heading =
             (this_ptr->base_enemy).base_character.base_actor.orient.heading;
      }
      pcVar14 = "hdwing.cth";
      pcVar16 = (this_ptr_00->base_enemy).base_character.cloth_data;
      (this_ptr_00->base_enemy).base_character.cloth_count = 1;
      do {
        cVar2 = *pcVar14;
        *pcVar16 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar16[1] = cVar2;
        pcVar16 = pcVar16 + 2;
      } while (cVar2 != '\0');
      (*((this_ptr_00->base_enemy).base_character.base_actor.vtable)->setup)
                ((CDemonActor *)this_ptr_00);
      pCVar15 = &(this_ptr_00->base_enemy).base_character.model;
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                (&pCVar15->motion_controller,pSVar10->motion_name,fVar11);
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar15);
      (this_ptr_00->base_enemy).base_character.base_actor.scale.x =
           (this_ptr->base_enemy).base_character.base_actor.scale.x;
      (this_ptr_00->base_enemy).base_character.base_actor.scale.y =
           (this_ptr->base_enemy).base_character.base_actor.scale.y;
      pCVar8 = g_CDemonMissionPtr;
      (this_ptr_00->base_enemy).base_character.base_actor.scale.z =
           (this_ptr->base_enemy).base_character.base_actor.scale.z;
      core_mission_cpp_CDemonMission_FUN_00523b70(pCVar8);
      uVar12 = *(undefined4 *)(this_ptr->field1_0xbeb4 + 0x2450);
      *(undefined4 *)(this_ptr->field1_0xbeb4 + 0x2450) =
           *(undefined4 *)((this_ptr_00->base_enemy).base_character.cloth_data + 400);
      *(undefined4 *)((this_ptr_00->base_enemy).base_character.cloth_data + 400) = uVar12;
    }
  }
  if (*(int *)(this_ptr->base_enemy).base_character.field13_0x2620 != 0) {
    core_cloth_cpp_FUN_0043c2d0();
  }
  iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,"succubusShutUp");
  if (iVar9 == 0) {
    iVar9 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
    if ((iVar9 == 0) &&
       (fVar11 = *(float *)(this_ptr->field1_0xbeb4 + 0x247c) - in_stack_00000008,
       *(float *)(this_ptr->field1_0xbeb4 + 0x247c) = fVar11, fVar11 < 0.0)) {
      fVar11 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
      pCVar4 = (this_ptr->base_enemy).base_character.base_actor.vtable;
      *(float *)(this_ptr->field1_0xbeb4 + 0x247c) = fVar11;
      uVar12 = (*pCVar4->playSound)((CDemonActor *)this_ptr,"succubus-horny-?.wav");
      *(undefined4 *)(this_ptr->field1_0xbeb4 + 0x2478) = uVar12;
      return;
    }
    return;
  }
  sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  return;
}


// Assembly code:
// 005c6e90: PUSH EBX
//   Label: core_succubus.cpp_CSuccubus_process_FUN_005c6e90
// 005c6e91: PUSH ESI
// 005c6e92: PUSH EDI
// 005c6e93: PUSH EBP
// 005c6e94: MOV EBP,ESP
// 005c6e96: SUB ESP,0x64
// 005c6e99: MOV EBX,dword ptr [EBP + 0x14]
// 005c6e9c: PUSH dword ptr [EBP + 0x18]
// 005c6e9f: PUSH EBX
// 005c6ea0: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 005c6ea5: ADD ESP,0x8
// 005c6ea8: TEST EAX,EAX
// 005c6eaa: JZ 0x005c72e4
//   XREF to: 005c72e4 (CONDITIONAL_JUMP)
// 005c6eb0: LEA EAX,[EBX + 0x23ac]
// 005c6eb6: MOV dword ptr [EAX + 0x8],0x0
// 005c6ebd: FLD float ptr [EBP + 0x18]
// 005c6ec0: MOV EDX,dword ptr [EAX + 0x8]
// 005c6ec3: MOV dword ptr [EAX + 0x4],EDX
// 005c6ec6: MOV EDX,dword ptr [EAX + 0x4]
// 005c6ec9: MOV dword ptr [EAX],EDX
// 005c6ecb: FMUL float ptr [EBX + 0xbe24]
// 005c6ed1: LEA ESI,[EBX + 0x158]
// 005c6ed7: FSTP float ptr [EBP + -0x14]
// 005c6eda: FLD float ptr [EBP + -0x14]
//   Label: LAB_005c6eda
// 005c6edd: FLDZ
// 005c6edf: FCOMPP
// 005c6ee1: FNSTSW AX
// 005c6ee3: SAHF
// 005c6ee4: JC 0x005c6f2b
//   XREF to: 005c6f2b (CONDITIONAL_JUMP)
// 005c6ee6: LEA EAX,[EBX + 0xe110]
// 005c6eec: MOV dword ptr [EAX + 0x8],0x0
// 005c6ef3: FLD float ptr [EBP + 0x18]
// 005c6ef6: MOV EDX,dword ptr [EAX + 0x8]
// 005c6ef9: MOV dword ptr [EAX + 0x4],EDX
// 005c6efc: MOV EDX,dword ptr [EAX + 0x4]
// 005c6eff: MOV dword ptr [EAX],EDX
// 005c6f01: FMUL float ptr [EBX + 0xbe24]
// 005c6f07: LEA ESI,[EBX + 0xbebc]
// 005c6f0d: FSTP float ptr [EBP + -0x14]
// 005c6f10: FLD float ptr [EBP + -0x14]
//   Label: LAB_005c6f10
// 005c6f13: FLDZ
// 005c6f15: FCOMPP
// 005c6f17: FNSTSW AX
// 005c6f19: SAHF
// 005c6f1a: JNC 0x005c6f44
//   XREF to: 005c6f44 (CONDITIONAL_JUMP)
// 005c6f1c: LEA EAX,[EBP + -0x14]
// 005c6f1f: PUSH EAX
// 005c6f20: PUSH ESI
// 005c6f21: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 005c6f26: ADD ESP,0x8
// 005c6f29: JMP 0x005c6f10
//   XREF to: 005c6f10 (UNCONDITIONAL_JUMP)
// 005c6f2b: LEA EAX,[EBP + -0x14]
//   Label: LAB_005c6f2b
// 005c6f2e: PUSH EAX
// 005c6f2f: PUSH ESI
// 005c6f30: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 005c6f35: ADD ESP,0x8
// 005c6f38: PUSH EAX
// 005c6f39: PUSH EBX
// 005c6f3a: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 005c6f3f: ADD ESP,0x8
// 005c6f42: JMP 0x005c6eda
//   XREF to: 005c6eda (UNCONDITIONAL_JUMP)
// 005c6f44: FLD float ptr [EBX + 0xbe24]
//   Label: LAB_005c6f44
// 005c6f4a: FLD float ptr [EBP + 0x18]
// 005c6f4d: FMUL double ptr [0x006541a9]
//   XREF to: 006541a9 (READ)
// 005c6f53: FMULP
// 005c6f55: FLD float ptr [EBX + 0x23b4]
// 005c6f5b: LEA ESI,[EBX + 0x158]
// 005c6f61: FSTP float ptr [EBX + 0x2434]
// 005c6f67: PUSH ESI
// 005c6f68: FSTP float ptr [EBX + 0x2438]
// 005c6f6e: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005c6f73: ADD ESP,0x4
// 005c6f76: PUSH dword ptr [EBP + 0x18]
// 005c6f79: PUSH EBX
// 005c6f7a: MOV EDI,dword ptr [EAX + 0x24]
// 005c6f7d: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 005c6f82: ADD ESP,0x8
// 005c6f85: TEST EAX,EAX
// 005c6f87: JZ 0x005c7508
//   XREF to: 005c7508 (CONDITIONAL_JUMP)
// 005c6f8d: MOV EAX,dword ptr [EBX + 0x25b0]
// 005c6f93: CMP EAX,0x2
// 005c6f96: JNC 0x005c730f
//   XREF to: 005c730f (CONDITIONAL_JUMP)
// 005c6f9c: CMP EAX,0x1
// 005c6f9f: JNZ 0x005c731a
//   XREF to: 005c731a (CONDITIONAL_JUMP)
// 005c6fa5: PUSH 0x1
//   Label: LAB_005c6fa5
// 005c6fa7: PUSH 0x1
// 005c6fa9: LEA EAX,[EBX + 0x158]
//   Label: LAB_005c6fa9
// 005c6faf: PUSH EAX
// 005c6fb0: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c6fb5: ADD ESP,0xc
//   Label: LAB_005c6fb5
// 005c6fb8: LEA EAX,[EBX + 0x23ac]
// 005c6fbe: MOV dword ptr [EAX + 0x8],0x0
// 005c6fc5: MOV EDX,dword ptr [EAX + 0x8]
// 005c6fc8: MOV dword ptr [EAX + 0x4],EDX
// 005c6fcb: MOV EDX,dword ptr [EAX + 0x4]
// 005c6fce: MOV dword ptr [EAX],EDX
// 005c6fd0: FLD float ptr [EBX + 0xbe38]
//   Label: LAB_005c6fd0
// 005c6fd6: FLDZ
// 005c6fd8: FCOMPP
// 005c6fda: FNSTSW AX
// 005c6fdc: SAHF
// 005c6fdd: JNC 0x005c6fee
//   XREF to: 005c6fee (CONDITIONAL_JUMP)
// 005c6fdf: FLD float ptr [EBX + 0xbe38]
// 005c6fe5: FSUB float ptr [EBP + 0x18]
// 005c6fe8: FSTP float ptr [EBX + 0xbe38]
// 005c6fee: PUSH EBX
//   Label: LAB_005c6fee
// 005c6fef: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 005c6ff4: ADD ESP,0x4
// 005c6ff7: TEST EAX,EAX
// 005c6ff9: JZ 0x005c70b4
//   XREF to: 005c70b4 (CONDITIONAL_JUMP)
// 005c6fff: FLD float ptr [EBP + 0x18]
// 005c7002: FLD ST0
// 005c7004: FMUL double ptr [0x006541b1]
//   XREF to: 006541b1 (READ)
// 005c700a: FLD float ptr [EBX + 0x242c]
// 005c7010: FXCH
// 005c7012: FSUBR ST0,ST1
// 005c7014: LEA EDI,[EBX + 0x2428]
// 005c701a: FSTP ST1
// 005c701c: FSTP float ptr [EBX + 0x242c]
// 005c7022: FLD float ptr [EDI]
// 005c7024: FMUL ST1
// 005c7026: FSTP float ptr [EBP + -0x4c]
// 005c7029: FLD float ptr [EDI + 0x4]
// 005c702c: FMUL ST1
// 005c702e: LEA ESI,[EBX + 0x241c]
// 005c7034: FSTP float ptr [EBP + -0x48]
// 005c7037: FMUL float ptr [EDI + 0x8]
// 005c703a: LEA EAX,[EBX + 0x23ac]
// 005c7040: FLD float ptr [EBP + -0x4c]
// 005c7043: FXCH
// 005c7045: FSTP float ptr [EBP + -0x44]
// 005c7048: FADD float ptr [ESI]
// 005c704a: FLD float ptr [EBP + -0x48]
// 005c704d: FXCH
// 005c704f: FSTP float ptr [EBP + -0x40]
// 005c7052: FADD float ptr [ESI + 0x4]
// 005c7055: FLD float ptr [EBP + -0x44]
// 005c7058: FXCH
// 005c705a: FSTP float ptr [EBP + -0x3c]
// 005c705d: FADD float ptr [ESI + 0x8]
//   XREF to: 00002424 (DATA)
// 005c7060: FLD float ptr [EBP + -0x40]
// 005c7063: FXCH
// 005c7065: FSTP float ptr [EBP + -0x38]
// 005c7068: FADD float ptr [EAX]
// 005c706a: FLD float ptr [EBP + -0x3c]
// 005c706d: FXCH
// 005c706f: FSTP float ptr [EBP + -0x34]
// 005c7072: FADD float ptr [EAX + 0x4]
// 005c7075: FLD float ptr [EBP + -0x38]
// 005c7078: FXCH
// 005c707a: FSTP float ptr [EBP + -0x30]
// 005c707d: FADD float ptr [EAX + 0x8]
// 005c7080: FSTP float ptr [EBP + -0x2c]
// 005c7083: MOV dword ptr [ESI + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 005c708a: MOV EDX,dword ptr [ESI + 0x8]
//   XREF to: 00002424 (DATA)
// 005c708d: MOV dword ptr [ESI + 0x4],EDX
// 005c7090: MOV EDX,dword ptr [ESI + 0x4]
// 005c7093: MOV dword ptr [ESI],EDX
// 005c7095: MOV dword ptr [EAX + 0x8],0x0
// 005c709c: MOV EDX,dword ptr [EAX + 0x8]
// 005c709f: MOV dword ptr [EAX + 0x4],EDX
// 005c70a2: MOV EDX,dword ptr [EAX + 0x4]
// 005c70a5: MOV dword ptr [EAX],EDX
// 005c70a7: LEA EAX,[EBP + -0x34]
// 005c70aa: PUSH EAX
// 005c70ab: PUSH EBX
// 005c70ac: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 005c70b1: ADD ESP,0x8
// 005c70b4: PUSH EBX
//   Label: LAB_005c70b4
// 005c70b5: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 005c70ba: ADD ESP,0x4
// 005c70bd: LEA ESI,[EBX + 0x158]
// 005c70c3: PUSH ESI
// 005c70c4: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 005c70c9: ADD ESP,0x4
// 005c70cc: PUSH dword ptr [EBP + 0x18]
// 005c70cf: PUSH EBX
// 005c70d0: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 005c70d5: ADD ESP,0x8
// 005c70d8: PUSH ESI
// 005c70d9: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005c70de: ADD ESP,0x4
// 005c70e1: MOV ESI,dword ptr [ESI + 0x8]
// 005c70e4: PUSH ESI
// 005c70e5: PUSH EAX
// 005c70e6: MOV dword ptr [EBP + -0xc],ESI
// 005c70e9: LEA ESI,[EBX + 0xbebc]
// 005c70ef: PUSH ESI
// 005c70f0: MOV dword ptr [EBP + -0x10],EAX
// 005c70f3: CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
//   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)
// 005c70f8: ADD ESP,0xc
// 005c70fb: PUSH ESI
// 005c70fc: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 005c7101: MOV ESI,dword ptr [EBX + 0xe334]
// 005c7107: ADD ESP,0x4
// 005c710a: TEST ESI,ESI
// 005c710c: JZ 0x005c7269
//   XREF to: 005c7269 (CONDITIONAL_JUMP)
// 005c7112: FLD float ptr [EBX + 0xe338]
// 005c7118: FADD float ptr [EBP + 0x18]
// 005c711b: FST float ptr [EBX + 0xe338]
// 005c7121: FCOMP float ptr [0x00663938]
//   XREF to: 00663938 (READ)
// 005c7127: FNSTSW AX
// 005c7129: SAHF
// 005c712a: JBE 0x005c7269
//   XREF to: 005c7269 (CONDITIONAL_JUMP)
// 005c7130: PUSH 0x16c
// 005c7135: PUSH 0x654162
//   XREF to: 00654162 (DATA)
// 005c713a: PUSH 0xbef0
// 005c713f: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005c7144: ADD ESP,0xc
// 005c7147: TEST EAX,EAX
// 005c7149: JZ 0x005c7154
//   XREF to: 005c7154 (CONDITIONAL_JUMP)
// 005c714b: PUSH EAX
// 005c714c: CALL core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0
//   XREF to: 004f6ca0 (UNCONDITIONAL_CALL)
// 005c7151: ADD ESP,0x4
// 005c7154: MOV ESI,EAX
//   Label: LAB_005c7154
// 005c7156: MOV dword ptr [EBP + -0x8],ESI
// 005c7159: TEST ESI,ESI
// 005c715b: JZ 0x005c7269
//   XREF to: 005c7269 (CONDITIONAL_JUMP)
// 005c7161: PUSH ESI
// 005c7162: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 005c7168: PUSH EDI
//   XREF to: 02f33740 (DATA)
// 005c7169: MOV dword ptr [EBX + 0x70],0x2
// 005c7170: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 005c7175: LEA EAX,[EBX + 0x20]
// 005c7178: LEA EDI,[ESI + 0x20]
// 005c717b: MOV EDX,dword ptr [EAX]
// 005c717d: MOV dword ptr [EDI],EDX
// 005c717f: MOV EDX,dword ptr [EAX + 0x4]
// 005c7182: MOV dword ptr [EDI + 0x4],EDX
// 005c7185: MOV EDX,dword ptr [EAX + 0x8]
// 005c7188: MOV dword ptr [EDI + 0x8],EDX
// 005c718b: MOV EAX,dword ptr [EAX + 0xc]
// 005c718e: ADD ESI,0x30
// 005c7191: MOV dword ptr [EDI + 0xc],EAX
// 005c7194: LEA EAX,[EBX + 0x30]
// 005c7197: ADD ESP,0x8
// 005c719a: CMP ESI,EAX
// 005c719c: JZ 0x005c71ae
//   XREF to: 005c71ae (CONDITIONAL_JUMP)
// 005c719e: MOV EDX,dword ptr [EAX]
// 005c71a0: MOV dword ptr [ESI],EDX
// 005c71a2: MOV EDX,dword ptr [EAX + 0x4]
// 005c71a5: MOV dword ptr [ESI + 0x4],EDX
// 005c71a8: MOV EDX,dword ptr [EAX + 0x8]
// 005c71ab: MOV dword ptr [ESI + 0x8],EDX
// 005c71ae: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_005c71ae
// 005c71b1: MOV ESI,0x654177
//   XREF to: 00654177 (DATA)
// 005c71b6: MOV EDX,dword ptr [EBP + -0x8]
// 005c71b9: LEA EDI,[EAX + 0x2a98]
// 005c71bf: MOV dword ptr [EAX + 0x2a94],0x1
// 005c71c9: PUSH EDI
// 005c71ca: MOV AL,byte ptr [ESI]
//   Label: LAB_005c71ca
//   XREF to: 00654177 (READ)
//   XREF to: 00654179 (READ)
// 005c71cc: MOV byte ptr [EDI],AL
// 005c71ce: CMP AL,0x0
// 005c71d0: JZ 0x005c71e2
//   XREF to: 005c71e2 (CONDITIONAL_JUMP)
// 005c71d2: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00654178 (READ)
//   XREF to: 0065417a (READ)
// 005c71d5: ADD ESI,0x2
// 005c71d8: MOV byte ptr [EDI + 0x1],AL
// 005c71db: ADD EDI,0x2
// 005c71de: CMP AL,0x0
// 005c71e0: JNZ 0x005c71ca
//   XREF to: 005c71ca (CONDITIONAL_JUMP)
// 005c71e2: POP EDI
//   Label: LAB_005c71e2
// 005c71e3: MOV EAX,dword ptr [EBP + -0x8]
// 005c71e6: PUSH EDX
// 005c71e7: MOV EAX,dword ptr [EAX + 0x154]
// 005c71ed: CALL dword ptr [EAX]
// 005c71ef: ADD ESP,0x4
// 005c71f2: MOV ECX,dword ptr [EBP + -0x10]
// 005c71f5: PUSH dword ptr [EBP + -0xc]
// 005c71f8: MOV ESI,dword ptr [EBP + -0x8]
// 005c71fb: PUSH ECX
// 005c71fc: ADD ESI,0x158
// 005c7202: PUSH ESI
// 005c7203: CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
//   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)
// 005c7208: ADD ESP,0xc
// 005c720b: PUSH ESI
// 005c720c: MOV ESI,dword ptr [EBP + -0x8]
// 005c720f: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 005c7214: MOV EAX,dword ptr [EBX + 0x108]
// 005c721a: MOV dword ptr [ESI + 0x108],EAX
// 005c7220: ADD ESP,0x4
// 005c7223: MOV EAX,dword ptr [EBX + 0x10c]
// 005c7229: PUSH ESI
// 005c722a: MOV dword ptr [ESI + 0x10c],EAX
// 005c7230: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 005c7236: MOV EAX,dword ptr [EBX + 0x110]
// 005c723c: PUSH EDI
//   XREF to: 02f33740 (DATA)
// 005c723d: MOV dword ptr [ESI + 0x110],EAX
// 005c7243: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 005c7248: MOV EAX,dword ptr [EBP + -0x8]
// 005c724b: MOV EAX,dword ptr [EAX + 0x2c28]
// 005c7251: MOV ESI,dword ptr [EBX + 0xe304]
// 005c7257: MOV dword ptr [EBX + 0xe304],EAX
// 005c725d: MOV EAX,dword ptr [EBP + -0x8]
// 005c7260: ADD ESP,0x8
// 005c7263: MOV dword ptr [EAX + 0x2c28],ESI
// 005c7269: CMP dword ptr [EBX + 0x2620],0x0
//   Label: LAB_005c7269
// 005c7270: JZ 0x005c7299
//   XREF to: 005c7299 (CONDITIONAL_JUMP)
// 005c7272: LEA EAX,[EBX + 0xbebc]
// 005c7278: PUSH EAX
// 005c7279: PUSH dword ptr [EBX + 0x2414]
// 005c727f: LEA EAX,[EBX + 0x30]
// 005c7282: PUSH dword ptr [EBP + 0x18]
// 005c7285: PUSH EAX
// 005c7286: LEA EAX,[EBX + 0x20]
// 005c7289: PUSH EAX
// 005c728a: LEA EAX,[EBX + 0xe170]
// 005c7290: PUSH EAX
// 005c7291: CALL core_cloth.cpp_FUN_0043c2d0
//   XREF to: 0043c2d0 (UNCONDITIONAL_CALL)
// 005c7296: ADD ESP,0x18
// 005c7299: PUSH 0x654182
//   Label: LAB_005c7299
//   XREF to: 00654182 (DATA)
// 005c729e: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 005c72a4: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 005c72a5: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005c72aa: ADD ESP,0x8
// 005c72ad: TEST EAX,EAX
// 005c72af: JNZ 0x005c752e
//   XREF to: 005c752e (CONDITIONAL_JUMP)
// 005c72b5: MOV ECX,dword ptr [EBX + 0xe32c]
// 005c72bb: PUSH ECX
// 005c72bc: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005c72c1: ADD ESP,0x4
// 005c72c4: TEST EAX,EAX
// 005c72c6: JNZ 0x005c72e4
//   XREF to: 005c72e4 (CONDITIONAL_JUMP)
// 005c72c8: FLD float ptr [EBX + 0xe330]
// 005c72ce: FSUB float ptr [EBP + 0x18]
// 005c72d1: FST float ptr [EBX + 0xe330]
// 005c72d7: FLDZ
// 005c72d9: FCOMPP
// 005c72db: FNSTSW AX
// 005c72dd: SAHF
// 005c72de: JA 0x005c7544
//   XREF to: 005c7544 (CONDITIONAL_JUMP)
// 005c72e4: MOV ESP,EBP
//   Label: LAB_005c72e4
// 005c72e6: POP EBP
// 005c72e7: POP EDI
// 005c72e8: POP ESI
// 005c72e9: POP EBX
// 005c72ea: RET
// 005c72eb: PUSH 0x1
//   Label: LAB_005c72eb
// 005c72ed: PUSH 0x0
// 005c72ef: PUSH ESI
// 005c72f0: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c72f5: ADD ESP,0xc
// 005c72f8: PUSH EBX
// 005c72f9: PUSH 0x654125
//   XREF to: 00654125 (DATA)
// 005c72fe: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005c7304: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 005c7305: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005c730a: JMP 0x005c6fb5
//   XREF to: 005c6fb5 (UNCONDITIONAL_JUMP)
// 005c730f: JBE 0x005c6fa5
//   Label: LAB_005c730f
//   XREF to: 005c6fa5 (CONDITIONAL_JUMP)
// 005c7315: CMP EAX,0x3
// 005c7318: JZ 0x005c72eb
//   XREF to: 005c72eb (CONDITIONAL_JUMP)
// 005c731a: PUSH 0x1
//   Label: LAB_005c731a
// 005c731c: PUSH 0x0
// 005c731e: JMP 0x005c6fa9
//   XREF to: 005c6fa9 (UNCONDITIONAL_JUMP)
// 005c7323: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_005c7323
// 005c7326: MOV EAX,dword ptr [EBX + 0x154]
// 005c732c: PUSH EBX
// 005c732d: CALL dword ptr [EAX + 0x158]
// 005c7333: MOV EDX,dword ptr [EBX + 0xbe3c]
// 005c7339: ADD ESP,0x8
// 005c733c: TEST EDX,EDX
// 005c733e: JZ 0x005c7391
//   XREF to: 005c7391 (CONDITIONAL_JUMP)
// 005c7340: LEA EDI,[EBX + 0x20]
// 005c7343: FLD float ptr [EDI]
// 005c7345: FSUB float ptr [EDX + 0x20]
// 005c7348: FSTP float ptr [EBP + -0x28]
// 005c734b: FLD float ptr [EDI + 0x4]
// 005c734e: FSUB float ptr [EDX + 0x24]
// 005c7351: FST float ptr [EBP + -0x24]
// 005c7354: FMUL float ptr [EBP + -0x24]
// 005c7357: FLD float ptr [EBP + -0x28]
// 005c735a: FMUL ST0
// 005c735c: FLD float ptr [EDI + 0x8]
// 005c735f: FSUB float ptr [EDX + 0x28]
// 005c7362: FXCH
// 005c7364: FADDP ST2,ST0
// 005c7366: FST float ptr [EBP + -0x20]
// 005c7369: FMUL float ptr [EBP + -0x20]
// 005c736c: FADDP
// 005c736e: FSQRT
// 005c7370: FCOMP float ptr [EBX + 0xbe34]
// 005c7376: FNSTSW AX
// 005c7378: SAHF
// 005c7379: JNC 0x005c6fd0
//   XREF to: 005c6fd0 (CONDITIONAL_JUMP)
// 005c737f: PUSH 0x1
// 005c7381: PUSH 0x1
// 005c7383: PUSH ESI
// 005c7384: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c7389: ADD ESP,0xc
// 005c738c: JMP 0x005c6fd0
//   XREF to: 005c6fd0 (UNCONDITIONAL_JUMP)
// 005c7391: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_005c7391
// 005c7394: PUSH EBX
// 005c7395: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 005c739a: ADD ESP,0x8
// 005c739d: TEST EAX,EAX
// 005c739f: JZ 0x005c6fd0
//   XREF to: 005c6fd0 (CONDITIONAL_JUMP)
// 005c73a5: PUSH 0x1
// 005c73a7: PUSH 0x1
// 005c73a9: PUSH ESI
// 005c73aa: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c73af: ADD ESP,0xc
// 005c73b2: JMP 0x005c6fd0
//   XREF to: 005c6fd0 (UNCONDITIONAL_JUMP)
// 005c73b7: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_005c73b7
// 005c73ba: MOV EAX,dword ptr [EBX + 0x154]
// 005c73c0: PUSH EBX
// 005c73c1: CALL dword ptr [EAX + 0x158]
// 005c73c7: MOV EDX,dword ptr [EBX + 0xbe3c]
// 005c73cd: ADD ESP,0x8
// 005c73d0: TEST EDX,EDX
// 005c73d2: JNZ 0x005c740d
//   XREF to: 005c740d (CONDITIONAL_JUMP)
// 005c73d4: PUSH dword ptr [EBP + 0x18]
// 005c73d7: PUSH EBX
// 005c73d8: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 005c73dd: ADD ESP,0x8
// 005c73e0: LEA ESI,[EBX + 0x158]
// 005c73e6: TEST EAX,EAX
// 005c73e8: JZ 0x005c73fc
//   XREF to: 005c73fc (CONDITIONAL_JUMP)
// 005c73ea: PUSH 0x1
// 005c73ec: PUSH 0x1
// 005c73ee: PUSH ESI
// 005c73ef: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c73f4: ADD ESP,0xc
// 005c73f7: JMP 0x005c6fd0
//   XREF to: 005c6fd0 (UNCONDITIONAL_JUMP)
// 005c73fc: PUSH 0x1
//   Label: LAB_005c73fc
// 005c73fe: PUSH EAX
// 005c73ff: PUSH ESI
// 005c7400: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c7405: ADD ESP,0xc
// 005c7408: JMP 0x005c6fd0
//   XREF to: 005c6fd0 (UNCONDITIONAL_JUMP)
// 005c740d: PUSH 0x3e32b8c2
//   Label: LAB_005c740d
// 005c7412: LEA EAX,[EBX + 0x23ac]
// 005c7418: PUSH 0x3f000000
// 005c741d: MOV dword ptr [EAX + 0x8],0x0
// 005c7424: XOR ECX,ECX
// 005c7426: MOV EDX,dword ptr [EAX + 0x8]
// 005c7429: MOV dword ptr [EAX + 0x4],EDX
// 005c742c: MOV EDX,dword ptr [EAX + 0x4]
// 005c742f: MOV dword ptr [EAX],EDX
// 005c7431: MOV EAX,[0x00663928]
//   XREF to: 00663928 (READ)
// 005c7436: MOV dword ptr [EBP + -0x58],ECX
// 005c7439: MOV dword ptr [EBP + -0x50],EAX
// 005c743c: LEA EAX,[EBP + -0x58]
// 005c743f: MOV dword ptr [EBP + -0x54],ECX
// 005c7442: PUSH EAX
// 005c7443: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005c7449: PUSH EAX
// 005c744a: MOV ESI,dword ptr [EAX + 0x154]
// 005c7450: CALL dword ptr [ESI + 0xbc]
// 005c7456: ADD ESP,0x4
// 005c7459: PUSH EAX
// 005c745a: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005c7460: ADD EAX,0x20
// 005c7463: PUSH EAX
// 005c7464: PUSH EBX
// 005c7465: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 005c746a: ADD ESP,0x18
// 005c746d: TEST EAX,EAX
// 005c746f: JL 0x005c6fd0
//   XREF to: 005c6fd0 (CONDITIONAL_JUMP)
// 005c7475: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005c747b: LEA ESI,[EBX + 0x20]
// 005c747e: FLD float ptr [EAX + 0x20]
// 005c7481: FSUB float ptr [ESI]
// 005c7483: FSTP float ptr [EBP + -0x64]
// 005c7486: FLD float ptr [EAX + 0x24]
// 005c7489: FSUB float ptr [ESI + 0x4]
// 005c748c: FST float ptr [EBP + -0x60]
// 005c748f: FMUL float ptr [EBP + -0x60]
// 005c7492: FLD float ptr [EBP + -0x64]
// 005c7495: FMUL ST0
// 005c7497: FLD float ptr [EAX + 0x28]
// 005c749a: FSUB float ptr [ESI + 0x8]
// 005c749d: FXCH
// 005c749f: FADDP ST2,ST0
// 005c74a1: FST float ptr [EBP + -0x5c]
// 005c74a4: FMUL float ptr [EBP + -0x5c]
// 005c74a7: FADDP
// 005c74a9: FSQRT
// 005c74ab: FCOMP float ptr [0x00663934]
//   XREF to: 00663934 (READ)
// 005c74b1: FNSTSW AX
// 005c74b3: SAHF
// 005c74b4: JNC 0x005c6fd0
//   XREF to: 005c6fd0 (CONDITIONAL_JUMP)
// 005c74ba: MOV EDI,dword ptr [EBX + 0xe334]
// 005c74c0: TEST EDI,EDI
// 005c74c2: JNZ 0x005c6fd0
//   XREF to: 005c6fd0 (CONDITIONAL_JUMP)
// 005c74c8: MOV EAX,dword ptr [EBX + 0xe32c]
// 005c74ce: MOV dword ptr [EBX + 0xe334],0x1
// 005c74d8: PUSH EAX
// 005c74d9: MOV dword ptr [EBX + 0xe338],EDI
// 005c74df: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005c74e4: ADD ESP,0x4
// 005c74e7: PUSH 0x65414f
//   XREF to: 0065414f (DATA)
// 005c74ec: MOV EAX,dword ptr [EBX + 0x154]
// 005c74f2: PUSH EBX
// 005c74f3: MOV dword ptr [EBX + 0xe330],0x461c3f9a
// 005c74fd: CALL dword ptr [EAX + 0x28]
// 005c7500: ADD ESP,0x8
// 005c7503: JMP 0x005c6fd0
//   XREF to: 005c6fd0 (UNCONDITIONAL_JUMP)
// 005c7508: CMP EDI,0x1
//   Label: LAB_005c7508
// 005c750b: JNC 0x005c751a
//   XREF to: 005c751a (CONDITIONAL_JUMP)
// 005c750d: TEST EDI,EDI
// 005c750f: JZ 0x005c7323
//   XREF to: 005c7323 (CONDITIONAL_JUMP)
// 005c7515: JMP 0x005c6fd0
//   XREF to: 005c6fd0 (UNCONDITIONAL_JUMP)
// 005c751a: JBE 0x005c73b7
//   Label: LAB_005c751a
//   XREF to: 005c73b7 (CONDITIONAL_JUMP)
// 005c7520: CMP EDI,0x2
// 005c7523: JZ 0x005c73b7
//   XREF to: 005c73b7 (CONDITIONAL_JUMP)
// 005c7529: JMP 0x005c6fd0
//   XREF to: 005c6fd0 (UNCONDITIONAL_JUMP)
// 005c752e: MOV ESI,dword ptr [EBX + 0xe32c]
//   Label: LAB_005c752e
// 005c7534: PUSH ESI
// 005c7535: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005c753a: ADD ESP,0x4
// 005c753d: MOV ESP,EBP
// 005c753f: POP EBP
// 005c7540: POP EDI
// 005c7541: POP ESI
// 005c7542: POP EBX
// 005c7543: RET
// 005c7544: PUSH 0x41200000
//   Label: LAB_005c7544
// 005c7549: PUSH 0x40a00000
// 005c754e: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
