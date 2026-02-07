// Name: core_succubus.cpp_CSuccubus_process_FUN_005c6e90
// Address: 005c6e90
// Address Range: [[005c6e90, 005c7552]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_process_FUN_005c6e90(CSuccubus *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005c7515) */

void __cdecl core_succubus_cpp_CSuccubus_process_FUN_005c6e90(CSuccubus *this_ptr,float delta_time)

{
  COrientation *pCVar1;
  char cVar2;
  uint uVar3;
  CCloth *pCVar4;
  CDemonActor_vtable *pCVar5;
  float fVar6;
  float fVar7;
  CDemonMission *pCVar8;
  int iVar9;
  SMotion *pSVar10;
  CHotDemon *this_ptr_00;
  CHotDemon *actor;
  int extraout_EAX;
  int extraout_EAX_00;
  float fVar11;
  uint uVar12;
  COrientation *pCVar13;
  char *pcVar14;
  CDeformableModelInstance *pCVar15;
  char (*pacVar16) [40];
  
  iVar9 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar9 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fVar11 = (this_ptr->base).speed;
  while (0.0 < delta_time * fVar11) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610
              (&(this_ptr->base).base.model.motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
  }
  this_ptr->unk[0x2264] = '\0';
  this_ptr->unk[0x2265] = '\0';
  this_ptr->unk[0x2266] = '\0';
  this_ptr->unk[0x2267] = '\0';
  *(uint *)(this_ptr->unk + 0x2260) = *(uint *)(this_ptr->unk + 0x2264);
  *(uint *)(this_ptr->unk + 0x225c) = *(uint *)(this_ptr->unk + 0x2260);
  fVar11 = (this_ptr->base).speed;
  while (0.0 < delta_time * fVar11) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610((CMotionController *)(this_ptr->unk + 8))
    ;
  }
  fVar11 = (this_ptr->base).speed;
  fVar6 = (float)3.1415926535000001;
  pCVar15 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar6 * fVar11;
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar15->motion_controller);
  uVar3 = pSVar10->state_index;
  iVar9 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar9 == 0) {
    if (uVar3 == 0) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      iVar9 = *(int *)((this_ptr->base).unk2 + 4);
      if (iVar9 == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar15->motion_controller,1,1);
        }
      }
      else {
        fVar11 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar9 + 0x20);
        fVar6 = (this_ptr->base).base.base.location.position.y - *(float *)(iVar9 + 0x24);
        fVar7 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar9 + 0x28);
        if (SQRT(fVar7 * fVar7 + fVar11 * fVar11 + fVar6 * fVar6) < (this_ptr->base).guard_distance)
        {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar15->motion_controller,1,1);
        }
      }
    }
    else if ((uVar3 < 2) || (uVar3 == 2)) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        pCVar15 = &(this_ptr->base).base.model;
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
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xbc))();
        iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
        if (((-1 < iVar9) &&
            (iVar9 = *(int *)((this_ptr->base).unk2 + 4),
            fVar11 = *(float *)(iVar9 + 0x20) - (this_ptr->base).base.base.location.position.x,
            fVar6 = *(float *)(iVar9 + 0x24) - (this_ptr->base).base.base.location.position.y,
            fVar7 = *(float *)(iVar9 + 0x28) - (this_ptr->base).base.base.location.position.z,
            SQRT(fVar7 * fVar7 + fVar11 * fVar11 + fVar6 * fVar6) < 15.0f)) &&
           (*(int *)(this_ptr->unk + 0x2480) == 0)) {
          uVar3 = *(uint *)(this_ptr->unk + 0x2478);
          this_ptr->unk[0x2480] = '\x01';
          this_ptr->unk[0x2481] = '\0';
          this_ptr->unk[0x2482] = '\0';
          this_ptr->unk[0x2483] = '\0';
          this_ptr->unk[0x2484] = '\0';
          this_ptr->unk[0x2485] = '\0';
          this_ptr->unk[0x2486] = '\0';
          this_ptr->unk[0x2487] = '\0';
          sound_sndmain_cpp_killSfx_FUN_005a9c40(uVar3);
          pCVar5 = (this_ptr->base).base.base.vtable._ub;
          this_ptr->unk[0x247c] = -0x66;
          this_ptr->unk[0x247d] = '?';
          this_ptr->unk[0x247e] = '\x1c';
          this_ptr->unk[0x247f] = 'F';
          (*pCVar5->playAmbientSound)((CDemonActor *)this_ptr,"succubus-morph.wav");
        }
      }
    }
    goto LAB_005c6fd0;
  }
  uVar3 = (this_ptr->base).base.field22_0x25b0;
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
              (&(this_ptr->base).base.model.motion_controller,iVar9,1);
  }
  else {
    if (uVar3 < 3) goto LAB_005c6fa5;
    if (uVar3 != 3) goto LAB_005c731a;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar15->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_005c6fd0:
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  iVar9 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar9 != 0) {
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
    (this_ptr->base).base.field6_0x241c.z = 0.0;
    (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
    (this_ptr->base).base.field6_0x241c.x = (this_ptr->base).base.field6_0x241c.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  pCVar15 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar15);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar15->motion_controller);
  fVar11 = (float)(this_ptr->base).base.model.motion_controller.current_frame_number;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
            ((CMotionController *)(this_ptr->unk + 8),pSVar10->motion_name,fVar11);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
            ((CDeformableModelInstance *)(this_ptr->unk + 8));
  if ((*(int *)(this_ptr->unk + 0x2480) != 0) &&
     (fVar6 = *(float *)(this_ptr->unk + 0x2484) + delta_time,
     *(float *)(this_ptr->unk + 0x2484) = fVar6, 4.0f < fVar6)) {
    this_ptr_00 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                            (0xbef0,"..\\core\\succubus.cpp",0x16c);
    actor = (CHotDemon *)0x0;
    if (this_ptr_00 != (CHotDemon *)0x0) {
      actor = core_hotdemon_cpp_CHotDemon_ctor_FUN_004f6ca0(this_ptr_00);
    }
    pCVar8 = g_CDemonMissionPtr;
    if (actor != (CHotDemon *)0x0) {
      (this_ptr->base).base.base.was_created = 2;
      core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(pCVar8,(CDemonActor *)actor);
      (actor->base).base.base.location.position.x = (this_ptr->base).base.base.location.position.x;
      (actor->base).base.base.location.position.y = (this_ptr->base).base.base.location.position.y;
      (actor->base).base.base.location.position.z = (this_ptr->base).base.base.location.position.z;
      pCVar13 = &(actor->base).base.base.orient;
      (actor->base).base.base.location.area_id = (this_ptr->base).base.base.location.area_id;
      pCVar1 = &(this_ptr->base).base.base.orient;
      if (pCVar13 != pCVar1) {
        pCVar13->pitch = pCVar1->pitch;
        (actor->base).base.base.orient.bank = (this_ptr->base).base.base.orient.bank;
        (actor->base).base.base.orient.heading = (this_ptr->base).base.base.orient.heading;
      }
      pcVar14 = "hdwing.cth";
      pacVar16 = (actor->base).base.cloth_list.filenames;
      (actor->base).base.cloth_list.count = 1;
      do {
        cVar2 = *pcVar14;
        (*pacVar16)[0] = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        (*pacVar16)[1] = cVar2;
        pacVar16 = (char (*) [40])(*pacVar16 + 2);
      } while (cVar2 != '\0');
      (*((actor->base).base.base.vtable._ub)->setup)((CDemonActor *)actor);
      pCVar15 = &(actor->base).base.model;
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                (&pCVar15->motion_controller,pSVar10->motion_name,fVar11);
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar15);
      (actor->base).base.base.scale.x = (this_ptr->base).base.base.scale.x;
      (actor->base).base.base.scale.y = (this_ptr->base).base.base.scale.y;
      pCVar8 = g_CDemonMissionPtr;
      (actor->base).base.base.scale.z = (this_ptr->base).base.base.scale.z;
      core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(pCVar8,(CDemonActor *)actor);
      pCVar4 = *(CCloth **)(this_ptr->unk + 0x2450);
      *(CCloth **)(this_ptr->unk + 0x2450) = (actor->base).base.cloth_list.cloths[0];
      (actor->base).base.cloth_list.cloths[0] = pCVar4;
    }
  }
  if ((this_ptr->base).base.field43_0x2620 != 0) {
    core_cloth_cpp_CClothList_process_FUN_0043c2d0
              ((CClothList *)(this_ptr->unk + 0x22bc),&(this_ptr->base).base.base.location.position,
               (CVector3f *)&(this_ptr->base).base.base.orient,delta_time,
               (this_ptr->base).base.closest_distance_threshold,
               (CDeformableModelInstance *)(this_ptr->unk + 8));
  }
  iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,"succubusShutUp");
  if (iVar9 == 0) {
    iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0x2478));
    if ((iVar9 == 0) &&
       (fVar11 = *(float *)(this_ptr->unk + 0x247c) - delta_time,
       *(float *)(this_ptr->unk + 0x247c) = fVar11, fVar11 < 0.0)) {
      fVar11 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
      pCVar5 = (this_ptr->base).base.base.vtable._ub;
      *(float *)(this_ptr->unk + 0x247c) = fVar11;
      uVar12 = (*pCVar5->playSound)((CDemonActor *)this_ptr,"succubus-horny-?.wav");
      *(uint *)(this_ptr->unk + 0x2478) = uVar12;
      return;
    }
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk + 0x2478));
  return;
}
