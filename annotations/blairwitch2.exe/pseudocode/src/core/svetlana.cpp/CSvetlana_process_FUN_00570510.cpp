// Name: core_svetlana.cpp_CSvetlana_process_FUN_00570510
// Address: 00570510
// Address Range: [[00570510, 00570c77]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_00570510(CSvetlana *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_00570510(CSvetlana *this_ptr,float delta_time)

{
  UOrientationVector *euler;
  CLocation *position;
  EWalkState EVar1;
  CDemonActor *pCVar2;
  bool bVar3;
  int iVar4;
  EDeathState EVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  byte bVar9;
  float afStackY_18ac [1521];
  CDeformableModelInstance *pCVar10;
  CQuaternion4f *source_quaternions;
  float fVar11;
  CVector3f *pCVar12;
  code *blend_callback;
  CQuaternion4f CStack_d0;
  float fStack_c0;
  float afStack_bc [3];
  CVector3f CStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float afStack_98 [3];
  CVector3f CStack_8c;
  uint uStack_80;
  float afStack_7c [4];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  uint uStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CVector3f CStack_38;
  CCharacter *pCStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar9 = 0;
  if (((this_ptr->base).base.hit_points < (float)_DAT_005ec2fb) &&
     (fVar11 = (this_ptr->base).base.hit_points + delta_time,
     (this_ptr->base).base.hit_points = fVar11, (float)_DAT_005ec2fb < fVar11)) {
    (this_ptr->base).base.hit_points = 100.0;
  }
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if ((iVar4 == 0) || ((this_ptr->base).ai_task == HERO_TASK_SUSPEND)) {
switchD_0057096f_caseD_9:
    return;
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042a7a0((CCharacter *)this_ptr,delta_time);
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time);
  fVar11 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar11;
  if (fVar11 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  pCVar12 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar12->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_svetlana_cpp_CSvetlana_advanceMotion_FUN_00571460(this_ptr,delta_time);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar4 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
      core_svetlana_cpp_CSvetlana_processAI_FUN_00570c80(this_ptr,delta_time);
    }
    iVar4 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
    switch(*(uint *)(iVar4 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar4 = 0;
        if (this_ptr->blades_drawn != 0) {
          iVar4 = 10;
        }
        if ((this_ptr->base).player_input.action_state.walk != 0) {
          if ((this_ptr->base).player_input.action_state.run == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = 2;
          }
        }
        if ((this_ptr->base).player_input.action_state.backup != 0) {
          iVar4 = 3;
        }
        if ((this_ptr->base).player_input.action_state.draw != 0) {
          iVar4 = this_ptr->blades_drawn;
          (this_ptr->base).player_input.action_state.draw = 0;
          uVar6 = (uint)(iVar4 == 0);
          this_ptr->blades_drawn = uVar6;
          if (uVar6 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = 10;
          }
        }
        if ((this_ptr->base).player_input.action_state.fire != 0) {
          bVar3 = true;
          if ((this_ptr->blades_drawn == 0) && ((this_ptr->base).control_type != HERO_CONTROL_AI)) {
            iVar7 = core_hero_cpp_FUN_004cec50(this_ptr);
            bVar3 = false;
            if (iVar7 != 0) goto LAB_00570a09;
            iVar7 = core_hero_cpp_FUN_004cf030(this_ptr,0);
            if ((iVar7 != 0) && (iVar7 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(&this_ptr->base);
            }
            if ((iVar7 != 0) ||
               (iVar7 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90(&this_ptr->base),
               iVar7 != 0)) goto LAB_00570a09;
            iVar7 = core_hero_cpp_FUN_004cf2b0(&this_ptr->base);
            if (iVar7 != 0) {
              core_hero_cpp_FUN_004cf440(this_ptr);
              goto LAB_00570a09;
            }
          }
          else {
LAB_00570a09:
            if (!bVar3) goto LAB_00570a2a;
          }
          iVar4 = this_ptr->attack_hand;
          (this_ptr->base).player_input.action_state.fire = 0;
          if (iVar4 == 0) {
            iVar4 = 0xf;
          }
          else {
            iVar4 = 0xe;
          }
        }
LAB_00570a2a:
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
        iVar7 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
        if (iVar4 != *(int *)(iVar7 + 0x24)) goto LAB_00570663;
      }
      break;
    case 9:
      goto switchD_0057096f_caseD_9;
    }
  }
  else {
    iVar4 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
    if ((*(int *)(iVar4 + 0x24) != 0x1a) && (*(int *)(iVar4 + 0x24) != 0x1b)) {
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      pCVar12->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    }
    EVar1 = (this_ptr->base).base.walk_state;
    if (EVar1 < 2) {
      if (EVar1 == WALK_STATE_WALKING) {
        iVar4 = 1;
      }
      else {
LAB_0057092b:
        iVar4 = 0;
      }
    }
    else {
      if (2 < EVar1) {
        if (EVar1 == WALK_STATE_NO_PATH) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0,1);
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
          goto switchD_0057096f_caseD_4;
        }
        goto LAB_0057092b;
      }
      iVar4 = 2;
    }
LAB_00570663:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar4,1);
  }
