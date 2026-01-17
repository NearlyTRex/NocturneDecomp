// Name: core_succubus.cpp_CSuccubus_process_FUN_005c6e90
// Address: 005c6e90
// Address Range: [[005c6e90, 005c7552]]
// Convention: __cdecl
// Signature: void core_succubus.cpp_CSuccubus_process_FUN_005c6e90(CSuccubus * this_ptr)

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
  CHotDemon *this_ptr_01;
  int extraout_EAX;
  int extraout_EAX_00;
  float fVar11;
  uint uVar12;
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
  *(uint *)(this_ptr->field1_0xbeb4 + 0x2260) =
       *(uint *)(this_ptr->field1_0xbeb4 + 0x2264);
  *(uint *)(this_ptr->field1_0xbeb4 + 0x225c) =
       *(uint *)(this_ptr->field1_0xbeb4 + 0x2260);
  fVar11 = (this_ptr->base_enemy).speed;
  while (0.0 < in_stack_00000008 * fVar11) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610
              ((CMotionController *)(this_ptr->field1_0xbeb4 + 8));
  }
  fVar11 = (this_ptr->base_enemy).speed;
  fVar5 = (float)3.1415926535000001;
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
            SQRT(fVar6 * fVar6 + fVar11 * fVar11 + fVar5 * fVar5) < 15.0f)) &&
           (*(int *)(this_ptr->field1_0xbeb4 + 0x2480) == 0)) {
          uVar3 = *(uint *)(this_ptr->field1_0xbeb4 + 0x2478);
          this_ptr->field1_0xbeb4[0x2480] = '\x01';
          this_ptr->field1_0xbeb4[0x2481] = '\0';
          this_ptr->field1_0xbeb4[0x2482] = '\0';
          this_ptr->field1_0xbeb4[0x2483] = '\0';
          this_ptr->field1_0xbeb4[0x2484] = '\0';
          this_ptr->field1_0xbeb4[0x2485] = '\0';
          this_ptr->field1_0xbeb4[0x2486] = '\0';
          this_ptr->field1_0xbeb4[0x2487] = '\0';
          sound_sndmain_cpp_killSfx_FUN_005a9c40(uVar3);
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
         in_stack_00000008 * (float)32;
    pCVar7 = &this_ptr->base_enemy;
    (pCVar7->base_character).field2_0x240c[0x18] = '\0';
    (pCVar7->base_character).field2_0x240c[0x19] = '\0';
    (pCVar7->base_character).field2_0x240c[0x1a] = '\0';
    (pCVar7->base_character).field2_0x240c[0x1b] = '\0';
    *(uint *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) =
         *(uint *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
    *(uint *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x10) =
         *(uint *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
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
     *(float *)(this_ptr->field1_0xbeb4 + 0x2484) = fVar5, 4.0f < fVar5)) {
    this_ptr_00 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                            (0xbef0,"..\\core\\succubus.cpp",0x16c);
    this_ptr_01 = (CHotDemon *)0x0;
    if (this_ptr_00 != (CHotDemon *)0x0) {
      this_ptr_01 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004f6ca0(this_ptr_00);
    }
    pCVar8 = g_CDemonMissionPtr;
    if (this_ptr_01 != (CHotDemon *)0x0) {
      (this_ptr->base_enemy).base_character.base_actor.was_created = 2;
      core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(pCVar8);
      (this_ptr_01->base_enemy).base_character.base_actor.location.position.x =
           (this_ptr->base_enemy).base_character.base_actor.location.position.x;
      (this_ptr_01->base_enemy).base_character.base_actor.location.position.y =
           (this_ptr->base_enemy).base_character.base_actor.location.position.y;
      (this_ptr_01->base_enemy).base_character.base_actor.location.position.z =
           (this_ptr->base_enemy).base_character.base_actor.location.position.z;
      pCVar13 = &(this_ptr_01->base_enemy).base_character.base_actor.orient;
      (this_ptr_01->base_enemy).base_character.base_actor.location.area_id =
           (this_ptr->base_enemy).base_character.base_actor.location.area_id;
      pCVar1 = &(this_ptr->base_enemy).base_character.base_actor.orient;
      if (pCVar13 != pCVar1) {
        pCVar13->pitch = pCVar1->pitch;
        (this_ptr_01->base_enemy).base_character.base_actor.orient.bank =
             (this_ptr->base_enemy).base_character.base_actor.orient.bank;
        (this_ptr_01->base_enemy).base_character.base_actor.orient.heading =
             (this_ptr->base_enemy).base_character.base_actor.orient.heading;
      }
      pcVar14 = "hdwing.cth";
      pcVar16 = (this_ptr_01->base_enemy).base_character.cloth_data;
      (this_ptr_01->base_enemy).base_character.cloth_count = 1;
      do {
        cVar2 = *pcVar14;
        *pcVar16 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar16[1] = cVar2;
        pcVar16 = pcVar16 + 2;
      } while (cVar2 != '\0');
      (*((this_ptr_01->base_enemy).base_character.base_actor.vtable)->setup)
                ((CDemonActor *)this_ptr_01);
      pCVar15 = &(this_ptr_01->base_enemy).base_character.model;
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                (&pCVar15->motion_controller,pSVar10->motion_name,fVar11);
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar15);
      (this_ptr_01->base_enemy).base_character.base_actor.scale.x =
           (this_ptr->base_enemy).base_character.base_actor.scale.x;
      (this_ptr_01->base_enemy).base_character.base_actor.scale.y =
           (this_ptr->base_enemy).base_character.base_actor.scale.y;
      pCVar8 = g_CDemonMissionPtr;
      (this_ptr_01->base_enemy).base_character.base_actor.scale.z =
           (this_ptr->base_enemy).base_character.base_actor.scale.z;
      core_mission_cpp_CDemonMission_FUN_00523b70(pCVar8);
      uVar12 = *(uint *)(this_ptr->field1_0xbeb4 + 0x2450);
      *(uint *)(this_ptr->field1_0xbeb4 + 0x2450) =
           *(uint *)((this_ptr_01->base_enemy).base_character.cloth_data + 400);
      *(uint *)((this_ptr_01->base_enemy).base_character.cloth_data + 400) = uVar12;
    }
  }
  if (*(int *)(this_ptr->base_enemy).base_character.field13_0x2620 != 0) {
    core_cloth_cpp_FUN_0043c2d0();
  }
  iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,"succubusShutUp");
  if (iVar9 == 0) {
    iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->field1_0xbeb4 + 0x2478))
    ;
    if ((iVar9 == 0) &&
       (fVar11 = *(float *)(this_ptr->field1_0xbeb4 + 0x247c) - in_stack_00000008,
       *(float *)(this_ptr->field1_0xbeb4 + 0x247c) = fVar11, fVar11 < 0.0)) {
      fVar11 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
      pCVar4 = (this_ptr->base_enemy).base_character.base_actor.vtable;
      *(float *)(this_ptr->field1_0xbeb4 + 0x247c) = fVar11;
      uVar12 = (*pCVar4->playSound)((CDemonActor *)this_ptr,"succubus-horny-?.wav");
      *(uint *)(this_ptr->field1_0xbeb4 + 0x2478) = uVar12;
      return;
    }
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->field1_0xbeb4 + 0x2478));
  return;
}
