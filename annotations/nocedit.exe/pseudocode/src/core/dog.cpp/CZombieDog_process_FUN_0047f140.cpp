// Name: core_dog.cpp_CZombieDog_process_FUN_0047f140
// Address: 0047f140
// Address Range: [[0047f140, 0047f7a9]]
// Convention: __cdecl
// Signature: void core_dog.cpp_CZombieDog_process_FUN_0047f140(CZombieDog * this_ptr)
// Globals:
//   undefined4 DAT_00002424
//   void* switchdataD_0047f118 = 0047f50a
//   TerminatedCString s_s_confused_while_walking_00620fbc
//   TerminatedCString s_dog5_wav_00620fe6
//   TerminatedCString s_dog5_wav_00620fef
//   TerminatedCString s_s_gave_up_chase_I_m_conf_00620ff8
//   double DOUBLE_00621019 = 3.14159265350000
//   double DOUBLE_00621021 = 2
//   double DOUBLE_00621029 = 0.5
//   double DOUBLE_00621031 = 32
//   undefined4 DAT_0065ca28
//   undefined4 DAT_0065ca34
//   CConsole* g_CConsolePtr = 0083b1a4
//   CGore* g_CGorePtr = 02d83364
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
//   CConsole g_ConsolePtr
//   undefined4 DAT_02d7a7b8
//   CGore g_CGoreInstance
//   CDemonSet g_CDemonSetInstance
//   CSound g_CSoundInstance
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
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
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_sound.cpp_FUN_005b3b80
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dog_cpp_CZombieDog_process_FUN_0047f140(CZombieDog *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  char *pcVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  CEnemy *pCVar6;
  int iVar7;
  int iVar8;
  CZombieDog *pCVar9;
  undefined4 uVar10;
  CVector3f *pCVar11;
  int extraout_EAX;
  int extraout_EAX_00;
  BADSPACEBASE *in_ESP;
  float in_stack_00000008;
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
  undefined4 local_1c;
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
  local_20 = in_stack_00000008 * (this_ptr->base_enemy).speed;
  pCVar1 = &(this_ptr->base_enemy).base_character.model;
  while (0.0 < local_20) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
  }
  iVar7 = core_motion_cpp_CMotionController_FUN_0052dab0(&pCVar1->motion_controller);
  fVar3 = (this_ptr->base_enemy).speed;
  fVar5 = (float)DOUBLE_00621019;
  iVar7 = *(int *)(iVar7 + 0x24);
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar5 * fVar3;
  if (iVar7 == 2) {
    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
         *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) *
         (float)DOUBLE_00621021;
  }
  iVar8 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar8 == 0) {
    switch(iVar7) {
    case 0:
      core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base_enemy);
      pCVar1 = &(this_ptr->base_enemy).base_character.model;
      if (extraout_EAX == 0) {
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
          if (local_18 < _DAT_0065ca34) {
            iVar7 = 1;
          }
          else {
            iVar7 = 2;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,iVar7,1);
          iVar7 = core_sound_cpp_FUN_005b3b80();
          if (iVar7 == 0) {
            uVar10 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                               ((CDemonActor *)this_ptr,"dog5.wav");
            *(undefined4 *)(this_ptr->field1_0xbeb4 + 0x10) = uVar10;
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
      iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
      pCVar1 = &(this_ptr->base_enemy).base_character.model;
      if (iVar8 == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base_enemy);
        if (extraout_EAX_00 == 0) {
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
                   *(float *)(iVar8 + 0x20);
        local_58 = (this_ptr->base_enemy).base_character.base_actor.location.position.y -
                   *(float *)(iVar8 + 0x24);
        local_54 = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                   *(float *)(iVar8 + 0x28);
        if ((_DAT_0065ca34 < SQRT(local_54 * local_54 + local_5c * local_5c + local_58 * local_58))
           && (iVar7 == 1)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,2,1);
        }
        local_1c = DAT_0065ca28;
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
          if ((float)DOUBLE_00621029 < local_14) {
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
      pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_98,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base_enemy).base_character.model.bone_transform.
                           bone_world_matrices[*(int *)(this_ptr->field1_0xbeb4 + 0xc)].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_8c,pCVar11);
      core_enemy_cpp_FUN_004a9880();
      iVar7 = core_sound_cpp_FUN_005b3b80();
      if (iVar7 == 0) {
        uVar10 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                           ((CDemonActor *)this_ptr,"dog5.wav");
        *(undefined4 *)(this_ptr->field1_0xbeb4 + 0x10) = uVar10;
      }
      break;
    case 7:
      if (((this_ptr->base_enemy).pool_me == 0) &&
         ((this_ptr->base_enemy).base_character.base_actor.field11_0xdc == 0)) {
        pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (&(this_ptr->base_enemy).base_character.model,&local_50,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_44,pCVar11);
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
         *(float *)(this_ptr->base_enemy).field6_0xbe38 - in_stack_00000008;
  }
  iVar7 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar7 != 0) {
    iVar7 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
    if ((iVar7 != 0) &&
       (pCVar9 = (CZombieDog *)(**(code **)(*(int *)(iVar7 + 0x154) + 0x108))(), pCVar9 == this_ptr)
       ) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)((this_ptr->base_enemy).field6_0xbe38 + 4));
    }
    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) =
         *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) -
         in_stack_00000008 * (float)DOUBLE_00621031;
    local_68 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x1c) *
               in_stack_00000008;
    local_64 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) *
               in_stack_00000008;
    pcVar2 = (this_ptr->base_enemy).base_character.field2_0x240c + 0x10;
    local_60 = in_stack_00000008 *
               *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x24);
    pCVar11 = &(this_ptr->base_enemy).base_character.model.accumulated_root_motion;
    local_38 = local_68 + *(float *)pcVar2;
    local_34 = local_64 + *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
    local_30 = local_60 + *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
    local_80 = local_38 + pCVar11->x;
    local_7c = local_34 + (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
    local_78 = local_30 + (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
    pCVar6 = &this_ptr->base_enemy;
    (pCVar6->base_character).field2_0x240c[0x18] = '\0';
    (pCVar6->base_character).field2_0x240c[0x19] = '\0';
    (pCVar6->base_character).field2_0x240c[0x1a] = '\0';
    (pCVar6->base_character).field2_0x240c[0x1b] = '\0';
    *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) =
         *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
    *(float *)pcVar2 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
    fVar3 = (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y = fVar3;
    pCVar11->x = fVar3;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base_enemy).base_character.model);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  return;
}


