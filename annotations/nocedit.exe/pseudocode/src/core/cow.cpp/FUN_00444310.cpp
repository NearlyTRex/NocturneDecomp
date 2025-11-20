// Name: core_cow.cpp_FUN_00444310
// Address: 00444310
// Address Range: [[00444310, 00444833]]
// Convention: unknown
// Signature: undefined core_cow.cpp_FUN_00444310()
// Globals:
//   undefined4 DAT_00002424
//   void* switchdataD_004442f4 = 00444684
//   TerminatedCString s_s_confused_while_walking_006194ea
//   TerminatedCString s_cow_wav_00619514
//   TerminatedCString s_s_gave_up_chase_I_m_conf_0061951d
//   undefined4 DAT_00619545
//   undefined4 DAT_0061954d
//   undefined4 DAT_00619555
//   undefined4 DAT_0065c098
//   CConsole* g_CConsolePtr = 0083b1a4
//   CGore* g_CGorePtr = 02d83364
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
//   CConsole g_ConsolePtr
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
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_sound.cpp_CSound_isSfxPlaying_FUN_005b3b80
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_cow.cpp_FUN_00444310(undefined4 param_1, undefined4 param_2)
    */

void core_cow_cpp_FUN_00444310(void)

{
  CDeformableModelInstance *this_ptr;
  char *pcVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  SMotion *pSVar7;
  int iVar8;
  CEnemy *pCVar9;
  CVector3f *pCVar10;
  int extraout_EAX;
  int extraout_EAX_00;
  undefined4 uVar11;
  int extraout_EAX_01;
  BADSPACEBASE *in_ESP;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  CVector3f local_84;
  CVector3f local_78;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  CVector3f local_3c;
  CVector3f local_30;
  float local_1c;
  undefined4 local_18;
  float local_14;
  
  iVar6 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base_character);
  if (iVar6 == 0) {
    return;
  }
  (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_character).model.accumulated_root_motion.y =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  (in_stack_00000004->base_character).model.accumulated_root_motion.x =
       (in_stack_00000004->base_character).model.accumulated_root_motion.y;
  local_1c = in_stack_00000008 * in_stack_00000004->speed;
  this_ptr = &(in_stack_00000004->base_character).model;
  while (0.0 < local_1c) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr->motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base_character);
  }
  fVar2 = in_stack_00000004->speed;
  fVar5 = (float)_DAT_00619545;
  fVar4 = (float)_DAT_0061954d;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar5 * fVar2 * fVar4;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr->motion_controller);
  iVar6 = pSVar7->state_index;
  iVar8 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base_character);
  if (iVar8 == 0) {
    switch(iVar6) {
    case 0:
      core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
      if (extraout_EAX == 0) {
        (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                  ((CDemonActor *)in_stack_00000004);
        if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
          core_sound_cpp_CSound_isSfxPlaying_FUN_005b3b80
                    (g_CSoundPtr,
                     *(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10));
          if (extraout_EAX_00 == 0) {
            uVar11 = (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                               ((CDemonActor *)in_stack_00000004,"cow?.wav");
            *(undefined4 *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) =
                 uVar11;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->base_character).model.motion_controller,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr->motion_controller,1,1);
      }
      break;
    case 1:
      (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)in_stack_00000004);
      uVar11 = DAT_0065c098;
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
        if (extraout_EAX_01 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr->motion_controller,0,1);
        }
      }
      else {
        local_18 = DAT_0065c098;
        (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
        (in_stack_00000004->base_character).model.accumulated_root_motion.y =
             (in_stack_00000004->base_character).model.accumulated_root_motion.z;
        (in_stack_00000004->base_character).model.accumulated_root_motion.x =
             (in_stack_00000004->base_character).model.accumulated_root_motion.y;
        local_54 = 0;
        local_50 = 0;
        local_4c = uVar11;
        (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          (&in_stack_00000004->base_character);
        if (iVar6 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr->motion_controller,0,1);
        }
        else if ((0 < iVar6) && (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr->motion_controller,2,1);
          in_stack_00000004->field6_0xbe38[0] = '\0';
          in_stack_00000004->field6_0xbe38[1] = '\0';
          in_stack_00000004->field6_0xbe38[2] = ' ';
          in_stack_00000004->field6_0xbe38[3] = '@';
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff40);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_3c,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (in_stack_00000004->base_character).model.bone_transform.
                           bone_world_matrices
                           [*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc
                                    )].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_30,pCVar10);
      core_enemy_cpp_FUN_004a9880();
      break;
    case 5:
      if ((in_stack_00000004->pool_me == 0) &&
         ((in_stack_00000004->base_character).base_actor.field11_0xdc == 0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (this_ptr,&local_78,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_84,pCVar10);
        core_gore_cpp_FUN_004ede30();
        in_stack_00000004->pool_me = 1;
      }
    }
    goto switchD_0044482d_caseD_3;
  }
  uVar3 = *(uint *)((in_stack_00000004->base_character).field11_0x25a0 + 0x10);
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_004443e0:
      iVar6 = 1;
    }
    else {
LAB_004445a0:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base_character).model.motion_controller,iVar6,1);
  }
  else {
    if (uVar3 < 3) goto LAB_004443e0;
    if (uVar3 != 3) goto LAB_004445a0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&this_ptr->motion_controller,0,1)
    ;
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
  }
  (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_character).model.accumulated_root_motion.y =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  (in_stack_00000004->base_character).model.accumulated_root_motion.x =
       (in_stack_00000004->base_character).model.accumulated_root_motion.y;
