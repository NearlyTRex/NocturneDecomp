// Name: core_batman.cpp_FUN_004179a0
// Address: 004179a0
// Address Range: [[004179a0, 00417bac]]
// Convention: unknown
// Signature: undefined core_batman.cpp_FUN_004179a0()
// Globals:
//   undefined4 s_batman-die.wav_0061597d
//   TerminatedCString s_batman_hurt_wav_0061598c
//   undefined4 DAT_0061599d
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CFireEffect g_CFireEffectInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_batman.cpp_FUN_00417660
//   core_charactr.cpp_CCharacter_FUN_0042b5b0
//   core_enemy.cpp_FUN_004a9f10
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_batman.cpp_FUN_004179a0(undefined4 param_1, undefined4
   param_2) */

void core_batman_cpp_FUN_004179a0(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  CVector3f *input_local_point;
  int iVar2;
  CDemonActor *pCVar3;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CVector3f CStack_20;
  CCharacter *pCStack_14;
  
  sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  if (*(int *)((int)in_stack_00000008 + 0x28) == 7) {
    iVar2 = 0;
    *(float *)((int)in_stack_00000008 + 4) =
         *(float *)((int)in_stack_00000008 + 4) * (float)_DAT_0061599d;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base_actor,(CVector3f *)&stack0xffffffd8,
               (CVector3f *)((int)in_stack_00000008 + 0x1c));
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar2 < 5);
  }
  if (*(int *)((int)in_stack_00000008 + 0x30) == 0x6c) {
    input_local_point =
         core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                   (&in_stack_00000004->model,(CVector3f *)&stack0xffffffd0,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base_actor,&CStack_20,input_local_point);
    core_charactr_cpp_CCharacter_FUN_0042b5b0(in_stack_00000004);
  }
  core_batman_cpp_FUN_00417660();
  fVar1 = in_stack_00000004->hit_points - *(float *)((int)in_stack_00000008 + 4);
  this_ptr = &in_stack_00000004->model;
  in_stack_00000004->hit_points = fVar1;
  if (fVar1 <= 0.0) {
    in_stack_00000004->hit_points = 0.0;
    iVar2 = core_motion_cpp_CMotionController_FUN_0052dab0(&this_ptr->motion_controller);
    if ((*(int *)(iVar2 + 0x24) != 7) && (*(int *)(iVar2 + 0x24) != 8)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,7,1);
      sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
      pCVar3 = (CDemonActor *)
               (*((in_stack_00000004->base_actor).vtable)->playSound)
                         (&in_stack_00000004->base_actor,"4@batman-die.wav" + 2);
      in_stack_00000004[1].base_actor.next_actor = pCVar3;
      pCStack_14 = in_stack_00000004;
      CStack_20.z = 6.0136e-39;
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
  }
  else {
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,4,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,5,1);
    }
    if (iVar2 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,6,1);
    }
    iVar2 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
    if (iVar2 == 0) {
      pCVar3 = (CDemonActor *)
               (*((in_stack_00000004->base_actor).vtable)->playSound)
                         (&in_stack_00000004->base_actor,"batman-hurt?.wav");
      in_stack_00000004[1].base_actor.next_actor = pCVar3;
      CStack_20.z = in_stack_00000008;
      CStack_20.y = (float)in_stack_00000004;
      CStack_20.x = 6.013658e-39;
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
  }
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 004179a0: PUSH EBX
//   Label: core_batman.cpp_FUN_004179a0
// 004179a1: PUSH ESI
// 004179a2: PUSH EDI
// 004179a3: PUSH EBP
// 004179a4: SUB ESP,0x2c
// 004179a7: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 004179ab: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 004179af: MOV EDX,dword ptr [ESI + 0xbf74]
// 004179b5: PUSH EDX
// 004179b6: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004179bb: ADD ESP,0x4
// 004179be: MOV ECX,dword ptr [ESI + 0xbf6c]
// 004179c4: PUSH ECX
// 004179c5: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004179ca: MOV EBX,dword ptr [EDI + 0x28]
// 004179cd: ADD ESP,0x4
// 004179d0: CMP EBX,0x7
// 004179d3: JZ 0x00417ac7
//   XREF to: 00417ac7 (CONDITIONAL_JUMP)
// 004179d9: LEA EAX,[EAX]
// 004179df: NOP
// 004179e0: CMP dword ptr [EDI + 0x30],0x6c
//   Label: LAB_004179e0
// 004179e4: JNZ 0x00417a24
//   XREF to: 00417a24 (CONDITIONAL_JUMP)
// 004179e6: PUSH 0x0
// 004179e8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3c] (DATA)
// 004179ec: PUSH EAX
// 004179ed: LEA EAX,[ESI + 0x158]
// 004179f3: PUSH EAX
// 004179f4: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004179f9: ADD ESP,0xc
// 004179fc: PUSH EAX
// 004179fd: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x24] (DATA)
// 00417a01: PUSH EAX
// 00417a02: PUSH ESI
// 00417a03: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00417a08: ADD ESP,0xc
// 00417a0b: PUSH 0x0
// 00417a0d: PUSH 0x41200000
// 00417a12: PUSH 0x0
// 00417a14: PUSH 0x0
// 00417a16: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x24] (DATA)
// 00417a1a: PUSH EAX
// 00417a1b: PUSH ESI
// 00417a1c: CALL core_charactr.cpp_CCharacter_FUN_0042b5b0
//   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)
// 00417a21: ADD ESP,0x18
// 00417a24: PUSH EDI
//   Label: LAB_00417a24
// 00417a25: PUSH ESI
// 00417a26: CALL core_batman.cpp_FUN_00417660
//   XREF to: 00417660 (UNCONDITIONAL_CALL)
// 00417a2b: FLD float ptr [EDI + 0x4]
// 00417a2e: ADD ESP,0x8
// 00417a31: FSUBR float ptr [ESI + 0x243c]
// 00417a37: LEA EBX,[ESI + 0x158]
// 00417a3d: FST float ptr [ESI + 0x243c]
// 00417a43: FLDZ
// 00417a45: FCOMPP
// 00417a47: FNSTSW AX
// 00417a49: SAHF
// 00417a4a: JNC 0x00417b19
//   XREF to: 00417b19 (CONDITIONAL_JUMP)
// 00417a50: PUSH 0x2
// 00417a52: PUSH 0x0
// 00417a54: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 00417a59: ADD ESP,0x8
// 00417a5c: MOV EBP,EAX
// 00417a5e: TEST EAX,EAX
// 00417a60: JNZ 0x00417a6f
//   XREF to: 00417a6f (CONDITIONAL_JUMP)
// 00417a62: PUSH 0x1
// 00417a64: PUSH 0x4
// 00417a66: PUSH EBX
// 00417a67: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00417a6c: ADD ESP,0xc
// 00417a6f: CMP EBP,0x1
//   Label: LAB_00417a6f
// 00417a72: JNZ 0x00417a86
//   XREF to: 00417a86 (CONDITIONAL_JUMP)
// 00417a74: PUSH EBP
// 00417a75: PUSH 0x5
// 00417a77: LEA EAX,[ESI + 0x158]
// 00417a7d: PUSH EAX
// 00417a7e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00417a83: ADD ESP,0xc
// 00417a86: CMP EBP,0x2
//   Label: LAB_00417a86
// 00417a89: JNZ 0x00417a9e
//   XREF to: 00417a9e (CONDITIONAL_JUMP)
// 00417a8b: PUSH 0x1
// 00417a8d: PUSH 0x6
// 00417a8f: LEA EAX,[ESI + 0x158]
// 00417a95: PUSH EAX
// 00417a96: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00417a9b: ADD ESP,0xc
// 00417a9e: MOV ECX,dword ptr [ESI + 0xbf70]
//   Label: LAB_00417a9e
// 00417aa4: PUSH ECX
// 00417aa5: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00417aaa: ADD ESP,0x4
// 00417aad: TEST EAX,EAX
// 00417aaf: JZ 0x00417b83
//   XREF to: 00417b83 (CONDITIONAL_JUMP)
// 00417ab5: PUSH EDI
//   Label: LAB_00417ab5
// 00417ab6: PUSH ESI
// 00417ab7: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00417abc: ADD ESP,0x8
// 00417abf: ADD ESP,0x2c
// 00417ac2: POP EBP
// 00417ac3: POP EDI
// 00417ac4: POP ESI
// 00417ac5: POP EBX
// 00417ac6: RET
// 00417ac7: FLD float ptr [EDI + 0x4]
//   Label: LAB_00417ac7
// 00417aca: LEA EAX,[EDI + 0x1c]
// 00417acd: FLD ST0
// 00417acf: FMUL double ptr [0x0061599d]
//   XREF to: 0061599d (READ)
// 00417ad5: PUSH EAX
// 00417ad6: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x30] (DATA)
// 00417ada: XOR EBX,EBX
// 00417adc: PUSH EAX
// 00417add: FSTP ST1
// 00417adf: PUSH ESI
// 00417ae0: FSTP float ptr [EDI + 0x4]
// 00417ae3: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00417ae8: ADD ESP,0xc
// 00417aeb: MOV EBP,0x4000
// 00417af0: PUSH 0xffff
//   Label: LAB_00417af0
// 00417af5: PUSH 0x0
// 00417af7: PUSH EBP
// 00417af8: PUSH EBP
// 00417af9: PUSH 0x0
// 00417afb: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x30] (DATA)
// 00417aff: PUSH EAX
// 00417b00: MOV EAX,[0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 00417b05: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 00417b06: INC EBX
// 00417b07: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 00417b0c: ADD ESP,0x1c
// 00417b0f: CMP EBX,0x5
// 00417b12: JL 0x00417af0
//   XREF to: 00417af0 (CONDITIONAL_JUMP)
// 00417b14: JMP 0x004179e0
//   XREF to: 004179e0 (UNCONDITIONAL_JUMP)
// 00417b19: PUSH EBX
//   Label: LAB_00417b19
// 00417b1a: MOV dword ptr [ESI + 0x243c],0x0
// 00417b24: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00417b29: MOV EAX,dword ptr [EAX + 0x24]
// 00417b2c: ADD ESP,0x4
// 00417b2f: CMP EAX,0x7
// 00417b32: JZ 0x00417ab5
//   XREF to: 00417ab5 (CONDITIONAL_JUMP)
// 00417b34: CMP EAX,0x8
// 00417b37: JZ 0x00417ab5
//   XREF to: 00417ab5 (CONDITIONAL_JUMP)
// 00417b3d: PUSH 0x1
// 00417b3f: PUSH 0x7
// 00417b41: PUSH EBX
// 00417b42: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00417b47: ADD ESP,0xc
// 00417b4a: MOV EBX,dword ptr [ESI + 0xbf70]
// 00417b50: PUSH EBX
// 00417b51: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 00417b56: ADD ESP,0x4
// 00417b59: PUSH 0x61597d
//   XREF to: 0061597d (DATA)
// 00417b5e: MOV EAX,dword ptr [ESI + 0x154]
// 00417b64: PUSH ESI
// 00417b65: CALL dword ptr [EAX + 0x24]
// 00417b68: ADD ESP,0x8
// 00417b6b: MOV dword ptr [ESI + 0xbf70],EAX
// 00417b71: PUSH EDI
// 00417b72: PUSH ESI
// 00417b73: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00417b78: ADD ESP,0x8
// 00417b7b: ADD ESP,0x2c
// 00417b7e: POP EBP
// 00417b7f: POP EDI
// 00417b80: POP ESI
// 00417b81: POP EBX
// 00417b82: RET
// 00417b83: PUSH 0x61598c
//   Label: LAB_00417b83
//   XREF to: 0061598c (DATA)
// 00417b88: MOV EAX,dword ptr [ESI + 0x154]
// 00417b8e: PUSH ESI
// 00417b8f: CALL dword ptr [EAX + 0x24]
// 00417b92: ADD ESP,0x8
// 00417b95: MOV dword ptr [ESI + 0xbf70],EAX
// 00417b9b: PUSH EDI
// 00417b9c: PUSH ESI
// 00417b9d: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00417ba2: ADD ESP,0x8
// 00417ba5: ADD ESP,0x2c
// 00417ba8: POP EBP
// 00417ba9: POP EDI
// 00417baa: POP ESI
// 00417bab: POP EBX
// 00417bac: RET
