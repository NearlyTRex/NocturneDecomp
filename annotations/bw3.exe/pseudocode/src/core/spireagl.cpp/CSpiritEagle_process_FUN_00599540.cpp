// Name: core_spireagl.cpp_CSpiritEagle_process_FUN_00599540
// Address: 00599540
// Address Range: [[00599540, 00599a30]]
// Convention: __cdecl
// Signature: void __cdecl core_spireagl_cpp_CSpiritEagle_process_FUN_00599540(CSpiritEagle *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_spireagl_cpp_CSpiritEagle_process_FUN_00599540(CSpiritEagle *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  EWalkState EVar4;
  CPryeMorph *pCVar5;
  CDemonMission *this_ptr_00;
  EDeathState EVar6;
  int iVar7;
  SMotion *pSVar8;
  CDemonActor *pCVar9;
  int iVar10;
  CDeformableModelInstance *pCVar11;
  int iVar12;
  byte bVar13;
  float afStackY_106c [1012];
  char *state_name;
  float *pfVar14;
  EBloodType blood_type;
  float fStack_84;
  CVector3f CStack_78;
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [2];
  CVector3f CStack_3c;
  CVector3f CStack_30;
  float fStack_1c;
  uint uStack_18;
  int iStack_14;
  
  bVar13 = 0;
  core_charactr_cpp_FUN_00433c60(this_ptr,delta_time);
  pCVar11 = &(this_ptr->base).model;
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
  uStack_18 = 1;
  fStack_1c = delta_time;
  while (0.0 < fStack_1c) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar11->base,&fStack_1c);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(&this_ptr->base,iVar7);
  }
  EVar6 = (*(((this_ptr->base).base.vtable._uc)->_uc).getDeathState)(&this_ptr->base);
  if ((((1 < (int)EVar6) && ((this_ptr->base).base.lifecycle_state == ACTOR_CREATED)) &&
      (this_ptr->pool_me == 0)) && ((this_ptr->base).base.standing_platform == (CPlatform *)0x0)) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (pCVar11,0,&CStack_3c);
    pfVar14 = &fStack_48;
    fStack_48 = CStack_3c.x;
    afStack_44[(uint)bVar13 * -2] = *(float *)((int)&CStack_3c + (uint)bVar13 * -8 + 4);
    afStack_44[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         *(float *)((int)&CStack_3c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar14);
    blood_type = BLOOD_TYPE_RED;
    CStack_54.x = fStack_84;
    *(uint *)((int)&CStack_54 + (uint)bVar13 * -8 + 4) =
         *(uint *)(&stack0xffffff80 + (uint)bVar13 * -8);
    *(uint *)((int)&CStack_54 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
         *(uint *)(&stack0xffffff84 + (uint)bVar13 * -8 + (uint)bVar13 * -8);
    core_gore_cpp_CGore_createBloodPool_FUN_004cec40(g_CGorePtr,&CStack_54,blood_type);
    uStack_18 = 1;
    this_ptr->pool_me = 1;
  }
  (this_ptr->base).walk_step_speed = (this_ptr->base).model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time);
  pCVar11 = &(this_ptr->base).model;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660(&this_ptr->base,delta_time);
  if (iVar7 == 0) {
    if (1.0 <= this_ptr->morph_time) {
      return;
    }
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar11->base);
    iStack_14 = pSVar8->state_index;
    if ((iStack_14 == 6) || (iStack_14 == 7)) {
      (this_ptr->base).base.is_renderable = 1;
      (this_ptr->base).base.is_transparent = 0;
    }
    if (((iStack_14 == 7) &&
        (fVar2 = delta_time * (float)_DAT_005d99bd + this_ptr->morph_time,
        this_ptr->morph_time = fVar2, 1.0 <= fVar2)) && (this_ptr->morph_actor != (CPryeMorph *)0x0)
       ) {
      core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
                (0x01D81080,(CDemonActor *)this_ptr->morph_actor);
      this_ptr_00 = 0x01D81080;
      this_ptr->morph_actor = (CPryeMorph *)0x0;
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_004f6f10(this_ptr_00,this_ptr,1);
    }
    if (iStack_14 != 0) {
      core_actor_cpp_FUN_00408b00(this_ptr,&(this_ptr->base).model.accumulated_root_motion);
      pCVar1 = &(this_ptr->base).base.location;
      afStack_68[2] = fStack_6c;
      afStack_68[(uint)bVar13 * -2 + 3] = afStack_68[(uint)bVar13 * -2];
      afStack_68[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_68[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      fVar2 = (this_ptr->base).base.location.position.y;
      fVar3 = (this_ptr->base).base.location.position.z;
      (pCVar1->position).x = (pCVar1->position).x + afStack_68[2];
      (this_ptr->base).base.location.position.y = fVar2 + afStack_68[3];
      (this_ptr->base).base.location.position.z = fVar3 + fStack_58;
      pCVar5 = this_ptr->morph_actor;
      if (pCVar5 != (CPryeMorph *)0x0) {
        (pCVar5->base).base.base.location.position.x = (pCVar1->position).x;
        (pCVar5->base).base.base.location.position.y = (this_ptr->base).base.location.position.y;
        (pCVar5->base).base.base.location.position.z = (this_ptr->base).base.location.position.z;
        (pCVar5->base).base.base.location.area_id = (this_ptr->base).base.location.area_id;
      }
    }
    if (iStack_14 == 2) {
      iVar7 = 0;
      for (iVar12 = 0; iVar12 < g_CDemonSetPtr->actor_count; iVar12 = iVar12 + 1) {
        pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar7),
                            g_CWayPointClassInfo.name_hash);
        if (((pCVar9 != (CDemonActor *)0x0) &&
            (iVar10 = _strcmp(pCVar9->actor_name,"AcrossBridge"),
            iVar10 == 0)) && ((CLocation *)&CStack_30 != &pCVar9->location)) {
          CStack_30.x = (pCVar9->location).position.x;
          CStack_30.y = (pCVar9->location).position.y;
          CStack_30.z = (pCVar9->location).position.z;
        }
        iVar7 = iVar7 + 4;
      }
      CStack_78.x = 0.0;
      CStack_78.y = 0.0;
      CStack_78.z = 0.0;
      iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        (&this_ptr->base,&CStack_30,(CPathMap *)0x0,&CStack_78,1.0,0.08726646);
      if (iVar7 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00441ff0
                  (g_CConsolePtr,"%s gave up chase - I'm confused\n");
      }
      else if (iVar7 < 1) goto LAB_005999f5;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).model.base,0,1);
    }
