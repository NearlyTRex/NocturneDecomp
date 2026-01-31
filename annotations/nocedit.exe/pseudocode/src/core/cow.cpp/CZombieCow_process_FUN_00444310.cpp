// Name: core_cow.cpp_CZombieCow_process_FUN_00444310
// Address: 00444310
// Address Range: [[00444310, 00444833]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_process_FUN_00444310(CZombieCow *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_cow_cpp_CZombieCow_process_FUN_00444310(CZombieCow *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  char *pcVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  CEnemy *pCVar6;
  int iVar7;
  SMotion *pSVar8;
  int iVar9;
  CZombieCow *pCVar10;
  CVector3f *pCVar11;
  int extraout_EAX;
  int extraout_EAX_00;
  uint uVar12;
  int extraout_EAX_01;
  SDamageInfo local_c0;
  CVector3f local_84;
  CVector3f local_78;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  uint local_54;
  uint local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  CVector3f local_3c;
  CVector3f local_30;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar7 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar7 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_1c = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < local_1c) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr_00->motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
  }
  fVar2 = (this_ptr->base).speed;
  fVar5 = (float)3.1415926535000001;
  fVar4 = (float)0.25;
  *(float *)((this_ptr->base).base.unk1 + 0x28) =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  *(float *)((this_ptr->base).base.unk1 + 0x2c) = delta_time * fVar5 * fVar2 * fVar4;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr_00->motion_controller);
  iVar7 = pSVar8->state_index;
  iVar9 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar9 == 0) {
    switch(iVar7) {
    case 0:
      core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
      if (extraout_EAX == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        if (*(int *)((this_ptr->base).unk2 + 4) != 0) {
          core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
                    (g_CSoundPtr,*(uint *)(this_ptr->unk + 0x10));
          if (extraout_EAX_00 == 0) {
            uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"cow?.wav");
            *(uint *)(this_ptr->unk + 0x10) = uVar12;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,1,1);
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      fVar2 = 4.5f;
      if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX_01 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,0,1);
        }
      }
      else {
        local_18 = 4.5f;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_54 = 0;
        local_50 = 0;
        local_4c = fVar2;
        (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xbc))();
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
        if (iVar7 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,0,1);
        }
        else if ((0 < iVar7) && (*(float *)(this_ptr->base).unk2 <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,2,1);
          (this_ptr->base).unk2[0] = '\0';
          (this_ptr->base).unk2[1] = '\0';
          (this_ptr->base).unk2[2] = ' ';
          (this_ptr->base).unk2[3] = '@';
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_c0);
      local_c0.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_c0.attacker = (CDemonActor *)this_ptr;
      local_c0.wielder = (CDemonActor *)this_ptr;
      local_14 = local_c0.damage_amount;
      pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_3c,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices
                           [*(int *)(this_ptr->unk + 0xc)].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_30,pCVar11);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (this_ptr_00,&local_78,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_84,pCVar11);
        core_gore_cpp_FUN_004ede30();
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_0044482d_caseD_3;
  }
  uVar3 = *(uint *)((this_ptr->base).base.unk2 + 0x10);
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_004443e0:
      iVar7 = 1;
    }
    else {
LAB_004445a0:
      iVar7 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar7,1);
  }
  else {
    if (uVar3 < 3) goto LAB_004443e0;
    if (uVar3 != 3) goto LAB_004445a0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_0044482d_caseD_3:
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  iVar7 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar7 != 0) {
    iVar7 = *(int *)((this_ptr->base).unk2 + 4);
    if ((iVar7 != 0) &&
       (pCVar10 = (CZombieCow *)(**(code **)(*(int *)(iVar7 + 0x154) + 0x108))(),
       pCVar10 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)((this_ptr->base).unk2 + 4));
    }
    *(float *)((this_ptr->base).base.unk1 + 0x20) =
         *(float *)((this_ptr->base).base.unk1 + 0x20) - delta_time * (float)32;
    local_48 = *(float *)((this_ptr->base).base.unk1 + 0x1c) * delta_time;
    local_44 = *(float *)((this_ptr->base).base.unk1 + 0x20) * delta_time;
    pcVar1 = (this_ptr->base).base.unk1 + 0x10;
    local_40 = delta_time * *(float *)((this_ptr->base).base.unk1 + 0x24);
    pCVar11 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_60 = local_48 + *(float *)pcVar1;
    local_5c = local_44 + *(float *)((this_ptr->base).base.unk1 + 0x14);
    local_58 = local_40 + *(float *)((this_ptr->base).base.unk1 + 0x18);
    local_6c = local_60 + pCVar11->x;
    local_68 = local_5c + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_64 = local_58 + (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar6 = &this_ptr->base;
    (pCVar6->base).unk1[0x18] = '\0';
    (pCVar6->base).unk1[0x19] = '\0';
    (pCVar6->base).unk1[0x1a] = '\0';
    (pCVar6->base).unk1[0x1b] = '\0';
    *(uint *)((this_ptr->base).base.unk1 + 0x14) =
         *(uint *)((this_ptr->base).base.unk1 + 0x18);
    *(float *)pcVar1 = *(float *)((this_ptr->base).base.unk1 + 0x14);
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar2 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar2;
    pCVar11->x = fVar2;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  return;
}