// Assembly code:
// 0047f140: PUSH EBX
//   Label: core_dog.cpp_CZombieDog_process_FUN_0047f140
// 0047f141: PUSH ESI
// 0047f142: PUSH EDI
// 0047f143: PUSH EBP
// 0047f144: MOV EBP,ESP
// 0047f146: SUB ESP,0xd0
// 0047f14c: SUB EBP,0x7a
// 0047f14f: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 0047f155: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0047f15b: PUSH EBX
// 0047f15c: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 0047f161: ADD ESP,0x8
// 0047f164: TEST EAX,EAX
// 0047f166: JZ 0x0047f394
//   XREF to: 0047f394 (CONDITIONAL_JUMP)
// 0047f16c: LEA EAX,[EBX + 0x23ac]
// 0047f172: MOV dword ptr [EAX + 0x8],0x0
// 0047f179: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0047f17f: MOV EDX,dword ptr [EAX + 0x8]
// 0047f182: MOV dword ptr [EAX + 0x4],EDX
// 0047f185: MOV EDX,dword ptr [EAX + 0x4]
// 0047f188: MOV dword ptr [EAX],EDX
// 0047f18a: FMUL float ptr [EBX + 0xbe24]
// 0047f190: LEA ESI,[EBX + 0x158]
// 0047f196: FSTP float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (WRITE)
// 0047f199: FLD float ptr [EBP + 0x6a]
//   Label: LAB_0047f199
//   XREF to: Stack[-0x20] (READ)
// 0047f19c: FLDZ
// 0047f19e: FCOMPP
// 0047f1a0: FNSTSW AX
// 0047f1a2: SAHF
// 0047f1a3: JC 0x0047f39c
//   XREF to: 0047f39c (CONDITIONAL_JUMP)
// 0047f1a9: PUSH ESI
// 0047f1aa: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0047f1af: FLD float ptr [EBX + 0xbe24]
// 0047f1b5: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0047f1bb: FMUL double ptr [0x00621019]
//   XREF to: 00621019 (READ)
// 0047f1c1: FMULP
// 0047f1c3: FLD float ptr [EBX + 0x23b4]
// 0047f1c9: ADD ESP,0x4
// 0047f1cc: MOV EAX,dword ptr [EAX + 0x24]
// 0047f1cf: FSTP float ptr [EBX + 0x2434]
// 0047f1d5: MOV EDI,EAX
// 0047f1d7: FSTP float ptr [EBX + 0x2438]
// 0047f1dd: CMP EAX,0x2
// 0047f1e0: JNZ 0x0047f1f8
//   XREF to: 0047f1f8 (CONDITIONAL_JUMP)
// 0047f1e2: FLD float ptr [EBX + 0x2438]
// 0047f1e8: FLD ST0
// 0047f1ea: FMUL double ptr [0x00621021]
//   XREF to: 00621021 (READ)
// 0047f1f0: FSTP ST1
// 0047f1f2: FSTP float ptr [EBX + 0x2438]
// 0047f1f8: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_0047f1f8
//   XREF to: Stack[0x8] (READ)
// 0047f1fe: PUSH EBX
// 0047f1ff: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 0047f204: ADD ESP,0x8
// 0047f207: TEST EAX,EAX
// 0047f209: JZ 0x0047f79a
//   XREF to: 0047f79a (CONDITIONAL_JUMP)
// 0047f20f: MOV EAX,dword ptr [EBX + 0x25b0]
// 0047f215: CMP EAX,0x2
// 0047f218: JNC 0x0047f3e2
//   XREF to: 0047f3e2 (CONDITIONAL_JUMP)
// 0047f21e: CMP EAX,0x1
// 0047f221: JNZ 0x0047f3ed
//   XREF to: 0047f3ed (CONDITIONAL_JUMP)
// 0047f227: PUSH 0x1
//   Label: LAB_0047f227
// 0047f229: PUSH 0x1
// 0047f22b: LEA EAX,[EBX + 0x158]
//   Label: LAB_0047f22b
// 0047f231: PUSH EAX
// 0047f232: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0047f237: ADD ESP,0xc
//   Label: LAB_0047f237
// 0047f23a: LEA EAX,[EBX + 0x23ac]
// 0047f240: MOV dword ptr [EAX + 0x8],0x0
// 0047f247: MOV EDX,dword ptr [EAX + 0x8]
// 0047f24a: MOV dword ptr [EAX + 0x4],EDX
// 0047f24d: MOV EDX,dword ptr [EAX + 0x4]
// 0047f250: MOV dword ptr [EAX],EDX
// 0047f252: FLD float ptr [EBX + 0xbe38]
//   Label: caseD_5
// 0047f258: FLDZ
// 0047f25a: FCOMPP
// 0047f25c: FNSTSW AX
// 0047f25e: SAHF
// 0047f25f: JNC 0x0047f273
//   XREF to: 0047f273 (CONDITIONAL_JUMP)
// 0047f261: FLD float ptr [EBX + 0xbe38]
// 0047f267: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0047f26d: FSTP float ptr [EBX + 0xbe38]
// 0047f273: PUSH EBX
//   Label: LAB_0047f273
// 0047f274: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 0047f279: ADD ESP,0x4
// 0047f27c: TEST EAX,EAX
// 0047f27e: JZ 0x0047f36d
//   XREF to: 0047f36d (CONDITIONAL_JUMP)
// 0047f284: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0047f28a: TEST EAX,EAX
// 0047f28c: JZ 0x0047f2b8
//   XREF to: 0047f2b8 (CONDITIONAL_JUMP)
// 0047f28e: PUSH EAX
// 0047f28f: MOV EDX,dword ptr [EAX + 0x154]
// 0047f295: CALL dword ptr [EDX + 0x108]
// 0047f29b: ADD ESP,0x4
// 0047f29e: CMP EAX,EBX
// 0047f2a0: JNZ 0x0047f2b8
//   XREF to: 0047f2b8 (CONDITIONAL_JUMP)
// 0047f2a2: MOV EDX,dword ptr [EBX + 0xbe3c]
// 0047f2a8: PUSH EDX
// 0047f2a9: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 0047f2af: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0047f2b0: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 0047f2b5: ADD ESP,0x8
// 0047f2b8: FLD float ptr [EBP + 0x92]
//   Label: LAB_0047f2b8
//   XREF to: Stack[0x8] (READ)
// 0047f2be: FLD ST0
// 0047f2c0: FMUL double ptr [0x00621031]
//   XREF to: 00621031 (READ)
// 0047f2c6: FLD float ptr [EBX + 0x242c]
// 0047f2cc: FXCH
// 0047f2ce: FSUBR ST0,ST1
// 0047f2d0: LEA EDX,[EBX + 0x2428]
// 0047f2d6: FSTP ST1
// 0047f2d8: FSTP float ptr [EBX + 0x242c]
// 0047f2de: FLD float ptr [EDX]
// 0047f2e0: FMUL ST1
// 0047f2e2: FSTP float ptr [EBP + 0x22]
//   XREF to: Stack[-0x68] (WRITE)
// 0047f2e5: FLD float ptr [EDX + 0x4]
// 0047f2e8: FMUL ST1
// 0047f2ea: LEA EAX,[EBX + 0x241c]
// 0047f2f0: FSTP float ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (WRITE)
// 0047f2f3: FMUL float ptr [EDX + 0x8]
// 0047f2f6: LEA ESI,[EBX + 0x23ac]
// 0047f2fc: FLD float ptr [EBP + 0x22]
//   XREF to: Stack[-0x68] (READ)
// 0047f2ff: FXCH
// 0047f301: FSTP float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (WRITE)
// 0047f304: FADD float ptr [EAX]
// 0047f306: FLD float ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (READ)
// 0047f309: FXCH
// 0047f30b: FSTP float ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (WRITE)
// 0047f30e: FADD float ptr [EAX + 0x4]
// 0047f311: FLD float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (READ)
// 0047f314: FXCH
// 0047f316: FSTP float ptr [EBP + 0x56]
//   XREF to: Stack[-0x34] (WRITE)
// 0047f319: FADD float ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 0047f31c: FLD float ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (READ)
// 0047f31f: FXCH
// 0047f321: FSTP float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x30] (WRITE)
// 0047f324: FADD float ptr [ESI]
// 0047f326: FLD float ptr [EBP + 0x56]
//   XREF to: Stack[-0x34] (READ)
// 0047f329: FXCH
// 0047f32b: FSTP float ptr [EBP + 0xa]
//   XREF to: Stack[-0x80] (WRITE)
// 0047f32e: FADD float ptr [ESI + 0x4]
// 0047f331: FLD float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x30] (READ)
// 0047f334: FXCH
// 0047f336: FSTP float ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (WRITE)
// 0047f339: FADD float ptr [ESI + 0x8]
// 0047f33c: FSTP float ptr [EBP + 0x12]
//   XREF to: Stack[-0x78] (WRITE)
// 0047f33f: MOV dword ptr [EAX + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 0047f346: MOV EDX,dword ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 0047f349: MOV dword ptr [EAX + 0x4],EDX
// 0047f34c: MOV EDX,dword ptr [EAX + 0x4]
// 0047f34f: MOV dword ptr [EAX],EDX
// 0047f351: MOV dword ptr [ESI + 0x8],0x0
// 0047f358: LEA EAX,[EBP + 0xa]
//   XREF to: Stack[-0x80] (DATA)
// 0047f35b: FLD float ptr [ESI + 0x8]
// 0047f35e: PUSH EAX
// 0047f35f: FST float ptr [ESI + 0x4]
// 0047f362: PUSH EBX
// 0047f363: FSTP float ptr [ESI]
// 0047f365: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 0047f36a: ADD ESP,0x8
// 0047f36d: PUSH EBX
//   Label: LAB_0047f36d
// 0047f36e: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 0047f373: ADD ESP,0x4
// 0047f376: LEA EAX,[EBX + 0x158]
// 0047f37c: PUSH EAX
// 0047f37d: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 0047f382: ADD ESP,0x4
// 0047f385: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0047f38b: PUSH EBX
// 0047f38c: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 0047f391: ADD ESP,0x8
// 0047f394: LEA ESP,[EBP + 0x7a]
//   Label: LAB_0047f394
//   XREF to: Stack[-0x10] (DATA)
// 0047f397: POP EBP
// 0047f398: POP EDI
// 0047f399: POP ESI
// 0047f39a: POP EBX
// 0047f39b: RET
// 0047f39c: LEA EAX,[EBP + 0x6a]
//   Label: LAB_0047f39c
//   XREF to: Stack[-0x20] (DATA)
// 0047f39f: PUSH EAX
// 0047f3a0: PUSH ESI
// 0047f3a1: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 0047f3a6: ADD ESP,0x8
// 0047f3a9: PUSH EAX
// 0047f3aa: PUSH EBX
// 0047f3ab: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 0047f3b0: ADD ESP,0x8
// 0047f3b3: JMP 0x0047f199
//   XREF to: 0047f199 (UNCONDITIONAL_JUMP)
// 0047f3b8: PUSH 0x1
//   Label: LAB_0047f3b8
// 0047f3ba: PUSH 0x0
// 0047f3bc: LEA EAX,[EBX + 0x158]
// 0047f3c2: PUSH EAX
// 0047f3c3: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0047f3c8: ADD ESP,0xc
// 0047f3cb: PUSH EBX
// 0047f3cc: PUSH 0x620fbc
//   XREF to: 00620fbc (DATA)
// 0047f3d1: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 0047f3d7: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 0047f3d8: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0047f3dd: JMP 0x0047f237
//   XREF to: 0047f237 (UNCONDITIONAL_JUMP)
// 0047f3e2: JBE 0x0047f227
//   Label: LAB_0047f3e2
//   XREF to: 0047f227 (CONDITIONAL_JUMP)
// 0047f3e8: CMP EAX,0x3
// 0047f3eb: JZ 0x0047f3b8
//   XREF to: 0047f3b8 (CONDITIONAL_JUMP)
// 0047f3ed: PUSH 0x1
//   Label: LAB_0047f3ed
// 0047f3ef: PUSH 0x0
// 0047f3f1: JMP 0x0047f22b
//   XREF to: 0047f22b (UNCONDITIONAL_JUMP)
// 0047f3f6: LEA EAX,[EBP + -0x56]
//   Label: caseD_3
//   XREF to: Stack[-0xe0] (DATA)
// 0047f3f9: PUSH EAX
// 0047f3fa: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 0047f3ff: ADD ESP,0x4
// 0047f402: PUSH 0x41700000
// 0047f407: PUSH 0x40e00000
// 0047f40c: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0047f411: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0047f414: MOV dword ptr [EBP + -0x22],EBX
//   XREF to: Stack[-0xac] (WRITE)
// 0047f417: MOV dword ptr [EBP + -0x1e],EBX
//   XREF to: Stack[-0xa8] (WRITE)
// 0047f41a: ADD ESP,0x8
// 0047f41d: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0047f420: LEA EAX,[EBP + -0x56]
//   XREF to: Stack[-0xe0] (DATA)
// 0047f423: FSTP float ptr [EBP + -0x52]
//   XREF to: Stack[-0xdc] (WRITE)
// 0047f426: MOV EDX,dword ptr [EBX + 0xbec0]
// 0047f42c: PUSH EAX
// 0047f42d: LEA EAX,[EDX*0x4 + 0x0]
// 0047f434: SUB EAX,EDX
// 0047f436: SHL EAX,0x4
// 0047f439: LEA EDX,[EBX + 0xfd8]
// 0047f43f: ADD EAX,EDX
// 0047f441: PUSH 0x3f333333
// 0047f446: PUSH EAX
// 0047f447: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0047f44c: LEA EAX,[EBP + -0xe]
//   XREF to: Stack[-0x98] (DATA)
// 0047f44f: PUSH EAX
// 0047f450: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0047f455: ADD ESP,0xc
// 0047f458: PUSH EAX
// 0047f459: LEA EAX,[EBP + -0x2]
//   XREF to: Stack[-0x8c] (DATA)
// 0047f45c: PUSH EAX
// 0047f45d: PUSH EBX
// 0047f45e: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0047f463: ADD ESP,0xc
// 0047f466: PUSH EAX
// 0047f467: PUSH EBX
// 0047f468: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 0047f46d: ADD ESP,0x10
// 0047f470: MOV EDI,dword ptr [EBX + 0xbec4]
// 0047f476: PUSH EDI
// 0047f477: MOV EAX,[0x00681ef8]
//   XREF to: 00681ef8 (READ)
//   XREF to: 03f6af64 (PARAM)
// 0047f47c: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 0047f47d: CALL core_sound.cpp_FUN_005b3b80
//   XREF to: 005b3b80 (UNCONDITIONAL_CALL)
// 0047f482: ADD ESP,0x8
// 0047f485: TEST EAX,EAX
// 0047f487: JNZ 0x0047f252
//   XREF to: 0047f252 (CONDITIONAL_JUMP)
// 0047f48d: PUSH 0x620fe6
//   XREF to: 00620fe6 (DATA)
// 0047f492: MOV EAX,dword ptr [EBX + 0x154]
// 0047f498: PUSH EBX
// 0047f499: CALL dword ptr [EAX + 0x24]
// 0047f49c: ADD ESP,0x8
// 0047f49f: MOV dword ptr [EBX + 0xbec4],EAX
// 0047f4a5: JMP 0x0047f252
//   XREF to: 0047f252 (UNCONDITIONAL_JUMP)
// 0047f4aa: CMP dword ptr [EBX + 0xbe28],0x0
//   Label: caseD_7
// 0047f4b1: JNZ 0x0047f252
//   XREF to: 0047f252 (CONDITIONAL_JUMP)
// 0047f4b7: CMP dword ptr [EBX + 0xdc],0x0
// 0047f4be: JNZ 0x0047f252
//   XREF to: 0047f252 (CONDITIONAL_JUMP)
// 0047f4c4: PUSH EAX
// 0047f4c5: LEA EAX,[EBP + 0x3a]
//   XREF to: Stack[-0x50] (DATA)
// 0047f4c8: PUSH EAX
// 0047f4c9: LEA EAX,[EBX + 0x158]
// 0047f4cf: PUSH EAX
// 0047f4d0: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 0047f4d5: ADD ESP,0xc
// 0047f4d8: PUSH EAX
// 0047f4d9: LEA EAX,[EBP + 0x46]
//   XREF to: Stack[-0x44] (DATA)
// 0047f4dc: PUSH EAX
// 0047f4dd: PUSH EBX
// 0047f4de: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0047f4e3: ADD ESP,0xc
// 0047f4e6: PUSH 0x0
// 0047f4e8: LEA EAX,[EBP + 0x46]
//   XREF to: Stack[-0x44] (DATA)
// 0047f4eb: PUSH EAX
// 0047f4ec: MOV ESI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 0047f4f2: PUSH ESI
//   XREF to: 02d83364 (DATA)
// 0047f4f3: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 0047f4f8: ADD ESP,0xc
// 0047f4fb: MOV dword ptr [EBX + 0xbe28],0x1
// 0047f505: JMP 0x0047f252
//   XREF to: 0047f252 (UNCONDITIONAL_JUMP)
// 0047f50a: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_0
//   XREF to: Stack[0x8] (READ)
// 0047f510: PUSH EBX
// 0047f511: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 0047f516: ADD ESP,0x8
// 0047f519: LEA ESI,[EBX + 0x158]
// 0047f51f: TEST EAX,EAX
// 0047f521: JZ 0x0047f535
//   XREF to: 0047f535 (CONDITIONAL_JUMP)
// 0047f523: PUSH 0x1
// 0047f525: PUSH 0x1
// 0047f527: PUSH ESI
// 0047f528: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0047f52d: ADD ESP,0xc
// 0047f530: JMP 0x0047f252
//   XREF to: 0047f252 (UNCONDITIONAL_JUMP)
// 0047f535: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_0047f535
//   XREF to: Stack[0x8] (READ)
// 0047f53b: MOV EAX,dword ptr [EBX + 0x154]
// 0047f541: PUSH EBX
// 0047f542: CALL dword ptr [EAX + 0x158]
// 0047f548: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0047f54e: ADD ESP,0x8
// 0047f551: TEST EAX,EAX
// 0047f553: JZ 0x0047f252
//   XREF to: 0047f252 (CONDITIONAL_JUMP)
// 0047f559: LEA EDX,[EBX + 0x20]
// 0047f55c: FLD float ptr [EAX + 0x20]
// 0047f55f: FSUB float ptr [EDX]
// 0047f561: FSTP float ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (WRITE)
// 0047f564: FLD float ptr [EAX + 0x24]
// 0047f567: FSUB float ptr [EDX + 0x4]
// 0047f56a: FST float ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (WRITE)
// 0047f56d: FMUL float ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (READ)
// 0047f570: FLD float ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (READ)
// 0047f573: FMUL ST0
// 0047f575: FLD float ptr [EAX + 0x28]
// 0047f578: FSUB float ptr [EDX + 0x8]
// 0047f57b: FXCH
// 0047f57d: FADDP ST2,ST0
// 0047f57f: FST float ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (WRITE)
// 0047f582: FMUL float ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (READ)
// 0047f585: FADDP
// 0047f587: FSTP float ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (WRITE)
// 0047f58a: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 0047f58d: MOV EDX,dword ptr [0x02d7a7b8]
//   XREF to: 02d7a7b8 (READ)
// 0047f593: SAR EAX,0x1
// 0047f595: ADD EAX,EDX
// 0047f597: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0047f59a: FLD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 0047f59d: FCOMP float ptr [0x0065ca34]
//   XREF to: 0065ca34 (READ)
// 0047f5a3: FNSTSW AX
// 0047f5a5: SAHF
// 0047f5a6: JC 0x0047f5f0
//   XREF to: 0047f5f0 (CONDITIONAL_JUMP)
// 0047f5a8: PUSH 0x1
// 0047f5aa: PUSH 0x2
// 0047f5ac: PUSH ESI
//   Label: LAB_0047f5ac
// 0047f5ad: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0047f5b2: ADD ESP,0xc
// 0047f5b5: MOV ECX,dword ptr [EBX + 0xbec4]
// 0047f5bb: PUSH ECX
// 0047f5bc: MOV ESI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 0047f5c2: PUSH ESI
//   XREF to: 03f6af64 (DATA)
// 0047f5c3: CALL core_sound.cpp_FUN_005b3b80
//   XREF to: 005b3b80 (UNCONDITIONAL_CALL)
// 0047f5c8: ADD ESP,0x8
// 0047f5cb: TEST EAX,EAX
// 0047f5cd: JNZ 0x0047f252
//   XREF to: 0047f252 (CONDITIONAL_JUMP)
// 0047f5d3: PUSH 0x620fef
//   XREF to: 00620fef (DATA)
// 0047f5d8: MOV EAX,dword ptr [EBX + 0x154]
// 0047f5de: PUSH EBX
// 0047f5df: CALL dword ptr [EAX + 0x24]
// 0047f5e2: ADD ESP,0x8
// 0047f5e5: MOV dword ptr [EBX + 0xbec4],EAX
// 0047f5eb: JMP 0x0047f252
//   XREF to: 0047f252 (UNCONDITIONAL_JUMP)
// 0047f5f0: PUSH 0x1
//   Label: LAB_0047f5f0
// 0047f5f2: PUSH 0x1
// 0047f5f4: JMP 0x0047f5ac
//   XREF to: 0047f5ac (UNCONDITIONAL_JUMP)
// 0047f5f6: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_1
//   XREF to: Stack[0x8] (READ)
// 0047f5fc: MOV EAX,dword ptr [EBX + 0x154]
// 0047f602: PUSH EBX
// 0047f603: CALL dword ptr [EAX + 0x158]
// 0047f609: ADD ESP,0x8
// 0047f60c: MOV EDX,dword ptr [EBX + 0xbe3c]
// 0047f612: LEA ESI,[EBX + 0x158]
// 0047f618: TEST EDX,EDX
// 0047f61a: JZ 0x0047f737
//   XREF to: 0047f737 (CONDITIONAL_JUMP)
// 0047f620: MOV EAX,EDX
// 0047f622: LEA EDX,[EBX + 0x20]
// 0047f625: FLD float ptr [EDX]
// 0047f627: FSUB float ptr [EAX + 0x20]
// 0047f62a: FSTP float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (WRITE)
// 0047f62d: FLD float ptr [EDX + 0x4]
// 0047f630: FSUB float ptr [EAX + 0x24]
// 0047f633: FST float ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (WRITE)
// 0047f636: FMUL float ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (READ)
// 0047f639: FLD float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (READ)
// 0047f63c: FMUL ST0
// 0047f63e: FLD float ptr [EDX + 0x8]
// 0047f641: FSUB float ptr [EAX + 0x28]
// 0047f644: FXCH
// 0047f646: FADDP ST2,ST0
// 0047f648: FST float ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (WRITE)
// 0047f64b: FMUL float ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (READ)
// 0047f64e: FADDP
// 0047f650: FSQRT
// 0047f652: FCOMP float ptr [0x0065ca34]
//   XREF to: 0065ca34 (READ)
// 0047f658: FNSTSW AX
// 0047f65a: SAHF
// 0047f65b: JBE 0x0047f66e
//   XREF to: 0047f66e (CONDITIONAL_JUMP)
// 0047f65d: CMP EDI,0x1
// 0047f660: JNZ 0x0047f66e
//   XREF to: 0047f66e (CONDITIONAL_JUMP)
// 0047f662: PUSH EDI
// 0047f663: PUSH 0x2
// 0047f665: PUSH ESI
// 0047f666: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0047f66b: ADD ESP,0xc
// 0047f66e: MOV EAX,[0x0065ca28]
//   Label: LAB_0047f66e
//   XREF to: 0065ca28 (READ)
// 0047f673: PUSH 0x3e32b8c2
// 0047f678: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047f67b: LEA EAX,[EBX + 0x23ac]
// 0047f681: PUSH 0x3f000000
// 0047f686: MOV dword ptr [EAX + 0x8],0x0
// 0047f68d: XOR ECX,ECX
// 0047f68f: MOV EDX,dword ptr [EAX + 0x8]
// 0047f692: MOV dword ptr [EAX + 0x4],EDX
// 0047f695: MOV EDX,dword ptr [EAX + 0x4]
// 0047f698: MOV dword ptr [EAX],EDX
// 0047f69a: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 0047f69d: MOV dword ptr [EBP + -0x1a],ECX
//   XREF to: Stack[-0xa4] (WRITE)
// 0047f6a0: MOV dword ptr [EBP + -0x12],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 0047f6a3: LEA EAX,[EBP + -0x1a]
//   XREF to: Stack[-0xa4] (DATA)
// 0047f6a6: MOV dword ptr [EBP + -0x16],ECX
//   XREF to: Stack[-0xa0] (WRITE)
// 0047f6a9: PUSH EAX
// 0047f6aa: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0047f6b0: PUSH EAX
// 0047f6b1: MOV EDX,dword ptr [EAX + 0x154]
// 0047f6b7: CALL dword ptr [EDX + 0xbc]
// 0047f6bd: ADD ESP,0x4
// 0047f6c0: PUSH EAX
// 0047f6c1: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0047f6c7: ADD EAX,0x20
// 0047f6ca: PUSH EAX
// 0047f6cb: PUSH EBX
// 0047f6cc: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 0047f6d1: ADD ESP,0x18
// 0047f6d4: LEA ESI,[EBX + 0x158]
// 0047f6da: TEST EAX,EAX
// 0047f6dc: JL 0x0047f76d
//   XREF to: 0047f76d (CONDITIONAL_JUMP)
// 0047f6e2: JLE 0x0047f252
//   XREF to: 0047f252 (CONDITIONAL_JUMP)
// 0047f6e8: FLD float ptr [EBX + 0xbe38]
// 0047f6ee: FLDZ
// 0047f6f0: FCOMPP
// 0047f6f2: FNSTSW AX
// 0047f6f4: SAHF
// 0047f6f5: JC 0x0047f252
//   XREF to: 0047f252 (CONDITIONAL_JUMP)
// 0047f6fb: PUSH 0x3f800000
// 0047f700: PUSH 0x0
// 0047f702: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0047f707: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0047f70a: ADD ESP,0x8
// 0047f70d: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0047f710: FCOMP double ptr [0x00621029]
//   XREF to: 00621029 (READ)
// 0047f716: FNSTSW AX
// 0047f718: SAHF
// 0047f719: JA 0x0047f794
//   XREF to: 0047f794 (CONDITIONAL_JUMP)
// 0047f71b: PUSH 0x1
// 0047f71d: PUSH 0x4
// 0047f71f: PUSH ESI
//   Label: LAB_0047f71f
// 0047f720: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0047f725: ADD ESP,0xc
// 0047f728: MOV dword ptr [EBX + 0xbe38],0x40200000
// 0047f732: JMP 0x0047f252
//   XREF to: 0047f252 (UNCONDITIONAL_JUMP)
// 0047f737: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_0047f737
//   XREF to: Stack[0x8] (READ)
// 0047f73d: PUSH EBX
// 0047f73e: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 0047f743: ADD ESP,0x8
// 0047f746: TEST EAX,EAX
// 0047f748: JZ 0x0047f75c
//   XREF to: 0047f75c (CONDITIONAL_JUMP)
// 0047f74a: PUSH 0x1
// 0047f74c: PUSH 0x1
// 0047f74e: PUSH ESI
// 0047f74f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0047f754: ADD ESP,0xc
// 0047f757: JMP 0x0047f252
//   XREF to: 0047f252 (UNCONDITIONAL_JUMP)
// 0047f75c: PUSH 0x1
//   Label: LAB_0047f75c
// 0047f75e: PUSH EAX
// 0047f75f: PUSH ESI
// 0047f760: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0047f765: ADD ESP,0xc
// 0047f768: JMP 0x0047f252
//   XREF to: 0047f252 (UNCONDITIONAL_JUMP)
// 0047f76d: PUSH EBX
//   Label: LAB_0047f76d
// 0047f76e: PUSH 0x620ff8
//   XREF to: 00620ff8 (DATA)
// 0047f773: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 0047f779: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 0047f77a: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0047f77f: ADD ESP,0xc
// 0047f782: PUSH 0x1
// 0047f784: PUSH 0x0
// 0047f786: PUSH ESI
// 0047f787: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0047f78c: ADD ESP,0xc
// 0047f78f: JMP 0x0047f252
//   XREF to: 0047f252 (UNCONDITIONAL_JUMP)
// 0047f794: PUSH 0x1
//   Label: LAB_0047f794
// 0047f796: PUSH 0x3
// 0047f798: JMP 0x0047f71f
//   XREF to: 0047f71f (UNCONDITIONAL_JUMP)
// 0047f79a: CMP EDI,0x7
//   Label: LAB_0047f79a
// 0047f79d: JA 0x0047f252
//   XREF to: 0047f252 (CONDITIONAL_JUMP)
// 0047f7a3: JMP dword ptr [EDI*0x4 + 0x47f118]
//   Label: switchD
//   XREF to: 0047f50a (COMPUTED_JUMP)
//   XREF to: 0047f5f6 (COMPUTED_JUMP)
//   XREF to: 0047f3f6 (COMPUTED_JUMP)
//   XREF to: 0047f252 (COMPUTED_JUMP)
//   XREF to: 0047f4aa (COMPUTED_JUMP)
//   XREF to: 0047f118 (DATA)