switchD_0044482d_caseD_3:
  if (0.0 < *(float *)in_stack_00000004->field6_0xbe38) {
    *(float *)in_stack_00000004->field6_0xbe38 =
         *(float *)in_stack_00000004->field6_0xbe38 - in_stack_00000008;
  }
  iVar6 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base_character);
  if (iVar6 != 0) {
    if ((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) &&
       (pCVar9 = (CEnemy *)
                 (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                             0x108))(), pCVar9 == in_stack_00000004)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004->field6_0xbe38 + 4));
    }
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
         *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
         in_stack_00000008 * (float)_DAT_00619555;
    local_48 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
               in_stack_00000008;
    local_44 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
               in_stack_00000008;
    pcVar1 = (in_stack_00000004->base_character).field2_0x240c + 0x10;
    local_40 = in_stack_00000008 *
               *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
    pCVar10 = &(in_stack_00000004->base_character).model.accumulated_root_motion;
    local_60 = local_48 + *(float *)pcVar1;
    local_5c = local_44 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    local_58 = local_40 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    local_6c = local_60 + pCVar10->x;
    local_68 = local_5c + (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    local_64 = local_58 + (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    (in_stack_00000004->base_character).field2_0x240c[0x18] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x19] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1a] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1b] = '\0';
    *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x14) =
         *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    *(float *)pcVar1 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
    fVar2 = (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    (in_stack_00000004->base_character).model.accumulated_root_motion.y = fVar2;
    pCVar10->x = fVar2;
    core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base_character);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(in_stack_00000004->base_character).model);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character);
  return;
}