switchD_0057096f_caseD_4:
  pCVar2 = (this_ptr->base).base.grabbed_by;
  if (pCVar2 == (CDemonActor *)0x0) {
    CStack_8c.x = (this_ptr->base).base.model.accumulated_root_motion.x;
    CStack_8c.y = (this_ptr->base).base.model.accumulated_root_motion.y;
    CStack_8c.z = (this_ptr->base).base.model.accumulated_root_motion.z;
    iVar4 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
    if (*(int *)(iVar4 + 0x24) != 0x1a) {
      core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    }
    afStack_7c[2] = (this_ptr->base).base.velocity.x * delta_time;
    afStack_7c[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_6c = (this_ptr->base).base.velocity.z * delta_time;
    fStack_44 = afStack_7c[2];
    afStack_7c[(uint)bVar9 * -2 + 0xf] = afStack_7c[(uint)bVar9 * -2 + 3];
    afStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
         afStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    fStack_68 = fStack_44 + (this_ptr->base).base.position_delta.x;
    fStack_64 = fStack_40 + (this_ptr->base).base.position_delta.y;
    fStack_60 = fStack_3c + (this_ptr->base).base.position_delta.z;
    fStack_a4 = fStack_68;
    afStack_bc[(uint)bVar9 * -2 + 7] = afStack_7c[(uint)bVar9 * -2 + 6];
    afStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 8] =
         afStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    CStack_8c.x = CStack_8c.x + fStack_a4;
    CStack_8c.y = CStack_8c.y + fStack_a0;
    CStack_8c.z = CStack_8c.z + fStack_9c;
    iVar4 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
    iVar4 = *(int *)(iVar4 + 0x24);
    if ((((iVar4 != 0x17) && (iVar4 != 0x18)) && (iVar4 != 0x19)) &&
       (((iVar4 != 0x25 && (iVar4 != 0x26)) && ((iVar4 != 0x27 && (iVar4 != 0x28)))))) {
      core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_8c);
    }
    iVar4 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
    if (*(int *)(iVar4 + 0x24) == 0x1a) {
      (this_ptr->base).base.base.location.position.y =
           delta_time * (float)_DAT_005ec303 + (this_ptr->base).base.base.location.position.y;
    }
    goto LAB_00570827;
  }
  if ((this_ptr->base).base.grabbed_type == 0) {
    core_actor_cpp_FUN_00408de0(this_ptr,&pCVar2->location);
    afStack_98[0] = (float)uStack_5c;
    afStack_bc[(uint)bVar9 * -2 + 10] = afStack_7c[(uint)bVar9 * -2 + 9];
    afStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xb] =
         afStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_bc + 9);
    uStack_80 = uStack_50;
    afStack_7c[(uint)bVar9 * -2] = afStack_7c[(uint)bVar9 * -2 + 0xc];
    afStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    pCStack_14 = (CCharacter_full_vtable *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_7c[0]);
    fStack_18 = (float)pCStack_14;
    if ((float)pCStack_14 < _DAT_005ec30b) {
      fStack_18 = (float)pCStack_14 + _DAT_005ec30f;
    }
    if (_DAT_005ec313 < fStack_18) {
      fStack_18 = fStack_18 + _DAT_005ec317;
    }
    fStack_1c = delta_time * _DAT_005ec30f;
    fStack_20 = -fStack_1c;
    if (fStack_18 < fStack_20) {
      fStack_18 = fStack_20;
    }
    if (fStack_1c < fStack_18) {
      fStack_18 = fStack_1c;
    }
    (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fStack_18;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
  }
  pCStack_24 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  pCStack_14 = (pCStack_24->base).vtable._uc;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,0,&CStack_38);
  pCVar12 = (CVector3f *)(afStack_bc + 3);
  CStack_b0.x = CStack_38.x;
  afStack_bc[(uint)bVar9 * -2 + 4] = *(float *)((int)&CStack_38 + (uint)bVar9 * -8 + 4);
  afStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5] =
       *(float *)((int)&CStack_38 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  iVar4 = (*(pCStack_14->_uc).attractActorToward)(pCStack_24,(CDemonActor *)this_ptr,pCVar12);
  if (iVar4 == 0) {
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_00570814:
    iVar4 = 0;
  }
  else {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_00570814;
    if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_00570827;
    iVar4 = 0x10;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.model.base,iVar4,1);
LAB_00570827:
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  pCVar10 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar10);
  EVar5 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar5 == DEATH_STATE_ALIVE) {
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
    fVar11 = this_ptr->head_blend_weight;
    iVar4 = _DAT_0264bf38;
    core_xform_cpp_FUN_00594380(&this_ptr->head_euler_angles);
    source_quaternions = &CStack_d0;
    CStack_d0.w = fStack_c0;
    pfVar8 = (float *)((int)&CStack_d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(float *)((int)&CStack_d0 + (uint)bVar9 * -8 + 4) = afStack_bc[(uint)bVar9 * -2];
    *pfVar8 = afStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pfVar8[(uint)bVar9 * -2 + 1] =
         (afStack_bc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (pCVar10,source_quaternions,fVar11,iVar4,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  pCVar10 = &(this_ptr->base).base.model;
  euler = &(this_ptr->base).base.base.orient;
  position = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CCloth_process_FUN_005afdf0
            (&this_ptr->cape_cloth,&position->position,&euler->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar10);
  core_cloth_cpp_CCloth_process_FUN_005afdf0
            (&this_ptr->hair_cloth,&position->position,&euler->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar10);
  return;
}