LAB_005999f5:
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(&(this_ptr->base).model)
    ;
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350(&this_ptr->base,delta_time);
    goto LAB_005996b8;
  }
  EVar4 = (this_ptr->base).walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
      state_name = &DAT_005d995c;
    }
    else {
LAB_005997ec:
      pCVar9 = (this_ptr->base).walk_to_target;
      if (pCVar9 == (CDemonActor *)0x0) {
        state_name = "STAND";
      }
      else {
        iVar7 = _strcmp(pCVar9->actor_name,"WPPerch*");
        if (iVar7 == 1) {
          state_name = "PERCH";
        }
        else {
          engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"Landing...");
          state_name = "LAND_GROUND";
        }
      }
    }
LAB_0059968b:
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              (&(this_ptr->base).model.base,state_name,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) {
      state_name = &DAT_005d9958;
      goto LAB_0059968b;
    }
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_005997ec;
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              (&pCVar11->base,"STAND",1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
LAB_005996b8:
  if (((iStack_14 != 2) && (iStack_14 != 3)) && ((iStack_14 != 1 && (iStack_14 != 4)))) {
    core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
  }
  (this_ptr->base).position_delta.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).position_delta.y = (this_ptr->base).position_delta.z;
  (this_ptr->base).position_delta.x = (this_ptr->base).position_delta.y;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(&(this_ptr->base).model);
  core_charactr_cpp_FUN_00432330(this_ptr,delta_time,uStack_18);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350(&this_ptr->base,delta_time);
  return;
}