// Assembly code:
// 00444310: PUSH EBX
//   Label: core_cow.cpp_FUN_00444310
// 00444311: PUSH ESI
// 00444312: PUSH EDI
// 00444313: PUSH EBP
// 00444314: MOV EBP,ESP
// 00444316: SUB ESP,0xb0
// 0044431c: SUB EBP,0x7a
// 0044431f: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00444325: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0044432b: PUSH EBX
// 0044432c: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 00444331: ADD ESP,0x8
// 00444334: TEST EAX,EAX
// 00444336: JZ 0x0044454d
//   XREF to: 0044454d (CONDITIONAL_JUMP)
// 0044433c: LEA EAX,[EBX + 0x23ac]
// 00444342: MOV dword ptr [EAX + 0x8],0x0
// 00444349: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0044434f: MOV EDX,dword ptr [EAX + 0x8]
// 00444352: MOV dword ptr [EAX + 0x4],EDX
// 00444355: MOV EDX,dword ptr [EAX + 0x4]
// 00444358: MOV dword ptr [EAX],EDX
// 0044435a: FMUL float ptr [EBX + 0xbe24]
// 00444360: LEA ESI,[EBX + 0x158]
// 00444366: FSTP float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (WRITE)
// 00444369: FLD float ptr [EBP + 0x6e]
//   Label: LAB_00444369
//   XREF to: Stack[-0x1c] (READ)
// 0044436c: FLDZ
// 0044436e: FCOMPP
// 00444370: FNSTSW AX
// 00444372: SAHF
// 00444373: JC 0x00444555
//   XREF to: 00444555 (CONDITIONAL_JUMP)
// 00444379: FLD float ptr [EBX + 0xbe24]
// 0044437f: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00444385: FMUL double ptr [0x00619545]
//   XREF to: 00619545 (READ)
// 0044438b: FMULP
// 0044438d: FMUL double ptr [0x0061954d]
//   XREF to: 0061954d (READ)
// 00444393: FLD float ptr [EBX + 0x23b4]
// 00444399: PUSH ESI
// 0044439a: FSTP float ptr [EBX + 0x2434]
// 004443a0: FSTP float ptr [EBX + 0x2438]
// 004443a6: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004443ab: ADD ESP,0x4
// 004443ae: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004443b4: PUSH EBX
// 004443b5: MOV EDI,dword ptr [EAX + 0x24]
// 004443b8: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 004443bd: ADD ESP,0x8
// 004443c0: TEST EAX,EAX
// 004443c2: JZ 0x00444824
//   XREF to: 00444824 (CONDITIONAL_JUMP)
// 004443c8: MOV EAX,dword ptr [EBX + 0x25b0]
// 004443ce: CMP EAX,0x2
// 004443d1: JNC 0x00444595
//   XREF to: 00444595 (CONDITIONAL_JUMP)
// 004443d7: CMP EAX,0x1
// 004443da: JNZ 0x004445a0
//   XREF to: 004445a0 (CONDITIONAL_JUMP)
// 004443e0: PUSH 0x1
//   Label: LAB_004443e0
// 004443e2: PUSH 0x1
// 004443e4: LEA EAX,[EBX + 0x158]
//   Label: LAB_004443e4
// 004443ea: PUSH EAX
// 004443eb: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004443f0: ADD ESP,0xc
//   Label: LAB_004443f0
// 004443f3: LEA EAX,[EBX + 0x23ac]
// 004443f9: MOV dword ptr [EAX + 0x8],0x0
// 00444400: MOV EDX,dword ptr [EAX + 0x8]
// 00444403: MOV dword ptr [EAX + 0x4],EDX
// 00444406: MOV EDX,dword ptr [EAX + 0x4]
// 00444409: MOV dword ptr [EAX],EDX
// 0044440b: FLD float ptr [EBX + 0xbe38]
//   Label: caseD_3
// 00444411: FLDZ
// 00444413: FCOMPP
// 00444415: FNSTSW AX
// 00444417: SAHF
// 00444418: JNC 0x0044442c
//   XREF to: 0044442c (CONDITIONAL_JUMP)
// 0044441a: FLD float ptr [EBX + 0xbe38]
// 00444420: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00444426: FSTP float ptr [EBX + 0xbe38]
// 0044442c: PUSH EBX
//   Label: LAB_0044442c
// 0044442d: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 00444432: ADD ESP,0x4
// 00444435: TEST EAX,EAX
// 00444437: JZ 0x00444526
//   XREF to: 00444526 (CONDITIONAL_JUMP)
// 0044443d: MOV ECX,dword ptr [EBX + 0xbe3c]
// 00444443: TEST ECX,ECX
// 00444445: JZ 0x00444471
//   XREF to: 00444471 (CONDITIONAL_JUMP)
// 00444447: PUSH ECX
// 00444448: MOV EDX,dword ptr [ECX + 0x154]
// 0044444e: CALL dword ptr [EDX + 0x108]
// 00444454: ADD ESP,0x4
// 00444457: CMP EAX,EBX
// 00444459: JNZ 0x00444471
//   XREF to: 00444471 (CONDITIONAL_JUMP)
// 0044445b: MOV ESI,dword ptr [EBX + 0xbe3c]
// 00444461: PUSH ESI
// 00444462: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00444468: PUSH EDI
//   XREF to: 03114278 (DATA)
// 00444469: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 0044446e: ADD ESP,0x8
// 00444471: FLD float ptr [EBP + 0x92]
//   Label: LAB_00444471
//   XREF to: Stack[0x8] (READ)
// 00444477: FLD ST0
// 00444479: FMUL double ptr [0x00619555]
//   XREF to: 00619555 (READ)
// 0044447f: FLD float ptr [EBX + 0x242c]
// 00444485: FXCH
// 00444487: FSUBR ST0,ST1
// 00444489: LEA EDX,[EBX + 0x2428]
// 0044448f: FSTP ST1
// 00444491: FSTP float ptr [EBX + 0x242c]
// 00444497: FLD float ptr [EDX]
// 00444499: FMUL ST1
// 0044449b: FSTP float ptr [EBP + 0x42]
//   XREF to: Stack[-0x48] (WRITE)
// 0044449e: FLD float ptr [EDX + 0x4]
// 004444a1: FMUL ST1
// 004444a3: LEA EAX,[EBX + 0x241c]
// 004444a9: FSTP float ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (WRITE)
// 004444ac: FMUL float ptr [EDX + 0x8]
// 004444af: LEA ESI,[EBX + 0x23ac]
// 004444b5: FLD float ptr [EBP + 0x42]
//   XREF to: Stack[-0x48] (READ)
// 004444b8: FXCH
// 004444ba: FSTP float ptr [EBP + 0x4a]
//   XREF to: Stack[-0x40] (WRITE)
// 004444bd: FADD float ptr [EAX]
// 004444bf: FLD float ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (READ)
// 004444c2: FXCH
// 004444c4: FSTP float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (WRITE)
// 004444c7: FADD float ptr [EAX + 0x4]
// 004444ca: FLD float ptr [EBP + 0x4a]
//   XREF to: Stack[-0x40] (READ)
// 004444cd: FXCH
// 004444cf: FSTP float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (WRITE)
// 004444d2: FADD float ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 004444d5: FLD float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (READ)
// 004444d8: FXCH
// 004444da: FSTP float ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (WRITE)
// 004444dd: FADD float ptr [ESI]
// 004444df: FLD float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (READ)
// 004444e2: FXCH
// 004444e4: FSTP float ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (WRITE)
// 004444e7: FADD float ptr [ESI + 0x4]
// 004444ea: FLD float ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (READ)
// 004444ed: FXCH
// 004444ef: FSTP float ptr [EBP + 0x22]
//   XREF to: Stack[-0x68] (WRITE)
// 004444f2: FADD float ptr [ESI + 0x8]
// 004444f5: FSTP float ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (WRITE)
// 004444f8: MOV dword ptr [EAX + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 004444ff: MOV EDX,dword ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 00444502: MOV dword ptr [EAX + 0x4],EDX
// 00444505: MOV EDX,dword ptr [EAX + 0x4]
// 00444508: MOV dword ptr [EAX],EDX
// 0044450a: MOV dword ptr [ESI + 0x8],0x0
// 00444511: LEA EAX,[EBP + 0x1e]
//   XREF to: Stack[-0x6c] (DATA)
// 00444514: FLD float ptr [ESI + 0x8]
// 00444517: PUSH EAX
// 00444518: FST float ptr [ESI + 0x4]
// 0044451b: PUSH EBX
// 0044451c: FSTP float ptr [ESI]
// 0044451e: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 00444523: ADD ESP,0x8
// 00444526: PUSH EBX
//   Label: LAB_00444526
// 00444527: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 0044452c: ADD ESP,0x4
// 0044452f: LEA EAX,[EBX + 0x158]
// 00444535: PUSH EAX
// 00444536: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 0044453b: ADD ESP,0x4
// 0044453e: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00444544: PUSH EBX
// 00444545: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 0044454a: ADD ESP,0x8
// 0044454d: LEA ESP,[EBP + 0x7a]
//   Label: LAB_0044454d
//   XREF to: Stack[-0x10] (DATA)
// 00444550: POP EBP
// 00444551: POP EDI
// 00444552: POP ESI
// 00444553: POP EBX
// 00444554: RET
// 00444555: LEA EAX,[EBP + 0x6e]
//   Label: LAB_00444555
//   XREF to: Stack[-0x1c] (DATA)
// 00444558: PUSH EAX
// 00444559: PUSH ESI
// 0044455a: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 0044455f: ADD ESP,0x8
// 00444562: PUSH EAX
// 00444563: PUSH EBX
// 00444564: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 00444569: ADD ESP,0x8
// 0044456c: JMP 0x00444369
//   XREF to: 00444369 (UNCONDITIONAL_JUMP)
// 00444571: PUSH 0x1
//   Label: LAB_00444571
// 00444573: PUSH 0x0
// 00444575: PUSH ESI
// 00444576: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0044457b: ADD ESP,0xc
// 0044457e: PUSH EBX
// 0044457f: PUSH 0x6194ea
//   XREF to: 006194ea (DATA)
// 00444584: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 0044458a: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 0044458b: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00444590: JMP 0x004443f0
//   XREF to: 004443f0 (UNCONDITIONAL_JUMP)
// 00444595: JBE 0x004443e0
//   Label: LAB_00444595
//   XREF to: 004443e0 (CONDITIONAL_JUMP)
// 0044459b: CMP EAX,0x3
// 0044459e: JZ 0x00444571
//   XREF to: 00444571 (CONDITIONAL_JUMP)
// 004445a0: PUSH 0x1
//   Label: LAB_004445a0
// 004445a2: PUSH 0x0
// 004445a4: JMP 0x004443e4
//   XREF to: 004443e4 (UNCONDITIONAL_JUMP)
// 004445a9: LEA EAX,[EBP + -0x36]
//   Label: caseD_2
//   XREF to: Stack[-0xc0] (DATA)
// 004445ac: PUSH EAX
// 004445ad: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 004445b2: ADD ESP,0x4
// 004445b5: PUSH 0x41700000
// 004445ba: PUSH 0x40e00000
// 004445bf: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004445c4: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004445c7: MOV dword ptr [EBP + -0x2],EBX
//   XREF to: Stack[-0x8c] (WRITE)
// 004445ca: MOV dword ptr [EBP + 0x2],EBX
//   XREF to: Stack[-0x88] (WRITE)
// 004445cd: ADD ESP,0x8
// 004445d0: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004445d3: LEA EAX,[EBP + -0x36]
//   XREF to: Stack[-0xc0] (DATA)
// 004445d6: FSTP float ptr [EBP + -0x32]
//   XREF to: Stack[-0xbc] (WRITE)
// 004445d9: MOV EDX,dword ptr [EBX + 0xbec0]
// 004445df: PUSH EAX
// 004445e0: LEA EAX,[EDX*0x4 + 0x0]
// 004445e7: SUB EAX,EDX
// 004445e9: MOV EDX,EAX
// 004445eb: SHL EDX,0x4
// 004445ee: LEA EAX,[EBX + 0xfd8]
// 004445f4: ADD EAX,EDX
// 004445f6: PUSH 0x3f333333
// 004445fb: PUSH EAX
// 004445fc: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00444601: LEA EAX,[EBP + 0x4e]
//   XREF to: Stack[-0x3c] (DATA)
// 00444604: PUSH EAX
// 00444605: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0044460a: ADD ESP,0xc
// 0044460d: PUSH EAX
// 0044460e: LEA EAX,[EBP + 0x5a]
//   XREF to: Stack[-0x30] (DATA)
// 00444611: PUSH EAX
// 00444612: PUSH EBX
// 00444613: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00444618: ADD ESP,0xc
// 0044461b: PUSH EAX
// 0044461c: PUSH EBX
// 0044461d: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 00444622: ADD ESP,0x10
// 00444625: JMP 0x0044440b
//   XREF to: 0044440b (UNCONDITIONAL_JUMP)
// 0044462a: CMP dword ptr [EBX + 0xbe28],0x0
//   Label: caseD_5
// 00444631: JNZ 0x0044440b
//   XREF to: 0044440b (CONDITIONAL_JUMP)
// 00444637: CMP dword ptr [EBX + 0xdc],0x0
// 0044463e: JNZ 0x0044440b
//   XREF to: 0044440b (CONDITIONAL_JUMP)
// 00444644: PUSH EAX
// 00444645: LEA EAX,[EBP + 0x12]
//   Label: LAB_00444645
//   XREF to: Stack[-0x78] (DATA)
// 00444648: PUSH EAX
// 00444649: PUSH ESI
// 0044464a: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 0044464f: ADD ESP,0xc
// 00444652: PUSH EAX
// 00444653: LEA EAX,[EBP + 0x6]
//   XREF to: Stack[-0x84] (DATA)
// 00444656: PUSH EAX
// 00444657: PUSH EBX
// 00444658: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0044465d: ADD ESP,0xc
// 00444660: PUSH 0x0
// 00444662: LEA EAX,[EBP + 0x6]
//   XREF to: Stack[-0x84] (DATA)
// 00444665: PUSH EAX
// 00444666: MOV ESI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 0044466c: PUSH ESI
//   XREF to: 02d83364 (DATA)
// 0044466d: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 00444672: ADD ESP,0xc
// 00444675: MOV dword ptr [EBX + 0xbe28],0x1
// 0044467f: JMP 0x0044440b
//   XREF to: 0044440b (UNCONDITIONAL_JUMP)
// 00444684: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_0
//   XREF to: Stack[0x8] (READ)
// 0044468a: PUSH EBX
// 0044468b: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 00444690: ADD ESP,0x8
// 00444693: TEST EAX,EAX
// 00444695: JZ 0x004446a9
//   XREF to: 004446a9 (CONDITIONAL_JUMP)
// 00444697: PUSH 0x1
// 00444699: PUSH 0x1
// 0044469b: PUSH ESI
// 0044469c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004446a1: ADD ESP,0xc
// 004446a4: JMP 0x0044440b
//   XREF to: 0044440b (UNCONDITIONAL_JUMP)
// 004446a9: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004446a9
//   XREF to: Stack[0x8] (READ)
// 004446af: MOV EAX,dword ptr [EBX + 0x154]
// 004446b5: PUSH EBX
// 004446b6: CALL dword ptr [EAX + 0x158]
// 004446bc: MOV ESI,dword ptr [EBX + 0xbe3c]
// 004446c2: ADD ESP,0x8
// 004446c5: TEST ESI,ESI
// 004446c7: JZ 0x0044440b
//   XREF to: 0044440b (CONDITIONAL_JUMP)
// 004446cd: MOV EDI,dword ptr [EBX + 0xbec4]
// 004446d3: PUSH EDI
// 004446d4: MOV EAX,[0x00681ef8]
//   XREF to: 00681ef8 (READ)
//   XREF to: 03f6af64 (PARAM)
// 004446d9: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 004446da: CALL core_sound.cpp_CSound_isSfxPlaying_FUN_005b3b80
//   XREF to: 005b3b80 (UNCONDITIONAL_CALL)
// 004446df: ADD ESP,0x8
// 004446e2: TEST EAX,EAX
// 004446e4: JNZ 0x004446fe
//   XREF to: 004446fe (CONDITIONAL_JUMP)
// 004446e6: PUSH 0x619514
//   XREF to: 00619514 (DATA)
// 004446eb: MOV EAX,dword ptr [EBX + 0x154]
// 004446f1: PUSH EBX
// 004446f2: CALL dword ptr [EAX + 0x24]
// 004446f5: ADD ESP,0x8
// 004446f8: MOV dword ptr [EBX + 0xbec4],EAX
// 004446fe: PUSH 0x1
//   Label: LAB_004446fe
// 00444700: PUSH 0x1
// 00444702: LEA EAX,[EBX + 0x158]
// 00444708: PUSH EAX
// 00444709: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0044470e: ADD ESP,0xc
// 00444711: JMP 0x0044440b
//   XREF to: 0044440b (UNCONDITIONAL_JUMP)
// 00444716: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_1
//   XREF to: Stack[0x8] (READ)
// 0044471c: MOV EAX,dword ptr [EBX + 0x154]
// 00444722: PUSH EBX
// 00444723: CALL dword ptr [EAX + 0x158]
// 00444729: MOV EDI,dword ptr [EBX + 0xbe3c]
// 0044472f: ADD ESP,0x8
// 00444732: TEST EDI,EDI
// 00444734: JNZ 0x0044475e
//   XREF to: 0044475e (CONDITIONAL_JUMP)
// 00444736: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0044473c: PUSH EBX
// 0044473d: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 00444742: ADD ESP,0x8
// 00444745: TEST EAX,EAX
// 00444747: JNZ 0x0044440b
//   XREF to: 0044440b (CONDITIONAL_JUMP)
// 0044474d: PUSH 0x1
// 0044474f: PUSH EDI
// 00444750: PUSH ESI
// 00444751: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00444756: ADD ESP,0xc
// 00444759: JMP 0x0044440b
//   XREF to: 0044440b (UNCONDITIONAL_JUMP)
// 0044475e: MOV EAX,[0x0065c098]
//   Label: LAB_0044475e
//   XREF to: 0065c098 (READ)
// 00444763: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00444766: LEA EAX,[EBX + 0x23ac]
// 0044476c: MOV dword ptr [EAX + 0x8],0x0
// 00444773: MOV EDX,dword ptr [EAX + 0x8]
// 00444776: MOV dword ptr [EAX + 0x4],EDX
// 00444779: MOV EDX,dword ptr [EAX + 0x4]
// 0044477c: MOV dword ptr [EAX],EDX
// 0044477e: XOR EAX,EAX
// 00444780: MOV dword ptr [EBP + 0x36],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00444783: MOV dword ptr [EBP + 0x3a],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00444786: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 00444789: PUSH 0x3e32b8c2
// 0044478e: MOV dword ptr [EBP + 0x3e],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00444791: LEA EAX,[EBP + 0x36]
//   XREF to: Stack[-0x54] (DATA)
// 00444794: PUSH 0x3f000000
// 00444799: PUSH EAX
// 0044479a: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004447a0: PUSH EAX
// 004447a1: MOV EDX,dword ptr [EAX + 0x154]
// 004447a7: CALL dword ptr [EDX + 0xbc]
// 004447ad: ADD ESP,0x4
// 004447b0: PUSH EAX
// 004447b1: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004447b7: ADD EAX,0x20
// 004447ba: PUSH EAX
// 004447bb: PUSH EBX
// 004447bc: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 004447c1: ADD ESP,0x18
// 004447c4: TEST EAX,EAX
// 004447c6: JL 0x004447fd
//   XREF to: 004447fd (CONDITIONAL_JUMP)
// 004447c8: JLE 0x0044440b
//   XREF to: 0044440b (CONDITIONAL_JUMP)
// 004447ce: FLD float ptr [EBX + 0xbe38]
// 004447d4: FLDZ
// 004447d6: FCOMPP
// 004447d8: FNSTSW AX
// 004447da: SAHF
// 004447db: JC 0x0044440b
//   XREF to: 0044440b (CONDITIONAL_JUMP)
// 004447e1: PUSH 0x1
// 004447e3: PUSH 0x2
// 004447e5: PUSH ESI
// 004447e6: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004447eb: ADD ESP,0xc
// 004447ee: MOV dword ptr [EBX + 0xbe38],0x40200000
// 004447f8: JMP 0x0044440b
//   XREF to: 0044440b (UNCONDITIONAL_JUMP)
// 004447fd: PUSH EBX
//   Label: LAB_004447fd
// 004447fe: PUSH 0x61951d
//   XREF to: 0061951d (DATA)
// 00444803: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 00444809: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 0044480a: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0044480f: ADD ESP,0xc
// 00444812: PUSH 0x1
// 00444814: PUSH 0x0
// 00444816: PUSH ESI
// 00444817: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0044481c: ADD ESP,0xc
// 0044481f: JMP 0x0044440b
//   XREF to: 0044440b (UNCONDITIONAL_JUMP)
// 00444824: CMP EDI,0x5
//   Label: LAB_00444824
// 00444827: JA 0x0044440b
//   XREF to: 0044440b (CONDITIONAL_JUMP)
// 0044482d: JMP dword ptr [EDI*0x4 + 0x4442f4]
//   Label: switchD
//   XREF to: 00444684 (COMPUTED_JUMP)
//   XREF to: 00444716 (COMPUTED_JUMP)
//   XREF to: 004445a9 (COMPUTED_JUMP)
//   XREF to: 0044440b (COMPUTED_JUMP)
//   XREF to: 0044462a (COMPUTED_JUMP)
//   XREF to: 004442f4 (DATA)
