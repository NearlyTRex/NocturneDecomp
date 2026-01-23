// Name: core_dog.cpp_CZombieDog_process_FUN_0047f140
// Address: 0047f140
// Address Range: [[0047f140, 0047f7a9]]
// Convention: __cdecl
// Signature: void core_dog.cpp_CZombieDog_process_FUN_0047f140(CZombieDog * this_ptr, float delta_time)

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_process_FUN_0047f140(CZombieDog *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  char *pcVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  CEnemy *pCVar6;
  int iVar7;
  SMotion *pSVar8;
  int iVar9;
  CZombieDog *pCVar10;
  int extraout_EAX;
  uint uVar11;
  CVector3f *pCVar12;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  CVector3f local_98;
  CVector3f local_8c;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  iVar7 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar7 == 0) {
    return;
  }
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
  local_20 = delta_time * (this_ptr->base_enemy).speed;
  pCVar1 = &(this_ptr->base_enemy).base_character.model;
  while (0.0 < local_20) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
  }
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  fVar3 = (this_ptr->base_enemy).speed;
  fVar5 = (float)3.1415926535000001;
  iVar7 = pSVar8->state_index;
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
       delta_time * fVar5 * fVar3;
  if (iVar7 == 2) {
    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
         *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) *
         (float)2;
  }
  iVar9 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar9 == 0) {
    switch(iVar7) {
    case 0:
      core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base_enemy);
      pCVar1 = &(this_ptr->base_enemy).base_character.model;
      if (extraout_EAX_00 == 0) {
        (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].getAllowedMeleeAttackTypes)
                  ((CDemonActor *)this_ptr);
        iVar7 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if (iVar7 != 0) {
          local_74 = *(float *)(iVar7 + 0x20) -
                     (this_ptr->base_enemy).base_character.base_actor.location.position.x;
          local_70 = *(float *)(iVar7 + 0x24) -
                     (this_ptr->base_enemy).base_character.base_actor.location.position.y;
          local_6c = *(float *)(iVar7 + 0x28) -
                     (this_ptr->base_enemy).base_character.base_actor.location.position.z;
          local_24 = local_6c * local_6c + local_74 * local_74 + local_70 * local_70;
          local_18 = (float)(((int)local_24 >> 1) + DAT_02d7a7b8);
          if (local_18 < 8.0f) {
            iVar7 = 1;
          }
          else {
            iVar7 = 2;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,iVar7,1);
          core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
                    (g_CSoundPtr,*(uint *)(this_ptr->field1_0xbeb4 + 0x10));
          if (extraout_EAX_01 == 0) {
            uVar11 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                               ((CDemonActor *)this_ptr,"dog5.wav");
            *(uint *)(this_ptr->field1_0xbeb4 + 0x10) = uVar11;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,1,1);
      }
      break;
    case 1:
    case 2:
      (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)this_ptr);
      iVar9 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
      pCVar1 = &(this_ptr->base_enemy).base_character.model;
      if (iVar9 == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base_enemy);
        if (extraout_EAX_02 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
      else {
        local_5c = (this_ptr->base_enemy).base_character.base_actor.location.position.x -
                   *(float *)(iVar9 + 0x20);
        local_58 = (this_ptr->base_enemy).base_character.base_actor.location.position.y -
                   *(float *)(iVar9 + 0x24);
        local_54 = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                   *(float *)(iVar9 + 0x28);
        if ((8.0f < SQRT(local_54 * local_54 + local_5c * local_5c + local_58 * local_58))
           && (iVar7 == 1)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,2,1);
        }
        local_1c = INT_0065ca28;
        (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
             (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
        (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
             (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
        (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154) + 0xbc))()
        ;
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
        pCVar1 = &(this_ptr->base_enemy).base_character.model;
        if (iVar7 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
        }
        else if ((0 < iVar7) && (*(float *)(this_ptr->base_enemy).field6_0xbe38 <= 0.0)) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
          if ((float)0.5 < local_14) {
            iVar7 = 3;
          }
          else {
            iVar7 = 4;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,iVar7,1);
          (this_ptr->base_enemy).field6_0xbe38[0] = '\0';
          (this_ptr->base_enemy).field6_0xbe38[1] = '\0';
          (this_ptr->base_enemy).field6_0xbe38[2] = ' ';
          (this_ptr->base_enemy).field6_0xbe38[3] = '@';
        }
      }
      break;
    case 3:
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff20);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      pCVar12 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_98,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base_enemy).base_character.model.bone_transform.
                           bone_world_matrices[*(int *)(this_ptr->field1_0xbeb4 + 0xc)].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_8c,pCVar12);
      core_enemy_cpp_FUN_004a9880();
      core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
                (g_CSoundPtr,*(uint *)(this_ptr->field1_0xbeb4 + 0x10));
      if (extraout_EAX == 0) {
        uVar11 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                           ((CDemonActor *)this_ptr,"dog5.wav");
        *(uint *)(this_ptr->field1_0xbeb4 + 0x10) = uVar11;
      }
      break;
    case 7:
      if (((this_ptr->base_enemy).pool_me == 0) &&
         ((this_ptr->base_enemy).base_character.base_actor.field11_0xdc == 0)) {
        pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (&(this_ptr->base_enemy).base_character.model,&local_50,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_44,pCVar12);
        core_gore_cpp_FUN_004ede30();
        (this_ptr->base_enemy).pool_me = 1;
      }
    }
    goto switchD_0047f7a3_caseD_5;
  }
  uVar4 = *(uint *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x10);
  if (uVar4 < 2) {
    if (uVar4 == 1) {
LAB_0047f227:
      iVar7 = 1;
    }
    else {
LAB_0047f3ed:
      iVar7 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base_enemy).base_character.model.motion_controller,iVar7,1);
  }
  else {
    if (uVar4 < 3) goto LAB_0047f227;
    if (uVar4 != 3) goto LAB_0047f3ed;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
switchD_0047f7a3_caseD_5:
  if (0.0 < *(float *)(this_ptr->base_enemy).field6_0xbe38) {
    *(float *)(this_ptr->base_enemy).field6_0xbe38 =
         *(float *)(this_ptr->base_enemy).field6_0xbe38 - delta_time;
  }
  iVar7 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar7 != 0) {
    iVar7 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
    if ((iVar7 != 0) &&
       (pCVar10 = (CZombieDog *)(**(code **)(*(int *)(iVar7 + 0x154) + 0x108))(),
       pCVar10 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)((this_ptr->base_enemy).field6_0xbe38 + 4));
    }
    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) =
         *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) -
         delta_time * (float)32;
    local_68 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x1c) * delta_time;
    local_64 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) * delta_time;
    pcVar2 = (this_ptr->base_enemy).base_character.field2_0x240c + 0x10;
    local_60 = delta_time * *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x24);
    pCVar12 = &(this_ptr->base_enemy).base_character.model.accumulated_root_motion;
    local_38 = local_68 + *(float *)pcVar2;
    local_34 = local_64 + *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
    local_30 = local_60 + *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
    local_80 = local_38 + pCVar12->x;
    local_7c = local_34 + (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
    local_78 = local_30 + (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
    pCVar6 = &this_ptr->base_enemy;
    (pCVar6->base_character).field2_0x240c[0x18] = '\0';
    (pCVar6->base_character).field2_0x240c[0x19] = '\0';
    (pCVar6->base_character).field2_0x240c[0x1a] = '\0';
    (pCVar6->base_character).field2_0x240c[0x1b] = '\0';
    *(uint *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) =
         *(uint *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
    *(float *)pcVar2 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
    fVar3 = (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y = fVar3;
    pCVar12->x = fVar3;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base_enemy).base_character.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  return;
}
